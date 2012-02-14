<?php
/**
 * @file
 * feature_mini_sites.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_mini_sites_ctools_plugin_api() {
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
function feature_mini_sites_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function feature_mini_sites_flag_default_flags() {
  $flags = array();
  // Exported flag: "Minisite Featured".
  $flags['minisite_featured'] = array(
    'content_type' => 'node',
    'title' => 'Minisite Featured',
    'global' => '1',
    'types' => array(
      0 => 'minisite',
    ),
    'flag_short' => 'Minisite Featured',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove Minisite Featured',
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
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'i18n' => 0,
    'module' => 'feature_mini_sites',
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
function feature_mini_sites_node_info() {
  $items = array(
    'mini_site_home' => array(
      'name' => t('Mini-site Home'),
      'base' => 'node_content',
      'description' => t('Edit Title and Description for the mini-site landing page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'minisite' => array(
      'name' => t('Minisite'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
