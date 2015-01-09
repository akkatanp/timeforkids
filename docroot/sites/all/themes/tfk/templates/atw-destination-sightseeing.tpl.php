<?php //echo $sightseeing_data['cust_node_title'];

// Cache busting for js include
$tmp_filetime = filemtime("sites/all/themes/tfk/js/atw-sightseeing.js");
?>

<!--link rel="stylesheet" href="/sites/all/themes/tfk/css/atw-sightseeing.css" /-->
<script src="/sites/all/themes/tfk/js/atw-sightseeing.js?<?php print $tmp_filetime; ?>"></script>

<?php if($sightseeing_data['is_admin_editor'] == 1):?>
<div class="tabs"><h2 class="element-invisible">Primary tabs</h2><ul class="tabs primary clearfix"><li class="active"><a href="<?php echo $sightseeing_data['sightseeing_view_link'];?>" class="active"><span class="tab">View</span><span class="element-invisible">(active tab)</span></a></li>
<li><a href="<?php echo $sightseeing_data['sightseeing_edit_link'];?>"><span class="tab">Edit</span></a></li>
</ul></div>
<?php endif; ?>


<div class="atw-graphic-header"></div>

<div id="sightseeing-container">
<?php foreach($sightseeing_data['sightseeing_items'] as $item): ?>
	<h1><?php echo $item['place_name']; ?>: Sightseeing Guide</h1>
	<div id="map-container">
		<?php echo $item['place_description']; ?>
	</div>
<?php endforeach;?>

</div>