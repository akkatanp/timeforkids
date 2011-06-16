<script type="text/javascript">
var $ = jQuery;

$(document).ready(function() {
    $('#delfavs').click(function(){
      $('.throbber').show();
      $.ajax({
        url: '<?php echo url('tfkfav/ajax/del');?>',
        success: function(data) {
          if(data == 'success'){
            $('.throbber').hide();
            location.href = '<?php echo url($ref);?>';
          }
        }
      });
    });
});

</script>
<div clas="myfavs">
  MY FAVORITES<br/>
  <a href="<?php echo url('my-favorites');?>" >View All My Favorites</a><br/>
  <a href="<?php echo url($ref);?>#" id="delfavs">Clear All Favorites</a><span style="display:none" class="throbber">Clearing</span><br/>
  <div class="favsnotify"></div>
</div>