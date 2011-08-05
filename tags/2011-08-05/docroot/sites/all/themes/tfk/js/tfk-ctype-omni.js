//Ctype specific omniture. Loaded as needed.
$(document).ready(function() {
        //Omniture for slideshow clicks
        if ($('body.page-node.node-type-slideshow').length) {
            var tfkCurrentSlideNum = "";
            var tfkCurrentTotalSlideNum = $('#num-slides').text();
            $('#prev-slide').click(function(event){
                tfkCurrentSlideNum = parseInt($('#slide-num').text());
                if(tfkCurrentSlideNum == 1) {
                    tfkCurrentSlideNum = tfkCurrentTotalSlideNum;
                } else {
                    tfkCurrentSlideNum = tfkCurrentSlideNum - 1;
                }
                omniPgTrack(tfkCurrentSlideNum);
            });
            $('#next-slide').click(function(event){
                tfkCurrentSlideNum = parseInt($('#slide-num').text());
                if(tfkCurrentSlideNum < tfkCurrentTotalSlideNum) {
                    tfkCurrentSlideNum = tfkCurrentSlideNum + 1;
                } else {
                    tfkCurrentSlideNum = 1;
                }
                omniPgTrack(tfkCurrentSlideNum);
            });
        }
        
});