/**
 * @file
 * Warn users when navigating away from paper form.
 */

(function ($) {
  Drupal.behaviors.aplusWarning = {
    attach: function(context, settings) {
      var step = true;
      
      $('#edit-submit').click(function() {
        step = false;
      });  

      window.onbeforeunload = function() {
        if (step == true) {
          return 'You have not completed your paper. Are you sure you want to leave the page and lose your data?';
        }
      }

    } 
  }
}(jQuery));
