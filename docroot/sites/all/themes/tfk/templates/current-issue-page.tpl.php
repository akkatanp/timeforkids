<?php 
//if (!empty($magazine_data)) {
//    print_r($magazine_data);
//}
?>

<?php if (!empty($magazine_data)) { ?>
<div id="tfk-current-issue">
	<h3>TFK Current Issue</h3>
        <div id="tfk-current-issue-body">
		<img src="<?php print $magazine_data[0]['magazine_cover_image']; ?>" />
		<strong>Grade Level <?php print $magazine_data[0]['magazine_grade_level']; ?></strong><br />
		<?php print $magazine_data[0]['magazine_title']; ?><br />
		<a href="/<?php print $magazine_data[0]['magazine_path']; ?>">View Issue</a>
		<br clear="all" />
	</div>
</div>
<?php } ?>