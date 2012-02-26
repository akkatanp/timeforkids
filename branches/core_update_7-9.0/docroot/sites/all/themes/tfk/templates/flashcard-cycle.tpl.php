<?php
/**
 * @file
 * Display the Flashcard set.
 */
?>

<div class="flashcard-cycle clearfix">
  <div class="flashcard-cycle-buttons flashcard-cycle-toolbar clearfix">
    <?php if ($edit = render($edit)): ?>
      <?php print $edit; ?>
    <?php endif; ?>
  </div>
  <div class="flashcard-help-button">
    <?php if ($help = render($help)): ?>
      <?php print $help; ?>
    <?php endif; ?>
  </div>
  <div class="flashcard-cycle-cards">
    <?php foreach ($items as $item): ?>
      <?php 
      $question = $item; 
      unset($question['#items'][0]['children']);
      unset($question['#items'][0]['class']);
      $question['#attributes']['class'][] = 'front';
      $answer = $item;
      $answer['#attributes']['class'][0] = 'answer';
      $answer['#attributes']['class'][] = 'back';
      ?>
    <div class="flashcard-cycle-card">
      <div class="card-front">
        <?php print render($question); ?>
      </div>
      <div class="card-back">
        <?php print render($answer); ?>
      </div>
    </div>
    <?php endforeach; ?>
  </div>
  <?php if ($pager = render($pager)): ?>
  <div class="flashcard-cycle-buttons flashcard-cycle-pager clearfix">
    <?php print $pager; ?>
  </div>
  <?php endif; ?>
  <?php if ($mark = render($mark)): ?>
  <div class="flashcard-cycle-mark clearfix">
    <?php print $mark; ?>
  </div>
  <?php endif; ?>
  <?php if ($mode = render($mode)): ?>
  <div class="flashcard-cycle-buttons flashcard-cycle-mode clearfix">
    <?php print $mode; ?>
  </div>
  <?php endif; ?>
  <?php if ($restart = render($restart)): ?>
    <?php print $restart; ?>
  <?php endif; ?>
</div>
