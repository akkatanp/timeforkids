/* Global JS file */
var $ = jQuery;

$(document).ready(function() {
	//lightbox
	$('#login-link').loginBox();
	
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


   //   $('#yearsubmit').click(function(e){

   //     takeUserTo();

//        e.preventDefault();
//        var yr = $('#yeardropdown').val();
//        location.href= '/news-archive/' + yr;
  //  });
});


(function($) {

        $.fn.takeUserTo = function(){
          $(this).click(function(e) {
            e.preventDefault();
            alert(223);
          }
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
				'top': (($(window).height() / 2) - 175) + $(window).scrollTop() + 'px',
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
