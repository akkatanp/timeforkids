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
//flog_it($user);
$cgiToken = ($user->uid ? $_COOKIE['CGI-token'] : '');
watchdog('page--digital.tp.php', 'user name=%name, user email=%email, CGI-token=%cgiToken', array('%name' => $user->name, '%email' => $user->mail, '%cgiToken' => $cgiToken));
//flog_it("cgiToken=".$cgiToken);
//flog_it($_ENV['AH_SITE_ENVIRONMENT']);

if (isset($_ENV['AH_SITE_ENVIRONMENT'])) {
  switch ($_ENV['AH_SITE_ENVIRONMENT']) {
    case 'prod':
      $form_action = 'https://auth.timeforkids.com/cgiAuth.php';
      break;

    default:
      $form_action = 'https://qa-auth.timeforkids.com/cgiAuth.php';
      break;
  }
} else {
    $form_action = 'https://qa-auth.timeforkids.com/cgiAuth.php';
}

//watchdog('page--digital.tp.php', 'form_action=%form_action', array('%form_action' => $form_action));
?>
<form id="cgi-redirect" action="<?php echo $form_action; ?>" method="post">
	<input type="hidden" name="CGI-Token-Exp" value="2592000000" />
	<input type="hidden" name="CGI-Remember-Me" value="0" />
	<input type="hidden" name="CGI-Token" value="<?php echo $cgiToken; ?>" />
</form>

<script type="text/javascript">
window.onload=function(){
	document.getElementById("cgi-redirect").submit();
}
</script>