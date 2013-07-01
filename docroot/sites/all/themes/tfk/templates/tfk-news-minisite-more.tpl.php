<?php if(!empty($minisites)):?>

	<div class="view-header"><p>MORE TFK MINI-SITES</p></div>
	
	<div class="view-content">
    <?php foreach($minisites as $minisite):?>
	
		<div class="views-row">
		
			<?php if(isset($minisite['thumb_path']) && !empty($minisite['thumb_path'])):?>
			<div class="views-field-field-minisite-thumbnail-image">
				<?php 
				  $alias = drupal_get_path_alias('node/'.$minisite['nid']);
				  echo "<a href=\"/".$alias."\"><img src=\"".$minisite['thumb_path']."\"></a>"; 
				?>
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
