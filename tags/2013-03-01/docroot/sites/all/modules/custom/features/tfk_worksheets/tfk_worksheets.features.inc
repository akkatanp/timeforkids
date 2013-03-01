<?php
/**
 * @file
 * tfk_worksheets.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function tfk_worksheets_ctools_plugin_api() {
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
 * Implementation of hook_node_info().
 */
function tfk_worksheets_node_info() {
  $items = array(
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
