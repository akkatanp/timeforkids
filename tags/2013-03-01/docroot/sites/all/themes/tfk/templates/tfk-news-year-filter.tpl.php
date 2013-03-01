
<div id="news-sidebar-year-filter">
<form action="">
	<p>Select a date range</p>
	<label for="yeardropdown">Year</label>
	<select id="yeardropdown" name="listofyears">
    <?php foreach($list_of_years as $year): ?>
		<option id="<?php echo $year;?>"><?php echo $year;?></option>
    <?php endforeach; ?>
	</select>
	<div class="button-holder">
		<input type="button" id="yearsubmit" onClick="location.href='<?php echo url('news-archive')?>/'+ document.getElementById('yeardropdown').value;" value="Submit Date Range">	
	</div>
	<div class="clearfix"></div>
</form>
</div>