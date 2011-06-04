<?php
/**
 * @file
 * homework_helper.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function homework_helper_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_views_api().
 */
function homework_helper_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}

/**
 * Implementation of hook_node_info().
 */
function homework_helper_node_info() {
  $items = array(
    'a_paper' => array(
      'name' => t('A+ Paper'),
      'base' => 'node_content',
      'description' => t('An A+ Paper is an interactive writing tool within Homework Helper.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'paper_step' => array(
      'name' => t('A+ Paper Step'),
      'base' => 'node_content',
      'description' => t('A single step of an A+ Paper.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
