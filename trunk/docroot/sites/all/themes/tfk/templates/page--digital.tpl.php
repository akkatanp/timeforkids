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
?>
<form id="cgi-redirect" action="https://app.timeforkidsdigital.com/cgiAuth.php" method="post">
	<input type="hidden" name="CGI-Token-Exp" value="2592000000" />
	<input type="hidden" name="CGI-Remember-Me" value="0" />
	<input type="hidden" name="CGI-Token" value="<?php echo $cgiToken; ?>" />
</form>

<script type="text/javascript">
window.onload=function(){
	document.getElementById("cgi-redirect").submit();
}
</script>