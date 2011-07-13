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
		var prev = $('#prev');
		var next = $('#next');
		
		var showHideEvent = function() {
			nodes.each(function(i, node) {
				$(node).removeClass('active');
			});
			
			events.each(function(i, event) {
				$(event).fadeOut(500);
			});
			
			var nodeNum = parseInt(this.id.split('-')[2]);
			var thisEvent = events.eq(nodeNum)
			thisEvent.fadeIn(500);
			year.text(thisEvent.find('.event-text h3').text());
			$(this).addClass('active');
			
			linePos = $(this).position().left + ($(this).width() / 2) + 16;
			topline.animate({'left': linePos + 'px'}, 500);
			bottomline.animate({'left': linePos + 'px'}, 500);
			
			yearPos = linePos - (year.width() / 2) - 7;
			if (yearPos < 0) yearPos = 0;
			year.animate({'left': yearPos + 'px'}, 500);
		}
		
		var prevEvent = function() {
			var numNodes = timebar.children().length - 1;
			var activeNode = timebar.find('.active');
			var nodeNum = parseInt(activeNode.attr('id').split('-')[2]);
			if (nodeNum == 0) {
				var prevNum = numNodes;
			} else {
				var prevNum = nodeNum - 1;
			}
			$('#event-node-' + prevNum).trigger('click');
		}
		
		var nextEvent = function() {
			var numNodes = timebar.children().length - 1;
			var activeNode = timebar.find('.active');
			var nodeNum = parseInt(activeNode.attr('id').split('-')[2]);
			if (nodeNum == numNodes) {
				var nextNum = 0;
			} else {
				var nextNum = nodeNum + 1;
			}
			$('#event-node-' + nextNum).trigger('click');
		}
		
		if (numEvents) {
			for (i=0;i<numEvents;i++) {
				var node = $('<div></div>').attr('id', 'event-node-' + i).addClass('event-node').appendTo(timebar);
				if (i == 0) {
					node.addClass('active');
					year.text($('#event-0').find('.event-text h3').text());
					linePos = node.position().left + (node.width() / 2) + 16;
					topline.css('left', linePos + 'px');
					bottomline.css('left', linePos + 'px');
				} else {
					$('#event-' + i).hide();
				}
			}
			
			var nodes = timebar.children();
			nodes.each(function(i, node) {
				$(node).click(showHideEvent);
			});
			
			prev.click(prevEvent);
			next.click(nextEvent);
		}
	};
})($);
