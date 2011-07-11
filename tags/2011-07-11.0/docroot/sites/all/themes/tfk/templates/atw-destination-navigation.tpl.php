
<div>
	<h3><?php echo l($navigation_data['navigation_block_title'],$navigation_data['alias'],array('attributes' => array('class'=>array('cssclasshere'))));?></h3>
	<ul class="menu">
		<?php if($navigation_data['sightseeing_exists'] == 1):?><li><?php echo l('Sightseeing Guide',$navigation_data['alias'].'/sightseeing',array('attributes'=> array('class'=>$navigation_data['sightseeing_class'])));?></li><?php endif;?>
		<?php if($navigation_data['timeline_exists'] == 1):?><li><?php echo l('History Timeline',$navigation_data['alias'].'/history-timeline',array('attributes'=> array('class'=>$navigation_data['timeline_class'])));?></li><?php endif;?>
		<?php if($navigation_data['lingo_exists'] == 1):?><li><?php echo l('Native Lingo',$navigation_data['alias'].'/native-lingo',array('attributes'=> array('class'=>$navigation_data['lingo_class'])));?></li><?php endif;?>
		<?php if($navigation_data['challenge_exists'] == 1):?><li><?php echo l('Challenge',$navigation_data['alias'].'/challenge',array('attributes'=> array('class'=>$navigation_data['challenge_class'])));?></li><?php endif;?>
		<?php if($navigation_data['daylife_exists'] == 1):?><li><?php echo l('Day in Life',$navigation_data['alias'].'/day-in-life',array('attributes'=> array('class'=>$navigation_data['daylife_class'])));?></li><?php endif;?>
	</ul>
</div>