Edit me in : tfk-news-minisite-more.tpl.php
<?php if(!empty($minisites)):?>
    <?php foreach($minisites as $minisite):?>
        <div>
            <?php if(isset($minisite['thumb_path']) && !empty($minisite['thumb_path'])):?>
                <div>
                   <img src="<?php echo $minisite['thumb_path'];?>"/>
                </div>
            <?php endif;?>
            <?php echo l($minisite['title'],'node/'.$minisite['nid']);?>
            
        </div>
    <?php endforeach;?>
<br />
<a href="/mini-sites">See More Mini-Sites</a>
<?php endif; ?>
