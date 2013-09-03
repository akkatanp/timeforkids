/* Global JS file */
(function($) {
  
  Drupal.behaviors.loginBox = {
    attach: function(context, settings) {
      
      var closeButton = $('#close-button', context).live("click", function(e) {
        e.preventDefault();
        $('#lightbox', context).remove();
        $('#mask', context).remove();
        $('body', context).css('overflow', 'auto');
      });
      
      //lightbox
      $('#login-link', context).loginBox(context);
      if ($('.field-type-video', context).length > 0) {
        //Need to hide video if there is one present. This solution is preferable over wmode=transparent since changing wmode causes issues with the playback controls on quicktime videos
        $('#login-link', context).click(function(){
          $('.field-type-video').css('visibility','hidden');//Video doesn't come back if you hit close-button instead of logging in but that's acceptable
        });
      }
      
      //hide notification if it is there
      $('#hide-notification', context).click(function(){
        $.ajax({
          url: $(this).attr('rel'),
          success: function(data) {
            if (data == 'success') {
              $('.notification', context).slideUp('fast');
            }
          }
        });
      });
      
      $('#yearsubmit', context).takeUserTo(context);
    }
  };
  
  $.fn.takeUserTo = function(context) {
    $(this, context).click(function(e) {
      e.preventDefault();
      var yr = $('#yeardropdown').val();
      location.href= '/news-archive/' + yr;
    });
  };


  $.fn.loginBox = function(context) {
  
    // Create lightbox when user clicks link.
    $(this, context).click(function(e) {
      e.preventDefault();

      $('body', context).css('overflow', 'hidden');
      
      var mask = $('<div></div>', context).attr('id', 'mask').css({
        'height': $(window).height() + 'px',
        'top': $(window).scrollTop() + 'px'
      }).appendTo($(document.body));
      
      var lightBox = $('<div></div>', context).attr('id', 'lightbox').css({
        'top': (($(window).height() / 2) - 185) + $(window).scrollTop() + 'px',
        'left': (($(window).width() / 2) - 350) + 'px'
      }).appendTo($(document.body));
      
      var loginForm = $('#user-login', context).clone();
      loginForm.removeAttr('id');
      loginForm.attr('id', 'user_login');
      loginForm.appendTo(lightBox);
      
      // disabled 5/15/2013 - nbailly
      
      // removed module encrypt submissions and jCryption libraries
      // using SSL instead because of better security and compatibility
      // as well as less delay on login form submissions
      
      // $("#user_login", context).jCryption();
      
    });

  };
  
  // Colors in Minisite Menubar
  $(document).ready(function() {
    if (document.URL.indexOf('/minisite/') != -1) {
      $('.mini-sites').addClass('active');
    }
  });

})(jQuery);
