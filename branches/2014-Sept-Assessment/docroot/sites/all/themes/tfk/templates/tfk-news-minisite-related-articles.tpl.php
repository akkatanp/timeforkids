<?php 
flog_it("tfk-news-minisite-related-articles.tpl.php: articles:");
//flog_it($articles);

if(!empty($articles)):?>
	<div class="content">

	<?php echo l($articles[0]['minisite_title'],'node/'.$articles[0]['minisite_nid']);?>
	
		<ul class="menu">
		<?php foreach($articles as $article):?>
                        <?php flog_it(l($article['title'],'node/'.$article['nid'])); ?>
			<li><?php echo l($article['title'],'node/'.$article['nid']);?></li>

		<?php endforeach; ?>
		</ul>
		
	</div>
<?php endif;?>