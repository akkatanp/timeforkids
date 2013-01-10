<div class="logincontent" id="login-container" >
  <div id="login-header">Current subscribers log in/register for timeforkids.com<?php if($close_button): ?><a id="close-button" class="close-button">&nbsp;</a><?php endif; ?></div><div id="login-form-container">
    <?php print $rendered_build_id; ?>
    <input name="form_id" value="user_login" type="hidden">
    <h2>Registered Users Log In</h2>
    <div class="form-item form-type-textfield form-item-name"><label for="edit-name">Email:</label>&nbsp;<input class="form-text required" id="edit-name" maxlength="60" name="name" value="" type="text"></div>
    <div class="form-item form-type-password form-item-pass"><label for="edit-pass">Password:</label>&nbsp;<input class="form-text required" id="edit-pass" maxlength="128" name="pass" value="" type="password"></div>
    <div class="form-actions form-wrapper" id="edit-actions"><input class="form-submit" id="edit-submit" name="op" value="Log in" type="submit"></div>
    <a href="https://<?php print $subscription_service_domain; ?>/storefront/universalForgotPassword.ep?magcode=TK">Forgot Password?</a>
  </div>
  <div>
  <div class="bold">Register Now for FREE<br />Subscriber Benefits</div>
  <div class="form-actions form-wrapper"><a class="form-submit" href="https://secure.customersvc.com/servlet/Show?WESPAGE=am/tablet/tk/tk_web_login.jsp&MSDDMOFF=AONF&MSDTRACK=TKSO">Register Now!</a></div>
  </div>
  <div id="message-box">
    <div id="message-header">Do it now to get all this:</div>
      <ul id="message-list">
        <li>Access to Interactive Digital Editions</li>
        <li>Online Archives of Past Lessons & Teachers' Guides</li>
        <li>Interactive Teacher Community</li>
      </ul>
    </div>
  <div class="clearfix" id="login-footer"><span class="bold">Not Yet A Subscriber?</span> <a href="https://<?php print $subscription_service_domain; ?>/storefront/subscribe-to-time-for-kids/link/1005016.html">Click here to subscribe</a> </div><div style="float: right; font-size: 9px;">Website Login Page</div>

</div>