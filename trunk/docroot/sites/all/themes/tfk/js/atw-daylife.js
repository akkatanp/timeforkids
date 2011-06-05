var $ = jQuery;

$(document).ready(function() {
	$('#daylife-container').daylife();
});

(function($) {
	$.fn.daylife = function() {
		var activities = $('#daylife-bar').children();
		
		var showHideActivity = function() {
			activities.each(function(i, activity) {
				activity.removeClass('active');
			});
			$(this).addClass('active');
			$(this).text($(activity).attr('title'));
			$(this).text($(activity).attr('rel'));
		};
		
		if (activities.length) {
			activities.each(function(i, activity) {
				if (i == 0) {
					$(activity).addClass('active');
					$('#activiey-time').text($(activity).attr('title'));
					$('#activiey-text').text($(activity).attr('rel'));
				}
				$(activity).click(showHideActivity);
			});
		}
	};
})($);
