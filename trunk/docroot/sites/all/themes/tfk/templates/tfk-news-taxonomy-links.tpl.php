<?php echo l('ALL NEWS','news-archive');?>
<br/>
______________________
<br/>
<?php foreach($terms_with_articles as $term): ?>
  <?php echo l($term['term_name'],'news-archive/'.strtolower($term['term_name']),array('attributes' => array('class'=>array($term['class']))));?><br/>
<?php endforeach; ?>
