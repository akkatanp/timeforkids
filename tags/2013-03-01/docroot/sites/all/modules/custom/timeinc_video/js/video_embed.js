
/*
(function ($) {

	 Drupal.behaviors.timeinc_video = {
	    attach: function (context, settings) {

	    	console.log(settings.timeinc_video.id);
	    	console.log(settings.timeinc_video.url);
	    	console.log(settings.timeinc_video.swf_path)

	  	  $("#video_embed_container").jPlayer( {
			  
	  	    ready: function () {
	  	      $(this).jPlayer("setMedia", {
	  	        m4a: "http://tfk.local/sites/default/files/Lexus.mp4"
	  	      }).jPlayer("play");
	  	    },
	  	    swfPath: "sites/all/modules/custom/timeinc_video/js"
	  	  
	  	    	
	  	  });	    	
	    	
	    }
	  };

}(jQuery));
*/

var $ = jQuery;
/*
$(document).ready(function() {
	
	
	  $("#jquery_jplayer_1").jPlayer( {
		  
	  	    ready: function () {
	  	      $(this).jPlayer("setMedia", {
	  	        m4a: "http://tfk.local/sites/default/files/Lexus.mp4"
	  	      });
	  	    },
	  	    swfPath: "sites/all/modules/custom/timeinc_video/js"
	  	  
	  	    	
	  	  });	
	
});*/

$(document).ready(function(){
    $("#jquery_jplayer_1").jPlayer({
      ready: function () {
        $(this).jPlayer("setMedia", {
          m4v: "http://www.jplayer.org/video/m4v/Big_Buck_Bunny_Trailer_480x270_h264aac.m4v",
          ogv: "http://www.jplayer.org/video/ogv/Big_Buck_Bunny_Trailer_480x270.ogv",
          poster: "http://www.jplayer.org/video/poster/Big_Buck_Bunny_Trailer_480x270.png"
        });
      },
      swfPath: "/js",
      supplied: "m4v, ogv"
    });
  });

/*
 * 
 * 
 * 
$("#video_embed_container").jPlayer({solution:"flash, html"})
$.jPlayer

(function ($) {

	 Drupal.behaviors.timeinc_video = {
	    attach: function (context, settings) {

	    	console.log(context);
	    	console.log(settings);
	    	console.log(settings.timeinc_video.swf_path)

	  	  $(settings.timeinc_video.id).jPlayer( {
			  
	  	    ready: function () {
	  	      $(this).jPlayer("setMedia", {
	  	        m4a: settings.timeinc_video.url
	  	      }).jPlayer("play");
	  	    },
	  	    swfPath: settings.timeinc_video.swf_path
	  	  
	  	    	
	  	  });	    	
	    	
	    }
	  };

}(jQuery));##video_embed_container

 */

/*

	  $("#jpId").jPlayer( {
		  
	    ready: function () {
	      $(this).jPlayer("setMedia", {
	        m4a: "mp3/elvis.m4a", // Defines the m4a (AAC) url
	        oga: "ogg/elvis.ogg" // Defines the counterpart oga url
	      });
	    }
	    	
	  });
*/