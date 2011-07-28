<?php
/**
 * @file
 * feature_kid_reporters_updated.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function feature_kid_reporters_updated_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'kid_reporter_for_anon';
  $context->description = 'kid_reporter_for_anon';
  $context->tag = 'kid reporter';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'kid-reporters' => 'kid-reporters',
      ),
    ),
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'tfk_news-tfk-news-latest-news-link' => array(
          'module' => 'tfk_news',
          'delta' => 'tfk-news-latest-news-link',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'tfk_news-tfk-news-taxonomy-links' => array(
          'module' => 'tfk_news',
          'delta' => 'tfk-news-taxonomy-links',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'tfk_news-tfk-news-year-filter' => array(
          'module' => 'tfk_news',
          'delta' => 'tfk-news-year-filter',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'views-random_kid_reporters-block' => array(
          'module' => 'views',
          'delta' => 'random_kid_reporters-block',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'views-7e7b23739b93998aa7e5cea0d0f85ad4' => array(
          'module' => 'views',
          'delta' => '7e7b23739b93998aa7e5cea0d0f85ad4',
          'region' => 'content',
          'weight' => '-77',
        ),
        'views-45303de8e748961eb19c97aa1f83db8d' => array(
          'module' => 'views',
          'delta' => '45303de8e748961eb19c97aa1f83db8d',
          'region' => 'content',
          'weight' => '-76',
        ),
        'views-be5808156299179ab2b8eea1009d6bb0' => array(
          'module' => 'views',
          'delta' => 'be5808156299179ab2b8eea1009d6bb0',
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
  t('kid_reporter_for_anon');
  $export['kid_reporter_for_anon'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'kid_reporter_for_editors';
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
        'administrator' => 'administrator',
        'editor' => 'editor',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'tfk_news-tfk-news-latest-news-link' => array(
          'module' => 'tfk_news',
          'delta' => 'tfk-news-latest-news-link',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'tfk_news-tfk-news-taxonomy-links' => array(
          'module' => 'tfk_news',
          'delta' => 'tfk-news-taxonomy-links',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'tfk_news-tfk-news-year-filter' => array(
          'module' => 'tfk_news',
          'delta' => 'tfk-news-year-filter',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'views-random_kid_reporters-block' => array(
          'module' => 'views',
          'delta' => 'random_kid_reporters-block',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'views-93aaed0cb7d273a3164529c1d6e4ac19' => array(
          'module' => 'views',
          'delta' => '93aaed0cb7d273a3164529c1d6e4ac19',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-c7f4c467ded05a2923be9f39deeb3aa8' => array(
          'module' => 'views',
          'delta' => 'c7f4c467ded05a2923be9f39deeb3aa8',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-be5808156299179ab2b8eea1009d6bb0' => array(
          'module' => 'views',
          'delta' => 'be5808156299179ab2b8eea1009d6bb0',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-d44bb19984e92f5f326b85c84e58955a' => array(
          'module' => 'views',
          'delta' => 'd44bb19984e92f5f326b85c84e58955a',
          'region' => 'content',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('kid reporter');
  $export['kid_reporter_for_editors'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'kid_reporter_for_teacher';
  $context->description = 'kid_reporter_for_teacher';
  $context->tag = 'kid reporter';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'kid-reporters' => 'kid-reporters',
      ),
    ),
    'user' => array(
      'values' => array(
        'teacher' => 'teacher',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'tfk_news-tfk-news-latest-news-link' => array(
          'module' => 'tfk_news',
          'delta' => 'tfk-news-latest-news-link',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'tfk_news-tfk-news-taxonomy-links' => array(
          'module' => 'tfk_news',
          'delta' => 'tfk-news-taxonomy-links',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'tfk_news-tfk-news-year-filter' => array(
          'module' => 'tfk_news',
          'delta' => 'tfk-news-year-filter',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'views-random_kid_reporters-block' => array(
          'module' => 'views',
          'delta' => 'random_kid_reporters-block',
          'region' => 'sidebar_first',
          'weight' => '-7',
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
        'views-be5808156299179ab2b8eea1009d6bb0' => array(
          'module' => 'views',
          'delta' => 'be5808156299179ab2b8eea1009d6bb0',
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
  t('kid_reporter_for_teacher');
  $export['kid_reporter_for_teacher'] = $context;

  return $export;
}
