<?php
/**
 * @file
 * tfk_favorites_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tfk_favorites_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function tfk_favorites_feature_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function tfk_favorites_feature_flag_default_flags() {
  $flags = array();
  // Exported flag: "favorites".
  $flags['favorites'] = array(
    'content_type' => 'node',
    'title' => 'favorites',
    'global' => '0',
    'types' => array(
      0 => 'slideshow',
      1 => 'video',
      2 => 'common_core_standards',
      3 => 'pdf_quiz',
      4 => 'worksheet',
    ),
    'flag_short' => 'Click to add to Favorites',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Click to remove from Favorites',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
        1 => '3',
        2 => '4',
        3 => '5',
        4 => '6',
      ),
      'unflag' => array(
        0 => '2',
        1 => '3',
        2 => '4',
        3 => '5',
        4 => '6',
      ),
    ),
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'i18n' => 0,
    'module' => 'tfk_favorites_feature',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;
}
