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
  $items['util-status-check'] = array(
    'description' => 'Drupal status check',
    'callback' => 'drush_admin_utils_status_check',
    'drupal dependencies' => array('poll'),
    'options' => array(
      '--ip' => 'IP address',
      '--uid' => 'User ID',
    ),
    'aliases' => array('usc'),
    'bootstrap' => DRUSH_BOOTSTRAP_MAX,
  );

  return $items;
}

function drush_admin_utils_status_check() {
  $test = null;


  #$callback = drush_get_context('DRUSH_LOG_CALLBACK', '_drush_print_log');
  drush_set_context('DRUSH_LOG_CALLBACK_ORIGINAL', drush_get_context('DRUSH_LOG_CALLBACK', '_drush_print_log'));
  drush_set_context('DRUSH_LOG_CALLBACK', '_admin_utils_log');

  $error_exists = drush_get_error();

  drush_errors_off();

  //$test = drush_core_status();
  //drush_op_system($exec);
  //$test=drush_sql_connect()
  //Database::getConnection();

  // Check if database socket exists.
  // drush_bootstrap_error($code)
  $phases = _drush_bootstrap_phases(TRUE);

  //_drush_bootstrap_drupal_database();
  //!drush_get_error();


  // DRUSH_BOOTSTRAP_DRUPAL_DATABASE = 5

  $context = drush_get_context('DRUSH_BOOTSTRAP_PHASE');

  #$valid = drush_bootstrap_validate(DRUSH_BOOTSTRAP_DRUPAL_FULL);
  # drush_set_context('DRUSH_BOOTSTRAP_VALIDATION_PHASE', $phase_index);

  $error_exists = drush_get_error();

  #$result = drush_bootstrap_to_phase(DRUSH_BOOTSTRAP_DRUPAL_DATABASE); DRUSH_BOOTSTRAP_DRUPAL_FULL

  $result = drush_bootstrap(DRUSH_BOOTSTRAP_DRUPAL_FULL);

  if(!drush_get_error()) {
    // Re-activate the original log callback, unless you want to manually compose a $entry array and pass it to _drush_print_log.
    drush_set_context('DRUSH_LOG_CALLBACK', '_drush_print_log');
    drush_log('Ahoy mates! All Hands On Deck!!!', 'success');
  } else {
    $errors = drush_get_error_log();
    foreach ($errors as $code => $message) {
      // Do something fancy, but don't call drush_set_error() or drush_log() (the former calls the later, which calls our callback and creates and endless loop).
      // You can use _drush_print_log
      #  drush_set_error($code, $message);
    }
  }


  $test = null;

  #drush_print();
}

/**
 * Custom callback for drush_log(), substitutes _drush_print_log().
 *
 * Use for customizing each time drush logs a message.
 * If there is an error, drush prints the error and suppresses all the other
 * messages.
 *
 * @param array $entry
 * @return boolean
 */
function _admin_utils_log($entry) {
  if($entry['type'] == 'error') {



    // Do nothing, or call some special ICS function.
    /*  $entry = array(
     'type' => $type,
     'message' => $message,
     'timestamp' => microtime(TRUE),
     'memory' => memory_get_usage(),
   );
  $entry['error'] = $error;*/

    // Return FALSE for errors.
    #drush_log('caught error', 'notice');
    // DRUSH_DRUPAL_DB_ERROR

    drush_print('caught error');

    if($entry['error'] == DRUSH_DRUPAL_DB_ERROR) {
      //drush_print('Ahoi matey, the db is down arrrrr!!!'); // Simple print, no fancy stuff.
      $entry['message'] = 'Man the gallows...the db is down arrrrr!!!';
      _drush_print_log($entry);
    }

    return TRUE;
  } else {
    $callback = drush_get_context('DRUSH_LOG_CALLBACK_ORIGINAL', '_drush_print_log');
    return $callback($entry);
  }
}

/**
 * Callback function
 */
function drush_admin_utils_poll_statbyip() {
  drush_print('POLL VOTES UTILITY'. PHP_EOL);

  $ip = drush_get_option('ip', ip_address());
  $uid = drush_get_option('uid', NULL);
  if(is_null($uid)) {
    $uid = '%';
  }

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
	WHERE pv.hostname LIKE :ip AND pv.uid LIKE :uid
	ORDER BY pv.timestamp desc";

  drush_print(dt('// Query string: '. PHP_EOL. '!query'. PHP_EOL, array('!query' => preg_replace(array('/:ip/', '/:uid/'), array("'%$ip%'", "'$uid'"), $query))));

  $results = db_query($query, array('ip' => '%'. $ip. '%', 'uid' => $uid));

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

    drush_print(dt('IP address !ip has voted !rows times with uid !uid.', array('!ip' => $ip, '!rows' => count($rows) - 1, '!uid' => $uid)));
  }
}
