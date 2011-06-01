<div>
	<h3><?php echo l($navigation_data['navigation_block_title'],$navigation_data['alias'],array('attributes' => array('class'=>array('cssclasshere'))));?></h3>
	<ul class="menu">
		<li><?php echo l('Sightseeing Guide',$navigation_data['alias'].'/sightseeing');?></li>
		<li><?php echo l('History Timeline',$navigation_data['alias'].'/history-timeline');?><//li>
		<li><?php echo l('Native Lingo',$navigation_data['alias'].'/native-lingo');?></li>
		<li><?php echo l('Challenge',$navigation_data['alias'].'/challenge');?></li>
		<li><?php echo l('Day in Life',$navigation_data['alias'].'/day-in-life');?></li>
	</ul>
</div>