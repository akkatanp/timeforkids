var $ = jQuery;

$(document).ready(function() {
	$("#audio-player").jPlayer({
		swfPath: '/sites/all/themes/tfk/js/jplayer',
		solution: 'html, flash',
		supplied: 'mp3, mp4',
		volume: 0.8,
		muted: false,
		backgroundColor: '#000000',
		cssSelectorAncestor: '#jp_interface_1',
		cssSelector: {
			play: '.jp-play',
			pause: '.jp-pause',
			stop: '.jp-stop'
		},
		ready: function() {
			$('#native-lingo-container').nativeLingo();
		}
	});
});

(function($) {
	$.fn.nativeLingo = function() {
		var basics = $(this).find('#basics .phrase a.audio-link');
		var nextLevel = $(this).find('#next-level .phrase a.audio-link');
		
		var activateClip = function(e) {
			e.preventDefault();
			$('#phrase-text').text($(this).text());
			$('#phrase-translation').text($(this).attr('rel'));
			$("#audio-player").jPlayer('setFile', $(this).attr('href')).jPlayer('play');
		};
		
		if (basics.length) {
			basics.each(function(i, clip) {
				if (i == 0) {
					$('#phrase-text').text($(clip).text());
					$('#phrase-translation').text($(clip).attr('rel'));
					$("#audio-player").jPlayer('setFile', $(clip).attr('href'));
				}
				$(clip).click(activateClip);
			});
		}
		
		if (nextLevel.length) {
			nextLevel.each(function(i, clip) {
				if (i == 0 && !basics.length) {
					$('#phrase-text').text($(clip).text());
					$('#phrase-translation').text($(clip).attr('rel'));
					$("#audio-player").jPlayer('setFile', $(clip).attr('href'));
				}
				$(clip).click(activateClip);
			});
		}
	};
})($);
