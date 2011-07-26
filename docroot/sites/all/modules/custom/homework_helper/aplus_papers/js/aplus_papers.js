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
        if ($("input").hasClass('aplus-name') && $('.aplus-name').val() || $("input").hasClass('aplus-date') && $('.aplus-date').val()) {
          return 'If you leave this page, you will lose everything you have written so far. Are you sure you want to leave?';
        }  
        else {
          step = false;
        }  
        
        if (step == true) {
          return 'If you leave this page, you will lose everything you have written so far. Are you sure you want to leave?';
        }
      }
    }
  }
}(jQuery));
