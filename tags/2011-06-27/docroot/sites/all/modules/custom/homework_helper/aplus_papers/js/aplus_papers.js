/**
 * @file
 * Warn users when navigating away from paper form.
 */

(function ($) {
  Drupal.behaviors.aplusWarning = {
    attach: function(context, settings) {
      var step = true;

      $('#aplus-print-save-buttons input, .a-plus-overview a').click(function() {
        step = false;
      });  

      window.onbeforeunload = function() {
        if (step == true) {
          return 'If you leave the page you will lose everything you have written and worked on so far. Are you sure you want to leave?';
        }
      }
    } 
  }
}(jQuery));
