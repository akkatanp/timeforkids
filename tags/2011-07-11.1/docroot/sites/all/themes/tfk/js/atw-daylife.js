var $ = jQuery;

$(document).ready(function() {
	$('#daylife-container').daylife();
});

(function($) {
	$.fn.daylife = function() {
		var activities = $('#daylife-bar').children();
		var bottomline = $('#line-below');
		var thisTime = $('#current-time');
		
		var showHideActivity = function() {
			activities.each(function(i, activity) {
				$(activity).removeClass('active');
			});
			$(this).addClass('active');
			$('#activity-time').text($(this).attr('title'));
			$('#activity-text').text($(this).attr('rel'));
			thisTime.text($(this).attr('title'));
			
			linePos = $(this).position().left + ($(this).width() / 2);
			bottomline.animate({'left': linePos + 'px'}, 500);
			
			timePos = linePos - (thisTime.width() / 2) - 7;
			if (timePos < 0) timePos = 0;
			thisTime.animate({'left': timePos + 'px'}, 500);
		};
		
		if (activities.length) {
			activities.each(function(i, activity) {
				if (i == 0) {
					$(activity).addClass('active');
					$('#activity-time').text($(activity).attr('title'));
					$('#activity-text').text($(activity).attr('rel'));
					thisTime.text($(activity).attr('title'));
					
					linePos = $(activity).position().left + ($(activity).width() / 2);
					bottomline.css('left', linePos + 'px');
				}
				$(activity).click(showHideActivity);
			});
		}
	};
})($);
