<?php
/**
 * Hide related content pdfs to anonymous users.
 */
?>

<?php global $user; ?>
<?php if (!empty($user->uid)): ?>
  <?php print $output; ?>
<?php endif; ?>
