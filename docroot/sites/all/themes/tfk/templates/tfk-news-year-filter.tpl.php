<script>
  $(document).ready(function(){
    alert(22);
    $('#yearsubmit').click(function(){

      var yr = $('#yeardropdown').val();
      alert(33);
      alert(yr);
    });
  });
  //onClick="location.href='<?php echo url('news-archive')?>/'+ document.getElementById('yeardropdown').value;" 
</script>


<div id="news-sidebar-year-filter">
  
<form action="">
	<p>Select a date range</p>
	<label for="yeardropdown">Year</label>
	<select id="yeardropdown" name="listofyears">
          <option id="news-all" value="all">All</option>
    <?php foreach($list_of_years as $year): ?>
		<option id="<?php echo $year;?>"><?php echo $year;?></option>
    <?php endforeach; ?>
	</select>
	<div class="button-holder">
		<input type="button" id="yearsubmit" value="Submit Date Range">	
	</div>
	<div class="clearfix"></div>
</form>
</div>