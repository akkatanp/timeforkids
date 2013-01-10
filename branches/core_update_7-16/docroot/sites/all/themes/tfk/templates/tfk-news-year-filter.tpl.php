<script>
//  $(document).ready(function(){
//    $('#yearsubmit').click(function(event){
//      event.preventDefault();
//
//      var yr = $('#yeardropdown').val();
//      location.href= '<?php echo url('news-archive')?>/' + yr;
//    });
//  });
</script>


<div id="news-sidebar-year-filter">
  
<form action="">
	<p>Select a date range</p>
	<label for="yeardropdown">Year</label>
	<select id="yeardropdown" name="listofyears">
          <option id="news-all" value="all">All</option>
    <?php foreach($list_of_years as $year): ?>
		<option id="<?php echo $year;?>" <?php if(isset($selected_year) && $selected_year == $year){echo 'selected';}?>  ><?php echo $year;?></option>
    <?php endforeach; ?>
	</select>
	<div class="button-holder">
		<input type="button" id="yearsubmit" value="Submit Date Range">	
	</div>
	<div class="clearfix"></div>
</form>
</div>