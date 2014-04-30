/* Global JS file */
(function($) {
    // IE console.log
    if (!window.console){ 
        window.console = {
            log: function(){} 
        }; 
    }  
  
    function setCookie (name, value, expires, path, domain, secure) {
      var expires_value = "";
      if (expires != undefined) {
            var d = new Date();
            d.setTime(d.getTime()+(expires*24*60*60*1000));
            var expires_value = "expires="+d.toGMTString();
            //console.log("setcookie: expires_value="+expires_value);
      }
      
      document.cookie = name + "=" + escape(value) +
      ((expires_value) ? "; expires=" + expires_value : "") +
      ((path) ? "; path=" + path : "") +
      ((domain) ? "; domain=" + domain : "") +
      ((secure) ? "; secure" : "");
    }

    function getCookieVal (offset) {
      var endstr = document.cookie.indexOf (";", offset);
      if (endstr == -1)
       endstr = document.cookie.length;
      return unescape(document.cookie.substring(offset, endstr));
    }

    function getCookie (name) {
      var arg = name + "=";
      var alen = arg.length;
      var clen = document.cookie.length;
      if((document.cookie == null) || (document.cookie.length == null)) {
        return null;
      }
      var i = 0;
      while (i < clen) {
        var j = i + alen;
        if (document.cookie.substring(i, j) == arg)
          return getCookieVal (j);
        i = document.cookie.indexOf(" ", i) + 1;
        if (i == 0) break;
      }
      return null;
    }
    
    function deleteCookie(name) {
        document.cookie = name + '=; expires=Thu, 01-Jan-70 00:00:01 GMT;';
    }
    
  Drupal.behaviors.loginBox = {
    attach: function(context, settings) {
      
      var closeButton = $('#close-button', context).live("click", function(e) {
        e.preventDefault();
        $('#lightbox', context).remove();
        $('#mask', context).remove();
        $('body', context).css('overflow', 'auto');
      });
      
      //lightbox
      $('.login-link', context).loginBox(context);
      if ($('.field-type-video', context).length > 0) {
        //Need to hide video if there is one present. This solution is preferable over wmode=transparent since changing wmode causes issues with the playback controls on quicktime videos
        $('.login-link', context).click(function(){
          $('.field-type-video').css('visibility','hidden');//Video doesn't come back if you hit close-button instead of logging in but that's acceptable
        });
      }
      
      
      //hide tfk_notification if it is there
      $('#hide-notification', context).click(function(){
        $.ajax({
          url: $(this).attr('rel'),
          success: function(data) {
            if (data == 'success') {
              $('.notification', context).slideUp('fast');
            }
          }
        });
       
        // Hide tfk_notification and create hide cookie
        //$('.notification', context).slideUp('fast');
        
        // Create tfk_notification Opt Out cookie
        // Get the tfk_notificationID from the Ajax URL
        //var tfk_notification = document.getElementById("hide-notification");
        //var tfk_notificationID = tfk_notification.rel.split('/')[3];
        //var cname = "tfk_notification_"+tfk_notificationID;
        //console.log("tfk-notification: Opt Out: Creating cookie: cname="+cname);
        //setCookie(cname,tfk_notificationID, 31);
        //console.log(getCookieVal(cname));
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
      // tfk-50: Check to see if the clone failed
      if ($('#user-login--2').length > 0) {
          //console.log("Found #user-login--2...");
          loginForm = $('#user-login--2', context).clone();
          loginForm.removeAttr('id'); 
          loginForm.attr('id', 'user_login--2');
          //loginForm.appendTo(lightBox);
      } else {
          //console.log("Found #user-login");
          loginForm.removeAttr('id'); 
          loginForm.attr('id', 'user_login');
          //loginForm.appendTo(lightBox);
      }
      //console.log(loginForm);
      /*
      var temp_destination="";
      if (event.target.href.indexOf("/tfk-magazine") != -1 || event.target.href.indexOf("/digital") != -1) {
          temp_destination = event.target.href.split('/')[3];
          //console.log(temp_destination);
          loginForm.attr('action', 'http://tfk:8082/user?q=tfk-magazine');
      }
      console.log("temp_destination="+temp_destination);
      */
      loginForm.appendTo(lightBox);
  
    });
    
    
    // Learm more marketing submit
    $('.lm-email', context).focus(function() {
        //console.log("focus...");
        if ( $('.lm-email').val() == "enter email address" ) {
            $('.lm-email').val("");
        }
    });
    
    $('.lm-submit', context).click(function(ev) {
      ev.preventDefault();
      //console.log("Learn more submit button pressed...");
      //console.log($('.lm-email').val());
      
      // Edits
      if ( $('.lm-email').val() == "enter email address" || $('.lm-email').val() == "") {
          alert("Email is required...");
          return false;
      }
      
      var emailRegex = new RegExp(/^([\w\.\-]+)@([\w\-]+)((\.(\w){2,3})+)$/i);
      var valid = emailRegex.test($('.lm-email').val());
      if (!valid) {
           alert("Invalid e-mail address...");
           return false;
      }
      
      // serialize the data in the form
      var $form = $('#lm-form-id');
      var serializedData = $form.serialize();
      console.log("serializedData="+$form.serialize());
      //return;
      
      $.ajax({
        type: 'POST',
        url: 'https://ebm.cheetahmail.com/r/regf2',
        data: serializedData,
        success: function(data) {
          //console.log("inside success...");
          $('.lm-form-section').html('<div class="thankyou"><p>Thank you for your interest.</p></div>');
        }
      });
    });

  };
  
  $(document).ready(function() {
      
    // Determine if tfk_notification message box should be shown
    // Check to see if the tfk_notificaitonID via the ajax URL is in the DOM
    /*
    var tfk_notification = document.getElementById("hide-notification");
    if (tfk_notification != undefined) {
      var tfk_notificationID = tfk_notification.rel.split('/')[3];
      //console.log("tfk_notificationID exists in DOM. tfk_notificationID="+tfk_notificationID);
      var cname = "tfk_notification_"+tfk_notificationID;
      //console.log("cname cookie name="+cname);
      if (getCookie(cname) == null) {
          //console.log("tfk_notification cookie doesn't exist. Exposing tfk_notification block. tfk_notificationID="+tfk_notificationID);
          $('.notification').show();
      } else {
          //console.log("tfk_notification cookie exists...");
      }
    } else {
        //console.log("tfk_notificationID does not exist in DOM.");
    }
    */
   if (getCookie("tfk_notification-156401") != null) {
        //console.log("deleting tfk_notification-156401");
        deleteCookie("tfk_notification-156401");
   }
   if (getCookie("tfk_notification_156401") != null) {
       //console.log("deleting tfk_notification_156401");
       deleteCookie("tfk_notification_156401");
   }
   if (getCookie("tfk_notification-71921") != null) {
        //console.log("deleting tfk_notification-71921");
        deleteCookie("tfk_notification-71921");
   }
   if (getCookie("tfk_notification_71921") != null) {
       //console.log("deleting tfk_notification_71921");
       deleteCookie("tfk_notification_71921");
   }
   if (getCookie("tfk_notification-113761") != null) {
        //console.log("deleting tfk_notification-113761");
        deleteCookie("tfk_notification-113761");
   }
   if (getCookie("tfk_notification_113761") != null) {
       //console.log("deleting tfk_notification_113761");
       deleteCookie("tfk_notification_113761");
   }
   
      
    // Check for IE
    if (navigator.appName=="Microsoft Internet Explorer") {
        $("body").addClass("ie");
        //console.log("Added ie class to body tag");
    }

    // Colors in Menubar
    if (document.URL.indexOf('/minisite/') != -1) {
      $('.mini-sites').addClass('active');
    }
    if (document.URL.indexOf('/store/') != -1) {
      $('.store').addClass('active');
    }
    
    // tfk-34
    // Check for Subscriber Only content - activate popup, automatically
    if (document.title.indexOf('SUBSCRIBER-ONLY CONTENT') != -1) {
      $('div#teacher-nav-container .login-link').trigger('click');
    }
    /*
    $('.not-logged-in .tfk-magazine').click(function(e) {
        e.preventDefault();
        console.log(e);
        $('div#teacher-nav-container .login-link').trigger('click');
    });
    $('.not-logged-in .digital_edition').click(function(e) {
        e.preventDefault();
        $('div#teacher-nav-container .login-link').trigger('click');
    });
    */
    

    // Fix tout alignment.
    if ($('#block-views-homepage-top-story-block-1').outerHeight() > $('.view-homepage-minisite').height()) {
       $('.view-homepage-minisite').height($('#block-views-homepage-top-story-block-1').outerHeight() - 17);
    }
    if ($('#block-views-homepage-top-story-block-2').outerHeight() > $('.view-homepage-minisite').height()) {
       $('.view-homepage-minisite').height($('#block-views-homepage-top-story-block-2').outerHeight() - 17);
    }
    if ($('#block-views-homepage-top-story-block-1').outerHeight() < $('.view-homepage-minisite').height()) {
       $('#block-views-homepage-top-story-block-1').height($('.view-homepage-minisite').height() + 5);
    }
    if ($('#block-views-homepage-top-story-block-2').outerHeight() < $('.view-homepage-minisite').height()) {
       $('#block-views-homepage-top-story-block-2').height($('.view-homepage-minisite').height() + 5);
    }

    // Loop through magazines.
    var loop = 0;
    var magLoop = function() {
      var $magazines = $('.current-issue-widget-redux .view-current-issue-widget');
      
      // Fade the current magazine out then go to the next one.
      $magazines.eq(loop).delay(4000).fadeOut(1000);
      loop++;
      
      // If we run out of elements, start back at the beginning.
      if(!$magazines.eq(loop).length) {
        loop = 0;
      }

      // Fade in the new magazine at the same time.
      $magazines.eq(loop).delay(4000).fadeIn(1000,magLoop);
    };
    
    magLoop(); 
    
  });

})(jQuery);
