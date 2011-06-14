
<div id="slideshow-container">
	<div id="slideshow">
		<div class="header"></div>

		<div class="outer">
			<div class="inner">
			<?php foreach($images_data as $image_k => $image_obj): ?>
				<img src="<?php echo $image_obj['image_path']; ?>" />
			<?php endforeach;?>
			</div>
		</div>

	</div>
	
	<?php print_r($image_obj); ?>
	
	<?php if(!empty($related_content)): ?>
		<div id="slideshow-related-content"><?php print $related_content; ?></div>
	<?php endif; ?>
</div>


