<?php
//flog_it("tfk-goto-TCS.tpl.php...");
//flog_it("url=".$url);
?>

<html>
<body>
    <p style="font-family:arial;font-style:normal;font-size:14px;">LUCIE account without Assessment access. Bringing up the TCS sign-up page...<p>
    <a id="url" target="_blank" href="<?php echo $url; ?>"></a>
    <script type="text/javascript">
        window.onload=function() {
            document.getElementById("url").click();
        }
    </script>
</body>
</html>