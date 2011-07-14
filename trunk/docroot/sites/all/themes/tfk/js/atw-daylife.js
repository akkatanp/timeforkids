var $ = jQuery;

$(document).ready(function() {
	$('#daylife-container').daylife();
});

(function($) {
	$.fn.daylife = function() {
		var daylifebar = $('#daylife-bar');
		var inner = daylifebar.find('#inner');
		var activities = inner.children();
		var bottomline = $('#line-below');
		var thisTime = $('#current-time');
		var prev = $('#prev');
		var next = $('#next');
		var maxActivities = 10;
		var activityWidth = 46;
		var leftActivity = 0;
		
		var showHideActivity = function() {
			activities.each(function(i, activity) {
				$(activity).removeClass('active');
			});
			$(this).addClass('active');
			$('#activity-time').text($(this).attr('title'));
			$('#activity-text').text($(this).attr('rel'));
			thisTime.text($(this).attr('title'));
			
			linePos = $(this).position().left + (activityWidth / 2);
			bottomline.animate({'left': linePos + 'px'}, 500);
			
			timePos = linePos - (thisTime.width() / 2) - 7;
			if (timePos < 0) timePos = 0;
			thisTime.animate({'left': timePos + 'px'}, 500);
		};
		
		var prevEvent = function() {
			var activity = inner.find('.active');
			var activityNum = parseInt(activity.attr('id').split('-')[1]);
			if (activityNum == 0) {
				var prevNum = activities.length;
			} else {
				var prevNum = activityNum - 1;
			}
			
			if (prevNum < leftActivity) {
				inner.animate({'left': ((leftActivity - maxActivities - 1) * activityWidth) + 'px'}, 500, function() {
					$('#clock-' + prevNum).trigger('click');
				});
				leftActivity = leftActivity - maxActivities - 1;
			} else {
				$('#clock-' + prevNum).trigger('click');
			}
		}
		
		var nextEvent = function() {
			var activity = inner.find('.active');
			var activityNum = parseInt(activity.attr('id').split('-')[1]);
			if (activityNum == activities.length) {
				var nextNum = 0;
			} else {
				var nextNum = activityNum + 1;
			}
			
			if (nextNum > maxActivities - 1) {
				inner.animate({'left': (-1 * maxActivities * activityWidth) + 'px'}, 500, function() {
					$('#clock-' + nextNum).trigger('click');
				});
				leftActivity = maxActivities + 1;
			} else {
				$('#clock-' + nextNum).trigger('click');
			}
		}
		
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
			
			prev.click(prevEvent);
			next.click(nextEvent);
		}
	};
})($);
