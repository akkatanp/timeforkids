<?php
    global $user;
    
    flog_it("tfk-assessment.tpl.php: email=".$user->mail);
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