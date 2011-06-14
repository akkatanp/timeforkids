<!--script type="text/javascript">$ = jQuery;</script>
<script type="text/javascript" src="/sites/all/themes/tfk/js/jEmbed/jquery.jlembed.js"></script-->

<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
				
  <?php print $user_picture; ?>

  <?php print render($title_prefix); ?>
  <?php if (!$page && $title): ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if ($unpublished): ?>
    <div class="unpublished"><?php print t('Unpublished'); ?></div>
  <?php endif; ?>

  <?php if ($display_submitted): ?>
    <div class="submitted">
      <?php print $submitted; ?>
    </div>
  <?php endif; ?>

  <div class="content"<?php print $content_attributes; ?>>
  <!--script type="text/javascript">
  $(document).ready(function(){
	$("#media").jlEmbed({
		url: 'http://timedev.prod.acquia-sites.com/files/videos/original/Lexus_0.mp4',
		id: 'Lexus',
		plugin: 'quicktime',
		codebase: 'http://www.apple.com/qtactivex/qtplugin.cab',
		loop: 'no',
		autoplay: 'yes',
		width: 488,
		height: 300,
		params: 'controller=true'
	});
});
</script>
<div id="media"></div>
<a href="#" onclick="document.Lexus.Play();">play</a> | 
<a href="#" onclick="document.Lexus.Stop();">pause</a> |
<a href="#" onclick="document.Lexus.Rewind();">stop</a-->
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);

     // print_r($node);exit;


		print render($content);
    ?>
  </div>

  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>

</div><!-- /.node -->
