<?php if(!empty($articles)):?>

TITLE OF THE MINISITE (HAS TO BE IN RED):<?php echo $articles[0]['minisite_title'];?><br />


    <?php foreach($articles as $article):?>

        <?php echo l($article['title'],'node/'.$article['nid']);?><br />

    <?php endforeach; ?>
<?php endif;?>