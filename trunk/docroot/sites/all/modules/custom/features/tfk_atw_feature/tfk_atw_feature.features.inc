<?php
/**
 * @file
 * tfk_atw_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tfk_atw_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tfk_atw_feature_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tfk_atw_feature_node_info() {
  $items = array(
    'atw_day_in_life' => array(
      'name' => t('ATW Day In Life'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'atw_destination' => array(
      'name' => t('ATW Destination'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'atw_homepage_nodeblock' => array(
      'name' => t('ATW Homepage Nodeblock'),
      'base' => 'node_content',
      'description' => t('A static text that is available for editing and appears on the homepage for Around The World Section.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'atw_native_lingo' => array(
      'name' => t('ATW Native Lingo'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'atw_sightseeing' => array(
      'name' => t('ATW Sightseeing'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'atw_timeline' => array(
      'name' => t('ATW Timeline'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('ATW Challenge'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
