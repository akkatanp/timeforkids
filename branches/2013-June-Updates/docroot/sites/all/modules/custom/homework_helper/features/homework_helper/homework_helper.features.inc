<?php
/**
 * @file
 * homework_helper.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function homework_helper_ctools_plugin_api() {
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
function homework_helper_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function homework_helper_node_info() {
  $items = array(
    'a_paper' => array(
      'name' => t('A+ Paper'),
      'base' => 'node_content',
      'description' => t('An A+ Paper is an interactive writing tool within Homework Helper.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('To create an A+ paper you first complete this form and then add the individual steps of the interactive paper separately as A+ Paper Steps.<br /><br />

The information you add here will show on the A+ papers landing page and on the first page of the paper itself.'),
    ),
    'grammar_practice' => array(
      'name' => t('Punctuation Practice'),
      'base' => 'node_content',
      'description' => t('A Punctuation Practice contains a quiz and associated rules. The actual questions and rules relating to it are created separately, this parent content contains the name and description.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('A Punctuation Practice contains a quiz and associated rules. The actual questions and rules relating to it are created separately.'),
    ),
    'grammar_practice_question' => array(
      'name' => t('Punctuation Practice Question'),
      'base' => 'node_content',
      'description' => t('An individual question for a punctuation practice quiz, including the available multiple choice answers and the correct answer.'),
      'has_title' => '1',
      'title_label' => t('Sentence to correct'),
      'help' => t('Add an individual question for a punctuation practice. The punctuation practice will display 5 random questions.

You may use the following HTML tags for the question and answers: &lt;em&gt; &lt;strong&gt; &lt;u&gt;. '),
    ),
    'grammar_practice_reward_image' => array(
      'name' => t('Punctuation Practice Trophy'),
      'base' => 'node_content',
      'description' => t('An image that displays when a student masters a punctuation practice quiz.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Add an image that displays when a student masters a punctuation practice quiz. One of the available trophies will display each time.'),
    ),
    'grammar_practice_rule' => array(
      'name' => t('Punctuation Practice Rule'),
      'base' => 'node_content',
      'description' => t('A punctuation practice rule is an individual rule that is a part of a punctuation practice.'),
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
      'help' => t('An A+ Paper step is an individual step within the interactive A+ Paper. You must add the A+ Paper itself before adding steps.'),
    ),
    'writing_tips' => array(
      'name' => t('Writing Tips'),
      'base' => 'node_content',
      'description' => t('The writing tips questions and answers provided by staff or submitted questions.'),
      'has_title' => '1',
      'title_label' => t('Question'),
      'help' => t('Writing tips are listed on  the <a href="/homework-helper/writing-tips">Writing Tips landing page</a>. Reference a TFK staff member as the author of the writing tip with the \'Author\' autocomplete field. The author\'s image will appear with the writing tip.'),
    ),
  );
  return $items;
}
