<?php
/**
 * @file
 * Template used for the Magazine article issue block.
 * Called from the "tfk_magazine_issue_block" delta on the
 * tfk_search_block_view() function, tfk_search.module.
 */
?>
<div class="head div">
  <h2>ISSUE: </h2>
  <h3><?php print $issue; ?></h3>
  <div><?php print $grade_level; ?></div>
</div>
<div class="cover-story div">
	<?php if(!empty($cover_stories)): ?>
		<h3>COVER STORY:</h3>
    <ul class="cover-story-list">
  	  <?php foreach($cover_stories as $story): ?>
    		<li><?php print $story; ?></li>
    	<?php endforeach; ?>
  	</ul>
	<?php endif; ?>
</div>
<div class="more-news div">
	<?php if(!empty($more_news)): ?>
		<h3>MORE NEWS:</h3>
    <ul class="cover-story-list">
  	  <?php foreach($more_news as $news_item): ?>
    		<li><?php print $news_item; ?></li>
    	<?php endforeach; ?>
  	</ul>
	<?php endif; ?>
</div>