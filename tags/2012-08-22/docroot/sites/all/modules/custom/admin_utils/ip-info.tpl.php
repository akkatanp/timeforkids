<p>
// The server remote IP <code>($_SERVER[\'REMOTE_ADDR\'])</code> is:<br />
<?php $_SERVER['REMOTE_ADDR']; ?></p>

<p>
// Drupal sees your IP address (using <code>ip_address()</code>) as <br />
<?php print ip_address(); ?></p>

<p>
/** ip_address() returns the IP address of the client machine.<br />
 * If Drupal is behind a reverse proxy, we use the X-Forwarded-For header<br />
 * instead of $_SERVER['REMOTE_ADDR'], which would be the IP address of<br />
 * the proxy server, and not the client's. The actual header name can be<br />
 * configured by the reverse_proxy_header variable.<br />
 */
 </p>
<p>
// Is Drupal configured to recognize reverse proxies?<br />
// Note that this must return a positive value in order for Drupal to use<br />
// the HTTP_X_FORWARDED_FOR header in ip_address().<br />
// Code: <code>variable_get('reverse_proxy', 0)</code> <br />
<?php print_r(variable_get('reverse_proxy', 0)); ?>
</p>
<p>
// What HTTP_X_FORWARDED_FOR header is Drupal configured to recognize?<br />
// <code>reverse_proxy_header = variable_get('reverse_proxy_header', 'HTTP_X_FORWARDED_FOR');</code>
<?php print_r(variable_get('reverse_proxy_header', 'HTTP_X_FORWARDED_FOR')); ?>
</p>
<p>
// If an array of known reverse proxy IPs is provided, then trust<br />
// the XFF header if request really comes from one of them.<br />
// <code>$reverse_proxy_addresses = variable_get('reverse_proxy_addresses', array());</code>
<?php print_r(variable_get('reverse_proxy_addresses', array())); ?>
</p>
<p>For more information IP addresses in Drupal, look at the <a href="http://api.drupal.org/api/drupal/includes!bootstrap.inc/function/ip_address/7"><code>ip_address()</code></a> function.</p>