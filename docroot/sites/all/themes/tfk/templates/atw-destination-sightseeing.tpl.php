<?php //echo $sightseeing_data['cust_node_title'];?>
<link rel="stylesheet" href="/sites/all/themes/tfk/css/atw-sightseeing.css" />
<script src="/sites/all/themes/tfk/js/atw-sightseeing.js"></script>




<div class="atw-graphic-header"></div>

<div id="sightseeing-container">
<?php foreach($sightseeing_data['sightseeing_items'] as $item): ?>
	<h1><?php echo $item['place_name']; ?>: Sight Seeing Guide</h1>
	<div id="map-container">
		<?php echo $item['place_description']; ?>
	</div>
<?php endforeach;?>

</div>