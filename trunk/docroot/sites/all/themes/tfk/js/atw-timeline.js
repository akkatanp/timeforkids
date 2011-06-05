var $ = jQuery;

$(document).ready(function() {
	$('#event-container').timeline();
});

(function($) {
	$.fn.timeline = function() {
		var events = this.children();
		events = events.not('.clearfix');
		var numEvents = events.length;
		var eventContainer = $('#event-container');
		var year = $('#event-year');
		var timebar = $('#event-timeline-bar');
		var topline = $('#line-above');
		var bottomline = $('#line-below');
		
		var showHideEvent = function() {
			nodes.each(function(i, node) {
				$(node).removeClass('active');
			});
			
			events.each(function(i, event) {
				$(event).hide();
			});
			
			var nodeNum = parseInt(this.id.split('-')[2]);
			var thisEvent = events.eq(nodeNum)
			thisEvent.show();
			year.text(thisEvent.find('.event-text h3').text());
			$(this).addClass('active');
			
			linePos = $(this).position().left + ($(this).width() / 2) + 6;
			topline.css('left', linePos + 'px');
			bottomline.css('left', linePos + 'px');
			
			yearPos = linePos - (year.width() / 2) - 7;
			if (yearPos < 0) yearPos = 0;
			year.css('left', yearPos + 'px');
		}
		
		if (numEvents) {
			for (i=0;i<numEvents;i++) {
				var node = $('<div></div>').attr('id', 'event-node-' + i).addClass('event-node').appendTo(timebar);
				if (i == 0) {
					node.addClass('active');
					year.text($('#event-0').find('.event-text h3').text());
					linePos = node.position().left + (node.width() / 2) + 6;
					topline.css('left', linePos + 'px');
					bottomline.css('left', linePos + 'px');
				}
			}
			
			var nodes = timebar.children();
			nodes.each(function(i, node) {
				$(node).click(showHideEvent);
			});
		}
	};
})($);
