<div>
    <h3><?php echo l($navigation_data['navigation_block_title'],$navigation_data['alias'],array('attributes' => array('class'=>array('cssclasshere'))));?></h3>
    <br/>
    <?php echo l('Sightseeing Guide',$navigation_data['alias'].'/sightseeing');?>
    <br/>
    <?php echo l('History Timeline',$navigation_data['alias'].'/history-timeline');?>
    <br/>
    <?php echo l('Native Lingo',$navigation_data['alias'].'/native-lingo');?>
    <br/>
    <?php echo l('Challenge',$navigation_data['alias'].'/challenge');?>
    <br/>
    <?php echo l('Day in Life',$navigation_data['alias'].'/day-in-life');?>
</div>