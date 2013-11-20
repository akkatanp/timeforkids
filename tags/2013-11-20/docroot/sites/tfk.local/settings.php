<?php
// $Id$
 
$databases['default']['default'] = array(
    'database' => 'timeteam',
    'username' => 'root',
    'password' => 'root',
    #'host' => '127.0.0.1',
    'host' => '10.187.218.154',
    'port' => '3306',
    'driver' => 'mysql',
    'prefix' => '',
);

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
$update_free_access = TRUE;

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
ini_set('session.cookie_lifetime', 2000000);

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

// Used in purge.inc, purge_urls(), can contain multiple proxies.
// Options for purging are ?purge_method=get, purge_method=ah, and the default (purge).
$conf['purge_proxy_urls'] = 'http://tfk.local/';


 
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
# $conf['omit_vary_cookie'] = TRUE;

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

error_reporting(E_ALL | E_STRICT);
ini_set('error_reporting', -1);
ini_set('memory_limit', '512M'); // Useful when doing "drush fra -y"
ini_set('max_execution_time', 0);


/**
 * Acquia Network/Acquia Search settings
 */
#$conf["acquia_identifier"] = "BCDE-22799";
#$conf["acquia_key"] = "8499f05ab66439dc7432a3533bbc5c33";
$conf["apachesolr_path"] = "http://localhost:8983/solr";

/**
 * Filesystem settings
 * Mac OS X
 */
$conf["file_public_path"] = "sites/default/files";
#$conf["file_temporary_path"] = "/Users/rallen8440/tmp";
#$conf["file_private_path"] = "/Users/rallen8440/Sites/tfk/private";

// Virtual Machine.
$conf["file_temporary_path"] = "~/host/tmp";
$conf["file_private_path"] = "~/host/Sites/tfk/private";

// Drupal 7 does not cache pages when we invoke hooks during bootstrap. This needs
// to be disabled.
$conf['page_cache_invoke_hooks'] = FALSE;

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
include_once('./sites/all/modules/fast_404/fast_404.inc');

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
$conf['fast_404_html'] = '<html xmlns="http://www.w3.org/1999/xhtml"><head><title>404 Not Found</title></head><body><h1>Not Found</h1><p>The requested URL "@path" was not found on this server.</p></body></html>';

# Check paths during bootstrap and see if they are legitimate.
$conf['fast_404_path_check'] = TRUE;

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
fast_404_path_check();



