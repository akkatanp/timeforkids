<?php
    global $user;
    flog_it("page--assessment.tpl.php...");
    
    if ($_SERVER['HTTP_HOST'] == "www.timeforkids.com") {
        $wesURL = 'https://secure.customersvc.com/servlet/Show?WESPAGE=am/tablet/tk/app/login.jsp&account=';
    } else {
        $wesURL = 'https://wesqa.customersvc.com/servlet/Show?WESPAGE=am/tablet/tk/app/login.jsp&account=';
    }
    flog_it("wesURL=".$wesURL);
    

    // Check for no LUCIE Assessment access 
    $token = "";
    if (array_key_exists("CGI-token", $_COOKIE)) {
        $token = $_COOKIE['CGI-token'];
    }
    flog_it("token=".$token);
    
    //flog_it($_COOKIE['Assessment-access'].", ".$token);
    if ($_COOKIE['Assessment-access'] === "no" && $token != "") {
        flog_it("No Assessment access. Check with LUCIE again...");
        
        flog_it("token=".$token);
        $domain = variable_get('lucie_callback_domain', 'qa-lucie.timeinc.com');
        $url = 'https://'. $domain. '/webservices/entitlements?CGI-App-Id=com.timeinc.tk.web';
        $response = drupal_http_request($url, array('headers' => array('Content-Type'=>'application/json', 'CGI-token' => $token),
              'method'=> 'GET'
        ));
        //flog_it($response);

        // Decode the JSON data and pass to the call to get the user information
        $dataResponse = drupal_json_decode($response->data);
        //flog_it($dataResponse);

        // Check for TFK Assessment access
        // Get the LUCIE account number
        $tcsAccountNumber = $dataResponse['issues'][0]['tcsAccountNumber'];
        flog_it("url=".$url);
        flog_it("tcsAccountNumber=".$tcsAccountNumber);
        
        if ($tcsAccountNumber === "COMP") {
            flog_it("Has COMP access...");
            tfk_assessment_access_set_cookie("yes");
        } elseif ($tcsAccountNumber === null) {
            flog_it("Not a LUCIE member!!!");
            drupal_goto("no-assessment");
        } else {
            $appIds = $dataResponse['tiersInfo']['availableAppIds'];
            flog_it("apIds:");
            flog_it($apIds);
            $appIdArr = split(',', $appIds);
            $found = 0;
            foreach ($appIdArr as $key=>$value) {
                if ($value == "com.timeinc.tfk.apple") {
                    //flog_it("Found com.timeinc.tfk.apple...");
                    $found = 1;
                    break;
                }
            }

            // Process results
            if ($found && is_numeric($tcsAccountNumber)) {
                flog_it("User has Assessment access.");
                tfk_assessment_access_set_cookie("yes");
            } else {
                flog_it("No Assessment Access. Goto TCS page...");
                tfk_assessment_access_set_cookie("no");
                // Goto the TCS sign-up page
                $url = $wesURL.$tcsAccountNumber;
                drupal_goto($url);
                //return theme("tfk_goto_TCS", array('url' => $url));
            }
        }
    } elseif ($_COOKIE['Assessment-access'] === "no") {
        flog_it("Final: no tcs access");
        //return('<p style="font-family:arial;font-style:normal;font-size:14px;">You do not have access to the TFK Assessment...</p>');
        drupal_goto("no-assessment");   
    }
    
    
    
    // Bring up the Cognero iframe
    flog_it("Has Assessment Access, bring up iframe");
    //return theme('tfk_assessment', array('token' => $token));
    //$url = "https://tfkclassroomapp.timeinc.com/Instructor/SingleSignOn.aspx?authToken=".$token;
    //drupal_goto($url);
    

    
    
    
    //flog_it("tfk-assessment.tpl.php: email=".$user->mail);
    flog_it("CGI-token=".$token);
    
    if ($_SERVER['HTTP_HOST'] == "www.timeforkids.com") {
        $cogneroDomain = "https://tfkclassroomapp.timeinc.com";
        $cogneroURL = "https://tfkclassroomapp.timeinc.com/Instructor/SingleSignOn.aspx?authToken=".$token;
    } else {
        $cogneroDomain = "https://qa-tfkclassroomapp.timeinc.com";
        $cogneroURL = "https://qa-tfkclassroomapp.timeinc.com/Instructor/SingleSignOn.aspx?authToken=".$token;
    }
    flog_it("cogneroDomain=".$cogneroDomain);
    flog_it("cogneroURL=".$cogneroURL);
?>

<script language="javascript" type="text/javascript">
    // http://jandcgroup.com/2011/10/17/dynamic-height-cross-domain-iframe-postmessage-javascript/
    // http://mobilesandbox.timeinc.com/tfk/cognero.html
    // http://tfk:8082/cognero.html

    function receiveSize(e) {
        //console.log("receiveSize: e.origin="+e.origin);
        if (e.origin === "<?php echo $cogneroDomain; ?>") {// for security: set this to the domain of the iframe - use e.uri if you need more specificity
            //console.log("found domain, attempting to resize...");
            var obj = JSON.parse(e.data);
            //console.log("obj.height="+obj.height+", obj.width="+obj.width)
            document.getElementById("tfk_assessment").style.height = obj.height;
            //document.getElementById("tfk_assessment").style.width = obj.width;
            //window.removeEventListener("message", receiveSize, false);
        }
    }
    
    if (window.addEventListener) {
        //console.log("adding non-IE addEventListener...");
        window.addEventListener("message", receiveSize, false);  
    } else {
        //console.log("adding IE addEventListener...");
        window.attachEvent("onmessage", receiveSize);//for ie  
    } 
</script>

<!--<iframe name="tfk_assessment_name" id="tfk_assessment" width="950" height="100" frameBorder="0" scrollbars="no"></iframe>-->
<!--<iframe id="tfk_assessment" width="950" height="100" border="1" scrollbars="no" src="http://tfk:8082/cognero.html"></iframe>-->

<form id="cgi-redirect" action="<?php echo $cogneroURL; ?>" method="post">
</form>

<script language="javascript" type="text/javascript">
    window.onload=function() {
        document.getElementById("cgi-redirect").submit();
    }
</script>