<?php

/*
 * @file Defines conditions and actions for used for clearing cache.
 *
 */

/**
 * Implementation of hook_rules_condition_info().
 *
 * Conditions are best written as MODULENAME_rules_condition_CONDITION.
 */
function advanced_purge_rules_condition_info() {
  return array(
    'advanced_purge_viewname' => array(
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
    ),
  );
}

/**
 * Condition: Verify that the view/display that fired this event.
 */
function advanced_purge_viewname($view_name = '', $display_name = '', $settings = array(), RulesState $state) {
  if($view_name == $state->variables['view_name'] && $display_name == $state->variables['display_name']) {
    return TRUE;
  } else {
    return FALSE;
  }
}

/**
 * Implements hook_rules_action_info().
 *
 * Define custom action for the draggableviews_rules_event_sorted event.
 */
function advanced_purge_rules_action_info() {
  return array(
    'advanced_purge_cache_clear' => array(
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
          //'restriction' => 'input',
          //'default mode' => 'input',
        ),
      ),
    ),
  );
}

/**
 * Action callback.
 *
 * @param string $target_view
 *   Name of the view where we are going to clear the cache.
 * @param array $target_displays
 *   Displays to clear on the $target_view.
 */
function advanced_purge_cache_clear($target_view = '', $target_displays = array()) {

  global $conf;
  
  // Clear Views 'results' and 'output' cache for this display.
  // Examples
  // cid: homepage_top_story:block_1:results:a65e71386e4bc8dfe17152c492307b59, bin: cache_views_data.
  // cid: homepage_news_block:block_1:output:3cad53d25fd74189bd93b1f76d3c4237, bin: cache_views_data
  foreach($target_displays as $target_display) {
    cache_clear_all($target_view. ':'. trim($target_display), 'cache_views_data', TRUE);
  }
  
  // Clear block data.
  if($conf['block_cache'] && !cache_is_empty('cache_block')) {
    foreach($target_displays as $target_display) {
      cache_clear_all('views:'. $target_view. '-'. trim($target_display), 'cache_block', TRUE);
      //cache_clear_all('views:homepage_news_block-'. $view_name, 'cache_block', TRUE);
    }
  }
  drupal_set_message(t("The blocks for %target_view has been purged from cache.",
    array('%target_view' => $target_view)
  ));
}

