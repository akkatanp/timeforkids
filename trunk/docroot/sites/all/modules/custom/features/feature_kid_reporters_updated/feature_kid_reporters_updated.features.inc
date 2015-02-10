<?php
/**
 * @file
 * feature_kid_reporters_updated.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_kid_reporters_updated_ctools_plugin_api() {
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
function feature_kid_reporters_updated_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function feature_kid_reporters_updated_flag_default_flags() {
  $flags = array();
  // Exported flag: "Active Kid Reporter School Year".
  $flags['active_kidreporter_school_year'] = array(
    'content_type' => 'node',
    'title' => 'Active Kid Reporter School Year',
    'global' => '1',
    'types' => array(
      0 => 'kid_reporter_listing_nodeblock',
    ),
    'flag_short' => 'Use as active school year',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Stop using as active school year',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '3',
        1 => '4',
      ),
      'unflag' => array(
        0 => '3',
        1 => '4',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'feature_kid_reporters_updated',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function feature_kid_reporters_updated_node_info() {
  $items = array(
    'kid_reporter' => array(
      'name' => t('Kid Reporter'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
