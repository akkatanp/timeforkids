<?php
/**
 * @file
 * Favorites block template for theme('tfk_favorites_links', $variables).
 *
 * @see tfk_favorites_theme()
 * @see tfk_favorites_block_view()
 * @see _tfk_favorites_links_block_content()
 */
?>
<div class="header"><div class="header-content">MY FAVORITES</div></div>
<div class="body">
  <div class="myfavs">
  	<?php if(isset($view_all)): ?>
  		<?php print $view_all; ?>
  	<?php else: ?>
  		<a href="<?php echo url('my-favorites');?>" >View All My Favorites</a><br/>
  	<?php endif; ?>
  	<?php if(isset($clear_all)): ?>
  		<?php print $clear_all; ?>
  		<div style="display:none" class="throbber">Clearing favorites</div>
  	<?php else: ?>
  		<a href="<?php echo url($ref);?>#" id="delfavs">Clear All Favorites</a><br/>
  		<div style="display:none" class="throbber">Clearing favorites</div>
  	<?php endif; ?>
    <div class="favsnotify"></div>
  </div>
</div>
