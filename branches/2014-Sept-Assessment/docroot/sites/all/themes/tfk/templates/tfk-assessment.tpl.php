<?php
    flog_it("tfk-assessment.tpl.php...");
?>

<script language="javascript">
    // http://jandcgroup.com/2011/10/17/dynamic-height-cross-domain-iframe-postmessage-javascript/
    // http://mobilesandbox.timeinc.com/tfk/cognero.html
    // http://tfk:8082/cognero.html

    function receiveSize(e) {
        console.log("receiveSize: e.origin="+e.origin);
        if (e.origin === "http://mobilesandbox.timeinc.com") {// for security: set this to the domain of the iframe - use e.uri if you need more specificity
            console.log("found domain, attempting to resize...");
            document.getElementById("tfk_assessment").style.height = e.data + 40 + "px";
            //window.removeEventListener("message", receiveSize, false);
        }
    }
    
    window.addEventListener("message", receiveSize, false);
/*
    if (window.addEventListener) {
        console.log("adding non-IE addEventListener...");
        window.addEventListener("message", receiveSize, false);  
    } else {
        console.log("adding IE addEventListener...");
        window.attachEvent("onmessage", receiveSize);//for ie  
    } 
*/
     
</script>

<iframe id="tfk_assessment" width="950" height="100" border="1" scrollbars="no" src="http://mobilesandbox.timeinc.com/tfk/cognero.html"></iframe>
<!--<iframe id="tfk_assessment" width="950" height="100" border="1" scrollbars="no" src="http://tfk:8082/cognero.html"></iframe>-->