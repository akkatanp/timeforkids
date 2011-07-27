/**
 * @author rallen
 * Animate submit button with JS, since Safari does not support CSS animation for
 * image submit buttons.
 */
(function ($) {
  Drupal.behaviors.tfk_teachers_community = {
    attach: function (context, settings) {
	    var btn = $(settings.tfk_teachers_community.btn_id);
	    
	    btn.mousedown({'btn': btn}, function(eventObject) {
        btn.attr("src", settings.tfk_teachers_community.btn_img);
      });
 
      btn.mouseup({'btn': btn}, function(eventObject) {
        btn.attr("src", settings.tfk_teachers_community.btn_img);
      }); 
    }
  };
}(jQuery));
