<?php
/**
 * @file
 * tfk_site_wide_search.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tfk_site_wide_search_context_default_contexts() {
  $export = array();
/*
  $context = new stdClass;
  $context->disabled = FALSE; * Edit this to true to make a default context disabled initially *
  $context->api_version = 3;
  $context->name = 'search_page';
  $context->description = 'Handles the site-wide search page (Spec 11A).';
  $context->tag = 'search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search/*' => 'search/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'tfk_search-tfk-search-back-btn' => array(
          'module' => 'tfk_search',
          'delta' => 'tfk-search-back-btn',
          'region' => 'sidebar_top',
          'weight' => '-10',
        ),
        'tfk_search-tfk_search_sidebar_filter' => array(
          'module' => 'tfk_search',
          'delta' => 'tfk_search_sidebar_filter',
          'region' => 'sidebar_top',
          'weight' => '-9',
        ),
        'apachesolr_search-im_28_field_grade_level' => array(
          'module' => 'apachesolr_search',
          'delta' => 'im_28_field_grade_level',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'apachesolr_search-bundle' => array(
          'module' => 'apachesolr_search',
          'delta' => 'bundle',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'apachesolr_search-im_10_field_article_category' => array(
          'module' => 'apachesolr_search',
          'delta' => 'im_10_field_article_category',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'apachesolr_search-im_36_field_themes' => array(
          'module' => 'apachesolr_search',
          'delta' => 'im_36_field_themes',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'apachesolr_search-im_35_field_skills' => array(
          'module' => 'apachesolr_search',
          'delta' => 'im_35_field_skills',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'tfk_search-ss_spanish_version' => array(
          'module' => 'tfk_search',
          'delta' => 'ss_spanish_version',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'tfk_search-sm_editorial_date_tfk' => array(
          'module' => 'tfk_search',
          'delta' => 'sm_editorial_date_tfk',
          'region' => 'sidebar_first',
          'weight' => '-3',
        ),
        'tfk_search-ss_tfk_product' => array(
          'module' => 'tfk_search',
          'delta' => 'ss_tfk_product',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Handles the site-wide search page (Spec 11A).');
  t('search');
  $export['search_page'] = $context;
 * 
 */

  return $export;
}
