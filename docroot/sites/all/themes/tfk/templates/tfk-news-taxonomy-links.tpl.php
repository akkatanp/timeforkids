<?php
if(isset($term['class'])) {
  $attributes = array('attributes' => array('class' => array($term['class'])));
} else {
  $attributes = array();
}
?>


<?php echo l('NEWS ARCHIVE','news-archive');?>

<ul class="menu">
  <li><?php echo l('All News','news-archive/all',array('attributes' => array('class'=>array($term['class']))));?></li>
<?php foreach($terms_with_articles as $term): ?>
  <li><?php echo l($term['term_name'],'news-archive/'.strtolower($term['term_name']),array('attributes' => array('class'=>array($term['class']))));?><?php print_r (array('attributes' => array('class'=>array($term['class']))));?><?php print_r($attributes);?></li>
<?php endforeach; ?>
  
  <?php if($display_poll_link == 1):?>
    <li><?php echo l('Polls','news-archive/polls',array('attributes' => array('class'=>'')));?>
  <?php endif; ?>
</ul>