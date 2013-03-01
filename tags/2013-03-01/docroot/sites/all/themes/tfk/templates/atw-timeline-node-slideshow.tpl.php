<?php //echo $cust_node_title;?>

<!--link rel="stylesheet" href="/sites/all/themes/tfk/css/atw-timeline.css" />
<script type="text/javascript" src="/sites/all/themes/tfk/js/atw-timeline.js"></script>

<div class="atw-graphic-header"></div>

<div id="timeline-container">
	<h1><?php print $title ?></h1>
	<h2>Take a trip through Country's history by clicking below</h2-->
	
	<div id="event-year"></div>
	<div id="line-above"></div>
	<div id="event-timeline-bar-container">
		<div id="prev"></div>
		<div id="event-timeline-bar"></div>
		<div id="next"></div>
	</div>
	<div id="line-below"></div>
	<div id="event-container">
		<?php $i = 0; ?>
		<?php foreach($images_data as $image):?>
		
		<div class="event" id="event-<?php print $i ?>"<?//php if ($i != 0) echo ' style="display: none;"'; ?>>
		
			<div class="event-image"><img src="<?php print $image['image_path'] ?>" /></div>
			
			<div class="event-text">
				<h3><?php print $image['event_title'] ?></h3>
				<?php print $image['event_copy'] ?>
				
				<?php if($is_admin_editor == 1):?>
				<?php
                                //echo $return_path;
                                echo '<a href="'.url('field-collection/field-timeline-event/'.$image['event_nid'].'/edit',array('query'=>array('destination' => $return_path))).'">[edit]</a>';
                                echo ' - <a href="'.url('field-collection/field-timeline-event/'.$image['event_nid'].'/delete',array('query'=>array('destination' => $return_path))).'">[delete]</a>';
                                ?>
				<?php endif;?>
			</div>
			<div class="clearfix"></div>
		</div>
		
		<?php $i++; ?>
		<?php endforeach; ?>
		<div class="clearfix"></div>
	</div>
<!--/div-->

<!--
THIS IS RELATED ARTICLES LIST:
<?php foreach($related_content as $related_node):?>
	<?php print l($related_node['title'],'node/'.$related_node['nid'],array('attributes' => array('class' =>'anyclassyouwant'))); ?>
	<br/>
<?php endforeach; ?>
-->

<?php if($is_admin_editor == 1):?>
    <?php print l('ADD NEW TIMELINE EVENT','field-collection/field-timeline-event/add/node/'.$timeline_nid);?>
<?php endif;?>



    