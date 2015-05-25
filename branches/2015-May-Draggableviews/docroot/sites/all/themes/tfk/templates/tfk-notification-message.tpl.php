<?php if(count($notification_data) > 0):?>
<div class="notification">
	<h1><?php print $notification_data['notification_title'];?></h1>
	<?php print $notification_data['notification_body'];?>
	<?php if (isset($notification_data['notification_link'])):?>
		<a href="<?php print $notification_data['notification_link'];?>">Click For More Information</a>
	<?php endif;?>
	<a href="#" id="hide-notification" rel="<?php echo url('notification/hide/'.$notification_data['notification_nid']);?>">Hide This</a>
</div>
<?php endif;?>