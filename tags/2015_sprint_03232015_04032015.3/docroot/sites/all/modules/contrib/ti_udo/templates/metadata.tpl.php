<!-- Begin Metadata Object -->
<?php
  global $ti_udo_metadata;
  if (!empty($ti_udo_metadata)) : ?>
  <script type="text/javascript">
    window.Ti = window.Ti || {};
    window.Ti.metadata = <?php print json_encode($ti_udo_metadata); ?>;
    window.Ti.udo = <?php print json_encode($udo); ?>;
  </script>
<?php endif; ?>
<!-- End Metadata Object -->
