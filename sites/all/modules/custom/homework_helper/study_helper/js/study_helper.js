/**
 * @file
 * Copy the obscure URL field to the clipboard.
 */

(function ($) {
  Drupal.behaviors.studyHelperCopy = {
    attach: function(context, settings) {
      var value = $('.study-helper-url input').val();
      ZeroClipboard.setMoviePath('/sites/all/libraries/zeroclipboard/ZeroClipboard10.swf');
      var clip = new ZeroClipboard.Client();
      clip.setText(value);
      clip.glue('study-helper-copy');
    }
  }
}(jQuery));
