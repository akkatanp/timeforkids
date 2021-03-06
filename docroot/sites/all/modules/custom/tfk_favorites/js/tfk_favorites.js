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



//$(document).ready(function(){
//
//  $('#delfavs').click(function(){
//
//    var confirmation = confirm("Are you sure you want to delete your favorites??");
//    if(confirmation) {
//      $.ajax({
//            url: '/tfkfav/ajax/del',
//            success: function(data) {
//              var pathname = window.location.pathname;
//              location.href = pathname;
//            }
//          });
//    }
//  });
//});



(function ($) {
  Drupal.behaviors.tfk_favorites = {
    attach: function (context, settings) {

      // Delete favorites listener.
      $('#delfavs', context).click(function(){
        var confirmation = confirm("Are you sure you want to delete your favorites?");
        if(confirmation) {
          $.ajax({
            url: settings.tfk_favorites.ajax_callback,
            success: function(data) {
              if(data == settings.tfk_favorites.success){
                $('.throbber').hide();

                if(settings.tfk_favorites.path != 'my-favorites'){
                  location.href = settings.tfk_favorites.path;
                }else{
                    $('.view-user-favorites').html('<div class="clearedwrapper">Your favorites have been cleared.<br/><div class="favgobackbtn"><a href="'+ settings.tfk_favorites.ref +'">Go Back</a></div>');
                   // $('.view-user-favorites').html('<div class="clearedwrapper">Your favorites have been cleared.</div>');
                }
                
              }
            }
          });
          $('.throbber').show();
        }
      });
      
      // Delete this search.
      $('#deleteThisSearch', context).click(function(event) {
        
        var selected = false;
        $('.savedsrch-checkbox', context).each(function(index, Element) {
          //console.log(index + ': ' + $(this).text());
          //console.log(Element.val());
          //console.log($(this).val());
          
          if($(Element.firstChild).attr('checked')) {
            selected = true;
          }
        });
        
        if(!selected) {
          alert("Choose a saved search item to delete.");
          event.preventDefault();
        } else {
          var confirmation = confirm("Are you sure you want to delete this search?");
          if(!confirmation) {
            event.preventDefault();
          } else {
            // Let it run it's course.
          }
        }

      });  

    }
  };
}(jQuery));