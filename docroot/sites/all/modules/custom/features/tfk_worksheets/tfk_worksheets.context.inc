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
  $context->name = 'worksheets';
  $context->description = 'Worksheets';
  $context->tag = 'search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'worksheets' => 'worksheets',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'tfk_search-tfk_search_ws_leftbar_title' => array(
          'module' => 'tfk_search',
          'delta' => 'tfk_search_ws_leftbar_title',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'apachesolr_search-im_28_field_grade_level' => array(
          'module' => 'apachesolr_search',
          'delta' => 'im_28_field_grade_level',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'apachesolr_search-bundle' => array(
          'module' => 'apachesolr_search',
          'delta' => 'bundle',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'apachesolr_search-im_36_field_themes' => array(
          'module' => 'apachesolr_search',
          'delta' => 'im_36_field_themes',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'apachesolr_search-im_35_field_skills' => array(
          'module' => 'apachesolr_search',
          'delta' => 'im_35_field_skills',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'tfk_search-tfk_search_worksheet_user_save' => array(
          'module' => 'tfk_search',
          'delta' => 'tfk_search_worksheet_user_save',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'tfk_search-tfk_search_worksheet_saved' => array(
          'module' => 'tfk_search',
          'delta' => 'tfk_search_worksheet_saved',
          'region' => 'sidebar_bottom',
          'weight' => '-9',
        ),
        'tfk_favorites-tfk_favorites_links' => array(
          'module' => 'tfk_favorites',
          'delta' => 'tfk_favorites_links',
          'region' => 'sidebar_bottom',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Worksheets');
  t('search');
  $export['worksheets'] = $context;

  return $export;
}
