<?php
/**
 * @file
 * tfk_atw_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tfk_atw_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'Around The World Channel Main Page';
  $context->description = 'Main ATW Page with List of countries';
  $context->tag = 'atw';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'around-the-world' => 'around-the-world',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-e8b42584f1754eca1dcf455e790ad8ad' => array(
          'module' => 'views',
          'delta' => 'e8b42584f1754eca1dcf455e790ad8ad',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'tfk_atw-atw-page-slideshow' => array(
          'module' => 'tfk_atw',
          'delta' => 'atw-page-slideshow',
          'region' => 'content',
          'weight' => '-30',
        ),
        'views-atw_homepage_nodeblock-block_1' => array(
          'module' => 'views',
          'delta' => 'atw_homepage_nodeblock-block_1',
          'region' => 'content',
          'weight' => '-29',
        ),
        'tfk_atw-atw-page-list-map-switch' => array(
          'module' => 'tfk_atw',
          'delta' => 'atw-page-list-map-switch',
          'region' => 'content',
          'weight' => '-28',
        ),
        'views-1f7c86c10db9b1f1f7ab8ea69a320f35' => array(
          'module' => 'views',
          'delta' => '1f7c86c10db9b1f1f7ab8ea69a320f35',
          'region' => 'content',
          'weight' => '-27',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Main ATW Page with List of countries');
  t('atw');
  $export['Around The World Channel Main Page'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'Around The World Channel Main Page with MAP';
  $context->description = 'Around The World Channel Main Page with MAP';
  $context->tag = 'atw';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'around-the-world/map' => 'around-the-world/map',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-e8b42584f1754eca1dcf455e790ad8ad' => array(
          'module' => 'views',
          'delta' => 'e8b42584f1754eca1dcf455e790ad8ad',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'tfk_atw-atw-page-slideshow' => array(
          'module' => 'tfk_atw',
          'delta' => 'atw-page-slideshow',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-atw_homepage_nodeblock-block_1' => array(
          'module' => 'views',
          'delta' => 'atw_homepage_nodeblock-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
        'tfk_atw-atw-page-list-map-switch' => array(
          'module' => 'tfk_atw',
          'delta' => 'atw-page-list-map-switch',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-atw_destinations_view-block' => array(
          'module' => 'views',
          'delta' => 'atw_destinations_view-block',
          'region' => 'content',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Around The World Channel Main Page with MAP');
  t('atw');
  $export['Around The World Channel Main Page with MAP'] = $context;

  return $export;
}
