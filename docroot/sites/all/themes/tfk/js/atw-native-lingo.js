var $ = jQuery;

$(document).ready(function() {
	$('#native-lingo-container').nativeLingo();
});

(function($) {
	$.fn.nativeLingo = function() {
		var basics = $(this).find('#basics .phrase a');
		var nextLevel = $(this).find('#next-level .phrase a');
		
		var activateClip = function(e) {
			e.preventDefault();
			$('#phrase-text').text($(this).html());
			$('#phrase-translation').text($(this).attr('rel'));
		};
		
		if (basics.length) {
			basics.each(function(i, clip) {
				if (i == 0) {
					$('#phrase-text').text($(clip).html());
					$('#phrase-translation').text($(clip).attr('rel'));
				}
				$(clip).click(activateClip);
			});
		}
		
		if (nextLevel.length) {
			nextLevel.each(function(i, clip) {
				if (i == 0 && !basics.length) {
					$('#phrase-text').text($(clip).html());
					$('#phrase-translation').text($(clip).attr('rel'));
				}
				$(clip).click(activateClip);
			});
		}
	};
})($);
