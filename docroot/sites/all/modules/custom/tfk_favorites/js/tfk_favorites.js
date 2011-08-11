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



$(document).ready(function(){

  $('#delfavs').click(function(){

    var confirmation = confirm("Are you sure you want to delete your favorites??");
    if(confirmation) {
      $.ajax({
            url: '/tfkfav/ajax/del',
            success: function(data) {
              alert(data);
              location.href = data;
            }
          });
    }
  });
});



(function ($) {
  Drupal.behaviors.tfk_favorites = {
    attach: function (context, settings) {

      // Delete favorites listener.
//      $('#delfavs', context).click(function(){
//        var confirmation = confirm("Are you sure you want to delete your favorites?");
//        if(confirmation) {
//          $.ajax({
//            url: settings.tfk_favorites.ajax_callback,
//            success: function(data) {
//
//              alert(data);
//              if(data == settings.tfk_favorites.success){
//                $('.throbber').hide();
//                location.href = settings.tfk_favorites.ref;
//              }
//            }
//          });
//          $('.throbber').show();
//        }
//      });
      
      // Delete this search.
      $('#deleteThisSearch', context).click(function(event){
        var confirmation = confirm("Are you sure you want to delete this search?");
        if(!confirmation) {
          event.preventDefault();
        } else {
          // Let it run it's course.
        }
      });  

    }
  };
}(jQuery));