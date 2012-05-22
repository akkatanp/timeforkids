<script>
  $(document).ready(function(){
    $('#edit-search-block-form--2').val('Search');
    $('#edit-search-block-form--2').focusin(function() {
        if($('#edit-search-block-form--2').val() == 'Search'){
          $('#edit-search-block-form--2').val('');
        }
    });
    $('#edit-search-block-form--2').focusout(function() {
        if($('#edit-search-block-form--2').val() == ''){
          $('#edit-search-block-form--2').val('Search');
        }
    });
});
</script>
<h2 class="not-found-header">Oops!</h2>
<p class="not-found-not-available">Looks like the page you are looking for has been moved, or is no longer available.</p>
<p><span class="not-found-click"><a href="/">Click here</a></span><span class="not-found-go-back"> to go back to the <strong>Homepage</strong></span></p>
<p class="not-found-or">or</p><p class="not-found-run-search">run a search here.</p>
<?php
$block = module_invoke('search', 'block_view', 'search');
$block['content']['actions']['submit']['#value'] = 'Go';
print render($block); 
?>