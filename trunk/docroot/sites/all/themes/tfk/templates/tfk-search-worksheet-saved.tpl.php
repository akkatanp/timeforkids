<div id="mymodaldiv">
  
</div>
<?php if (count($saved_searches) > 0 ):?>
<form action="" method="post">
  <div id="savsearches">
   <?php foreach($saved_searches as $k=>$search):?>
    <div class="savedsrch">
      <div class="savedsrch-label"><a href="<?php echo $search['url'];?>"><?php echo $search['name'];?></a></div>
      <div class="savedsrch-checkbox"><input type="checkbox" name="<?php echo $search['saved_search_id'];?>"  id="<?php echo $search['saved_search_id'];?>"></div>
    </div>
   <?php endforeach;?>

  </div>
  <div class="submbtn">
    <input id="deleteThisSearch" type="image" src="/sites/all/modules/custom/tfk_search/images/delete-this-search.png" />
  </div>
</form>
<?php endif; ?>
