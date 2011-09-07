<?php
// $Id: poll-results.tpl.php,v 1.3 2008/10/13 12:31:42 dries Exp $

/**
 * @file
 * Default theme implementation to display the poll results in a block.
 *
 * Variables available:
 * - $title: The title of the poll.
 * - $results: The results of the poll.
 * - $votes: The total results in the poll.
 * - $links: Links in the poll.
 * - $nid: The nid of the poll
 * - $cancel_form: A form to cancel the user's vote, if allowed.
 * - $raw_links: The raw array of links.
 * - $vote: The choice number of the current user's vote.
 *
 * @see template_preprocess_poll_results()
 */
?>
<div class="tfkpoll">
    <div class="tfkpollheading"><?php print $customheading;?></div>
    <div class="tfkpolltitle"><?php print $title;?></div>
    <div class="poll">
      <?php print $results; ?>
      <div class="total" style="margin-right:38px;margin-bottom:10px;">
        <?php print t('Total votes: @votes', array('@votes' => $votes)); ?>
      </div>
      <?php if (!empty($cancel_form)): ?>
        <?php print $cancel_form; ?>
      <?php endif; ?>
    </div>
</div> 




<?php
// just in case  keeping old tpl 
if('old' == 'new'):
?>
/**
 * @file
 * Default theme implementation to display the poll results in a block.
 *
 * Variables available:
 * - $title: The title of the poll.
 * - $results: The results of the poll.
 * - $votes: The total results in the poll.
 * - $links: Links in the poll.
 * - $nid: The nid of the poll
 * - $cancel_form: A form to cancel the user's vote, if allowed.
 * - $raw_links: The raw array of links.
 * - $vote: The choice number of the current user's vote.
 *
 * @see template_preprocess_poll_results()
 */
?>
<div class="poll">
  <h3 class="title"><?php print $title ?></h3>
  <?php print $results ?>
</div>
<!--
<div class="poll">
  <?php print $results; ?>
  <div class="total">
    <?php print t('Total votes: @votes', array('@votes' => $votes)); ?>
  </div>
  <?php if (!empty($cancel_form)): ?>
    <?php print $cancel_form; ?>
  <?php endif; ?>
</div>
-->    

<?php endif;?>