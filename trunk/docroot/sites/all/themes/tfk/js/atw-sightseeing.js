var $ = jQuery;

$(document).ready(function() {
	var map = $('map');
	var locations = map.children();
	
	var locationClick = function(e) {
		e.preventDefault();
		alert($(this).attr('href'));
	}
	
	locations.each(function(i, location) {
		$(location).removeAttr('onclick');
		$(location).click(locationClick);
	});
});
