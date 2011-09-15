<?php
$form = array_shift($variables);
?>
<div class="logincontent" id="login-container" >
	<div id="login-header">Log in, Register or subscribe</div><div id="login-form-container">
		<?php 
			if(isset($form['form_build_id'])) { 
				print render($form['form_build_id']);
			}	 
		?>
		<input name="form_id" value="user_login" type="hidden">
		<h2>Already Registered for subscriber-only teacher content? Log in now!</h2>
		<div class="form-item form-type-textfield form-item-name"><label for="edit-name">Email:</label>&nbsp;<input class="form-text required" id="edit-name" maxlength="60" name="name" value="" type="text"></div>
		<div class="form-item form-type-password form-item-pass"><label for="edit-pass">Password:</label>&nbsp;<input class="form-text required" id="edit-pass" maxlength="128" name="pass" value="" type="password"></div>
		<div class="form-actions form-wrapper" id="edit-actions"><input class="form-submit" id="edit-submit" name="op" value="Log in" type="submit"></div>
		<a href="https://subscription.timeforkids.com/storefront/universalForgotPassword.ep?magcode=TK">Forgot Password?</a>
	</div>
	<div id="message-box">
		<div id="message-header">We've redesigned our site to be easier to use and added lots of new content and tools!</div>
			<ul id="message-list">
				<li>If you are a subscriber and you've already registered login here.</li>
				<li>If you are a subscriber and this is your first visit to our site, click "Not yet registered?"</li>
				<li>If you are not a subscriber, click "Want to subscribe?"</li>
			</ul>
		</div>
	<div class="clearfix" id="login-footer"><a href="https://secure.customersvc.com/servlet/Show?WESPAGE=am/tablet/tk/tk_web_login.jsp&MSDDMOFF=AONF&MSDTRACK=TKSO">Not yet registered?</a> <a href="https://subscription.timeforkids.com/storefront/subscribe-to-time-for-kids/site/tk-digital0711.html?link=1005016">Want to subscribe?</a></div>
</div>