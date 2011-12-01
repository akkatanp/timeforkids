/**
 * @file TFK Search behaviors.
 */
(function ($) {

  Drupal.behaviors.tfk_search = {
    attach: function (context, settings) {

      // Handlers for search input fields.
      var sFields = new Array();
      $(".search-form input.form-text", context).each(function(index, Element) {
        
        // Convert Element into a JQuery object and store it in an array to
        // reduce expensive calls to $.
        sFields[index] = $(Element, context);
        
        sFields[index].val('Search').focus(function() {   
          if(sFields[index].val() == 'Search') {
            sFields[index].val('');
          }
        });
        
      });
      
      // JQuery UI accordion for facet blocks.
      if(settings.tfk_search.facet_accordion == true) {
        $(".region-sidebar-first .block h2", context).click(function() {
        
        target = $(this);
        
        if(!target.hasClass('closed')) {
          target.css('background', 'url("/'+ settings.tfk_search.arrow_closed +'") no-repeat scroll 0 0 transparent');
        } else {
          target.css('background', 'url("/'+ settings.tfk_search.arrow_open +'") no-repeat scroll 0 0 transparent');
        }
        
        // Close facet block.
        target.toggleClass('closed');
        target.parent().children('.content').slideToggle('fast');

        });
      }

    }//End attach.
  };
}(jQuery));
