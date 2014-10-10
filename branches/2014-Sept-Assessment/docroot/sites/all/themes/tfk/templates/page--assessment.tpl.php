<?php
    global $user;
    flog_it("page--assessment.tpl.php...");
    
    // Check for LUCIE token 
    $token = "";
    if (array_key_exists("CGI-token", $_COOKIE)) {
        $token = $_COOKIE['CGI-token'];
    }
    
    if ($_SERVER['HTTP_HOST'] == "www.timeforkids.com") {
        $cogneroTokenURL = "https://tfkclassroomapp.timeinc.com/TimeForKids/WebServices/Security.asmx/EncryptAuthToken";
        $cogneroURL = "https://tfkclassroomapp.timeinc.com/TimeForKids/Instructor/SingleSignOn.aspx?authToken=";
        $wesURL = 'https://secure.customersvc.com/servlet/Show?WESPAGE=am/tablet/tk/app/login.jsp&account=';
    } else {
        $cogneroTokenURL = "https://qa-tfkclassroomapp.timeinc.com/TimeForKids/WebServices/Security.asmx/EncryptAuthToken";
        $cogneroURL = "https://qa-tfkclassroomapp.timeinc.com/TimeForKids/Instructor/SingleSignOn.aspx?authToken=";
        $wesURL = 'https://wesqa.customersvc.com/servlet/Show?WESPAGE=am/tablet/tk/app/login.jsp&account=';
    }
    
    flog_it("email=".$user->mail);
    flog_it("token=".$token);
    flog_it("cogneroTokenURL=".$cogneroTokenURL);
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
    
    // Cognero processing
    flog_it("Has Assessment Access, Cognero processing...");
    
    $data = array(
      'authToken' => $token  
    );
    
    $response = drupal_http_request($cogneroTokenURL, array('headers'=>array('Content-Type'=>'application/json', 'charset'=>'utf-8'), 
        'data'=>drupal_json_encode($data), 'method'=>'POST'
    ));
    
    flog_it("Response code=".$response->code);
    
    // Check for Cognero down
    if ($response->code != 200) {
        drupal_goto("cognero-down");
    }
    
    // Bring up Cognero Screen
    $dataResponse = drupal_json_decode($response->data);
    $encAuthToken = $dataResponse['d'][encAuthToken];
    flog_it("encAuthToken=".$encAuthToken);
    drupal_goto($cogneroURL.$encAuthToken);
?>