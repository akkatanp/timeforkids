var $ = jQuery;

$(document).ready(function() {
	var map = $('map');
	var locations = map.children();
	var locationFrame = $('<iframe></iframe>').attr({
		'framborder': '0',
		'scrolling': 'no',
		'height': '0',
		'weight': '0'
	}).appendTo(document.body);
	
	var locationClick = function(e) {
		e.preventDefault();
		locationFrame.attr('href', $(this).attr('href'));
	}
	
	locations.each(function(i, location) {
		$(location).removeAttr('onclick');
		$(location).click(locationClick);
	});
});
