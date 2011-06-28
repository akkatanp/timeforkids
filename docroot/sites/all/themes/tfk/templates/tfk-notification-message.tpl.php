<?php if(count($notification_data) > 0):?>
<script type="text/javascript">
var $ = jQuery;

$(document).ready(function() {
	$('#hide-notification').click(function(){
		$.ajax({
			url: '<?php echo url('notification/hide/'.$notification_data['notification_nid']);?>',
			success: function(data) {
				if (data == 'success') {
					$('.notificationdiv').fadeOut('fast');
				}
			}
		});
	});
});
</script>

<div class="notification">
	<h1><?php print $notification_data['notification_title'];?></h1>
	<?php print $notification_data['notification_body'];?>
	<a href="<?php print $notification_data['notification_link'];?>">Click For More Information</a>
	<a href="#" id="hide-notification">Hide This <img src="../images/red-close-box.png" /></a>
</div>
<?php endif;?>