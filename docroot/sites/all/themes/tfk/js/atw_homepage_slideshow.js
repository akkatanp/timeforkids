(function($) {
	$(document).ready(function() {
		if ($('#slideshow-container').hasClass('regular')) {
			$('#slideshow-container').regularSlideshow();
		} else {
			$('#slideshow-container #slideshow').slideshow();
		}
	});
	
	$.fn.slideshow = function() {
		var inner = this.find('.inner');
		var footer = this.find('.footer');
		var numImgs = inner.children().length;
		var imgWidth = 488;
		$('#slideshow-container').css('left','0px');/*Unhide*/
		var slideImg = function() {
			imgs.each(function(i, img) {
				$(img).removeClass('active');
				$('.title-container').children().eq(i).hide();
				$('.foot-credit').children().eq(i).hide();
			});
			var imgNum = parseInt(this.id.split('-')[1]);
			inner.animate({'left': (-1 * (imgNum * imgWidth)) + 'px'}, 500);
			$(this).addClass('active');
			$('.title-container').children().eq(imgNum).show();
			$('.foot-credit').children().eq(imgNum).show();
		};
		
		if (numImgs) {
			inner.css('width', numImgs * imgWidth + 'px');
			var clicks = $('<ul></ul>').attr('id','clicks').appendTo(footer);
			
			for (i=0;i<numImgs;i++) {
				var dot = $('<li></li>').attr('id', 'img-' + i).appendTo(clicks);
				if (i == 0) {
					dot.addClass('active');
					$('.title-container').children().eq(0).show();
					$('.foot-credit').children().eq(0).show();
				}
				
			}
			
			var imgs = footer.find('#clicks').children();
			imgs.each(function(i, img) {
				$(img).click(slideImg);
			});
			
			if ($('#slideshow-container').hasClass('destination')) {
				setInterval(function() {
					var curImg = $('#clicks .active');
					var nextImgNum = parseInt(curImg.attr('id').split('-')[1]) + 1;
					var nextImg = $('#img-' + nextImgNum).length > 0 ? $('#img-' + nextImgNum) : $('#img-0');
					nextImgNum = parseInt(nextImg.attr('id').split('-')[1]);
					
					$('#clicks').children().each(function(i, img) {
						$(img).removeClass('active');
						$('.title-container').children().eq(i).hide();
						$('.foot-credit').children().eq(i).hide();
					});
					
					$('#slideshow-container #slideshow .inner').animate({'left': (-1 * (nextImgNum * 488)) + 'px'}, 500);
					nextImg.addClass('active');
					$('.title-container').children().eq(nextImgNum).show();
					$('.foot-credit').children().eq(nextImgNum).show();
				}, 5000);
			}
		}
	};
	
	$.fn.regularSlideshow = function() {
		var inner = $('#slideshow .inner');
		var prev = $('#slideshow-controls #prev-slide');
		var next = $('#slideshow-controls #next-slide');
		var slideInfo = $('#slideshow-info').children();
		var numSlides = inner.children().length; 
		var slideNum = parseInt(Drupal.settings.tfk_featured_slideshow.slide_number) ? parseInt(Drupal.settings.tfk_featured_slideshow.slide_number) : 0;
		var imgWidth = 488;
                var initialLoad = 0;
		if (slideNum && !(slideNum < 0)) {
                    //We clicked on a thumbnail from landing page. Transisition is not desired on init load
                    initialLoad = 1;
                } else {
                    $('#slideshow-container').css('left','0px');
                }
		var nextSlide = function() {
			var nextSlideNum = slideNum + 1;
			if (nextSlideNum == numSlides) {
				slideNum = 1;
				prevSlide();
			} else {
                            	if (initialLoad) {
                                    inner.css('left', (-1 * (nextSlideNum * imgWidth)) + 'px');
                                    initialLoad = 0;
                                    $('#slideshow-container').css('left','0px');
                                } else {
                                    inner.animate({'left': (-1 * (nextSlideNum * imgWidth)) + 'px'}, 500);
                                }
				slideInfo.each(function(i, slide) {
					$(slide).hide();
				});
				slideInfo.eq(nextSlideNum).show();
				
				slideNum = nextSlideNum;
				$('#slide-num').text(slideNum + 1);
				resize();
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
				resize();
			}
		};
		
		/**
		 * Expand/Retract the image container for vertical slideshows
		 * We call this function each time the nextSlide or prevSlide
		 * function is called to adjust the container size for the new
		 * image.
		 * 
		 * 10-29-13 HH
		 */

		var resize = function() {

			// Set the container div of our slideshow to a variable.
			var $container = $('#slideshow .outer');

			// Set the height of the current slide image to another variable.
			var slideHeight = $('#slideshow .ss-wrap img').eq(slideNum).css('height');

			console.log(slideHeight);
			
			if ($container.css('height') != slideHeight) {
				$container.css('height', slideHeight);
			}
			
		};

		if (numSlides) {
			inner.css('width', numSlides * imgWidth + 'px');
			prev.click(prevSlide);
			next.click(nextSlide);			
			
			if (slideNum && !(slideNum < 0)) {
				slideNum--;
				nextSlide();
			}
		}
	};
})(jQuery);
