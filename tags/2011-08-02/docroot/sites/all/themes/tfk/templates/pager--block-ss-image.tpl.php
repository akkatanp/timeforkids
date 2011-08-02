<?php
	// Custom Pager template for the slideshows
	global $pager_page_array, $pager_total;
	// current is the page we are currently paged to
	// The array index can be ignored.  This is used by the defaukt pager to identify multiple
	// pagers being displayed.
  	$pager_current = $pager_page_array[$variables['element']] + 1;
  	$pager_total = $pager_total[$variables['element']];
	// create the Previous and Next Links
	$pager_previous = ($pager_current == 1 ? $pager_total-1 : $pager_current-2);
	$pager_next = ($pager_current == $pager_total ? 0 : $pager_current); 
?>
<div class="slideshow-pager">
	<div class="previous"><a href="?page=<?php print $pager_previous;?>" alt="Previous">Previous</a></div>
	<div class="position"><?php print $pager_current;?> of <?php print $pager_total;?></div>
	<div class="Next"><a href="?page=<?php print $pager_next;?>" alt="Next">Next</a></div>
</div>
