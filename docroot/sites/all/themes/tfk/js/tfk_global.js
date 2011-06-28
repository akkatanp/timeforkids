/* Global JS file */
var $ = jQuery;

$(document).ready(function() {
	//lightbox
	$('#login-link').loginBox();
	
	//hide notification if it is there
	$('#hide-notification').click(function(){
		$.ajax({
			url: '<?php echo url('notification/hide/'.$notification_data['notification_nid']);?>',
			success: function(data) {
				if (data == 'success') {
					$('.notificationdiv').fadeOut('fast');
				}
			}
		});
	});

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
				'left': (($(window).width() / 2) - 350) + 'px'
			}).appendTo($(document.body));
			
			var loginForm = $('#login-container').clone().hide().show().appendTo(lightBox);
			var loginHeader = loginForm.find('#login-header');
			var closeButton = $('<a></a>').addClass('close-button').appendTo(loginHeader).click(closeLightBox);
		};
		
		var closeLightBox = function() {
			$('#lightbox').remove();
			$('#mask').remove();
			$('body').css('overflow', 'auto');
		}
	}
})($);
