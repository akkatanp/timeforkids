<?php
flog_it("tfk-goto-TCS.tpl.php...");
flog_it("url=".$url);
?>

<html>
<body>
    <script type="text/javascript">
    window.onload=function(){
        window.open("<?php echo $url; ?>",target="_blank");
        //window.open("redirect.php?u=<?php echo $url; ?>", "_blank");
    }
    </script>
</body>
</html>