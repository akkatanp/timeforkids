<?php if(!empty($minisites)):?>

	<div class="view-header"><p>MORE TFK MINI-SITES</p></div>
	
	<div class="view-content">
    <?php foreach($minisites as $minisite):?>
	
		<div class="views-row">
		
			<?php if(isset($minisite['thumb_path']) && !empty($minisite['thumb_path'])):?>
			<div class="views-field-field-minisite-thumbnail-image">
				<img src="<?php echo $minisite['thumb_path'];?>"/>
			</div>
			<?php endif;?>
				
			<div class="views-field-title">
				<?php echo l($minisite['title'],'node/'.$minisite['nid']);?>
			</div>
		
        </div>
	
    <?php endforeach;?>
	</div>
	
	<div class="view-footer"><p><a href="/mini-sites">See More Mini-Sites</a></p></div>
<?php endif; ?>
