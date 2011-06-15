<?php
/**
 * @file
 * tfk_teachers_community.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function tfk_teachers_community_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function tfk_teachers_community_node_info() {
  $items = array(
    'teacher_community_question' => array(
      'name' => t('Teacher Community Question'),
      'base' => 'node_content',
      'description' => t('<h2>Got a Question? Need Advice on Lesson Plans?</h2>
<p>Lorem Ipsum Description </p>'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('<h2>Got a Question? Need Advice on Lesson Plans?</h2>
<p>Explanation or submission guidelines </p>'),
    ),
  );
  return $items;
}
