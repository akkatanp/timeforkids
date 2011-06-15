<div id="mymodaldiv">
  
</div>
<form action="" method="post">
  <div id="savsearches">
   <?php foreach($saved_searches as $k=>$search):?>
    <div class="savedsrch">
      <a href="<?php echo $search['url'];?>"><?php echo $search['name'];?></a>
      <input type="checkbox" name="<?php echo $search['saved_search_id'];?>"  id="<?php echo $search['saved_search_id'];?>">
    </div>
   <?php endforeach;?>

  </div>
  <div class="submbtn">
    <input type="submit" value="Submit" />
  </div>
</form>
<br/>
______________________________
<br/>
<div class="savebtn">
   <?php echo ctools_modal_text_button(t('Save your search(modal)'), 'myfr/ajax/saves/'.$current_str, t('Save your search'),  'ctools-modal-ctools-sample-style'); ?>
</div>
