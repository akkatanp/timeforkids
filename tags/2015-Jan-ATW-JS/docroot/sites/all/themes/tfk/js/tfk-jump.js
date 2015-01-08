//Init namespace
if (typeof TFKADS == 'undefined' || !TFKADS) {window.TFKADS = {};}

//External domains that we don't want to go through the jump page for. timeforkids.com is included just in case our own domain shows up in an ad
TFKADS.domainExceptions = new Array("timeforkidsdigital.com","timeinc.com","timeinc.net", "timeforkids.com","acquia-sites.com","customersvc.com");

(function($) { // make sure the $ is jQuery
	$(document).ready(function() {
	  // Creating custom :external selector
	  // To save performance we are not checking against domain array here, we lazy attach and check later
	  $.expr[':'].external = function(obj) {
		  return !obj.href.match(/^mailto\:/)
				  && (obj.hostname != location.hostname) && obj.hostname;
	  };

	  // Add 'external' CSS class to all external links
	  $('a:external').addClass('external');

	  //Create the jump dialog
	  function tfkJumpPage(link) {
		var domainException;
		for (var n = 0; n < TFKADS.domainExceptions.length; n++) {
			if (link.indexOf(TFKADS.domainExceptions[n])!==-1) {
				domainException = 1;
			}
		}
		if (domainException == 1) {
                                console.log("Found Exception...");
                                console.log("link="+link);
				window.open(link, "_blank");
				return false;
		}
		jumpDialog = '<div class="tfk-jump"><h1>You are about to leave timeforkids.com</h1>You are leaving <a href="/">timeforkids.com</a> to check out a web site we recommended.  While TIME for Kids has reviewed  the site you are about to visit, we can&#39;t monitor changes to the site, advertisements or links to other sites.<br/><br/>Be sure to get permission from a parent before giving out any information about yourself online.  Never give your full name, phone number or address online.  To read more read <a href="/info/privacy-policy">TFK&#39;s privacy policy</a>. <div class="tfk-jump-reminder">(Remember to read the privacy policy of any new site you visit.)</div> </div>';
		buttonDescription = '<div id="tfk-jump-button-description"><div id="tfk-jump-continue">going to the web site</div><div id="tfk-jump-back">to timeforkids.com</div></div><div style="clear:both;">&nbsp;</div>';
		$(jumpDialog).dialog({
		  title: "",
		  modal : true,
		  width : 626,
		  buttons: {
			'Continue': function() {
			  $(this).dialog('close').remove();
			  window.open(link);
			  return false;
			},
			'Go Back': function() {
			  $(this).dialog('close').remove();
			  return false;
			}
		  }
		});
		$(buttonDescription).appendTo("div.ui-dialog-buttonpane");
		return false;
	  }
	  
	  //Handler for flash/iframe
	  function tfkJumpPageHandler(event) {
		tfkJumpPage(event.data.element);
		event.preventDefault();
	  }

	  //This handles content links and image ads
	  $('.external').click(function() {
		var link = $(this).attr('href');
		tfkJumpPage(link);
		return false;
	  });
	  
	//Retrieves the ad location in a variety of ways for different types of flash ads
	function tfkGetFlashAdLocation(objName) {
		var output = "";
		var flashVars = "";
		var keyValues = "";
		var targetLocation = "";
		var finalUrl = "";
		var isEyeBlaster ="";
		var tfkAdFinalUrl = "";
		var flashVarsArray = new Array();
		
		// Following line added to prevent Javascript error when object has no name attribute
		// Not sure of the use case for this, but script throwing errors on missing attribute
		// is preventing further functions from running and causing pages to break
		
		// --
		
		if (typeof($(objName + " object").attr('name'))=="undefined") return null;
		
		// --
		
		if ($(objName + " object").length > 0) {
			if ﻿($(objName + " object").attr('name').toLowerCase() == "ebreportingflash") {
				//Eyeblaster/Mediamind Rich Media Tag
				//Go further to get the actual ad
				$(objName).find('object').each(function() {
					if ﻿($(this).attr('name').toLowerCase() != "ebreportingflash") {
						$(this).children('param').each(function() {
							if($(this).attr('name').toLowerCase() == "flashvars"){
								flashVars = $(this).attr('value');
							}
						});
					 }
				});
				isEyeBlaster = "1";
			} else {
				//first party served Flash
				$(objName + " object").children('param').each(function() {
					if($(this).attr('name').toLowerCase() == "flashvars"){
						flashVars = $(this).attr('value');
					}
					if($(this).attr('name').toLowerCase() == "movie"){
						movieVar = $(this).attr('value');
					}
				});
			}
		} else if ($(objName + " object").length < 1 && $(objName + " embed").length > 0) {
			if ﻿($(objName + " embed").attr('name').toLowerCase() == "ebreportingflash") {
				//Sometimes the ad creative skips the object tag and just has an embed
				$(objName).find('embed').each(function() {
					if ﻿($(this).attr('name').toLowerCase() != "ebreportingflash") {
						flashVars = $(this).attr('flashvars');
					}
				});
				isEyeBlaster = "1";
			} else {
				//first party served Flash
				flashVars = $(objName + " embed").attr('flashvars');
			}
				  
		}
		if (isEyeBlaster == "" && $.browser.msie == "undefined") {
			adTargetLocation = new String($(objName + " noscript").text().toLowerCase().match(/href="([^"]*")/g));
			tfkAdFinalUrl = adTargetLocation.substr(0, adTargetLocation.length - 1);tfkAdFinalUrl = tfkAdFinalUrl.substr(6, tfkAdFinalUrl.length);
		} else {
		   if (flashVars.substr(0, 1) != "&" && flashVars != "") {  
			   flashVars = "&" + flashVars;
		   }
		   if (flashVars != "") {
			   keyValues = flashVars.split(/&/);
		   }
		   if (flashVars == "") {
			   flashVars = movieVar;
			   keyValues = flashVars.split(/\?/);
		   }
		   for (var i in keyValues) {
				var flashVar = keyValues[i].split(/=(.+)/);
				flashVarsArray[flashVar[0]] = flashVar[1];
		   }
		   /* 99.9% of the time it should be in flashVarsArray['clickTag'].
		    * If vendor has goofed and used one of the secondary clickTag (ie, clickTag1, clickTag2) let's fallback to that
		    */
		   if (typeof flashVarsArray['clickTag'] === 'undefined') {
		       if (typeof flashVarsArray['clickTag1'] !== 'undefined') {
			   tfkAdFinalUrl = new String(unescape(flashVarsArray['clickTag1']));
		       } else if (typeof flashVarsArray['clickTag1'] === 'undefined' && typeof flashVarsArray['clickTag2'] !== 'undefined') {
			   tfkAdFinalUrl = new String(unescape(flashVarsArray['clickTag2']));
		       }
		   } else {
			tfkAdFinalUrl = new String(unescape(flashVarsArray['clickTag']));
		   }
		}
	   return tfkAdFinalUrl; 
	}

	//adjust CSS in cases when we need to activate the helper div.
	function tfkAdCSSHelper(adUnit, width, height) {
		width = width + "px";height = height + "px";
		$("#" + adUnit + "_jump_helper").css({'position' : 'absolute', 'width' : width , 'height' : height, 'background-color' : 'blue', 'opacity' : '0', 'filter' : 'alpha(opacity=0)', 'display' : 'inline'});
	}

	if (false) {//This handles flash and iframe ads
	  TFKADS.adUnits = new Array("banner_728x90","banner_160x190","banner_160x600", "banner_728x90_footer");
	  TFKADS.adElementName = "";
	  TFKADS.adTargetLocation = "";
	  TFKADS.tfkAdLocations = new Array();
	  TFKADS.adwidth = new Array();
	  TFKADS.adheight = new Array();
	  TFKADS.dimensionArray = new Array();
	  TFKADS.iFrameSrcArray = new Array();
	  for (var i = 0; i < TFKADS.adUnits.length; i++) {
		TFKADS.adElementName = "#" + TFKADS.adUnits[i];
		tfkAdEmbedName = "#" + TFKADS.adUnits[i] + " object";
		if ($(tfkAdEmbedName).length < 1) {
			//Let's see if it's just an embed. Sometimes the ad creative is like this.
			if ($("#"+TFKADS.adUnits[i]+" embed").length > 0) {
				tfkAdEmbedName = "#"+TFKADS.adUnits[i]+" embed";
			}
		}
		TFKADS.adTargetLocation = "#" + TFKADS.adUnits[i] + " noscript";
		tfkAdIframe = "#" + TFKADS.adUnits[i] + "_container iframe";
		TFKADS.dimensionArray[i] = TFKADS.adUnits[i].substr(7,TFKADS.adUnits[i].length).split(/x/);
		TFKADS.adwidth[i] = TFKADS.dimensionArray[i][0];
		TFKADS.adheight[i] = TFKADS.dimensionArray[i][1];
		TFKADS.tfkAdLocations["#"+TFKADS.adUnits[i]] = "";
		if ($(tfkAdEmbedName).length > 0) {//Flash
			tfkAdFinalUrl = tfkGetFlashAdLocation(TFKADS.adElementName);
			if (TFKADS.adTargetLocation.length > 0) {
				//These object manipulations are needed to keep click from propagating downward into the flash. For IE, we have a CSS trick
				$(tfkAdEmbedName + " param[name=wmode]").attr('value','transparent');
			   $(TFKADS.adElementName + " embed").attr('wmode','transparent');
				 if ($.browser.msie) {
					 tfkAdCSSHelper(TFKADS.adUnits[i], TFKADS.adwidth[i], TFKADS.adheight[i]);
				 } 
				 TFKADS.tfkAdLocations[TFKADS.adElementName] = tfkAdFinalUrl;
				 $(TFKADS.adElementName).bind("mousedown", {element: TFKADS.tfkAdLocations[TFKADS.adElementName]}, tfkJumpPageHandler);//Must use mouseDown as click will not work with flash
			}
		}
		if ($(tfkAdIframe).length > 0) {//Iframe
			  TFKADS.iFrameSrcArray[i] = $(tfkAdIframe).attr('src').split(/click=/);
			  tfkAdFinalUrl = TFKADS.iFrameSrcArray[i][1];
			  TFKADS.tfkAdLocations["#"+TFKADS.adUnits[i]] = tfkAdFinalUrl;
			  tfkAdCSSHelper(TFKADS.adUnits[i], TFKADS.adwidth[i], TFKADS.adheight[i]);
			  $(TFKADS.adElementName).bind("mousedown", {element: TFKADS.tfkAdLocations[TFKADS.adElementName]}, tfkJumpPageHandler);
		}
	  }
	}
	});//End doc ready
})(jQuery); // make sure the $ is jQuery