<?php
    global $user;
    //flog_it("page--assessment.tpl.php...");
 
    // Check for LUCIE token 
    $token = "";
    if ( isset($_COOKIE) && array_key_exists("CGI-token", $_COOKIE)) {
        $token = $_COOKIE['CGI-token'];
    }
    
    // Check for Assessment access
    if ((isset($_COOKIE) && $_COOKIE['Assessment-access'] == "no") || $token == "") {
        //flog_it("Final: No Assessment access");
        drupal_goto("no-assessment");   
    }
    
    
    // Continue processing...
    if ($_SERVER['HTTP_HOST'] == "www.timeforkids.com") {
        $cogneroTokenURL = "https://tfkclassroomapp.timeinc.com/TimeForKids/WebServices/Security.asmx/EncryptAuthToken";
        $cogneroURL = "https://tfkclassroomapp.timeinc.com/TimeForKids/Instructor/SingleSignOn.aspx?authToken=";
    } else {
        $cogneroTokenURL = "https://qa-tfkclassroomapp.timeinc.com/TimeForKids/WebServices/Security.asmx/EncryptAuthToken";
        $cogneroURL = "https://qa-tfkclassroomapp.timeinc.com/TimeForKids/Instructor/SingleSignOn.aspx?authToken=";
    }

    //flog_it("email=".$user->mail);
    //flog_it("token=".$token);
    //flog_it("cogneroTokenURL=".$cogneroTokenURL);
    //flog_it("cogneroURL=".$cogneroURL);
    //flog_it("Cookie: Assessment-access=".$_COOKIE['Assessment-access']);
    //flog_it(isset($_COOKIE));
    //flog_it("Has Assessment Access, Cognero processing...");
    
    $data = array(
      'authToken' => $token  
    );
    
    watchdog('page--assessment.tp.php', 'COGNERO: user name=%name, user email=%email, CGI-token=%token', array('%name' => $user->name, '%email' => $user->mail, '%token' => $token));
    $response = drupal_http_request($cogneroTokenURL, array('headers'=>array('Content-Type'=>'application/json', 'charset'=>'utf-8'), 
        'data'=>drupal_json_encode($data), 'method'=>'POST'
    ));
    
    //flog_it("Response code=".$response->code);
    
    // Check for drupal_http_request error
    if ($response->code == 0) {
        for ($i=1; $i<4; $i++) {
            watchdog('page--assessment.tp.php', 'TRY: count=%count, cognero bad return code=%code, user name=%name, user email=%email, CGI-token=%token', array('%count' => $i, '%code' => $response->code, '%name' => $user->name, '%email' => $user->mail, '%token' => $token));
            $response = drupal_http_request($cogneroTokenURL, array('headers'=>array('Content-Type'=>'application/json', 'charset'=>'utf-8'), 
                'data'=>drupal_json_encode($data), 'method'=>'POST'
            ));
            if ($response->code == 200) { break; }
            sleep(1);
        }
    }
    
    // Check for Cognero down
    if ($response->code != 200) {
        //flog_it("response->code=".$response->code);
        watchdog('page--assessment.tp.php', 'cognero bad return code=%code, user name=%name, user email=%email, CGI-token=%token', array('%code' => $response->code, '%name' => $user->name, '%email' => $user->mail, '%token' => $token));
        drupal_goto("cognero-down");
    }
    //watchdog('page--assessment.tp.php', 'cognero good return code=%code, user name=%name, user email=%email, CGI-token=%token', array('%code' => $response->code, '%name' => $user->name, '%email' => $user->mail, '%token' => $token));
    
    // Bring up Cognero Screen
    $dataResponse = drupal_json_decode($response->data);
    
    //flog_it($dataResponse);
    $encAuthToken = $dataResponse['d']['encAuthToken'];
    //flog_it("encAuthToken=".$encAuthToken);
    drupal_goto($cogneroURL.$encAuthToken);
?>