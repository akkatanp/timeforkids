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
<?php endif; ?>
