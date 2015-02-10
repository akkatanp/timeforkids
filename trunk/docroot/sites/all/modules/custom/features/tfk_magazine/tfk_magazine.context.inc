<?php
/**
 * @file
 * tfk_magazine.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tfk_magazine_context_default_contexts() {
  $export = array();

  $context = new stdClass();
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

  $context = new stdClass();
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
        'facetapi-0V61fyJ8a8J9pooEiSX0qrxxb63Wq6OJ' => array(
          'module' => 'facetapi',
          'delta' => '0V61fyJ8a8J9pooEiSX0qrxxb63Wq6OJ',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-1vx93wKyU7HoAzs6sa0PMm14kMgfBQ1d' => array(
          'module' => 'facetapi',
          'delta' => '1vx93wKyU7HoAzs6sa0PMm14kMgfBQ1d',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-ds8e78w9ImgYg1l6cZu5mzmqHB8kSiBp' => array(
          'module' => 'facetapi',
          'delta' => 'ds8e78w9ImgYg1l6cZu5mzmqHB8kSiBp',
          'region' => 'sidebar_first',
          'weight' => '-7',
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
  t('tfk Magazines block');
  $export['tfk_magazine'] = $context;

  return $export;
}
