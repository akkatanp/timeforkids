var $ = jQuery;

$(document).ready(function() {
	var map = $('map');
	
	var locationClick = function(e) {
		e.preventDefault();
		alert($(this).attr('href'));
	}
	
	map.each(function(i, location) {
		$(location).removeAttr('onclick');
		$(location).click(locationClick);
	});
});
