
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>
    <div class="tfkpoll">
      <?php if(!$variables['standalone']): ?><div class="tfkpollheading">TFK Poll</div><?php endif; ?>
      <!-- <div class="tfkpolltitle"><?php print $variables['title'];?></div>-->
      <div class="tfkpollimage">
        <script type="text/javascript" charset="utf-8" src="http://static.polldaddy.com/p/<?php print $variables['poll-id']; ?>.js"></script>
        <noscript><a href="http://polldaddy.com/poll/<?php print $variables['poll-id']; ?>/"><?php print $variables['title']; ?></a></noscript>
      </div>
    </div>
  </div>
</div>
<!-- /.node -->