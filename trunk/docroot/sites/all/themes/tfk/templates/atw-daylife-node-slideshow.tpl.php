<img src="<?php print $node_data['daylife_speaker_photo'];?>"><br/>
INTRO: <?php print $node_data['daylife_speaker_intro'];?><br/>
<br/>
<?php foreach($daylife_data as $data):?>
    Time:<?php print $data['time'];?><br/>
    Activity:<?php print $data['activity'];?><br/>
<?php endforeach;?>

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