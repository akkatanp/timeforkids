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
		var timebar = $('#event-timeline-bar');
		
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
			$('#event-year').text(thisEvent.find('.event-text h3').text());
			jQuery(this).addClass('active');
		}
		
		if (numEvents) {
			for (i=0;i<numEvents;i++) {
				var node = $('<div></div>').attr('id', 'event-node-' + i).addClass('event-node').appendTo(timebar);
				if (i == 0) {
					node.addClass('active');
				}
			}
			
			var nodes = timebar.children();
			nodes.each(function(i, node) {
				$(node).click(showHideEvent);
			});
		}
	};
})($);
