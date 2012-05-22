<?php
/**
 * @file
 * tfk_teachers_community.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tfk_teachers_community_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'tfk_teacher_community';
  $context->description = 'Blocks for Teacher Community node pages.';
  $context->tag = 'Teacher Community';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'teacher_community_question' => 'teacher_community_question',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'tfk_teachers_community-tfk_teachers_comm_more_topics' => array(
          'module' => 'tfk_teachers_community',
          'delta' => 'tfk_teachers_comm_more_topics',
          'region' => 'sidebar_bottom',
          'weight' => '-75',
        ),
        'views-4dd757237991afc15893b55c57cc03ef' => array(
          'module' => 'views',
          'delta' => '4dd757237991afc15893b55c57cc03ef',
          'region' => 'sidebar_bottom',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks for Teacher Community node pages.');
  t('Teacher Community');
  $export['tfk_teacher_community'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'tfk_teacher_community_topics';
  $context->description = 'Blocks for Teacher Community Topic List.';
  $context->tag = 'Teacher Community';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
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
          'region' => 'sidebar_bottom',
          'weight' => '-75',
        ),
        'views-4dd757237991afc15893b55c57cc03ef' => array(
          'module' => 'views',
          'delta' => '4dd757237991afc15893b55c57cc03ef',
          'region' => 'sidebar_bottom',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks for Teacher Community Topic List.');
  t('Teacher Community');
  $export['tfk_teacher_community_topics'] = $context;

  return $export;
}
