var $ = jQuery;

$(document).ready(function() {
	$('#atw-container #slideshow').slideshow();
});

var nextSlideImg = function() {
	var curImg = $('#atw-container #slideshow').find('.footer').find('#clicks').children().find('.active');
	alert(curImg);
	var nextImgNum = parseInt(curImg.eq(0).id.split('-')[1]) + 1;
	var nextImg = $('#img-' + nextImgNum) ? $('#img-' + nextImgNum) : $('#img-0');
	nextImgNum = parseInt(nextImg.id.split('-')[1]);
	
	imgs.each(function(i, img) {
		$(img).removeClass('active');
		$('.title-container').children().eq(i).hide();
	});
	
	inner.animate({'left': (-1 * (nextImgNum * imgWidth)) + 'px'}, 500);
	nextImg.addClass('active');
	$('.title-container').children().eq(nextImgNum).show();
};

(function($) {
	$.fn.slideshow = function() {
		var inner = this.find('.inner');
		var footer = this.find('.footer');
		var numImgs = inner.children().length;
		var imgWidth = 490;

		var slideImg = function() {
			imgs.each(function(i, img) {
				$(img).removeClass('active');
				$('.title-container').children().eq(i).hide();
			});
			var imgNum = parseInt(this.id.split('-')[1]);
			inner.animate({'left': (-1 * (imgNum * imgWidth)) + 'px'}, 500);
			$(this).addClass('active');
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
			
			if ($('#atw-container').hasClass('destination')) {
				nextSlideImg();
				//setInterval('nextSlideImg()', 5000);
			}
		}
	};
})($);
