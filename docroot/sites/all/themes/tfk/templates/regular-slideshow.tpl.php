
<div id="slideshow-container">
	
	<div id="slideshow-controls">
		<div id="prev-slide"></div>
		<div id="slide-count">
			<span id="slide-num"></span> of <span id="num-slides"><?php echo count($images_data); ?></span> photos
		</div>
		<div id="next-slide"></div>
	</div>
	
	<div id="slideshow">

		<div class="outer">
			<div class="inner">
			<?php foreach($images_data as $image_k => $image_obj): ?>
				<img src="<?php echo $image_obj['image_path']; ?>" />
			<?php endforeach;?>
			</div>
		</div>

	</div>
	
	<div id="slideshow-info">
		<?php foreach($images_data as $image_k => $image_obj): ?>
		<div class="slide-info" id="slide-info-<?php echo $image_k ?>">
			<h1><?php echo $image_obj['image_title']; ?></h1>
			<?php echo $image_obj['image_caption']; ?>
		</div>
		<?php endforeach;?>
	</div>
	
	<?php print_r($images_data); ?>
	
	<?php if(!empty($related_content)): ?>
		<div id="slideshow-related-content"><?php print $related_content; ?></div>
	<?php endif; ?>
</div>
