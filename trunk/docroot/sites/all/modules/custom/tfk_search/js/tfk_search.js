/**
 * @file TFK Search behaviors.
 */
(function ($) {

  Drupal.behaviors.tfk_search = {
    attach: function (context, settings) {

      var sFields = new Array();
      $(".search-form input.form-text", context).each(function(index, Element) {
        
        // Convert Element into a JQuery object and store it in an array to
        // reduce expensive calls to $.
        sFields[index] = $(Element, context);
        
        sFields[index].val('Search').blur(function() {
          if($.trim(sFields[index].val()) == '') {
            sFields[index].val('Search');
          }
        }).focus(function() {   
          if(sFields[index].val() == 'Search') {
            sFields[index].val('');
          }
        });
        
      });      
      
    }
  };
}(jQuery));
