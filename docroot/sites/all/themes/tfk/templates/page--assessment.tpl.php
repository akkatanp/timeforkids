<?php
/*
* This page is used to login from timeforkids.com to the digital product
* without having to re-enter one's login and password. Its done via post
* of the LUCIE auth token and two variables.
*/

/*
*	Set the post fields to sent to the digital product page
*/
global $user;  
$cgiToken = ($user->uid ? $_COOKIE['CGI-token'] : '');
flog_it("page--assessment.tpl.php: cgiToken=".$cgiToken);

if ($_SERVER['HTTP_HOST'] === "www.timeforkids.com") {
    $form_domain = "http://www.timeforkids.com";
} elseif ($_SERVER['HTTP_HOST'] === "qa.timeforkids.com") {
    $form_domain = "http://qa.timeforkids.com";
} elseif ($_SERVER['HTTP_HOST'] === "dev.timeforkids.com") {
    $form_domain = "http://qa.timeforkids.com";
} elseif ($_SERVER['HTTP_HOST'] === "tfk:8082") {
    $form_domain = "http://tfk:8082";
}
    
    
$form_action = "/assessment-load";
?>
<form id="cgi-redirect" action="<?php echo $form_action; ?>" method="post">
	<input type="hidden" name="CGI-Token" value="<?php echo $cgiToken; ?>" />
</form>

<script type="text/javascript">
window.onload=function(){
	document.getElementById("cgi-redirect").submit();
}
</script>