/* Flashcard Help Popup */
var $ = jQuery;

$(document).ready(function() {
  //lightbox
  $('.flashcard-help').flashcardHelp();
});

(function($) {
  $.fn.flashcardHelp = function() {
    $(this).click(function(e) {
      e.preventDefault();
      createLightBox();
    });
     
    var createLightBox = function() {
        $('body').css('overflow', 'hidden');
        
        var mask = $('<div></div>').attr('id', 'mask').css({
          'height': $(window).height() + 'px',
          'top': $(window).scrollTop() + 'px'
        }).appendTo($(document.body));
        
        var lightBox = $('<div class="flashcard-help-image"><h2>Flash Card Help</h2><img src="/sites/all/themes/tfk/images/flashcard-help.png"></img></div>').attr('id', 'flashcard-help-popup').css({
				'top': (($(window).height() / 2) - 300) + $(window).scrollTop() + 'px',
				'left': (($(window).width() / 2) - 350) + 'px'
			}).appendTo($(document.body));
        
        var closeButton = $('<a></a>').addClass('close-button').click(closeLightBox).appendTo(lightBox);
      };
      
      var closeLightBox = function(e) {
        e.preventDefault();
        $('#flashcard-help-popup').remove();
        $('#mask').remove();
        $('body').css('overflow', 'auto');
      }
    }
  })($);


