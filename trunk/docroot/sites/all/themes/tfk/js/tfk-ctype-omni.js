//Ctype specific omniture. Loaded as needed.
(function($) { // make sure the $ is jQuery
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
        //Omniture for favorites/save on worksheets
        if ($('body.page-worksheets').length) {
            $('.search-result').delegate('a.flag-action', 'mousedown', function() {//click being used by worksheet code, use mousedown
                omniTrack('favorite');
            });
            $('.search-result').delegate('a.unflag-action', 'mousedown', function() {//click being used by worksheet code, use mousedown
                omniTrack('remove from favorite');
            });
            $('.savebtn > a').click(function(event){
                omniTrack('save search');
            });
        }
        //Omniture for teacher discussion commenting
        if ($('body.node-type-teacher-community-question').length) {
            $('#comment-form #edit-submit').click(function(event){
                omniTrack('comment');
            });
        }
        //Omniture for favorites on photos/video channel page
        if ($('body.page-photos-video').length) {
            $('.flag-wrapper').delegate('a.flag-action', 'mousedown', function() {//click being used by favorite code, use mousedown
                omniTrack('favorite');
            });
            $('.flag-wrapper').delegate('a.unflag-action', 'mousedown', function() {//click being used by favorite code, use mousedown
                omniTrack('remove from favorite');
            });
        }
}); //End doc ready
})(jQuery); // make sure the $ is jQuery