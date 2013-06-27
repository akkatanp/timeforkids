
<div id="slideshow-container" class="atw-home">
	<div id="slideshow">
		<div class="header"></div>
		
		<div class="outer">
			<div class="inner">
			<?php foreach($destinations_data as $image_k => $image_obj): ?>
				<a href="/<?php echo $image_obj['destination_path']; ?>"><img src="<?php echo file_create_url(image_style_url('tfk_rect_large',file_build_uri(basename($image_obj['image_filename'])))); ?>" /></a>
			<?php endforeach;?>
			</div>
		</div>
		
		<div class="footer">
			<div class="title-container">
			<?php foreach($destinations_data as $image_k => $image_obj): ?>
				 <div class="title" style="display: none;"><?php echo $image_obj['destination_title']; ?> : <?php echo $image_obj['image_title']; ?></div>
			<?php endforeach;?>
			</div>
		</div>

	</div>
        <div class="foot-credit">
                 <?php foreach($destinations_data as $image_k => $image_obj): ?>
                   <div class="creditval" style="display: none;"><?php echo $image_obj['image_credit']; ?></div>
                 <?php endforeach;?>
                </div>
  <?php print views_embed_view('atw_homepage_nodeblock');?>
</div>


