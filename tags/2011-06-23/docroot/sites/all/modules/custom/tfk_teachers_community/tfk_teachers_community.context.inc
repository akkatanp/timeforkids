<?php
/**
 * @file
 * tfk_teachers_community.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function tfk_teachers_community_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'TFK Teacher Community';
  $context->description = 'Block placements for Teacher Community pages.';
  $context->tag = 'TFK Teacher Community';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'teacher_community_question' => 'teacher_community_question',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'views' => array(
      'values' => array(
        'teacher_community_topic_list' => 'teacher_community_topic_list',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'tfk_teachers_community-tfk_teachers_comm_more_topics' => array(
          'module' => 'tfk_teachers_community',
          'delta' => 'tfk_teachers_comm_more_topics',
          'region' => 'sidebar_first',
          'weight' => '-58',
        ),
        'views-board_members-block_2' => array(
          'module' => 'views',
          'delta' => 'board_members-block_2',
          'region' => 'sidebar_first',
          'weight' => '-57',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Block placements for Teacher Community pages.');
  t('TFK Teacher Community');
  $export['TFK Teacher Community'] = $context;

  return $export;
}
