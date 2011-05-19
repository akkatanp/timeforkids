
<div id="atw-container">
	<div id="slideshow">
		<div class="header"></div>
		
            <div class="outer">
				<div class="inner">
				<?php foreach($destinations_data as $image_k => $image_obj): ?>
					<img src="<?php echo file_create_url(file_build_uri(basename($image_obj['image_filename']))); ?>" />
				<?php endforeach;?>
				</div>
			</div>
		
		<div class="footer">
			<div class="title-container">
			<?php foreach($destinations_data as $image_k => $image_obj): ?>
				 <div class="title" style="display: none;"><?php echo $image_obj['image_title']; ?></div>
			<?php endforeach;?>
			</div>
		</div>
	</div>
</div>


This is some static stuff

<?php print_r($destinations_data);?>


This is how you do a link vs. regular a href:

<?php echo l('I am the anchor',$destinations_data[22]['destination_path']);?>