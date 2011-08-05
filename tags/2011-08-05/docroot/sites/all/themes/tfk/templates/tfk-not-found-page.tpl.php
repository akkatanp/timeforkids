<h2 class="not-found-header">Oops!</h2>
<p class="not-found-not-available">Looks like the page you are looking for has been moved, or is no longer available.</p>
<p><span class="not-found-click"><a href="/">Click here</a></span> to go back to the <strong>Homepage</strong></p>
<p class="not-found-or">or</p><p>run a search here.</p>
<?php
$block = module_invoke('search', 'block_view', 'search');
print render($block); 
?>