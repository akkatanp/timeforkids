<?php //echo $cust_node_title;?>

	<div id="event-year"></div>
	<div id="line-above"></div>
	<div id="event-timeline-bar-container">
		<div id="prev"></div>
		<div id="event-timeline-bar">
			<div id="inner"></div>
		</div>
		<div id="next"></div>
	</div>
	<div id="line-below"></div>
	<div id="event-container">
		<?php $i = 0; ?>
		<?php foreach($images_data as $image):?>
		
		<div class="event <?php print $image['image_shape'] ?>" id="event-<?php print $i ?>" style="visibility: hidden;">
                    <?php if(isset($image['image_path'])):?>
			<div class="event-image">
				<?php $imgStr = substr($image['image_path'], -6); ?>
				<?php if ($imgStr != 'public' && $image['image_attached'] == 1 ): ?>
				<img src="<?php print $image['image_path']; ?>" />
				<?php if(isset($image['image_credit'])):?><div class="event-credit"><?php print $image['image_credit'];?></div><?php endif;?>
				<?php endif; ?>
			</div>
                    <?php endif;?>

			
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
			<div class="clearfix" style="clear: both;"></div>
		</div>
		
		<?php $i++; ?>
		<?php endforeach; ?>
		<div class="clearfix" style="clear: both;"></div>
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



    