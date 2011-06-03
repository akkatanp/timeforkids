<div id="sightseeing-container">
	<div class="sightseeing-graphic-header"></div>
	
	<div class="sightseeing-body">
		<h1><?php echo $sightseeing_data['destination_title'];?>: Sight Seeing Guide</h1>
		<p><?php echo $sightseeing_data['sightseeing_body'];?></p>
		<img src="<?php echo file_create_url(file_build_uri(basename($sightseeing_data['sightseeing_map']))); ?>" width="490" height="490" />
	</div>

<?php foreach($sightseeing_data['sightseeing_items'] as $item):?>
-- Place Name : <?php echo $item['place_name'];?><br/>
-- Place Description : <?php echo $item['place_description'];?><br/>
-- Place Photo : <?php echo file_create_url(file_build_uri(basename($item['place_photo'])));?><br/>
<?php endforeach;?>
	
</div>