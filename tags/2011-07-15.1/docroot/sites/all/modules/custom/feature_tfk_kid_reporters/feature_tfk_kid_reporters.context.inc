<?php
/**
 * @file
 * feature_tfk_kid_reporters.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function feature_tfk_kid_reporters_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'All Kid Reporters List';
  $context->description = '';
  $context->tag = 'kid reporter';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'all_kid_reporters:page' => 'all_kid_reporters:page',
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
        'views-featured_kid_reporter-block' => array(
          'module' => 'views',
          'delta' => 'featured_kid_reporter-block',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('kid reporter');
  $export['All Kid Reporters List'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'Kid Reporter Content Type Display';
  $context->description = '';
  $context->tag = 'kid reporter';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'kid_reporter' => 'kid_reporter',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-kid-reporter-listings-link' => array(
          'module' => 'menu',
          'delta' => 'menu-kid-reporter-listings-link',
          'region' => 'sidebar_first',
          'weight' => '-22',
        ),
        'views-5df91b7baddd5da5443c54ebe9079cd3' => array(
          'module' => 'views',
          'delta' => '5df91b7baddd5da5443c54ebe9079cd3',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('kid reporter');
  $export['Kid Reporter Content Type Display'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'Kid Reporter Section Landing Page';
  $context->description = '';
  $context->tag = 'kid reporter';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'kid-reporters' => 'kid-reporters',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-random_kid_reporters-block' => array(
          'module' => 'views',
          'delta' => 'random_kid_reporters-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-93aaed0cb7d273a3164529c1d6e4ac19' => array(
          'module' => 'views',
          'delta' => '93aaed0cb7d273a3164529c1d6e4ac19',
          'region' => 'content',
          'weight' => '-20',
        ),
        'views-c7f4c467ded05a2923be9f39deeb3aa8' => array(
          'module' => 'views',
          'delta' => 'c7f4c467ded05a2923be9f39deeb3aa8',
          'region' => 'content',
          'weight' => '-19',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('kid reporter');
  $export['Kid Reporter Section Landing Page'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'Kid Reporter Section Landing Page For Editors';
  $context->description = '';
  $context->tag = 'kid reporter';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'kid-reporters' => 'kid-reporters',
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
        'views-random_kid_reporters-block' => array(
          'module' => 'views',
          'delta' => 'random_kid_reporters-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-93aaed0cb7d273a3164529c1d6e4ac19' => array(
          'module' => 'views',
          'delta' => '93aaed0cb7d273a3164529c1d6e4ac19',
          'region' => 'content',
          'weight' => '-20',
        ),
        'views-c7f4c467ded05a2923be9f39deeb3aa8' => array(
          'module' => 'views',
          'delta' => 'c7f4c467ded05a2923be9f39deeb3aa8',
          'region' => 'content',
          'weight' => '-19',
        ),
        'views-d44bb19984e92f5f326b85c84e58955a' => array(
          'module' => 'views',
          'delta' => 'd44bb19984e92f5f326b85c84e58955a',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('kid reporter');
  $export['Kid Reporter Section Landing Page For Editors'] = $context;

  return $export;
}
