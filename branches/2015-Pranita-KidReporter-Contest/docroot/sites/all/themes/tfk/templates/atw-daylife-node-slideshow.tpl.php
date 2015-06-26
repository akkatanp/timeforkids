<?php //echo $cust_node_title;?>
	
	<div id="image-container">
		<img src="<?php print $node_data['daylife_speaker_photo'];?>" />
		<div id="speaker-credit"><?php print $node_data['daylife_speaker_credit'];?></div>
	</div>

	<div id="speaker-headline">
		<?php print $node_data['daylife_speaker_headline'];?>
	</div>
	
	<div id="speaker-intro">
		<?php print $node_data['daylife_speaker_intro'];?>
	</div>
	
	<div class="clock active"></div>
	
	<div id="activities">
		<div id="activity-time"></div>
		<div id="activity-text"></div>
	</div>
	
	<div style="clear: both;"></div>
	
	<div id="daylife-bar-container">
		<div id="prev"></div>
		<div id="daylife-bar">
			<div id="inner">
				<?php $i = 0; ?>
				<?php foreach($daylife_data as $data):?>
				<div class="clock" id="clock-<?php print $i; ?>" title="<?php print $data['time'];?>" rel="<?php print htmlspecialchars($data['activity']);?>"></div>
				<?php $i++; ?>
				<?php endforeach;?>
			</div>
		</div>
		<div id="next"></div>
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