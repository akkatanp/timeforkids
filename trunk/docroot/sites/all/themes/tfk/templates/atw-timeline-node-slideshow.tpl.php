<?php //echo $cust_node_title;?>

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
		
		<div class="event <?php print $image['image_shape'] ?>" id="event-<?php print $i ?>"<?//php if ($i != 0) echo ' style="display: none;"'; ?>>
		
			<div class="event-image"><img src="<?php print $image['image_path'] ?>" /></div>

			<?php if(isset($image['image_credit'])):?><div class="event-credit"><?php print $image['image_credit'];?></div><?php endif;?>
			<div class="event-text">
				<h3><?php print $image['event_title'] ?></h3>
				<?php print $image['event_copy'] ?>
				
				<?php if($is_admin_editor == 1):?>
				<?php
                                //echo $return_path;
                                echo '<a href="'.url('field-collection/field-timeline-event/'.$image['event_nid'].'/edit',array('query'=>array('destination' => $return_path))).'">[edit]</a>';
                                echo ' - <a href="'.url('field-collection/field-timeline-event/'.$image['event_nid'].'/delete',array('query'=>array('destination' => $return_path))).'">[delete]</a>';
                                ?>
                                <!-- MIKE : <?php print $image['image_shape'] // can be "undefined" , "horizontal","vertical","square" ?> -->
				<?php endif;?>
			</div>
			<div class="clearfix"></div>
		</div>
		
		<?php $i++; ?>
		<?php endforeach; ?>
		<div class="clearfix"></div>
	</div>

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



    