<?php if(count($related_data['worksheets'])> 0):?>
    <h3><?php echo $related_data['resources_label']; ?></h3>
        <?php foreach($related_data['worksheets'] as $worksheet):?>
            <?php echo l($worksheet['title'],$worksheet['filepath'],array('attributes' => array('class' => array('worksheettitle'))));?><br/>
        <?php endforeach;?>
<?php endif;?>
<br/>
<?php if(count($related_data['related_articles'])> 0):?>
    <h3>Related Articles</h3>
        <?php foreach($related_data['related_articles'] as $article):?>
            <?php echo l($article['title'],$article['alias'],array('attributes' => array('class' => array('articletitle'))));?><br/>
        <?php endforeach;?>
<?php endif;?>

