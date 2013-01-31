//Store specific JS
(function($) { // make sure the $ is jQuery
$(document).ready(function() {
    function tfkChangeStoreLinks() {
        //Checks for presence of XID tracking code and changes the links within .subscriptions-container to match mapping
        if ($('.subscriptions-container').length && location.href.match(/\?xid\=|&xid\=/i)) {
            var parameters = "";
            var urlQueryString = new Array();
            var xidMap = new Array();
            var xid = "";
            var newHref = "";
            //Add more links/xids here
            xidMap['wetelp23'] = "https://subscription​.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1014068.html";
            xidMap['wetelp24'] = "https://subscription​.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1014069.html";
            xidMap['wetelp25'] = "https://subscription​.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1014070.html";
            xidMap['wetelp26'] = "https://subscription​.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1014071.html";
            xidMap['wetelp27'] = "https://subscription​.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1014072.html";
            xidMap['wetelp28'] = "https://subscription​.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1014073.html";
            parameters = window.location.search.substring(1);
            if (parameters != "") {
                parameterArray = parameters.split("&");
                for (i=0;i<parameterArray.length;i++) {
                    tmpArray = parameterArray[i].split("=");
                    key = tmpArray[0];value = tmpArray[1];
                    urlQueryString[key] = value;
                }
                if ("xid" in urlQueryString) {
                    xid = urlQueryString['xid'];
                    newHref = xidMap[xid];
                    $(".subscriptions-container div a:contains('Subscribe Now!')").attr("href", newHref);
                    $(".subscriptions-container div a img").parent().attr("href",newHref);
                    if ($('.#teacher-nav-container .content #block-block-16 a').length && $('.#teacher-nav-container .content #block-block-16 a').attr("href").match(/subscription.timeforkids.com/i)) {
                        $(this).attr("href",newHref);
                    }
                }
            }
        }
    }
    tfkChangeStoreLinks();
}); //End doc ready
})(jQuery); // make sure the $ is jQuery