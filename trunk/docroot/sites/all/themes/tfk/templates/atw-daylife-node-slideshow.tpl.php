<link rel="stylesheet" href="/sites/all/themes/tfk/css/atw-daylife.css" />
<script type="text/javascript" src="/sites/all/themes/tfk/js/atw-daylife.js"></script>

<div class="atw-graphic-header"></div>

<div id="daylife-container">
	<h1>Country: History Timeline</h1>
	<?php print render($content['body']); ?>
	
	<div id="image-container"><img src="<?php print $node_data['daylife_speaker_photo'];?>" /></div>
	<div id="speaker-intro">
		<h2>Sierra</h2>
		<?php print $node_data['daylife_speaker_intro'];?>
	</div>
	
	<div id="activities">
		<div class="clock"></div>
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
</div>

<br/>
    LINKS FOR EDITORS:
<br/>
<?php if($is_admin_editor == 1):?>
    <?php foreach($daylife_data as $data):?>
        <?php print $data['time'];?> -- <?php echo l('[edit]','field-collection/field-day-in-life-time/'.$data['time_id'].'/edit')?> --
        <?php echo l('[delete]','field-collection/field-day-in-life-time/'.$data['time_id'].'/delete')?>
        <br/>
    <?php endforeach;?>

        ADD NEW TIME:<?php echo l('ADD','field-collection/field-day-in-life-time/add/node/'.$node_data['daylife_nid'])?>
<?php endif;?>