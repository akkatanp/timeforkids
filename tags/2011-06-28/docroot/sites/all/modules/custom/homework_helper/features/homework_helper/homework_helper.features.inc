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
    'grammar_practice' => array(
      'name' => t('Grammar Practice'),
      'base' => 'node_content',
      'description' => t('A Grammar Practice contains a quiz and associated rules. The actual questions and rules relating to it are created separately, this parent content contains the name and description.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('A Grammar Practice contains a quiz and associated rules. The actual questions and rules relating to it are created separately, this parent content contains the name and description.'),
    ),
    'grammar_practice_question' => array(
      'name' => t('Grammar Practice Question'),
      'base' => 'node_content',
      'description' => t('An individual question for a grammar practice quiz, including the available multiple choice answers and the correct answer.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'grammar_practice_reward_image' => array(
      'name' => t('Grammar Practice Reward Image'),
      'base' => 'node_content',
      'description' => t('An image that displays when a student masters a grammar practice quiz.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'grammar_practice_rule' => array(
      'name' => t('Grammar Practice Rule'),
      'base' => 'node_content',
      'description' => t('A grammar practice rule is an individual rule that is a part of a grammar practice.'),
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
    'writing_tips' => array(
      'name' => t('Writing Tips'),
      'base' => 'node_content',
      'description' => t('The writing tips questions and answers provided by staff or submitted questions.'),
      'has_title' => '1',
      'title_label' => t('Question'),
      'help' => '',
    ),
  );
  return $items;
}
