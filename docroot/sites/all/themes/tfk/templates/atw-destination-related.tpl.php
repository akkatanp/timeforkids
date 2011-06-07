<?php if(count($related_data['worksheets'])> 0):?>
	<h3 class="related"><?php echo $related_data['resources_label']; ?></h3>
	<ul class="menu related">
	<?php foreach($related_data['worksheets'] as $worksheet):?>
		<li><?php echo l($worksheet['title'],$worksheet['filepath'],array('attributes' => array('class' => array('worksheettitle'))));?></li>
	<?php endforeach;?>
	</ul>
<?php endif;?>

<?php if(count($related_data['related_articles'])> 0):?>
	<h3 class="related">Related Articles</h3>
	<ul class="menu related">
	<?php foreach($related_data['related_articles'] as $article):?>
		<li><?php echo l($article['title'],$article['alias'],array('attributes' => array('class' => array('articletitle'))));?></li>
	<?php endforeach;?>
	</ul>
<?php endif;?>
