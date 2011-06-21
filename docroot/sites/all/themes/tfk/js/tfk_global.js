/* Global JS file */
var $ = jQuery;

$(document).ready(function() {
	$('#login-link').loginBox();
});

(function($) {
	$.fn.loginBox = function() {		
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
			
			var lightBox = $('<div></div>').attr('id', 'lightbox').css({
				'top': (($(window).height() / 2) - 175) + $(window).scrollTop() + 'px',
				'left', (($(window).width() / 2) - 350) + 'px')
			}).appendTo($(document.body));
			
			var closeButton = $('<a></a>').addClass('close-button').appendTo(lightBox).click(closeLightBox);
			
			var loginForm = $('#login-container').clone().appendTo(lightBox);
		};
		
		var closeLightBox = function() {
			$('#lightbox').remove();
			$('#mask').remove();
		}
	}
})($);
