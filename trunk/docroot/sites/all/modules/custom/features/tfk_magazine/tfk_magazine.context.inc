<?php
/**
 * @file
 * tfk_magazine.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function tfk_magazine_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'publishing_calendar';
  $context->description = 'Block placement for publishing calendar.';
  $context->tag = 'Misc';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'pub-schedule/*' => 'pub-schedule/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-publishing-calendar-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-publishing-calendar-menu',
          'region' => 'sidebar_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Block placement for publishing calendar.');
  t('Misc');
  $export['publishing_calendar'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'tfk_magazine';
  $context->description = 'tfk Magazines block';
  $context->tag = 'search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'tfk-magazine' => 'tfk-magazine',
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
          'weight' => '-10',
        ),
        'tfk_search-sm_editorial_date_tfk' => array(
          'module' => 'tfk_search',
          'delta' => 'sm_editorial_date_tfk',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'menu-menu-publishing-calendar-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-publishing-calendar-menu',
          'region' => 'sidebar_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('search');
  t('tfk Magazines block');
  $export['tfk_magazine'] = $context;

  return $export;
}
