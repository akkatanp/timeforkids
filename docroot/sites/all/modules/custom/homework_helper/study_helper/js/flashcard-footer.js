/**
 * @file
 * Override mistakenly labeled 'external' links from tfk-jump.js.
 */

(function ($) {
  Drupal.behaviors.flashcardFooter = {
    attach: function(context, settings) {
      $('.flashcard-cycle a.external').removeClass('external');
    }
  }
}(jQuery));
