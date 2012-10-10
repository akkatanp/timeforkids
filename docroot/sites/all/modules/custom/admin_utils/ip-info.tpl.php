<p>
// The server remote IP ($_SERVER[\'REMOTE_ADDR\']) is:
<?php $_SERVER['REMOTE_ADDR']; ?></p>

<p>
// Drupal sees your IP address (using ip_address()) as
<?php print ip_address(); ?></p>

<p>
/** ip_address() returns the IP address of the client machine.
 * If Drupal is behind a reverse proxy, we use the X-Forwarded-For header
 * instead of $_SERVER['REMOTE_ADDR'], which would be the IP address of
 * the proxy server, and not the client's. The actual header name can be
 * configured by the reverse_proxy_header variable.
 */
 </p>
<p>
// Is Drupal configured to recognize reverse proxies?
// Note that this must return a positive value in order for Drupal to use
// the HTTP_X_FORWARDED_FOR header in ip_address().
//  variable_get('reverse_proxy', 0) =
<?php print_r(variable_get('reverse_proxy', 0)); ?>
</p>
<p>
// What HTTP_X_FORWARDED_FOR header is Drupal configured to recognize?
// reverse_proxy_header = variable_get('reverse_proxy_header', 'HTTP_X_FORWARDED_FOR');
<?php print_r(variable_get('reverse_proxy_header', 'HTTP_X_FORWARDED_FOR')); ?>
</p>
<p>
// If an array of known reverse proxy IPs is provided, then trust
// the XFF header if request really comes from one of them.
// ip_address()
$reverse_proxy_addresses = variable_get('reverse_proxy_addresses', array());
<?php print_r(variable_get('reverse_proxy_addresses', array())); ?>
</p>
