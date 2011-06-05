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
		var topline = $('#line-ablove');
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
			
			linePos = $(this).position().left + 3.5;
			topline.css('left', linePos + 'px');
			bottomline.css('left', linePos + 'px');
			
			yearPos = linePos - ($(this).width / 2);
			if (yearPos < 0) yearPos = 0;
			year.css('left', yearPos + 'px');
		}
		
		if (numEvents) {
			for (i=0;i<numEvents;i++) {
				var node = $('<div></div>').attr('id', 'event-node-' + i).addClass('event-node').appendTo(timebar);
				if (i == 0) {
					node.addClass('active');
					$('#event-year').text($('#event-0').find('.event-text h3').text());
					linePos = node.position().left + 3.5;
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
