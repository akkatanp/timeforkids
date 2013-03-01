<?php
/**
 * @file
 * tfk_favorites_feature.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function tfk_favorites_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'Favorites';
  $context->description = 'Block placements for the user_favorites View.';
  $context->tag = 'TFK Favorites';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'user_favorites' => 'user_favorites',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'tfk_search-tfk_search_worksheet_saved' => array(
          'module' => 'tfk_search',
          'delta' => 'tfk_search_worksheet_saved',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'tfk_favorites-tfk_favorites_links' => array(
          'module' => 'tfk_favorites',
          'delta' => 'tfk_favorites_links',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Block placements for the user_favorites View.');
  t('TFK Favorites');
  $export['Favorites'] = $context;

  return $export;
}
