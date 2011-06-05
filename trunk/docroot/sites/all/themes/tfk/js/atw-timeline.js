var $ = jQuery;

$(document).ready(function() {
	$('#event-container').timeline();
});

(function($) {
	$.fn.timeline = function() {
		var events = this.children();
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
			events.eq(nodeNum).show();
		}
		
		if (numEvents) {
			for (i=0;i<numEvents;i++) {
				var dot = $('<div></div>').attr('id': 'event-node-' + i).addClass('event-node').appendTo(timebar);
				if (i == 0) {
					dot.addClass('active');
				}
			}
			
			var nodes = timebar.children();
			nodes.each(function(i, node) {
				$(node).click(showHideEvent);
			});
		}
	};
})($);
