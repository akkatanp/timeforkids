<?php //echo $cust_node_title;?>
	
	<div id="image-container"><img src="<?php print $node_data['daylife_speaker_photo'];?>" /></div>
	<div id="speaker-intro">
		<?php print $node_data['daylife_speaker_intro'];?>
	</div>
	
	<div class="clock active"></div>
	
	<div id="activities">
		<div id="activity-time"></div>
		<div id="activity-text"></div>
	</div>
	<br clear="all" />
	
	<div id="daylife-bar" class="clearfix">
		<?php foreach($daylife_data as $data):?>
		<div class="clock" title="<?php print $data['time'];?>" rel="<?php print $data['activity'];?>"></div>
		<?php endforeach;?>	
	</div>
	<div id="line-below"></div>
	<div id="current-time"></div>

<?php if($is_admin_editor == 1):?>
<br />
<br />
LINKS FOR EDITORS:
<br />
    <?php foreach($daylife_data as $data):?>
        <?php print $data['time'];?> -- <?php echo '<a href="'.url('field-collection/field-day-in-life-time/'.$data['time_id'].'/edit',array('query'=>array('destination' => $return_path))).'" />[edit]</a>'; ?> --
        <?php print $data['time'];?> -- <?php echo '<a href="'.url('field-collection/field-day-in-life-time/'.$data['time_id'].'/delete',array('query'=>array('destination' => $return_path))).'" />[delete]</a>'; ?>
        <br/>
    <?php endforeach;?>
<?php echo l('ADD NEW TIME','field-collection/field-day-in-life-time/add/node/'.$node_data['daylife_nid'])?>
<?php endif;?>