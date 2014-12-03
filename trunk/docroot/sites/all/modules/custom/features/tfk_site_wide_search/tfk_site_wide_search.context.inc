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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
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
        'facetapi-0V61fyJ8a8J9pooEiSX0qrxxb63Wq6OJ' => array(
          'module' => 'facetapi',
          'delta' => '0V61fyJ8a8J9pooEiSX0qrxxb63Wq6OJ',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-GiIy4zr9Gu0ZSa0bumw1Y9qIIpIDf1wu' => array(
          'module' => 'facetapi',
          'delta' => 'GiIy4zr9Gu0ZSa0bumw1Y9qIIpIDf1wu',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-4mPrBk5hDm1iI5sCraXsbQ0GyCdhQshz' => array(
          'module' => 'facetapi',
          'delta' => '4mPrBk5hDm1iI5sCraXsbQ0GyCdhQshz',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-VIxnsypWMyIDU3x6J0Ky3ArmXNSrcCls' => array(
          'module' => 'facetapi',
          'delta' => 'VIxnsypWMyIDU3x6J0Ky3ArmXNSrcCls',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-MP76BI8r9G3Ss3ujzRLzut4J9ApVXxLG' => array(
          'module' => 'facetapi',
          'delta' => 'MP76BI8r9G3Ss3ujzRLzut4J9ApVXxLG',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-1vx93wKyU7HoAzs6sa0PMm14kMgfBQ1d' => array(
          'module' => 'facetapi',
          'delta' => '1vx93wKyU7HoAzs6sa0PMm14kMgfBQ1d',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'facetapi-ds8e78w9ImgYg1l6cZu5mzmqHB8kSiBp' => array(
          'module' => 'facetapi',
          'delta' => 'ds8e78w9ImgYg1l6cZu5mzmqHB8kSiBp',
          'region' => 'sidebar_first',
          'weight' => '-3',
        ),
        'tfk_favorites-tfk_favorites_links' => array(
          'module' => 'tfk_favorites',
          'delta' => 'tfk_favorites_links',
          'region' => 'sidebar_bottom',
          'weight' => '-10',
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

  return $export;
}
