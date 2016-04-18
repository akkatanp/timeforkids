<?php
/**
 * @file
 * feature_news_brief.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_news_brief_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function feature_news_brief_flag_default_flags() {
  $flags = array();
  // Exported flag: "Homepage Minisite".
  $flags['homepage_minisite'] = array(
    'content_type' => 'node',
    'title' => 'Homepage Minisite',
    'global' => '1',
    'types' => array(
      0 => 'minisite',
      1 => 'news_brief',
    ),
    'flag_short' => 'Homepage Minisite',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove Homepage Minisite',
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
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'feature_news_brief',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}
