var $ = jQuery;

var popcustom =function(url) {
	//alert(url);
}

$(document).ready(function() {
	var map = $('map');
	map.each(function(i, location) {
		$(location).unbind('click');
	}
});
