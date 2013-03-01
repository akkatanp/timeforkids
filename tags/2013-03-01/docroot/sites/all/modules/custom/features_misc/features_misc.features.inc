<?php
/**
 * @file
 * features_misc.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function features_misc_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_views_api().
 */
function features_misc_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}

/**
 * Implementation of hook_flag_default_flags().
 */
function features_misc_flag_default_flags() {
  $flags = array();
  // Exported flag: "Global Sidebar Teacher Resources".
  $flags['global_sidebar_teacher_resources'] = array(
    'content_type' => 'node',
    'title' => 'Global Sidebar Teacher Resources',
    'global' => '1',
    'types' => array(
      0 => 'worksheet',
    ),
    'flag_short' => 'Teacher Resources',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove Teacher Resources',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(
        0 => '2',
      ),
    ),
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'features_misc',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;
}

/**
 * Implementation of hook_node_info().
 */
function features_misc_node_info() {
  $items = array(
    'global_right_sidebar_promo' => array(
      'name' => t('Global Right Sidebar Promo'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
