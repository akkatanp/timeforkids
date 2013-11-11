<?php
/**
 * @file
 * feature_board_members.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_board_members_ctools_plugin_api() {
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
function feature_board_members_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_board_members_node_info() {
  $items = array(
    'board_member' => array(
      'name' => t('Board Member'),
      'base' => 'node_content',
      'description' => t('Board Member content type represents a teacher who is a board member.'),
      'has_title' => '1',
      'title_label' => t('Board Member Name'),
      'help' => '',
    ),
  );
  return $items;
}
