(function($) {
	$(document).ready(function() {
		var map = $('#sightseeing-map');
		var locations = map.children();
		
		var locationClick = function(e) {
			e.preventDefault();
			
			if ($('#location-iframe')) {
				$('#location-iframe').remove();
			}
			
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
				var locationTextContainer = $('<div class="location-text-container"></div>');
                                locationTextContainer.css('display', 'none');
				var locationImg = $('<img/>');
				/*locationImg.attr('src',locationTable.find('img').eq(0).attr('src'));*/
                                locationImg.attr('src',locationTable.find('img').eq(0).attr('src') + '?random=' + (new Date()).getTime());/*Random string needed for IE img.load event to work*/
				locationImg.load(function() {
					if (locationImg.width() < locationImg.height()) {
                                                locationTextContainer.css('display', 'inline-block');
                                                locationTextContainer.css('width', $('#map-container img').width() - 20 - locationImg.width() - 13 + 'px');
						locationImg.css('float', 'left');
                                                locationTextContainer.css('float', 'right');
                                                /*locationTextContainer.css('width','253px');*/
					}
                                        locationTextContainer.css('display', 'inline-block');
				});
                                // Don't toLowerCase() since all names are typed in correctly and this won't work for camel cased text.
                                //var locationName = $('<h1></h1>').text(locationTable.find('.boldBlack20 font').text().toLowerCase());
				var locationName = $('<h1></h1>').text(locationTable.find('.boldBlack20 font').text());
				var locationText = $('<p></p>').text(locationTable.find('.storyText').eq(1).text());
                                locationTextContainer.append(locationName).append(locationText);
				var locationDiv = $('<div></div>').attr('id', 'location-container').append(locationImg).append(locationTextContainer);
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
		};
		
		locations.each(function(i, location) {
			$(location).removeAttr('onclick');
			$(location).click(locationClick);
		});
	});
})(jQuery);