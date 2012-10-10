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
    ),
  );

  return $items;
}

/**
 * Callback function
 */
function drush_admin_utils_poll_statbyip() {
  print '\033[1mPOLL VOTES UTILITY\033[0m';
  drush_print('\033[1mPOLL VOTES UTILITY\033[0m'. PHP_EOL);

  $ip = drush_get_option('ip', ip_address());

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

  drush_print(dt('// Query string: '. PHP_EOL. '!query'. PHP_EOL, array('!query' => $query)));

  $results = db_query($query, array('ip' => $ip));

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

    $count = db_query('select count(nid) from node where type=:type', array('type' => 'poll'))->fetchField();

    drush_print(dt('IP address !ip has voted in !rows out of !count polls.', array('!ip' => $ip, '!rows' => count($rows), '!count' => $count)));
  }
}
