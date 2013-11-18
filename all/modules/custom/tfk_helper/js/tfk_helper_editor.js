/**
 * Favorites Behavior.
 */
(function ($) {
  Drupal.behaviors.tfk_helper = {
    attach: function (context, settings) {
      settings.wysiwyg.configs.ckeditor.formattext_field.height = 50;
      settings.wysiwyg.configs.ckeditor.formatfull_html.height = 300;
    }
  }
}(jQuery));