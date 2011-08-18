Edit me in : tfk-news-minisite-related-articles.tpl.php
<?php if(!empty($articles)):?>

TITLE OF THE MINISITE (HAS TO BE IN RED):<?php echo l($articles[0]['minisite_title'],'node/'.$articles[0]['minisite_nid']);?><br />


    <?php foreach($articles as $article):?>

        <?php echo l($article['title'],'node/'.$article['nid']);?><br />

    <?php endforeach; ?>
<?php endif;?>