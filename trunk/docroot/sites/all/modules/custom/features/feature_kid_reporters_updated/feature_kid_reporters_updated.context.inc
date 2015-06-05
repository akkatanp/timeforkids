<?php
/**
 * @file
 * feature_kid_reporters_updated.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function feature_kid_reporters_updated_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'all_kid_reporters';
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
        'tfk_kid_reporters-kid_reporter_year' => array(
          'module' => 'tfk_kid_reporters',
          'delta' => 'kid_reporter_year',
          'region' => 'sidebar_first',
          'weight' => NULL,
        ),
        'views-featured_kid_reporter-block' => array(
          'module' => 'views',
          'delta' => 'featured_kid_reporter-block',
          'region' => 'sidebar_first',
          'weight' => NULL,
        ),
        'menu-menu-kid-reporter-articles-link' => array(
          'module' => 'menu',
          'delta' => 'menu-kid-reporter-articles-link',
          'region' => 'sidebar_first',
          'weight' => NULL,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('kid reporter');
  $export['all_kid_reporters'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'kid_reporter_content_type_display';
  $context->description = '';
  $context->tag = 'kid reporter';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'kid_reporter' => 'kid_reporter',
      ),
      'options' => array(
        'node_form' => '1',
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
          'weight' => '-80',
        ),
        'views-5df91b7baddd5da5443c54ebe9079cd3' => array(
          'module' => 'views',
          'delta' => '5df91b7baddd5da5443c54ebe9079cd3',
          'region' => 'sidebar_first',
          'weight' => '-79',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('kid reporter');
  $export['kid_reporter_content_type_display'] = $context;

  $context = new stdClass();
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
          'region' => 'sidebar_bottom',
          'weight' => '-10',
        ),
        'block-36' => array(
          'module' => 'block',
          'delta' => 36,
          'region' => 'content',
          'weight' => '-93',
        ),
        'views-homepage_top_story-block_6' => array(
          'module' => 'views',
          'delta' => 'homepage_top_story-block_6',
          'region' => 'content',
          'weight' => '-92',
        ),
        'views-b33cd2fbd0b65ee083576e6b96b79cd6' => array(
          'module' => 'views',
          'delta' => 'b33cd2fbd0b65ee083576e6b96b79cd6',
          'region' => 'content',
          'weight' => '-91',
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

  $context = new stdClass();
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
          'region' => 'sidebar_bottom',
          'weight' => '-10',
        ),
        'block-36' => array(
          'module' => 'block',
          'delta' => 36,
          'region' => 'content',
          'weight' => '-97',
        ),
        'views-homepage_top_story-block_5' => array(
          'module' => 'views',
          'delta' => 'homepage_top_story-block_5',
          'region' => 'content',
          'weight' => '-96',
        ),
        'views-homepage_news_block-block_5' => array(
          'module' => 'views',
          'delta' => 'homepage_news_block-block_5',
          'region' => 'content',
          'weight' => '-95',
        ),
        'views-b7c4853460a70e08ede4c3810b795953' => array(
          'module' => 'views',
          'delta' => 'b7c4853460a70e08ede4c3810b795953',
          'region' => 'content',
          'weight' => '-94',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('kid reporter');
  $export['kid_reporter_for_editors'] = $context;

  $context = new stdClass();
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
          'region' => 'sidebar_bottom',
          'weight' => '-10',
        ),
        'block-36' => array(
          'module' => 'block',
          'delta' => 36,
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-homepage_top_story-block_5' => array(
          'module' => 'views',
          'delta' => 'homepage_top_story-block_5',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-homepage_news_block-block_5' => array(
          'module' => 'views',
          'delta' => 'homepage_news_block-block_5',
          'region' => 'content',
          'weight' => '-8',
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
