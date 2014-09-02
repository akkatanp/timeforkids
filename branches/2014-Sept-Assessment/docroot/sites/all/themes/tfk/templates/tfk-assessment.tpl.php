<?php
    global $user;
    
    flog_it("tfk-assessment.tpl.php: email=".$user->mail);
    
    // Test URL: 
    // http://mobilesandbox.timeinc.com
    // http://mobilesandbox.timeinc.com/tfk/cognero.html
    if ($_SERVER['HTTP_HOST'] == "www.timeforkids.com") {
        $cogneroDomain = "https://qa-tfkclassroomapp.timeinc.com";
        $cogneroURL = "https://qa-tfkclassroomapp.timeinc.com/Instructor/SingleSignOn.aspx?authToken=";
    } else {
        $cogneroDomain = "https://qa-tfkclassroomapp.timeinc.com";
        $cogneroURL = "https://qa-tfkclassroomapp.timeinc.com/Instructor/SingleSignOn.aspx?authToken=";
    }
    
    $token = $_COOKIE['CGI-token'];
    flog_it("CGI-token=".$token);
    
?>

<script language="javascript">
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

<iframe id="tfk_assessment" width="950" height="100" frameBorder="0" scrollbars="no" src="<?php echo $cogneroURL.$token; ?>"></iframe>
<!--<iframe id="tfk_assessment" width="950" height="100" border="1" scrollbars="no" src="http://tfk:8082/cognero.html"></iframe>-->