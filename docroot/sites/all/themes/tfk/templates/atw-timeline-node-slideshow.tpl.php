Images with data ( SEE TEMPLATE atw-timeline-node-slideshow.tpl.php):<br>

<?php foreach($images_data as $image):?>
    Event Title(like 1312 bc.) : <?php print $image['event_title'] ?><br/>
    Event Copy : <?php print $image['event_copy'] ?><br/>
    Event ImagePath(already ran through resizer) : <img src="<?php print $image['image_path'] ?>"/><br/>
<?php endforeach;?>


    <br/>
    THIS IS RELATED ARTICLES LIST:
    <?php foreach($related_content as $related_node):?>
        <?php print l($related_node['title'],'node/'.$related_node['nid'],array('attributes' => array('class' =>'anyclassyouwant'))); ?>
        <br/>
    <?php endforeach; ?>
 
    <br/><br/>

<?php if($is_admin_editor == 1):?>
And these are links for editing/deleting/adding timelines, they become visible only if admin or editor look at the page. This is the only way for them to edit individual timelines
because of nature of how they work =(. So we gotta create links for them.<br>

    <?php foreach($images_data as $image):?>
         Event Title: <?php print $image['event_title'] ?> -- <?php print l('edit','field-collection/field-timeline-event/'.$image['event_nid'].'/edit');?>
         -- <?php print l('delete','field-collection/field-timeline-event/'.$image['event_nid'].'/delete');?>
    <?php endforeach;?><br/>

    <?php print l('ADD NEW TIMELINE EVENT','field-collection/field-timeline-event/add/node/'.$timeline_nid);?>
<?php endif;?>


    