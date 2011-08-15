/* Global JS file */
var $ = jQuery;

$(document).ready(function() {
	//lightbox
	$('#login-link').loginBox();
        if ($('.field-type-video').length > 0) {
            //Need to hide video if there is one present. This solution is preferable over wmode=transparent since changing wmode causes issues with the playback controls on quicktime videos
            $('#login-link').click(function(){
                $('.field-type-video').css('visibility','hidden');//Video doesn't come back if you hit close-button instead of logging in but that's acceptable
            });
        }
	//hide notification if it is there
	$('#hide-notification').click(function(){
		$.ajax({
			url: $(this).attr('rel'),
			success: function(data) {
				if (data == 'success') {
					$('.notification').slideUp('fast');
				}
			}
		});
	});

        $('#yearsubmit').takeUserTo();
});


(function($) {

        $.fn.takeUserTo = function(){
          $(this).click(function(e) {
			e.preventDefault();
                        var yr = $('#yeardropdown').val();
                        location.href= '/news-archive/' + yr;
		});
        }


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
				'top': (($(window).height() / 2) - 185) + $(window).scrollTop() + 'px',
				'left': (($(window).width() / 2) - 350) + 'px'
			}).appendTo($(document.body));
			
			var loginForm = $('#login-container').html();
			var loginContainer = $('<div></div>').attr('id', 'login-container').html(loginForm).appendTo(lightBox);
			var loginHeader = $('#lightbox #login-header');
			var closeButton = $('<a></a>').addClass('close-button').click(closeLightBox).appendTo(loginHeader);
		};
		
		var closeLightBox = function(e) {
			e.preventDefault();
			$('#lightbox').remove();
			$('#mask').remove();
			$('body').css('overflow', 'auto');
		}
	}
})($);
