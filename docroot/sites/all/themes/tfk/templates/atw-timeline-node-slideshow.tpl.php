<link rel="stylesheet" href="/sites/all/themes/tfk/css/atw-timeline.css" />
<script src="/sites/all/themes/tfk/js/atw-timeline.js"></script>

<div class="atw-graphic-header"></div>

<div id="timeline-container">
	<h1>Country: History Timeline</h1>
	<h2>Take a trip through Country's history by clicking below</h2>
	
	<div id="event-year"><?php print $image['event_title'] ?></div>
	
	<div id="event-timeline" class="clearfix"></div>
	
	<div id="event-container" class="clearfix">

		<?php foreach($images_data as $image):?>

		<div class="event" id="event-">
		
			<div class="event-image"><img src="<?php print $image['image_path'] ?>" /></div>
			
			<div class="event-text">
				<h3><?php print $image['event_title'] ?></h3>
				<?php print $image['image_path'] ?><br />
				<?php print $image['event_copy'] ?>
			</div>
		
		</div>
		
		<?php endforeach; ?>
	</div>
</div>

THIS IS RELATED ARTICLES LIST:
<?php foreach($related_content as $related_node):?>
	<?php print l($related_node['title'],'node/'.$related_node['nid'],array('attributes' => array('class' =>'anyclassyouwant'))); ?>
	<br/>
<?php endforeach; ?>
 
<br/><br/>

<?php if($is_admin_editor == 1):?>
And these are links for editing/deleting/adding timelines, they become visible only if admin or editor look at the page. This is the only way for them to edit individual timelines
because of nature of how they work =(. So we gotta create links for them. We have to render them in a nice table or smth<br>

    <?php foreach($images_data as $image):?>
         Event Title: <?php print $image['event_title'] ?> -- <?php print l('edit','field-collection/field-timeline-event/'.$image['event_nid'].'/edit');?>
         -- <?php print l('delete','field-collection/field-timeline-event/'.$image['event_nid'].'/delete');?>
    <?php endforeach;?><br/>

    <?php print l('ADD NEW TIMELINE EVENT','field-collection/field-timeline-event/add/node/'.$timeline_nid);?>
<?php endif;?>



    