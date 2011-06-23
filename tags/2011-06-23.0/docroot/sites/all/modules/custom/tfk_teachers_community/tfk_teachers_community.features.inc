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
function tfk_teachers_community_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
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
      'description' => t('Teacher Community Questions are used to build the Teacher Community Discussion.
Questions are submitted to the backend for moderation.
The editorial team will add a further description of the question.'),
      'has_title' => '1',
      'title_label' => t('SUBMIT YOUR QUESTION TO THE TFK COMMUNITY '),
      'help' => t('<h2>Got a Question? Need Advice on Lesson Plans?</h2>
Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.'),
    ),
  );
  return $items;
}
