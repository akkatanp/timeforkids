
<form action="">
  <select id="yeardropdown" name="listofyears">
    <?php foreach($list_of_years as $year): ?>
      <option id="<?php echo $year;?>"><?php echo $year;?></option>
    <?php endforeach; ?>
  </select>

  <input type="button" onClick="location.href='<?php echo url('news-archive')?>/'+ document.getElementById('yeardropdown').value;" value="Submit">
</form>