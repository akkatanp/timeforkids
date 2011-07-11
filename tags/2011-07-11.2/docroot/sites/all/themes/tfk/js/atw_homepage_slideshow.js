var $ = jQuery;

$(document).ready(function() {
	if ($('#slideshow-container').hasClass('regular')) {
		$('#slideshow-container').regularSlideshow();
	} else {
		$('#slideshow-container #slideshow').slideshow();
	}
});

var nextSlideImg = function() {
	var curImg = $('#clicks .active');
	var nextImgNum = parseInt(curImg.attr('id').split('-')[1]) + 1;
	var nextImg = $('#img-' + nextImgNum).length > 0 ? $('#img-' + nextImgNum) : $('#img-0');
	nextImgNum = parseInt(nextImg.attr('id').split('-')[1]);
	
	$('#clicks').children().each(function(i, img) {
		$(img).removeClass('active');
		$('.title-container').children().eq(i).hide();
	});
	
	$('#slideshow-container #slideshow .inner').animate({'left': (-1 * (nextImgNum * 488)) + 'px'}, 500);
	nextImg.addClass('active');
	$('.title-container').children().eq(nextImgNum).show();
};

(function($) {
	$.fn.slideshow = function() {
		var inner = this.find('.inner');
		var footer = this.find('.footer');
		var numImgs = inner.children().length;
		var imgWidth = 488;

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
			
			if ($('#slideshow-container').hasClass('destination')) {
				setInterval('nextSlideImg()', 5000);
			}
		}
	};
	
	$.fn.regularSlideshow = function() {
		var inner = $('#slideshow .inner');
		var prev = $('#slideshow-controls #prev-slide');
		var next = $('#slideshow-controls #next-slide');
		var slideInfo = $('#slideshow-info').children();
		var numSlides = inner.children().length; 
		var slideNum = 0;
		var imgWidth = 488;
		
		var nextSlide = function() {
			var nextSlideNum = slideNum + 1;
			
			if (nextSlideNum == numSlides) {
				slideNum = 1;
				prevSlide();
			} else {
				inner.animate({'left': (-1 * (nextSlideNum * imgWidth)) + 'px'}, 500);
				slideInfo.each(function(i, slide) {
					$(slide).hide();
				});
				slideInfo.eq(nextSlideNum).show();
				
				slideNum = nextSlideNum;
				$('#slide-num').text(slideNum + 1);
			}
		};
		
		var prevSlide = function() {
			var prevSlideNum = slideNum - 1;
			
			if (prevSlideNum < 0) {
				slideNum = numSlides - 2;
				nextSlide();
			} else {
				inner.animate({'left': (-1 * (prevSlideNum * imgWidth)) + 'px'}, 500);
				slideInfo.each(function(i, slide) {
					$(slide).hide();
				});
				slideInfo.eq(prevSlideNum).show();
				
				slideNum = prevSlideNum;	
				$('#slide-num').text(slideNum + 1);
			}
		};
		
		if (numSlides) {
			inner.css('width', numSlides * imgWidth + 'px');
			prev.click(prevSlide);
			next.click(nextSlide);
		}
	};
})($);
