

	<div id="slideshow">
		<div class="header"></div>

		<div class="outer">
			<div class="inner">
			<?php foreach($images_data as $image_k => $image_obj): ?>
				<img src="<?php echo $image_obj['image_path']; ?>" />
			<?php endforeach;?>
			</div>
		</div>

		<div class="footer">
			<div class="title-container">
			<?php foreach($images_data as $image_k => $image_obj): ?>
				 <div class="title" style="display: none;"><?php echo $image_obj['image_title']; ?></div>
			<?php endforeach;?>
			</div>
		</div>
	</div>


