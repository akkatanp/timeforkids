(function($) {
	$(document).ready(function() {
		$('#daylife-container').daylife();
	});
	
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
		var activityNum = 0;
		var leftActivity = 0;
		var page = 1;
		
		var showHideActivity = function() {
			activities.each(function(i, activity) {
				$(activity).removeClass('active');
			});
			
			$(this).addClass('active');
			$('#activity-time').text($(this).attr('title'));
			$('#activity-text').text($(this).attr('rel'));
			thisTime.text($(this).attr('title'));
			
			linePos = $(this).position().left + (activityWidth / 2) + 14;
			linePos = linePos - ((page - 1) * (maxActivities * activityWidth));
			timePos = linePos - (thisTime.width() / 2) - 7;
			
			bottomline.animate({'left': linePos + 'px'}, 500);
			if (timePos < 0) timePos = 0;
			thisTime.animate({'left': timePos + 'px'}, 500);
		};
		
		var prevEvent = function() {
			var activity = inner.find('.active');
			activityNum = parseInt(activity.attr('id').split('-')[1]);
			
			if (activityNum == 0) {
				var prevNum = activities.length - 1;
				if (prevNum > maxActivities - 1) {
					page = Math.floor(activities.length/maxActivities) + 1;
					leftActivity = maxActivities * page;
				}
			} else {
				var prevNum = activityNum - 1;
			}
			
			if (prevNum < leftActivity) {
				if (prevNum == activities.length - 1) {
					inner.animate({'left': (-1 * ((page - 1) * (maxActivities * activityWidth))) + 'px'}, 500, function() {
						$('#clock-' + prevNum).trigger('click');
					});				
				} else {
					page--;
					inner.animate({'left': ((page - 1) * (maxActivities * activityWidth)) + 'px'}, 500, function() {
						$('#clock-' + prevNum).trigger('click');
					});
				}
				leftActivity = leftActivity - maxActivities;
			} else {
				$('#clock-' + prevNum).trigger('click');
			}
		}
		
		var nextEvent = function() {
			var activity = inner.find('.active');
			var activityNum = parseInt(activity.attr('id').split('-')[1]);
			
			if (activityNum == activities.length - 1) {
				var nextNum = 0;
				page = 0;
			} else {
				var nextNum = activityNum + 1;
			}
			
			if (nextNum == (maxActivities * page)) {
				inner.animate({'left': (-1 * ((page) * (maxActivities * activityWidth))) + 'px'}, 500, function() {
					$('#clock-' + nextNum).trigger('click');
				});
				leftActivity = (maxActivities * page);
				page++;
			} else {
				$('#clock-' + nextNum).trigger('click');
			}
		}
		
		if (activities.length) {
			inner.width(activities.length * activityWidth);
			activities.each(function(i, activity) {
				if (i == 0) {
					$(activity).addClass('active');
					$('#activity-time').text($(activity).attr('title'));
					$('#activity-text').text($(activity).attr('rel'));
					thisTime.text($(activity).attr('title'));
					
					linePos = $(activity).position().left + ($(activity).width() / 2) + 14;
					bottomline.css('left', linePos + 'px');
				}
				$(activity).click(showHideActivity);
			});
			
			prev.click(prevEvent);
			next.click(nextEvent);
		}
	};
})(jQuery);
