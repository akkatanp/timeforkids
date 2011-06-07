var $ = jQuery;

$(document).ready(function() {
	var map = $('map');
	var locations = map.children();
	
	var locationClick = function(e) {
		$('#location-iframe').remove();
		e.preventDefault();
		var locationFrame = $('<iframe></iframe>').attr({
			'id' : 'location-iframe',
			'framborder': '0',
			'scrolling': 'no',
			'height': '0',
			'weight': '0',
			'src': $(this).attr('href')
		}).appendTo(document.body).load(function() {
			var locationBody = $(this).contents().find('body');
			var locationTable = $(locationBody).find('table');
			var locationImg = locationTable.find('img');
			var locationName = $('<h1></h1>').text(locationTable.find('.boldBlack20 font').text());
			
			var locationDiv = $('<div></div>').attr('id', 'location-container').append(locationImg).append(locationName);
			locationDiv.css({
				'top': $('#map-container img').position().top + 'px',
				'left': '10px'
				'height': $('#map-container img').height() + 'px'
			});
			locationDiv.appendTo($('#map-container'));
			
		});
	}
	
	locations.each(function(i, location) {
		$(location).removeAttr('onclick');
		$(location).click(locationClick);
	});
});
