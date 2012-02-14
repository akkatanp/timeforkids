/**
 * @file
 * Hide/show "Ask a question" form.
 */

(function ($) {
  Drupal.behaviors.writingTips = {
    attach: function(context, settings) {
      $('#block-webform-client-block-306 .content').hide();
      $('#block-webform-client-block-306 #edit-actions').append('<div class="writing-tips-form-close">Close</div>');

      $('#block-webform-client-block-306 h2.block-title').click(function () {
        $('#block-webform-client-block-306 .content').show();
        $('#block-webform-client-block-306 h2.block-title').hide();
        $('html, body').animate({
          scrollTop: $('#webform-client-form-306').offset().top
        }, 800);
      });

      $('#block-webform-client-block-306 .writing-tips-form-close').click(function () {
        $('#block-webform-client-block-306 h2.block-title').show("normal");
        $('#block-webform-client-block-306 .content').hide("normal");
      });
      // Go to a specific writing tip via hash (integrates with search results).
      if (location.hash != '') {
        var nid = location.hash.replace("#", "");
        $(".ui-accordion-content .nid-"+nid).parent().prev('.ui-accordion-header').click();
        $.scrollTo(".ui-accordion-content .nid-"+nid);
      }
    } 
  }
}(jQuery));
