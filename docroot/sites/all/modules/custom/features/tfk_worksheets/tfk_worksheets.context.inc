<?php
/**
 * @file
 * tfk_worksheets.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tfk_worksheets_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'publishing_calendar';
  $context->description = '';
  $context->tag = 'publishing_calendar';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'content/grade-k-1' => 'content/grade-k-1',
        'content/grade-2' => 'content/grade-2',
        'content/grade-3-4' => 'content/grade-3-4',
        'content/grade-5-6' => 'content/grade-5-6',
      ),
    ),
    'user' => array(
      'values' => array(
        'Board Member' => 'Board Member',
        'administrator' => 'administrator',
        'authenticated user' => 'authenticated user',
        'editor' => 'editor',
        'teacher' => 'teacher',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'tfk_search-tfk_magazine_back_btn' => array(
          'module' => 'tfk_search',
          'delta' => 'tfk_magazine_back_btn',
          'region' => 'sidebar_bottom',
          'weight' => '-10',
        ),
        'menu-menu-publishing-calendar-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-publishing-calendar-menu',
          'region' => 'sidebar_bottom',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('publishing_calendar');
  $export['publishing_calendar'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'worksheets';
  $context->description = 'Worksheets';
  $context->tag = 'search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'worksheets' => 'worksheets',
      ),
    ),
    'user' => array(
      'values' => array(
        'Board Member' => 'Board Member',
        'administrator' => 'administrator',
        'authenticated user' => 'authenticated user',
        'editor' => 'editor',
        'teacher' => 'teacher',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'apachesolr_search-im_28_field_grade_level' => array(
          'module' => 'apachesolr_search',
          'delta' => 'im_28_field_grade_level',
          'region' => 'sidebar_first',
          'weight' => '-88',
        ),
        'tfk_search-sm_editorial_date_tfk' => array(
          'module' => 'tfk_search',
          'delta' => 'sm_editorial_date_tfk',
          'region' => 'sidebar_first',
          'weight' => '-87',
        ),
        'tfk_search-is_spanish_issue' => array(
          'module' => 'tfk_search',
          'delta' => 'is_spanish_issue',
          'region' => 'sidebar_first',
          'weight' => '-86',
        ),
        'menu-menu-publishing-calendar-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-publishing-calendar-menu',
          'region' => 'sidebar_bottom',
          'weight' => '-86',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('search');
  t('Worksheets');
  $export['worksheets'] = $context;

  return $export;
}
