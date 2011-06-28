<?php if(count($notification_data) > 0):?>
<div class="notification">
	<h1><?php print $notification_data['notification_title'];?></h1>
	<?php print $notification_data['notification_body'];?>
	<a href="<?php print $notification_data['notification_link'];?>">Click For More Information</a>
	<a href="#" id="hide-notification">Hide This <img src="../images/red-close-box.png" /></a>
</div>
<?php endif;?>