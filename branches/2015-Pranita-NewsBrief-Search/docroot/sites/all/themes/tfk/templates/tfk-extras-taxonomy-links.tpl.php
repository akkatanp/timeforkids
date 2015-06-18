<?php echo l('PROGRAMS','extras');?>

<ul class="menu">
<?php foreach($terms_with_articles as $term): ?>
  <li><?php echo l($term['term_name'],'extras/'.strtolower($term['term_name']),array('attributes' => array('class'=>array($term['class']))));?></li>
<?php endforeach; ?>
</ul>