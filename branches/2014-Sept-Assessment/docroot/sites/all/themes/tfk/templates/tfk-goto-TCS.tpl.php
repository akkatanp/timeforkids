<?php
//flog_it("tfk-goto-TCS.tpl.php...");
//flog_it("url=".$url);
?>

<html>
<body>
    <a id="url" target="_blank" href="<?php echo $url; ?>"></a>
    <script type="text/javascript">
        window.onload=function() {
            document.getElementById("url").click();
        }
    </script>
</body>
</html>