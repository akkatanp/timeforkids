/**
 * @file
 * Warn users when navigating away from paper form.
 */

(function ($) {
  Drupal.behaviors.aplusWarning = {
    attach: function(context, settings) {
      var step = true;

      $('.aplus-print-save-buttons input, .a-plus-overview a').click(function() {
        step = false;
      });

      window.onbeforeunload = function() {
        if ($("input").hasClass('aplus-name') && $('.aplus-name').val() || $("input").hasClass('aplus-date') && $('.aplus-date').val()) {
          return 'If you leave this page, you will lose everything you have written so far. Are you sure you want to leave?';
        }
        else if ($("input").hasClass('aplus-name') || $("input").hasClass('aplus-name') || $('.aplus-start-button').length) {
          step = false;
        }
        if (step == true) {
          return 'If you leave this page, you will lose everything you have written so far. Are you sure you want to leave?';
        }
      }
    }
  }

  /**
   * Override to add a detach to the behavior to make wysiwyg work in ajax form.
   */
  Drupal.behaviors.attachWysiwyg = {
    attach: function(context, settings) {
      // This breaks in Konqueror. Prevent it from running.
      if (/KDE/.test(navigator.vendor)) {
        return;
      }

      $('.wysiwyg', context).once('wysiwyg', function() {
        if (!this.id || typeof Drupal.settings.wysiwyg.triggers[this.id] === 'undefined') {
          return;
        }
        var $this = $(this);
        var params = Drupal.settings.wysiwyg.triggers[this.id];
        for (var format in params) {
          params[format].format = format;
          params[format].trigger = this.id;
          params[format].field = params.field;
        }
        var format = 'format' + this.value;
        // Directly attach this editor, if the input format is enabled or there is
        // only one input format at all.
        if ($this.is(':input')) {          
          Drupal.wysiwygAttach(context, params[format]);
        }

        // Detach any editor when the containing form is submitted.
        $('#' + params.field).parents('form').submit(function (event) {
          // Do not detach if the event was cancelled.
          if (event.originalEvent.returnValue === false) {
            return;
          }
          Drupal.wysiwygDetach(context, params[format]);
        });
      });
    },
    detach: function(context, settings) {
      for (var params in Drupal.settings.wysiwyg.triggers) {
        for (var format in Drupal.settings.wysiwyg.triggers[params]) {
          if (Drupal.settings.wysiwyg.triggers[params][format].format) {
            Drupal.wysiwygDetach(context, Drupal.settings.wysiwyg.triggers[params][format]);
          }
        }
      }
    }
  };
  
}(jQuery));
