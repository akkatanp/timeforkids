<?php
// $Id$
/**
 * Access control for update.php script.
 *
 * If you are updating your Drupal installation using the update.php script but
 * are not logged in using either an account with the "Administer software
 * updates" permission or the site maintenance account (the account that was
 * created during installation), you will need to modify the access check
 * statement below. Change the FALSE to a TRUE to disable the access check.
 * After finishing the upgrade, be sure to open this file again and change the
 * TRUE back to a FALSE!
 */
$update_free_access = FALSE;

/**
 * Salt for one-time login links and cancel links, form tokens, etc.
 *
 * This variable will be set to a random value by the installer. All one-time
 * login links will be invalidated if the value is changed.  Note that this
 * variable must have the same value on every web server.  If this variable is
 * empty, a hash of the serialized database credentials will be used as a
 * fallback salt.
 *
 * For enhanced security, you may set this variable to a value using the
 * contents of a file outside your docroot that is never saved together
 * with any backups of your Drupal files and database.
 *
 * Example:
 *   $drupal_hash_salt = file_get_contents('/home/example/salt.txt');
 *
 */
$drupal_hash_salt = 'WmcsPohh04SzhFOp7g3GEoFpjv2m8cqp5jNW71M22Jo';

/**
 * Base URL (optional).
 *
 * If Drupal is generating incorrect URLs on your site, which could
 * be in HTML headers (links to CSS and JS files) or visible links on pages
 * (such as in menus), uncomment the Base URL statement below (remove the
 * leading hash sign) and fill in the absolute URL to your Drupal installation.
 *
 * You might also want to force users to use a given domain.
 * See the .htaccess file for more information.
 *
 * Examples:
 *   $base_url = 'http://www.example.com';
 *   $base_url = 'http://www.example.com:8888';
 *   $base_url = 'http://www.example.com/drupal';
 *   $base_url = 'https://www.example.com:8888/drupal';
 *
 * It is not allowed to have a trailing slash; Drupal will add it
 * for you.
 */
# $base_url = 'http://www.example.com';  // NO trailing slash!

/**
 * PHP settings:
 *
 * To see what PHP settings are possible, including whether they can be set at
 * runtime (by using ini_set()), read the PHP documentation:
 * http://www.php.net/manual/en/ini.list.php
 * See drupal_initialize_variables() in includes/bootstrap.inc for required
 * runtime settings and the .htaccess file for non-runtime settings. Settings
 * defined there should not be duplicated here so as to avoid conflict issues.
 */

/**
 * Some distributions of Linux (most notably Debian) ship their PHP
 * installations with garbage collection (gc) disabled. Since Drupal depends on
 * PHP's garbage collection for clearing sessions, ensure that garbage
 * collection occurs by using the most common settings.
 */
ini_set('session.gc_probability', 1);
ini_set('session.gc_divisor', 100);

/**
 * Set session lifetime (in seconds), i.e. the time from the user's last visit
 * to the active session may be deleted by the session garbage collector. When
 * a session is deleted, authenticated users are logged out, and the contents
 * of the user's $_SESSION variable is discarded.
 */
ini_set('session.gc_maxlifetime', 200000);

/**
 * Set session cookie lifetime (in seconds), i.e. the time from the session is
 * created to the cookie expires, i.e. when the browser is expected to discard
 * the cookie. The value 0 means "until the browser is closed".
 */
ini_set('session.cookie_lifetime', 0);

/**
 * If you encounter a situation where users post a large amount of text, and
 * the result is stripped out upon viewing but can still be edited, Drupal's
 * output filter may not have sufficient memory to process it.  If you
 * experience this issue, you may wish to uncomment the following two lines
 * and increase the limits of these variables.  For more information, see
 * http://php.net/manual/en/pcre.configuration.php.
 */
# ini_set('pcre.backtrack_limit', 200000);
# ini_set('pcre.recursion_limit', 200000);

/**
 * Drupal automatically generates a unique session cookie name for each site
 * based on on its full domain name. If you have multiple domains pointing at
 * the same Drupal site, you can either redirect them all to a single domain
 * (see comment in .htaccess), or uncomment the line below and specify their
 * shared base domain. Doing so assures that users remain logged in as they
 * cross between your various domains.
 */
# $cookie_domain = 'example.com';

/**
 * Variable overrides:
 *
 * To override specific entries in the 'variable' table for this site,
 * set them here. You usually don't need to use this feature. This is
 * useful in a configuration file for a vhost or directory, rather than
 * the default settings.php. Any configuration setting from the 'variable'
 * table can be given a new value. Note that any values you provide in
 * these variable overrides will not be modifiable from the Drupal
 * administration interface.
 *
 * The following overrides are examples:
 * - site_name: Defines the site's name.
 * - theme_default: Defines the default theme for this site.
 * - anonymous: Defines the human-readable name of anonymous users.
 * Remove the leading hash signs to enable.
 */
# $conf['site_name'] = 'My Drupal site';
# $conf['theme_default'] = 'garland';
# $conf['anonymous'] = 'Visitor';

/**
 * A custom theme can be set for the offline page. This applies when the site
 * is explicitly set to maintenance mode through the administration page or when
 * the database is inactive due to an error. It can be set through the
 * 'maintenance_theme' key. The template file should also be copied into the
 * theme. It is located inside 'modules/system/maintenance-page.tpl.php'.
 * Note: This setting does not apply to installation and update pages.
 */
# $conf['maintenance_theme'] = 'bartik';

/**
 * Enable this setting to determine the correct IP address of the remote
 * client by examining information stored in the X-Forwarded-For headers.
 * X-Forwarded-For headers are a standard mechanism for identifying client
 * systems connecting through a reverse proxy server, such as Squid or
 * Pound. Reverse proxy servers are often used to enhance the performance
 * of heavily visited sites and may also provide other site caching,
 * security or encryption benefits. If this Drupal installation operates
 * behind a reverse proxy, this setting should be enabled so that correct
 * IP address information is captured in Drupal's session management,
 * logging, statistics and access management systems; if you are unsure
 * about this setting, do not have a reverse proxy, or Drupal operates in
 * a shared hosting environment, this setting should remain commented out.
 */
# $conf['reverse_proxy'] = TRUE;

/**
 * Set this value if your proxy server sends the client IP in a header other
 * than X-Forwarded-For.
 *
 * The "X-Forwarded-For" header is a comma+space separated list of IP addresses,
 * only the last one (the left-most) will be used.
 */
# $conf['reverse_proxy_header'] = 'HTTP_X_CLUSTER_CLIENT_IP';

/**
 * reverse_proxy accepts an array of IP addresses.
 *
 * Each element of this array is the IP address of any of your reverse
 * proxies. Filling this array Drupal will trust the information stored
 * in the X-Forwarded-For headers only if Remote IP address is one of
 * these, that is the request reaches the web server from one of your
 * reverse proxies. Otherwise, the client could directly connect to
 * your web server spoofing the X-Forwarded-For headers.
 */
# $conf['reverse_proxy_addresses'] = array('a.b.c.d', ...);

/**
 * Page caching:
 *
 * By default, Drupal sends a "Vary: Cookie" HTTP header for anonymous page
 * views. This tells a HTTP proxy that it may return a page from its local
 * cache without contacting the web server, if the user sends the same Cookie
 * header as the user who originally requested the cached page. Without "Vary:
 * Cookie", authenticated users would also be served the anonymous page from
 * the cache. If the site has mostly anonymous users except a few known
 * editors/administrators, the Vary header can be omitted. This allows for
 * better caching in HTTP proxies (including reverse proxies), i.e. even if
 * clients send different cookies, they still get content served from the cache
 * if aggressive caching is enabled and the minimum cache time is non-zero.
 * However, authenticated users should access the site directly (i.e. not use an
 * HTTP proxy, and bypass the reverse proxy if one is used) in order to avoid
 * getting cached pages from the proxy.
 */
 $conf['omit_vary_cookie'] = TRUE;

/**
 * CSS/JS aggregated file gzip compression:
 *
 * By default, when CSS or JS aggregation and clean URLs are enabled Drupal will
 * store a gzip compressed (.gz) copy of the aggregated files. If this file is
 * available then rewrite rules in the default .htaccess file will serve these
 * files to browsers that accept gzip encoded content. This allows pages to load
 * faster for these users and has minimal impact on server load. If you are
 * using a webserver other than Apache httpd, or a caching reverse proxy that is
 * configured to cache and compress these files itself you may want to uncomment
 * one or both of the below lines, which will prevent gzip files being stored.
 */
# $conf['css_gzip_compression'] = FALSE;
# $conf['js_gzip_compression'] = FALSE;

/**
 * String overrides:
 *
 * To override specific strings on your site with or without enabling locale
 * module, add an entry to this list. This functionality allows you to change
 * a small number of your site's default English language interface strings.
 *
 * Remove the leading hash signs to enable.
 */
# $conf['locale_custom_strings_en'][''] = array(
#   'forum'      => 'Discussion board',
#   '@count min' => '@count minutes',
# );

/**
 *
 * IP blocking:
 *
 * To bypass database queries for denied IP addresses, use this setting.
 * Drupal queries the {blocked_ips} table by default on every page request
 * for both authenticated and anonymous users. This allows the system to
 * block IP addresses from within the administrative interface and before any
 * modules are loaded. However on high traffic websites you may want to avoid
 * this query, allowing you to bypass database access altogether for anonymous
 * users under certain caching configurations.
 *
 * If using this setting, you will need to add back any IP addresses which
 * you may have blocked via the administrative interface. Each element of this
 * array represents a blocked IP address. Uncommenting the array and leaving it
 * empty will have the effect of disabling IP blocking on your site.
 *
 * Remove the leading hash signs to enable.
 */
# $conf['blocked_ips'] = array(
#   'a.b.c.d',
# );

/**
 * Authorized file system operations:
 *
 * The Update manager module included with Drupal provides a mechanism for
 * site administrators to securely install missing updates for the site
 * directly through the web user interface by providing either SSH or FTP
 * credentials. This allows the site to update the new files as the user who
 * owns all the Drupal files, instead of as the user the webserver is running
 * as. However, some sites might wish to disable this functionality, and only
 * update the code directly via SSH or FTP themselves. This setting completely
 * disables all functionality related to these authorized file operations.
 *
 * Remove the leading hash signs to disable.
 */
# $conf['allow_authorize_operations'] = FALSE;

/**
 * Acquia Network/Acquia Search settings
 */
$conf["acquia_identifier"] = "GHRY-22798";
$conf["acquia_key"] = "afd80ec55187436a7d83345415cffdd7";
#$conf["apachesolr_path"] = "/solr/GHRY-22798";

/**
 * Filesystem settings
 */
$conf["file_public_path"] = "files";
$conf["file_temporary_path"] = "/mnt/tmp/timedev";
$conf["file_private_path"] = "/mnt/files/timedev/files-private";

// Drupal 7 does not cache pages when we invoke hooks during bootstrap. This needs
// to be disabled.
$conf['page_cache_invoke_hooks'] = FALSE;

/**
 * Memcached Config Settings
 *
 * Add the following line of code to your settings.php file to cache anything normally stored in a cache* table in the Drupal database in Memcached.
 */
$conf['cache_inc'] = './sites/all/modules/contrib/memcache/memcache.inc';
//$conf['session_inc'] = './sites/all/modules/contrib/memcache/memcache-session.inc';

include_once('./includes/cache.inc');
include_once('./sites/all/modules/contrib/memcache/memcache.inc');
$conf['cache_default_class'] = 'MemCacheDrupal';

/**
 * Acquia Config file
 *
 * This file is required to connect to an Acquia server and manages the DB connection.
 */
require('/var/www/site-php/time.test/time-settings.inc');


/**
 * Fast 404 settings:
 *
 * Fast 404 will do two separate types of 404 checking.
 *
 * The first is to check for URLs which appear to be files or images. If Drupal
 * is handling these items, then they were not found in the file system and are
 * a 404.
 *
 * The second is to check whether or not the URL exists in Drupal by checking
 * with the menu router, aliases and redirects. If the page does not exist, we
 * will server a fast 404 error and exit.
 */

# Load the fast_404.inc file. This is needed if you wish to do extension
# checking in settings.php.
include_once('./sites/all/modules/contrib/fast_404/fast_404.inc');

# Disallowed extensions. Any extension in here will not be served by Drupal and
# will get a fast 404.
# Default extension list, this is considered safe and is even in queue for
# Drupal 8 (see: http://drupal.org/node/76824).
$conf['fast_404_exts'] = '/[^robots]\.(txt|png|gif|jpe?g|css|js|ico|swf|flv|cgi|bat|pl|dll|exe|asp)$/i';

# Allow anonymous users to hit URLs containing 'imagecache' even if the file
# does not exist. TRUE is default behavior. If you know all imagecache
# variations are already made set this to FALSE.
$conf['fast_404_allow_anon_imagecache'] = TRUE;

# Extension list requiring whitelisting to be activated **If you use this
# without whitelisting enabled your site will not load!
//$conf['fast_404_exts'] = '/\.(txt|png|gif|jpe?g|css|js|ico|swf|flv|cgi|bat|pl|dll|exe|asp|php|html?|xml)$/i';



# Default fast 404 error message.
$conf['fast_404_html'] = '
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN"
  "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" version="XHTML+RDFa 1.0" dir="ltr"
  xmlns:content="http://purl.org/rss/1.0/modules/content/"
  xmlns:dc="http://purl.org/dc/terms/"
  xmlns:foaf="http://xmlns.com/foaf/0.1/"
  xmlns:og="http://ogp.me/ns#"
  xmlns:rdfs="http://www.w3.org/2000/01/rdf-schema#"
  xmlns:sioc="http://rdfs.org/sioc/ns#"
  xmlns:sioct="http://rdfs.org/sioc/types#"
  xmlns:skos="http://www.w3.org/2004/02/skos/core#"
  xmlns:xsd="http://www.w3.org/2001/XMLSchema#" class="no-js">

<head profile="http://www.w3.org/1999/xhtml/vocab">
  <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<script type="text/javascript">var NREUMQ=NREUMQ||[];NREUMQ.push(["mark","firstbyte",new Date().getTime()]);</script><link rel="shortcut icon" href="http://www.timeforkids.com/favicon.ico" type="image/vnd.microsoft.icon" />
<meta name="description" content="Digital Edition Cover" />
<meta name="keywords" content="Digital Edition" />
<meta name="Generator" content="Drupal 7 (http://drupal.org)" />
    <title>Page Not Found | TIME For Kids</title>
    <link type="text/css" rel="stylesheet" href="http://www.timeforkids.com/files/css/css_pbm0lsQQJ7A7WCCIMgxLho6mI_kBNgznNUWmTWcnfoE.css" media="all" />
<link type="text/css" rel="stylesheet" href="http://www.timeforkids.com/files/css/css_vv4pljwlvwdCGPcixhZ126582XBUyQM6Fs-F_c0Bkt0.css" media="all" />
<link type="text/css" rel="stylesheet" href="http://www.timeforkids.com/files/css/css_IViljsZVWJO2uTRG53g8n5DiAJMo1VOERpg9iE3B7n4.css" media="all" />
<link type="text/css" rel="stylesheet" href="http://www.timeforkids.com/files/css/css_Y1p_XSG9jdeoJivYno0WnDBQAjd6TRrUa-vM0p0v2SE.css" media="all" />
<link type="text/css" rel="stylesheet" href="http://www.timeforkids.com/files/css/css_D1i4lIfeiXCWUKCnhUE6oWUYnUOv8n7qbmD-cSuPAUA.css" media="all" />
<link type="text/css" rel="stylesheet" href="http://www.timeforkids.com/files/css/css_e0Oi8I1L8cGJ7KxcUbimLkO-ivlPDoZXuBZMWKAz5GY.css" media="print" />

<!--[if lte IE 8]>
<link type="text/css" rel="stylesheet" href="http://www.timeforkids.com/files/css/css_60RtK0G2Vv8wTD73AYblv93KxhHwYAeuyHliqQgr-rE.css" media="all" />
<![endif]-->

<!--[if lte IE 7]>
<link type="text/css" rel="stylesheet" href="http://www.timeforkids.com/files/css/css_ASwTmD8Einhykpj6G4tR1NTH7a7d73XnA7jveby0Z6o.css" media="all" />
<![endif]-->

<!--[if lte IE 6]>
<link type="text/css" rel="stylesheet" href="http://www.timeforkids.com/files/css/css_FfUxaviuIvL7pz6eKI_g5wtdwNXiTnsvUosYv6SwcoM.css" media="all" />
<![endif]-->
  <script type="text/javascript" src="http://www.timeforkids.com/files/js/js_YG98FuAkznGpfUVD7la3EObWLhNr4zOIqZcdXzZxHVI.js"></script>
<script type="text/javascript" src="http://www.timeforkids.com/files/js/js_hVl1i_lmOd7398XNY-MDmW_7-2JoUpOsFkN1QXx5SoY.js"></script>
<script type="text/javascript" src="http://www.timeforkids.com/files/js/js_mRqY7Vq7qnkrx62YbcU_laOTIAlqZiajklRfP2eibuU.js"></script>
<script type="text/javascript" src="http://tiads.timeforkids.com/ads/tgx.js"></script>
<script type="text/javascript">
<!--//--><![CDATA[//><!--
var adConfig = new TiiAdConfig("3475.tfk");adConfig.setCmSitename("cm.tfk");adConfig.setRevSciTracking(false);var adFactory = new TiiAdFactory(adConfig, "kids/not found page");adFactory.setChannel("not found page");adFactory.setSubchannel("");
//--><!]]>
</script>
<script type="text/javascript">
<!--//--><![CDATA[//><!--
var s_account=\'timekidscom\';
//--><!]]>
</script>
<script type="text/javascript" src="http://www.timeforkids.com/files/js/js_pRKcY9wHo6uzSvSiT_PwCI7NyJehv8ULgr3AL-x3q-g.js"></script>
<script type="text/javascript">
<!--//--><![CDATA[//><!--
s_time.channel = \'tfk\';
s_time.pageType = \'errorPage\';
s_time.prop17 = location.href;
var s_code=s_time.t();if(s_code)document.write(s_code)

//--><!]]>
</script>
<script type="text/javascript" src="http://www.timeforkids.com/files/js/js_chPWOJ2eXq0fyYsnDJB4mojm-MLNIPY4yH6hyYmAwWY.js"></script>
<script type="text/javascript">
<!--//--><![CDATA[//><!--
jQuery.extend(Drupal.settings, {"basePath":"\/","pathPrefix":"","ajaxPageState":{"theme":"tfk","theme_token":"5zRsEkcekFsZxp9KGxcmC0KtcsovPdG6b8Pn2rUjYQY","js":{"sites\/all\/modules\/jquery_update\/replace\/jquery\/1.8\/jquery.min.js":1,"misc\/jquery.once.js":1,"misc\/drupal.js":1,"sites\/all\/modules\/jquery_update\/replace\/ui\/ui\/minified\/jquery.ui.core.min.js":1,"sites\/all\/modules\/jquery_update\/replace\/ui\/ui\/minified\/jquery.ui.widget.min.js":1,"sites\/all\/modules\/jquery_update\/replace\/ui\/ui\/minified\/jquery.ui.button.min.js":1,"sites\/all\/modules\/jquery_update\/replace\/ui\/ui\/minified\/jquery.ui.position.min.js":1,"sites\/all\/modules\/jquery_update\/replace\/ui\/ui\/minified\/jquery.ui.mouse.min.js":1,"sites\/all\/modules\/jquery_update\/replace\/ui\/ui\/minified\/jquery.ui.draggable.min.js":1,"sites\/all\/modules\/jquery_update\/replace\/ui\/ui\/minified\/jquery.ui.resizable.min.js":1,"sites\/all\/modules\/jquery_update\/replace\/ui\/ui\/minified\/jquery.ui.dialog.min.js":1,"sites\/all\/modules\/custom\/tfk_search\/js\/tfk_search.js":1,"sites\/all\/themes\/tfk\/js\/tfk_global.js":1,"sites\/all\/modules\/contrib\/video\/js\/video.js":1,"sites\/all\/modules\/contrib\/views_slideshow\/js\/views_slideshow.js":1,"http:\/\/tiads.timeforkids.com\/ads\/tgx.js":1,"0":1,"1":1,"sites\/all\/themes\/tfk\/js\/timekids-omniture.js":1,"2":1,"sites\/all\/themes\/tfk\/js\/tfk-jump.js":1},"css":{"modules\/system\/system.base.css":1,"modules\/system\/system.menus.css":1,"modules\/system\/system.messages.css":1,"modules\/system\/system.theme.css":1,"misc\/ui\/jquery.ui.core.css":1,"misc\/ui\/jquery.ui.theme.css":1,"misc\/ui\/jquery.ui.button.css":1,"misc\/ui\/jquery.ui.resizable.css":1,"misc\/ui\/jquery.ui.dialog.css":1,"modules\/comment\/comment.css":1,"sites\/all\/modules\/contrib\/date\/date_api\/date.css":1,"sites\/all\/modules\/contrib\/date\/date_popup\/themes\/datepicker.1.7.css":1,"modules\/field\/theme\/field.css":1,"modules\/node\/node.css":1,"modules\/poll\/poll.css":1,"modules\/search\/search.css":1,"modules\/user\/user.css":1,"sites\/all\/modules\/contrib\/views\/css\/views.css":1,"sites\/all\/modules\/contrib\/ctools\/css\/ctools.css":1,"sites\/all\/modules\/contrib\/video\/css\/video.css":1,"sites\/all\/modules\/contrib\/views_slideshow\/views_slideshow.css":1,"sites\/all\/themes\/tfk\/css\/html-reset.css":1,"sites\/all\/themes\/tfk\/css\/wireframes.css":1,"sites\/all\/themes\/tfk\/css\/layout-fixed.css":1,"sites\/all\/themes\/tfk\/css\/page-backgrounds.css":1,"sites\/all\/themes\/tfk\/css\/tabs.css":1,"sites\/all\/themes\/tfk\/css\/pages.css":1,"sites\/all\/themes\/tfk\/css\/blocks.css":1,"sites\/all\/themes\/tfk\/css\/navigation.css":1,"sites\/all\/themes\/tfk\/css\/views-styles.css":1,"sites\/all\/themes\/tfk\/css\/nodes.css":1,"sites\/all\/themes\/tfk\/css\/comments.css":1,"sites\/all\/themes\/tfk\/css\/forms.css":1,"sites\/all\/themes\/tfk\/css\/fields.css":1,"sites\/all\/themes\/tfk\/hh-css\/css\/style.css":1,"sites\/all\/themes\/tfk\/css\/ui.css":1,"sites\/all\/themes\/tfk\/css\/print.css":1,"sites\/all\/themes\/tfk\/css\/ie8.css":1,"sites\/all\/themes\/tfk\/css\/ie7.css":1,"sites\/all\/themes\/tfk\/css\/ie6.css":1}},"tfk_helper":{"access":true},"tfk_search":{"facet_accordion":false}});
//--><!]]>
</script>
</head>
<body class="html not-front not-logged-in one-sidebar sidebar-second page-404page section-404page non-admin" >
<!-- Fast 404  -->
  <div id="skip-link">
    <a href="#main-menu" class="element-invisible element-focusable">Jump to Navigation</a>
  </div>
    

<div id="page-wrapper"><div id="page">

  <div id="header">
    <div class="section clearfix">
          <a href="/" title="Home" rel="home" id="logo"><img src="http://www.timeforkids.com/profiles/acquia/AcquiaDrupalLogo.png" alt="Home" /></a>
              <div id="banner_728x90"><div id="banner_728x90_jump_helper">&nbsp;</div><div id="banner_728x90_container"><script type="text/javascript">ad = adFactory.getAd(728, 90);ad.setPosition(1);ad.write();</script></div></div>        </div>
  </div>
  
  <div id="navigation" class="clearfix">

  <div class="section clearfix">
    
    <div id="global-nav-container">
        <div id="block-menu-menu-tfk-global-navigation" class="block block-menu first odd ">
  
              <h2 class="block-title">TFK Global Navigation</h2>
          
    <div class="content">
      <ul class="menu"><li class="first leaf"><a href="/news" class="news">News</a></li>
<li class="leaf"><a href="/kid-reporters" class="kid-reporter">Kid Reporters</a></li>
<li class="leaf"><a href="/around-the-world" class="atw">Around the World</a></li>
<li class="leaf"><a href="/homework-helper" class="homework-helper">Homework Helper</a></li>
<li class="leaf"><a href="/photos-video" class="photos-video">Photos &amp; Videos</a></li>
<li class="leaf"><a href="/mini-sites" class="mini-sites">Mini-Sites</a></li>
<li class="leaf"><a href="/extras" class="tfk-extras">TFK Extras</a></li>
<li class="leaf"><a href="/store/subscriptions" class="store">Store</a></li>
<li class="last leaf"><a href="/store/lessons-for-tablets">Lessons For Tablets</a></li>
</ul>    </div>
  
  </div>
    </div>

    <div id="teacher-nav-container">
      <div class="inner">
                                          <div id="block-block-16" class="block block-block last even ">
  
              
    <div class="content">
      <p>Subscribers: <a href="/user" class="login-link">LOG IN</a> to access quizzes, worksheets, and more! Not a subscriber? <a href="https://subscription.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1005015.html">SUBSCRIBE!</a></p>
    </div>
  
  </div>
      </div>
    </div>

  </div></div><!-- /.section, /#header -->

  <div id="main-wrapper">
    <div id="main" class="clearfix">
        <div class="region region-sidebar-second column sidebar"><div class="section">
      <div id="block-search-form" class="block block-search first odd ">
  
              
    <div class="content">
      <form class="search-form" action="/dkdkd" method="post" id="search-block-form--3" accept-charset="UTF-8"><div><div class="container-inline">
      <h2 class="element-invisible">Search form</h2>
    <div class="form-item form-item-search-block-form">
  <label class="element-invisible" for="edit-search-block-form--6">Search </label>
 <input title="Enter the terms you wish to search for." type="text" id="edit-search-block-form--6" name="search_block_form" value="" size="15" maxlength="128" class="form-text" />
</div>
<div class="form-actions form-wrapper" id="edit-actions--4"><input type="submit" id="edit-submit--4" name="op" value="Go" class="form-submit" /></div><input type="hidden" name="form_build_id" value="form-f2POX8uMzP7m1Sktv_8TLrnqeCfsZL6n7UIqpQb6854" />
<input type="hidden" name="form_id" value="search_block_form" />
</div>
</div></form>    </div>
  
  </div>
  <div id="block-views-e1fd7ec0792e427785c60f04deef22cf" class="block block-views even ">
  
              
    <div class="content">
      <div id="banner_160x190"><div id="banner_160x190_jump_helper">&nbsp;</div><div id="banner_160x190_container"><script type="text/javascript">ad = adFactory.getAd(160, 190);ad.write();</script></div></div>    </div>
  
  </div>
  <div id="block-views-current-issue-widget-block-1" class="block block-views odd ">
  
              
    <div class="content">
      <div class="view view-current-issue-widget view-id-current_issue_widget view-display-id-block_1 view-dom-id-cf18be3392e6ecb233ef4036b3b12e0a">
            <div class="view-header">
      <p> TFK Family Edition </p>
    </div>
  
  
  
      <div class="view-content">
        <div class="views-row views-row-1 views-row-odd views-row-first">
      
  <div class="views-field views-field-field-image">        <div class="field-content"><a href="http://www.timeforkids.com/familyedition"><img typeof="foaf:Image" src="http://www.timeforkids.com/files/styles/tfk_71x95/public/deccover_large.jpg?itok=tWkyLTSU" width="71" height="95" alt="" /></a></div>  </div>  
  <div class="views-field views-field-title-1">        <span class="field-content"><p>Get the monthly edition for tablets</p>
<span><a href="http://www.timeforkids.com/familyedition">Subscribe Now</a></span></span>  </div>  </div>
  <div class="views-row views-row-2 views-row-even">
      
  <div class="views-field views-field-field-image">        <div class="field-content"><a href="http://www.timeforkids.com/familyedition"><img typeof="foaf:Image" src="http://www.timeforkids.com/files/styles/tfk_71x95/public/cover_large_0.jpg?itok=2U7G2JZ_" width="71" height="95" alt="" /></a></div>  </div>  
  <div class="views-field views-field-title-1">        <span class="field-content"><p>Get the monthly edition for tablets</p>
<span><a href="http://www.timeforkids.com/familyedition">Subscribe Now</a></span></span>  </div>  </div>
  <div class="views-row views-row-3 views-row-odd">
      
  <div class="views-field views-field-field-image">        <div class="field-content"><a href="http://www.timeforkids.com/familyedition"><img typeof="foaf:Image" src="http://www.timeforkids.com/files/styles/tfk_71x95/public/cover_large.jpg?itok=Lh91r1Up" width="71" height="95" alt="" /></a></div>  </div>  
  <div class="views-field views-field-title-1">        <span class="field-content"><p>Get the monthly edition for tablets</p>
<span><a href="http://www.timeforkids.com/familyedition">Subscribe Now</a></span></span>  </div>  </div>
  <div class="views-row views-row-4 views-row-even views-row-last">
      
  <div class="views-field views-field-field-image">        <div class="field-content"><a href="http://www.timeforkids.com/familyedition"><img typeof="foaf:Image" src="http://www.timeforkids.com/files/styles/tfk_71x95/public/newsstand_cover.png?itok=Oy73NgtO" width="71" height="95" alt="" /></a></div>  </div>  
  <div class="views-field views-field-title-1">        <span class="field-content"><p>Get the monthly edition for tablets</p>
<span><a href="http://www.timeforkids.com/familyedition">Subscribe Now</a></span></span>  </div>  </div>
    </div>
  
  
  
  
  
  
</div>    </div>
  
  </div>
  <div id="block-block-1" class="block block-block last even ">
  
              
    <div class="content">
      <div id="banner_160x600"><div id="banner_160x600_jump_helper">&nbsp;</div><div id="banner_160x600_container"><script type="text/javascript">ad = adFactory.getAd(160, 600);ad.write();</script></div></div>    </div>
  
  </div>
  </div></div><!-- /.section, /.region -->

              <h1 class="title" id="section-title">
                      Page Not Found                  </h1>
      
      <div id="first-column">
                           
                
                                </div>
      
                                
      <div id="content" class="column">
      
              
        <div class="section clearfix">
        
                
                              <a id="main-content"></a>
                                <!-- <h1 class="title" id="page-title">Page Not Found</h1>-->
                              
                    
                                          
                
            <div class="region region-content">
      <div id="block-system-main" class="block block-system first last odd ">
  
              
    <div class="content">
      <script>
  $(document).ready(function(){
    $(\'#edit-search-block-form--2\').val(\'Search\');
    $(\'#edit-search-block-form--2\').focusin(function() {
        if($(\'#edit-search-block-form--2\').val() == \'Search\'){
          $(\'#edit-search-block-form--2\').val(\'\');
        }
    });
    $(\'#edit-search-block-form--2\').focusout(function() {
        if($(\'#edit-search-block-form--2\').val() == \'\'){
          $(\'#edit-search-block-form--2\').val(\'Search\');
        }
    });
});
</script>
<h2 class="not-found-header">Oops!</h2>
<p class="not-found-not-available">Looks like the page you are looking for has been moved, or is no longer available.</p>
<p><span class="not-found-click"><a href="/">Click here</a></span><span class="not-found-go-back"> to go back to the <strong>Homepage</strong></span></p>
<p class="not-found-or">or</p><p class="not-found-run-search">run a search here.</p>
<form class="search-form" action="/dkdkd" method="post" id="search-block-form" accept-charset="UTF-8"><div><div class="container-inline">
      <h2 class="element-invisible">Search form</h2>
    <div class="form-item form-item-search-block-form">
  <label class="element-invisible" for="edit-search-block-form--2">Search </label>
 <input title="Enter the terms you wish to search for." type="text" id="edit-search-block-form--2" name="search_block_form" value="" size="15" maxlength="128" class="form-text" />
</div>
<div class="form-actions form-wrapper" id="edit-actions"><input type="submit" id="edit-submit" name="op" value="Go" class="form-submit" /></div><input type="hidden" name="form_build_id" value="form-XASEwor9m8sJ5OJLKmHymlwTmCXjKXIw7eBEbe5dE0I" />
<input type="hidden" name="form_id" value="search_block_form" />
</div>
</div></form>    </div>
  
  </div>
  </div><!-- /.region -->
  
        </div>
        
        
      </div><!-- /.section, /#content -->
      
                        <div id="footer" class="section no-clearfix">
              <div class="region region-footer">
      <div id="block-menu-menu-tfk-footer-primary" class="block block-menu first odd ">
  
              <h2 class="block-title">TFK Footer Primary</h2>
          
    <div class="content">
      <ul class="menu"><li class="first leaf"><a href="/news">News</a></li>
<li class="leaf"><a href="/kid-reporters" class="kid-reporters">Kid Reporters</a></li>
<li class="leaf"><a href="/around-the-world" class="atw">Around the World</a></li>
<li class="leaf"><a href="/homework-helper" class="homework-helper">Homework Helper</a></li>
<li class="leaf"><a href="/photos-video" class="photos-videos">Photos &amp; Videos</a></li>
<li class="leaf"><a href="/extras" class="tfk-extras">TFK Extras</a></li>
<li class="last leaf"><a href="/store/subscriptions">Store</a></li>
</ul>    </div>
  
  </div>
  <div id="block-menu-menu-tfk-footer-secondary" class="block block-menu even ">
  
              <h2 class="block-title">TFK Footer Secondary</h2>
          
    <div class="content">
      <ul class="menu"><li class="first leaf"><a href="/info/about">About Us</a></li>
<li class="leaf"><a href="/info/what-you-get">Subscription Benefits</a></li>
<li class="leaf"><a href="http://www.timeforkids.com/customerservice">Customer Service</a></li>
<li class="leaf"><a href="https://subscription.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1005015.html">Subscribe &amp; Renew</a></li>
<li class="leaf"><a href="/info/contact">Contact Us</a></li>
<li class="last leaf"><a href="https://secure.customersvc.com/wes/servlet/Show?WESPAGE=am/Services/faq/tkfaq.jsp&amp;MSRSMAG=TK#Section_13">FAQ</a></li>
</ul>    </div>
  
  </div>
  <div id="block-menu-menu-tfk-footer-tertiary" class="block block-menu odd ">
  
              <h2 class="block-title">TFK Footer Tertiary</h2>
          
    <div class="content">
      <ul class="menu"><li class="first leaf"><a href="/info/advertising">Advertisement &amp; Sponsorship</a></li>
<li class="leaf"><a href="http://www.timeinc.net/subs/privacy/tk/policy.html">Privacy Policy</a></li>
<li class="leaf"><a href="https://subscription.timeinc.com/storefront/privacy/tfk/generic_privacy_new.html?dnp-source=I#california" target="_blank">Your California Privacy Rights</a></li>
<li class="last leaf"><a href="https://subscription.timeinc.com/storefront/privacy/tfk/privacy_terms_service.html">Terms of Service</a></li>
</ul>    </div>
  
  </div>
  <div id="block-block-6" class="block block-block even ">
  
              
    <div class="content">
      <p>© '.date("Y").' Time Inc. All Rights Reserved.</p>
    </div>
  
  </div>
  <div id="block-block-26" class="block block-block last odd ">
  
              
    <div class="content">
      <div id=\"banner_728x90_footer"><div id=\"banner_728x90_footer_jump_helper">&nbsp;</div><div id="banner_728x90_footer_container"><script type="text/javascript">var zone = adFactory.setZone(adFactory.zone + \'/footer\');var ad = adFactory.getAd(728, 90);ad.setPosition(2);ad.write();</script></div></div>    </div>
  
  </div>
  </div><!-- /.region -->
          </div>
                    
    </div><!-- /#main -->
  

  </div><!-- /#main-wrapper -->

</div></div><!-- /#page, /#page-wrapper -->

  <div class="region region-bottom">
      <div id="block-tfk-helper-tfk-helper-login" class="block block-tfk-helper first last odd ">
  
              
    <div class="content">
      <form action="/user" method="post" id="user-login" accept-charset="UTF-8"><div><div class="logincontent" id="login-container" >
  <div id="login-header">Current subscribers log in/register for timeforkids.com<a id="close-button" class="close-button">&nbsp;</a></div><div id="login-form-container">
    <input type="hidden" name="form_build_id" value="form-ZGmQ-kAUFMc3zjmCqOHp9cc4hmMQJbhNwvwwMDFgN1E" />
    <input name="form_id" value="user_login" type="hidden">
    <h2>Registered Users Log In</h2>
    <div class="form-item form-type-textfield form-item-name"><label for="edit-name">Email:</label>&nbsp;<input class="form-text required" id="edit-name" maxlength="60" name="name" value="" type="text"></div>
    <div class="form-item form-type-password form-item-pass"><label for="edit-pass">Password:</label>&nbsp;<input class="form-text required" id="edit-pass" maxlength="128" name="pass" value="" type="password"></div>
    <div class="form-actions form-wrapper" id="edit-actions"><input class="form-submit" id="edit-submit" name="op" value="Log in" type="submit"></div>
    <a href="https://subscription.timeforkids.com/storefront/universalForgotPassword.ep?magcode=TK">Forgot Password?</a>
  </div>
  <div>
  <div class="bold">Register Now for FREE<br />Subscriber Benefits</div>
  <div class="form-actions form-wrapper"><a class="form-submit" href="https://secure.customersvc.com/servlet/Show?WESPAGE=am/tablet/tk/tk_web_login.jsp&MSDDMOFF=ABTF&MSDTRACK=TKSO&MSDVNDID=TBLT">Register Now!</a></div>
  </div>
  <div id="message-box">
    <div id="message-header">Do it now to get all this:</div>
      <ul id="message-list">
        <li>Access to Interactive Digital Editions</li>
        <li>Online Archives of Past Lessons & Teachers\' Guides</li>
        <li>Interactive Teacher Community</li>
      </ul>
    </div>
  <div class="clearfix" id="login-footer"><span class="bold">Not Yet A Subscriber?</span> <a href="https://subscription.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1005016.html">Click here to subscribe</a> </div><div style="float: right; font-size: 9px;">Website Login Page</div>

</div></div></form>    </div>
  
  </div>
  </div><!-- /.region -->
  <script type="text/javascript">if(!NREUMQ.f){NREUMQ.f=function(){NREUMQ.push(["load",new Date().getTime()]);var e=document.createElement("script");e.type="text/javascript";e.src=(("http:"===document.location.protocol)?"http:":"https:")+"//"+"js-agent.newrelic.com/nr-100.js";document.body.appendChild(e);if(NREUMQ.a)NREUMQ.a();};NREUMQ.a=window.onload;window.onload=NREUMQ.f;};NREUMQ.push(["nrfj","beacon-3.newrelic.com","d15be33a97","173687","ZAZUYEQDDEsEUk0MVl1MY0ZfTQtWAVRBS0lbEw==",0,40,new Date().getTime(),"","","","",""]);</script></body>
</html>';




# Check paths during bootstrap and see if they are legitimate.
$conf['fast_404_path_check'] = FALSE;

# If enabled, you may add extensions such as xml and php to the
# $conf['fast_404_exts'] above. BE CAREFUL with this setting as some modules
# use their own php files and you need to be certain they do not bootstrap
# Drupal. If they do, you will need to whitelist them too.
$conf['fast_404_url_whitelisting'] = FALSE;

# Array of whitelisted files/urls. Used if whitelisting is set to TRUE.
$conf['fast_404_whitelist'] = array('index.php', 'rss.xml', 'install.php', 'cron.php', 'update.php', 'xmlrpc.php');

# Array of whitelisted URL fragment strings that conflict with fast_404.
$conf['fast_404_string_whitelisting'] = array('cdn/farfuture', '/advagg_');

# By default we will show a super plain 404, because usually errors like this are shown to browsers who only look at the headers.
# However, some cases (usually when checking paths for Drupal pages) you may want to show a regular 404 error. In this case you can
# specify a URL to another page and it will be read and displayed (it can't be redirected to because we have to give a 30x header to
# do that. This page needs to be in your docroot.
#$conf['fast_404_HTML_error_page'] = './my_page.html';

# By default the custom 404 page is only loaded for path checking. Load it for all 404s with the below option set to TRUE
$conf['fast_404_HTML_error_all_paths'] = FALSE;

# Call the extension checking now. This will skip any logging of 404s.
# Extension checking is safe to do from settings.php. There are many
# examples of this on Drupal.org.
fast_404_ext_check();

# Path checking. USE AT YOUR OWN RISK (only works with MySQL).
# Path checking at this phase is more dangerous, but faster. Normally
# Fast_404 will check paths during Drupal boostrap via hook_boot. Checking
# paths here is faster, but trickier as the Drupal database connections have
# not yet been made and the module must make a separate DB connection. Under
# most configurations this DB connection will be reused by Drupal so there
# is no waste.
# While this setting finds 404s faster, it adds a bit more load time to
# regular pages, so only use if you are spending too much CPU/Memory/DB on
# 404s and the trade-off is worth it.
# This setting will deliver 404s with less than 2MB of RAM.
//fast_404_path_check();
