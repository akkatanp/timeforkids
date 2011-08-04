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
      
      // tfks313 3.b. Reload the page when the user saves the search to avoid markup issues.
      Drupal.CTools.Modal.unmodalContent = function(content, animation, speed) {
        // If our animation isn't set, make it just show/pop
        if (!animation) { var animation = 'show'; } else {
          // If our animation isn't "fade" then it always is show
          if (( animation != 'fadeOut' ) && ( animation != 'slideUp')) animation = 'show';
        }
        // Set a speed if we dont have one
        if ( !speed ) var speed = 'fast';

        // Unbind the events we bound
        $(window).unbind('resize', modalContentResize);
        $('body').unbind('focus', modalEventHandler);
        $('body').unbind('keypress', modalEventHandler);
        $('.close').unbind('click', modalContentClose);
        $(document).trigger('CToolsDetachBehaviors', $('#modalContent'));

        // jQuery magic loop through the instances and run the animations or removal.
        content.each(function(){
          if ( animation == 'fade' ) {
            $('#modalContent').fadeOut(speed,function(){$('#modalBackdrop').fadeOut(speed, function(){$(this).remove();});$(this).remove();});
          } else {
            if ( animation == 'slide' ) {
              $('#modalContent').slideUp(speed,function(){$('#modalBackdrop').slideUp(speed, function(){$(this).remove();});$(this).remove();});
            } else {
              $('#modalContent').remove();$('#modalBackdrop').remove();
            }
          }
        });
        
        // rallen: Send the user to whatever page he currently is after the modal closes.
        if(window.location.pathname == '/worksheets' || window.location.pathname == '/worksheets/') {
          window.location.href = window.location.href; 
        }     
      };
      
    }//End attach.
  };
}(jQuery));
