<?php
    global $user;
    flog_it("page--assessment.tpl.php...");
    
    // Check for LUCIE token 
    $token = "";
    if (array_key_exists("CGI-token", $_COOKIE)) {
        $token = $_COOKIE['CGI-token'];
    }
    
    if ($_SERVER['HTTP_HOST'] != "www.timeforkids.com") {
        $cogneroURL = "https://tfkclassroomapp.timeinc.com/Instructor/SingleSignOn.aspx?authToken=";
        $wesURL = 'https://secure.customersvc.com/servlet/Show?WESPAGE=am/tablet/tk/app/login.jsp&account=';
    } else {
        $cogneroURL = "https://qa-tfkclassroomapp.timeinc.com/Instructor/SingleSignOn.aspx?authToken=";
        $wesURL = 'https://wesqa.customersvc.com/servlet/Show?WESPAGE=am/tablet/tk/app/login.jsp&account=';
    }
    
    flog_it("email=".$user->mail);
    flog_it("token=".$token);
    flog_it("cogneroURL=".$cogneroURL);
    flog_it("wesURL=".$wesURL);

    if ($_COOKIE['Assessment-access'] === "no" && $token != "") {
        flog_it("No Assessment access. Check with LUCIE again...");
        
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
            }
        }
    } elseif ($_COOKIE['Assessment-access'] === "no") {
        flog_it("Final: No Assessment access");
        drupal_goto("no-assessment");   
    }
    
    // Bring up the Cognero iframe
    flog_it("Has Assessment Access, going to Cognero...");
    
    // Encrypt the LUCIE TOKEN
    /*
    $fp=fopen("./id_rsa-cert.pem","r");
    $pub_key=fread($fp,8192);
    fclose($fp);
    
    $openssl_get_return=openssl_pkey_get_public($pub_key);
    //flog_it("openssl_get_return=".$openssl_get_return);
    
    $openssl_return=openssl_public_encrypt($token, $crypttext, $pub_key);
    //flog_it("openssl_return=".$openssl_return);
    //flog_it("crypttext=".$crypttext);

    
    // Decrypt the Encrypted LUCIE TOKEN
    $fp=fopen("./id_rsa","r");
    $private_key=fread($fp,8192);
    fclose($fp);
    //flog_it("private_key=".$private_key);
    $openssl_private_decrypt_return=openssl_private_decrypt($crypttext, $decrypttext, $private_key);
    //flog_it($openssl_private_decrypt_return);
    flog_it("decrypttext=".$decrypttext);
     * 
     */
    
    //drupal_goto($cogneroURL.$token_encrypt);
    drupal_goto($cogneroURL.$token);
?>

<!--
<form id="cgi-redirect" action="<?php echo $cogneroURL; ?>" method="post">
</form>

<script language="javascript" type="text/javascript">
window.onload=function() {
    document.getElementById("cgi-redirect").submit();
}
</script>
-->