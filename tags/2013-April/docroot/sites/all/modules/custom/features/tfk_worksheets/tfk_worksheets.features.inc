<?php
/**
 * @file
 * tfk_worksheets.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tfk_worksheets_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
 
}

/**
 * Implements hook_node_info().
 */
function tfk_worksheets_node_info() {
  $items = array(
    'common_core_standards' => array(
      'name' => t('Common Core Standards'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'pdf_quiz' => array(
      'name' => t('PDF Quiz'),
      'base' => 'node_content',
      'description' => t('PDF Quiz'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'worksheet' => array(
      'name' => t('Worksheet'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
