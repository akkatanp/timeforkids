<?php if(count($notification_data) > 0):?>


<script type="text/javascript">
var $ = jQuery;

$(document).ready(function() {
    $('#hidenotify').click(function(){
      $.ajax({
        url: '<?php echo url('notification/hide/'.$notification_data['notification_nid']);?>',
        success: function(data) {
          if(data == 'success'){
            $('.notificationdiv').hide();
          }
        }
      });
    });
});

</script>



<div class="notificationdiv">
  <H1><?php print $notification_data['notification_title'];?></H1><br/>
  <H3><?php print $notification_data['notification_body'];?></H3><br/>
  <a href="<?php print $notification_data['notification_link'];?>">Click For More Information</a>
  <a href="#" id="hidenotify">Hide This</a>
</div>
<?php endif;?>