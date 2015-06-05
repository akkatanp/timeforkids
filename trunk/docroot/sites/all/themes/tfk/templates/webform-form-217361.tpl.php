<?php

/**
 * @file
 * Customize the display of a complete webform.
 *
 * This file may be renamed "webform-form-[nid].tpl.php" to target a specific
 * webform on your site. Or you can leave it "webform-form.tpl.php" to affect
 * all webforms on your site.
 *
 * Available variables:
 * - $form: The complete form array.
 * - $nid: The node ID of the Webform.
 *
 * The $form array contains two main pieces:
 * - $form['submitted']: The main content of the user-created form.
 * - $form['details']: Internal information stored by Webform.
 */
//dpm($form['submitted']['role']['#options']);

// Manually create the role select drop down
$role_options = "";
$the_selected;
foreach($form['submitted']['role']['#options'] as $key => $value) {
    if ($key == $form['submitted']['role']['#value']) {
        $the_selected = "selected";
    } else {
        $the_selected = "";
    }
    $role_options .= '<option '.$the_selected.' value="'.$key.'">'.$value.'</option>';
}
//print("role:");
//print_r($form['submitted']['role']);
//print_r($form['submitted']['role']['#value']);
?>

<link href="http://fonts.googleapis.com/css?family=PT+Sans" rel="stylesheet" type="text/css">
<style type="text/css">
.region.region-content { width: 905px;  background-color: #fff; border: 1px solid #c3c3c3; padding: 20px;}
strong, b { font-weight: bold; }
em, i { font-style: italic; }
u { text-decoration: underline; }
p { margin: 1em 0; }
a { color: #d71700; text-decoration: underline; }
.center { text-align: center; }
.clear { clear: both; min-height: 0; }
input, select, textarea, button { outline: none; box-shadow: 0 0 0 0 transparent; border-radius: 0; border: 0; color: #000000; padding:0; margin:0; -moz-box-sizing: border-box; -webkit-box-sizing: border-box; box-sizing: border-box; }
input[type=submit], input[type=reset], button { -webkit-appearance: none; }

.wrap { max-width: 1008px; width: 96%; margin: 30px auto; }
/* .op0 { background-color: #fff; border: 1px solid #c3c3c3; padding: 20px; } */
.hdr { font-family: 'PT Sans', sans-serif; font-size: 42px; font-weight: bold; color: #d71700; text-align: center; margin-top: 10px; }
.sub-hdr { font-family: 'PT Sans', sans-serif; font-size: 16px; color: #d71700; text-align: center; font-weight: bold; margin-top: 20px; line-height: 1.3em; }
.formSec { max-width: 840px; margin: auto; }
.formSec .inputWrap { font-size: 0px; margin: 0px; padding: 12px 0px; }
input[type=text], input[type=password], input[type=email], select { border: 1px solid #adacac; border-radius: 4px; width: 100%; margin: 0px; font-size: 12px;}
input[type=text], input[type=password], input[type=email] { padding: 16px; }
select { padding: 14px 16px; }
input.half, select.half { width: 48%; margin-right: 4%; }
.half + .half { margin-right: 0px; } /* needed for IE8 because last-child does not work */
input.third, select.third, #edit-submitted-first-name, label[for="edit-submitted-first-name"] + input { width: 31%; margin-right: 3.5%; width: 260px; }
input.third, select.third, #edit-submitted-last-name,  label[for="edit-submitted-last-name"]  + input { width: 31%; margin-right: 3.5%; width: 260px; }
input.twothird { width: 65.5%; margin-right: 3.5%; }
.third + .third + .third, .twothird + .third { margin-right: 0px; }
.selectCustomIcon { width: 100%; padding: 14px 16px 14px 16px; background: #fff url(/sites/all/themes/tfk/images/menu.png) 98% center no-repeat; border: 1px solid #AAAAAA; cursor: pointer; -webkit-appearance: none; text-indent: 0.01px; text-overflow: ''; }
select.selectCustomIcon::-ms-expand { display: none; } /* hide arrow in IE 10+ */

.btn { font-family: Arial, Helvetica, sans-serif; font-size: 28px; font-weight: bold; color: #fff; text-align: center; background-color: #d71700; width: 250px; height: 46px; cursor: pointer; }

.mouse { max-width: 700px; width: 90%; margin: 30px auto; font-size: 11px; font-weight: normal; }
.mouse a { color: #000; text-decoration: underline; font-size: 11px; font-weight: normal;}
.more_info a { text-decoration: underline; color: #d71700; }
.form-submit {
font-family: Arial, Helvetica, sans-serif; font-size: 28px !important; font-weight: bold; color: #fff; text-align: center; background-color: #d71700; width: 250px; height: 46px; cursor: pointer; border-radius: 0px !important; -moz-border-radius: 0px !important; -webkit-border-radius: 0px !important; text-transform: uppercase; }

/* .region.region-sidebar-second.column.sidebar { display: none; } */
/* #main-wrapper h1#section-title { display: none; } */
</style>


<div class="wrap">
    <div class="op0">
        <div class="formSec">
            <div class="hdr">BULK ORDERS</div>
            <div class="sub-hdr">
                    Save up to 15% with a bulk order of over 500 students for your grade, school, or district.
                    <br>
                    Complete the form below and we'll contact you regarding your custom pricing plan!
            </div>
            <p>&nbsp;</p>
            <p class="more_info">
                For more information about our products for grades K-8,
                <a href="https://subscription.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1005015.html">click here</a>.
            </p>
            <div class="formSec">
                <form action="/buk_orders" method="post">
                <div class="inputWrap">
                    <input placeholder="First Name" id="<?php print $form['submitted']['first_name']['#id']; ?>" name="<?php print $form['submitted']['first_name']['#name']; ?>" size="<?php print $form['submitted']['first_name']['#size']; ?>" maxlength="<?php print $form['submitted']['first_name']['#maxlength']; ?>" value="<?php print $form['submitted']['first_name']['#value']; ?>" class="third" type="text">
                    <input placeholder="Last Name" id="<?php print $form['submitted']['last_name']['#id']; ?>" name="<?php print $form['submitted']['last_name']['#name']; ?>" size="<?php print $form['submitted']['last_name']['#size']; ?>" maxlength="<?php print $form['submitted']['last_name']['#maxlength']; ?>" value="<?php print $form['submitted']['last_name']['#value']; ?>" class="third" type="text">
                    <input placeholder="Phone" id="<?php print $form['submitted']['phone']['#id']; ?>" name="<?php print $form['submitted']['phone']['#name']; ?>" size="<?php print $form['submitted']['phone']['#size']; ?>" maxlength="<?php print $form['submitted']['phone']['#maxlength']; ?>" value="<?php print $form['submitted']['phone']['#value']; ?>" class="third" type="text">
                </div>
                <div class="inputWrap">
                    <input placeholder="Email" id="<?php print $form['submitted']['email']['#id']; ?>" name="<?php print $form['submitted']['email']['#name']; ?>" size="<?php print $form['submitted']['email']['#size']; ?>" maxlength="<?php print $form['submitted']['email']['#maxlength']; ?>" value="<?php print $form['submitted']['email']['#value']; ?>" class="twothird" type="text">
                    <input placeholder="Zip Code" id="<?php print $form['submitted']['zip']['#id']; ?>" name="<?php print $form['submitted']['zip']['#name']; ?>" size="<?php print $form['submitted']['zip']['#size']; ?>" maxlength="<?php print $form['submitted']['zip']['#maxlength']; ?>" value="<?php print $form['submitted']['zip']['#value']; ?>" class="third" type="text">
                </div>
                <div class="inputWrap">
                    <input placeholder="School Name" id="<?php print $form['submitted']['school_name']['#id']; ?>" name="<?php print $form['submitted']['school_name']['#name']; ?>" size="<?php print $form['submitted']['school_name']['#size']; ?>" maxlength="<?php print $form['submitted']['school_name']['#maxlength']; ?>" value="<?php print $form['submitted']['school_name']['#value']; ?>" class="half" type="text">
                    <select class="half selectCustomIcon" id="<?php print $form['submitted']['role']['#id']; ?>" name="<?php print $form['submitted']['role']['#name']; ?>"><?php print $role_options ?></select
                </div>
            </div>

<?php
  // Print out the main part of the form.
  // Feel free to break this up and move the pieces within the array.
  //print drupal_render($form['submitted']);

  // Always print out the entire $form. This renders the remaining pieces of the
  // form that haven't yet been rendered above.
    unset($form['submitted']['first_name']);
    unset($form['submitted']['last_name']);
    unset($form['submitted']['phone']);
    unset($form['submitted']['email']);
    unset($form['submitted']['zip']);
    unset($form['submitted']['school_name']);
    unset($form['submitted']['role']);
?>
            <p>&nbsp;</p>
            <center>
            <?php print drupal_render_children($form); ?>
            </form>
            </center>

            <p class="mouse"><a href="https://subscription.timeinc.com/storefront/privacy/tfk/privacy_terms_service.html">Terms of Service</a>.<br><br>
                To learn more about our information practices, please read our <a href="http://www.timeinc.net/subs/privacy/tk/policy.html">Privacy Policy</a>. <a href="https://subscription.timeinc.com/storefront/privacy/tfk/generic_privacy_new.html#california">Your California Privacy Rights</a>.
            </p>
        </div>
    </div>
</div>