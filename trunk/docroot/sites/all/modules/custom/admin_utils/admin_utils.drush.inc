<?php

/**
 * Implementation of hook_drush_command().
 */
function admin_utils_drush_command() {
  $items = array();

  $items['util-pollstatip'] = array(
    'description' => 'Poll vote statistics by IP address',
    'callback' => 'drush_admin_utils_poll_statbyip',
    'drupal dependencies' => array('poll'),
    'options' => array(
      '--ip' => 'IP address',
      '--uid' => 'User ID',
    ),
    'aliases' => array('psi', 'pollstatip'),
  );

  return $items;
}

/**
 * Callback function
 */
function drush_admin_utils_poll_statbyip() {
  drush_print('POLL VOTES UTILITY'. PHP_EOL);

  $ip = drush_get_option('ip', ip_address());
  $uid = (int) drush_get_option('uid', 0);

  drush_print(dt('Poll voting stats for IP address !ip'. PHP_EOL, array('!ip' => $ip)));
  $query = "SELECT
	pv.nid as poll_nid,
	pv.hostname,
	pv.uid,
	pv.timestamp,
	FROM_UNIXTIME(pv.timestamp - 14400, GET_FORMAT(DATETIME,'USA')) as voted_on,
	SUBSTRING(pn.title, 1, 25) as poll_title,
	an.title as article_title,
	an.nid as article_nid
FROM poll_vote pv
INNER JOIN node pn ON pv.nid = pn.nid
INNER JOIN field_data_field_article_poll poll_field ON pv.nid = poll_field.field_article_poll_nid
INNER JOIN node an ON poll_field.entity_id = an.nid
	WHERE pv.hostname=:ip
	ORDER BY pv.timestamp desc";

  $query_uservotecount = "SELECT
	count(pv.nid)
FROM poll_vote pv
WHERE pv.hostname=:ip and pv.uid = :uid";

  drush_print(dt('// Query string: '. PHP_EOL. '!query'. PHP_EOL, array('!query' => preg_replace('/:ip/', "'$ip'", $query))));

  $results = db_query($query, array('ip' => $ip));
  //$uservotecount = db_query($query_uservotecount, array('ip' => $ip, 'uid' => $uid))->fetchField();

  if(!$results) {
    print '<h4>Results</h4>';
    print 'The current IP address has not voted';
  } else {
    $rows = array();
    $rows[] = array('poll_nid', 'pv.hostname', 'pv.uid', 'pv.timestamp', 'voted_on', 'poll_title', 'article_title', 'article_nid');

    while($row = $results->fetch()) {
      $_row = array();
      foreach($row as $col => $value) {
        $_row[] = $value;
      }
      $rows[] = $_row;
    }

    $header = TRUE;
    $widths = array();
    $handle = NULL;
    drush_print_table($rows, $header, $widths, $handle);

    //$count = db_query('select count(nid) from node where type=:type', array('type' => 'poll'))->fetchField();

    drush_print(dt('IP address !ip has voted !rows times.', array('!ip' => $ip, '!rows' => count($rows) - 1)));
    //drush_print(dt('!uvc out of !total total polls were submitted as an anonymous user with that IP.', array('!uvc' => $uservotecount, '!total' => $count)));

  }
}
