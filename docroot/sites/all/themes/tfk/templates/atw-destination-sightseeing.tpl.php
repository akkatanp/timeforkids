<?php //echo $sightseeing_data['cust_node_title'];?>
<link rel="stylesheet" href="/sites/all/themes/tfk/css/atw-sightseing.css" />
<script src="/sites/all/themes/tfk/js/atw-sightseeing.js"></script>

<div class="atw-graphic-header"></div>

<div id="sightseeing-container">
	
	<h1><?php echo $sightseeing_data['sightseeing_items'][0]['place_name'];?>: Sight Seeing Guide</h1>
	<?php echo $sightseeing_data['sightseeing_items'][0]['place_name'];?>
	
	<div id="map-container"><?php echo file_create_url(file_build_uri(basename($sightseeing_data['sightseeing_items'][0]['place_photo'])));?></div>
<?php endforeach;?>

</div>