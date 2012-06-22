<?php

/*
 * @file Defines conditions and actions for used for clearing cache.
 *
 */

/**
 * Implementation of hook_rules_condition_info().
 *
 * Conditions are best written as MODULENAME_rules_condition_CONDITION.
 * See 'properties'=>'type' in http://drupalcontrib.org/api/drupal/contributions!entity!entity.api.php/function/hook_entity_property_info/7
 * for a list of allowed types.
 */
function advanced_purge_rules_condition_info() {
  $conditions = array();
  $conditions['advanced_purge_viewname'] = array(
    'group' => t('Advanced Purge'),
    'label' => t('View display name'),
    'arguments' => array(
      'view_name' => array(
        'type' => 'text',
        'label' => t('view name')
      ),
      'display_name' => array(
        'type' => 'text',
        'label' => t('display name'),
        'optional' => TRUE,
      ),
    ),
  );
  $conditions['advanced_purge_rules_condition_flagged'] = array(
    'group' => t('Advanced Purge'),
    'label' => t('Content has flag'),
    'arguments' => array(
      'node' => array(
        'type' => 'node',
        'label' => t('updated content')
      ),
      'flag_name' => array(
        'type' => 'list<text>',
        'label' => t('flag names'),
        'description' => t('A list of flags to check against'),
      ),
    ),
  );
  $conditions['advanced_purge_rules_condition_flag_views'] = array(
    'group' => t('Advanced Purge'),
    'label' => t('Content has flag (with View relationship)'),
    'arguments' => array(
      'node' => array(
        'type' => 'node',
        'label' => t('updated content')
      ),
      'flag_name' => array(
        'type' => 'list<text>',
        'label' => t('flag to view relationship'),
        'description' => t('A flag to check against, followed by the name of the View related to it.'),
      ),
    ),
  );
  return $conditions;
}

/**
 * Condition: Verify that the view/display fired this event.
 */
function advanced_purge_viewname($view_name = '', $display_name = '', $settings = array(), RulesState $state) {
  if($view_name == $state->variables['view_name'] && $display_name == $state->variables['display_name']) {
    return TRUE;
  } else {
    return FALSE;
  }
}

/**
 * Find which flags in a node match the flags specified in the condition.
 *
 * Matched flags are saved into the 'matched_flags' property of the RulesState
 * object.
 *
 * @param stdClass $node
 * @param array $possible_flags
 * @param array $settings
 * @param RulesState $state
 *
 * @return TRUE if any condition flag is found in the node.
 */
function advanced_purge_rules_condition_flagged($node, $possible_flags, &$settings = array(), RulesState &$state) {
  // Strip newlines first.
  foreach($possible_flags as $key => $flag) {
    $possible_flags[$key] = trim($possible_flags[$key]);
  }
  $match = FALSE;
  $node_flags = flag_get_counts('node', $node->nid);
  if(is_array($node_flags) && !empty($node_flags)) {
    // Match node flags against the condition flags.
    $matched_flags = array_intersect($possible_flags, array_keys($node_flags));
    if(is_array($matched_flags) && !empty($matched_flags)) {
      $info = array(
        'type' => 'list<text>',
      );
      $state->addVariable('matched_flags', $matched_flags, $info);
      $match = TRUE;
    }
  }
  return $match;
}

function advanced_purge_rules_condition_flag_views($node, $relationships, &$settings = array(), RulesState &$state) {
  // Strip newlines first.
  $json = array();
  $possible_flags = array();
  foreach($relationships as $line => $relashionship) {
    if(preg_match('/^\/\/|"flag":"FLAG_NAME"|^\r/', $relashionship)) {
      // Ignore comments and example line.
      continue;
    }
    $relationships[$line] = $relashionship = trim($relashionship);
    $result = json_decode($relashionship);
    if(!is_null($result)) {
      $json[$result->flag] = $result;
      $possible_flags[] = $result->flag;
    }
  }
  $match = FALSE;
  $node_flags = flag_get_counts('node', $node->nid);
  if(is_array($node_flags) && !empty($node_flags)) {
    // See which node flags are present in the condition flags.
    $matches = array_intersect($possible_flags, array_keys($node_flags));
    if(is_array($matches) && !empty($matches)) {
      $info = array(
        'type' => 'list<text>',
      );
      $info = array(
        'type' => 'struct',
        'property info' => 'json relationship'
      );
      $matched_flags = array_intersect_key($json, array_flip($matches));
      $state->addVariable('matched_flags', $matched_flags, $info);
      $match = TRUE;
    }
  }
  return $match;
}

/**
 * Implements hook_rules_action_info().
 *
 * Define custom action for the draggableviews_rules_event_sorted event.
 */
function advanced_purge_rules_action_info() {
  $actions = array();
  $actions['advanced_purge_cache_clear'] = array(
    'label' => t('Clear Views cache'),
    'description' => 'Clear cache for various views displays after a draggable event.',
    'group' => t('Advanced Purge'),
    'parameter' => array(
      'target_view' => array(
        'type' => 'text',
        'label' => t('target view'),
        'description' => t('Machine name of the view whose cache will be cleared.'), #homepage_news_block
      ),
      'target_displays' => array(
        'type' => 'list<text>',
        'label' => t('target displays'),
        'description' => t('Machine name of the view displays that will be cleared when the source display is altered.'),
      ),
    ),
  );
  $actions['advanced_purge_cache_clear_relational'] = array(
    'label' => t('Clear Views cache (using View relationship)'),
    'description' => 'Clear cache for mutliple views displays.',
    'group' => t('Advanced Purge'),
  );
  
  $actions['advanced_purge_page_clear'] = array(
    'label' => t('Clear page cache'),
    'description' => 'Clear the specified page from the default variable cache. Use <front> for the frontpage.',
    'group' => t('Advanced Purge'),
    'parameter' => array(
      'page' => array(
        'type' => 'text',
        'label' => t('page'),
        'description' => t('Relative path to the page to be cleared.'),
      ),
    ),
  );
  return $actions;
}

/**
 * Callback for "Clear Views cache (relational)" action.
 */
function advanced_purge_cache_clear_relational() {
  global $conf;
  $args = func_get_args();
  $rules_state = $args[1];
  $rules_action = $args[2];
  if(!array_key_exists(1, $args) || !array_key_exists(2, $args)) {
    watchdog('advanced_purge', 'Function advanced_purge_cache_clear_relational() missing an argument.', NULL, WATCHDOG_CRITICAL, l('view context', request_path()));
    return;
  }
  if(!$rules_state instanceof RulesState && !$rules_action instanceof RulesAction) {
    return;
  }
  
  // Clear multiple views displays using relationships.
  if(array_key_exists('matched_flags', $rules_state->variables))  {
    $matched_flags = $rules_state->get('matched_flags')->value();
    foreach($matched_flags as $key => $relationship) {
      foreach($relationship->views as $view_name => $displays) {
        
        foreach($displays as $display) {
          cache_clear_all($view_name. ':'. $display, 'cache_views_data', TRUE);
          if($conf['block_cache'] && !cache_is_empty('cache_block')) {
            cache_clear_all('views:'. $view_name. '-'. $display, 'cache_block', TRUE);
          }
        }
      }
    }
    
    // Log message and inform user.
    $node = $rules_state->get('node')->value();
    $message = "The blocks for %title has been purged from cache.";
    $action_info = $rules_action->info();
    $variables = array('%target_view' => $view_name, '%title' => $node->title, '%rule' => $action_info['label'], '%data' => print_r($matched_flags, TRUE));
    drupal_set_message(t($message, $variables));
    watchdog('advanced_purge', '<b>[Action %rule]</b>: The following displays for View %target_view were purged from cache on behalf of node %title: <br /><pre>%data</pre>', $variables, WATCHDOG_INFO, l('view node', $node->path['source']));
  }
}

/**
 * Callback for "Clear Views cache" action.
 *
 * @param string $target_view
 *   Name of the view where we are going to clear the cache.
 * @param array $target_displays
 *   Displays to clear on the $target_view.
 */
function advanced_purge_cache_clear($target_view = '', $target_displays = array()) {
  global $conf;
  $args = func_get_args();
  if(!array_key_exists(3, $args) || !array_key_exists(4, $args)) {
    watchdog('advanced_purge', 'Function advanced_purge_cache_clear_relational() missing an argument.', NULL, WATCHDOG_CRITICAL, l('view context', request_path()));
    return;
  }
  $rules_state = $args[3];
  $rules_action = $args[4];
  if(!$rules_state instanceof RulesState && !$rules_action instanceof RulesAction) {
    return;
  }

  // Clear Views 'results' and 'output' cache for this display.
  // Here the cid: homepage_top_story:block_1 acts the wildcard "homepage_top_story:block_1:*", purging cids like these:
  // cid: homepage_top_story:block_1:results:a65e71386e4bc8dfe17152c492307b59, bin: cache_views_data.
  // cid: homepage_news_block:block_1:output:3cad53d25fd74189bd93b1f76d3c4237, bin: cache_views_data
  foreach($target_displays as $target_display) {
    cache_clear_all($target_view. ':'. trim($target_display), 'cache_views_data', TRUE);
  }
  
  // Clear block data.
  if($conf['block_cache'] && !cache_is_empty('cache_block')) {
    foreach($target_displays as $target_display) {
      // Format: cache_clear_all('views:homepage_news_block-'. $view_name, 'cache_block', TRUE);
      cache_clear_all('views:'. $target_view. '-'. trim($target_display), 'cache_block', TRUE);
    }
  }
  
  // Log message and inform user.
  if(menu_get_object()) {
    $node = $rules_state->get('node')->value();
    $on_behalf = 'node '. $node->title;
  } else {
    $menu = menu_get_item();
    $on_behalf = 'path '. $menu['path'];
  }
  
  $message = "The blocks for %title has been purged from cache.";
  $action_info = $rules_action->info();
  $variables = array('%target_view' => $target_view, '%title' => '/'. $on_behalf, '%rule' => $action_info['label'], '%data' => print_r($target_displays, TRUE));
  drupal_set_message(t($message, $variables));
  watchdog('advanced_purge', '<b>[Action %rule]</b>: The following displays for View %target_view were purged from cache on behalf of %title: <br /><pre>%data</pre>', $variables, WATCHDOG_INFO, l('view path', $on_behalf));
}

/**
 * Callback for "Clear page cache" action.
 *
 * Clear items from the cache_page bin.
 *
 * @param string $page
 *   Relative path to the page to be cleared.
 */
function advanced_purge_page_clear($page = '') {
  
  if($page === '<front>') {
    $page = variable_get('site_frontpage') == 'node' ? '': drupal_get_path_alias(variable_get('site_frontpage', 'node'));
  }
  $path = url($page, array('absolute' => TRUE));
  
    # if (drupal_page_is_cacheable()) {
    #$cache = cache_get($base_root . request_uri(), 'cache_page');
    //$path = $base_root. $page;
  $cache = cache_get($path, 'cache_page');
  if ($cache !== FALSE) {
    cache_clear_all($path, 'cache_page');
    
    drupal_set_message(t("The page \"%path\" has been purged from cache.",
      array('%path' => $path)
    ));
  }
  #}
  
}
