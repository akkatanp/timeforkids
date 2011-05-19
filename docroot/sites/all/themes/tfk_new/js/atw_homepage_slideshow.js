var $ = jQuery;

$(document).ready(function() {
	$('#atw-container #slideshow').slideshow();
});

(function($) {
	$.fn.slideshow = function() {
		var inner = this.find('.inner');
		var footer = this.find('.footer');
		var numImgs = inner.children().length;
		var imgWidth = 490;
		var currentImg = 0;

		var slideImg = function() {
			imgs.each(function(i, img) {
				$(img).removeClass('active');
				$('.title-container').children().eq(i).hide();
			});
			var imgNum = parseInt(this.id.split('-')[1]);
			inner.animate({'left': (-1 * (imgNum * imgWidth)) + 'px'}, 500);
			jQuery(this).addClass('active');
			$('.title-container').children().eq(imgNum).show();
		};

		if (numImgs) {
			inner.css('width', numImgs * imgWidth + 'px');
			var clicks = $('<ul></ul>').attr('id','clicks').appendTo(footer);

			for (i=0;i<numImgs;i++) {
				var dot = $('<li></li>').attr('id', 'img-' + i).appendTo(clicks);
				if (i == 0) {
					dot.addClass('active');
					$('.title-container').children().eq(0).show();
				}
				
			}

			var imgs = footer.find('#clicks').children();
			imgs.each(function(i, img) {
				$(img).click(slideImg);
			});
		}
	};
})($);
