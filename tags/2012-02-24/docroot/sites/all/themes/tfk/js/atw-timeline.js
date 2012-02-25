(function($) {
	$(document).ready(function() {
		$('#event-container').timeline();
	});
	
	$.fn.timeline = function() {
		var events = this.children();
		events = events.not('.clearfix');
		var numEvents = events.length;
		var eventContainer = $('#event-container');
		var year = $('#event-year');
		var timebar = $('#event-timeline-bar');
		var inner = timebar.find('#inner');
		var topline = $('#line-above');
		var bottomline = $('#line-below');
		var prev = $('#prev');
		var next = $('#next');
		var numNodes = 0;
		var maxNodes = 19;
		var nodeWidth = 24;
		var nodeNum = 0;
		var leftNode = 0;
		var page = 1;
		
		var showHideEvent = function() {
			nodes.each(function(i, node) {
				$(node).removeClass('active');
			});
			
			events.each(function(i, event) {
				$(event).fadeOut(500);
			});
			
			var nodeNum = parseInt(this.id.split('-')[2]);
			var thisEvent = events.eq(nodeNum);
			thisEvent.fadeIn(500);
			year.text(thisEvent.find('.event-text h3').text());
			$(this).addClass('active');
			
			linePos = $(this).position().left + ($(this).width() / 2) + 16;
			linePos = linePos - ((page - 1) * (maxNodes * nodeWidth));
			
			topline.animate({'left': linePos + 'px'}, 500);
			bottomline.animate({'left': linePos + 'px'}, 500);
			
			yearPos = linePos - (year.width() / 2) - 7;
			if (yearPos < 0) yearPos = 0;
			year.animate({'left': yearPos + 'px'}, 500);
		}
		
		var prevEvent = function() {
			var activeNode = inner.find('.active');
			nodeNum = parseInt(activeNode.attr('id').split('-')[2]);
			
			if (nodeNum == 0) {
				var prevNum = events.length - 1;
				if (prevNum > maxNodes - 1) {
					page = Math.floor(events.length/maxNodes) + 1;
					leftNode = maxNodes * page;
				}
			} else {
				var prevNum = nodeNum - 1;
			}
			
			if (prevNum < leftNode) {
				if (prevNum == events.length - 1) {
					inner.animate({'left': (-1 * ((page - 1) * (maxNodes * nodeWidth))) + 'px'}, 500, function() {
						$('#event-node-' + prevNum).trigger('click');
					});
				} else {
					page--;
					inner.animate({'left': ((page - 1) * (maxNodes * nodeWidth)) + 'px'}, 500, function() {
						$('#event-node-' + prevNum).trigger('click');
					});
				}
				leftNode = leftNode - maxNodes;
			} else {
				$('#event-node-' + prevNum).trigger('click');
			}
		}
		
		var nextEvent = function() {
			var activeNode = inner.find('.active');
			var nodeNum = parseInt(activeNode.attr('id').split('-')[2]);
			
			if (nodeNum == events.length - 1) {
				var nextNum = 0;
				page = 0;
			} else {
				var nextNum = nodeNum + 1;
			}
			
			if (nextNum == (maxNodes * page)) {
				inner.animate({'left': (-1 * ((page) * (maxNodes * nodeWidth))) + 'px'}, 500, function() {
					$('#event-node-' + nextNum).trigger('click');
				});
				leftNode = (maxNodes * page);
				page++;
			} else {
				$('#event-node-' + nextNum).trigger('click');
			}
		}
		
		if (numEvents) {
			for (i=0;i<numEvents;i++) {
				var node = $('<div></div>').attr('id', 'event-node-' + i).addClass('event-node').appendTo(inner);
				if (i == 0) {
					$('#event-' + i).css('visibility', 'visible').show();
					node.addClass('active');
					year.text($('#event-0').find('.event-text h3').text());
					linePos = node.position().left + (node.width() / 2) + 16;
					topline.css('left', linePos + 'px');
					bottomline.css('left', linePos + 'px');
				} else {
					$('#event-' + i).css('visibility', 'visible').hide();
				}
			}
			
			var nodes = inner.children();
			inner.width(nodes.length * nodeWidth);
			nodes.each(function(i, node) {
				$(node).click(showHideEvent);
			});
			
			prev.click(prevEvent);
			next.click(nextEvent);
		}
	};
})(jQuery);
