<?php
/**
 * @file
 * tfk_quizzes.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function tfk_quizzes_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function tfk_quizzes_node_info() {
  $items = array(
    'pdf_quiz' => array(
      'name' => t('PDF Quiz'),
      'base' => 'node_content',
      'description' => t('PDF Quiz'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
