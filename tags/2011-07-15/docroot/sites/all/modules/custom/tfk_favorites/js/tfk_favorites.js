/**
 * @file
 * Used by block template for theme('tfk_favorites_links', $variables).
 *
 * @see tfk_favorites_theme()
 * @see tfk_favorites_block_view()
 * @see _tfk_favorites_links_block_content()
 * @see tfk-favorites-links.tpl.php
 */
 
/**
 * Favorites Behavior.
 */
(function ($) {
  Drupal.behaviors.tfk_favorites = {
    attach: function (context, settings) {

      $('#delfavs').click(function(){
        $('.throbber').show();
        $.ajax({
          url: settings.tfk_favorites.ajax_callback,
          success: function(data) {
            if(data == settings.tfk_favorites.success){
              $('.throbber').hide();
              location.href = settings.tfk_favorites.ref;
            }
          }
        });
      });

    }
  };
}(jQuery));