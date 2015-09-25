<?php
/**
 * @file
 * feature_kid_reporter_all_2015.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function feature_kid_reporter_all_2015_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'kid_reporter_all_2015_2016';
  $context->description = '';
  $context->tag = 'kid reporter';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'all_kid_reporters:page_1' => 'all_kid_reporters:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-kid-reporter-articles-link' => array(
          'module' => 'menu',
          'delta' => 'menu-kid-reporter-articles-link',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-featured_kid_reporter-block_1' => array(
          'module' => 'views',
          'delta' => 'featured_kid_reporter-block_1',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'tfk_kid_reporters-kid_reporter_year' => array(
          'module' => 'tfk_kid_reporters',
          'delta' => 'kid_reporter_year',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('kid reporter');
  $export['kid_reporter_all_2015_2016'] = $context;

  return $export;
}
