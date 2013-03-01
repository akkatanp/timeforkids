var $ = jQuery;

$(document).ready(function() {
	var map = $('map');
	var locations = map.children();
	
	var locationClick = function(e) {
		e.preventDefault();
		$('#location-iframe').remove();
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
			var locationText = $('<p></p>').text(locationTable.find('.storyText').eq(1).text());
			
			var locationDiv = $('<div></div>').attr('id', 'location-container').append(locationImg).append(locationName).append(locationText);
			locationDiv.css({
				'top': $('#map-container img').position().top + 'px',
				'left': '0px',
				'height': $('#map-container img').height() - 20 + 'px',
				'width': $('#map-container img').width() - 20 + 'px'
			});
			
			var locationMask = $('<div></div>').attr('id', 'location-mask').css({
				'top': $('#map-container img').position().top + 'px',
				'left': '0px',
				'height': $('#map-container img').height() + 'px',
				'width': $('#map-container img').width() + 'px'
			});
			
			var closeButton = $('<div></div>').attr('id','close').click(function() {
				$('#location-mask').remove();
				$('#location-container').remove();
			}).appendTo(locationDiv);
			locationMask.appendTo($('#map-container'));
			locationDiv.appendTo($('#map-container'));
		});
	}
	
	locations.each(function(i, location) {
		$(location).removeAttr('onclick');
		$(location).click(locationClick);
	});
});
