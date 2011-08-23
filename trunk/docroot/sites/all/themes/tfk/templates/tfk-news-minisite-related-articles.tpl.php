
<?php if(!empty($articles)):?>
	<div class="content">

	
	<?php echo l($articles[0]['minisite_title'],'node/'.$articles[0]['minisite_nid']);?>

		<ul class="menu">
		<?php foreach($articles as $article):?>

			<?php echo l($article['title'],'node/'.$article['nid']);?><br />

		<?php endforeach; ?>
		
		</ul>
	</div>
<?php endif;?>