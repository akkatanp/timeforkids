<?php
/**
 * @file
 * feature_tfk_news.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function feature_tfk_news_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'News Archive';
  $context->description = '';
  $context->tag = 'tfk news';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'news_archive' => 'news_archive',
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
        'tfk_news-tfk-news-current-filters' => array(
          'module' => 'tfk_news',
          'delta' => 'tfk-news-current-filters',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('tfk news');
  $export['News Archive'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'Teacher News Landing Page';
  $context->description = '';
  $context->tag = 'tfk news';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news' => 'news',
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
          'weight' => '-26',
        ),
        'tfk_news-tfk-news-taxonomy-links' => array(
          'module' => 'tfk_news',
          'delta' => 'tfk-news-taxonomy-links',
          'region' => 'sidebar_first',
          'weight' => '-25',
        ),
        'tfk_news-tfk-news-year-filter' => array(
          'module' => 'tfk_news',
          'delta' => 'tfk-news-year-filter',
          'region' => 'sidebar_first',
          'weight' => '-24',
        ),
        'views-teacher_news_top_story-block_1' => array(
          'module' => 'views',
          'delta' => 'teacher_news_top_story-block_1',
          'region' => 'content',
          'weight' => '-23',
        ),
        'views-teacher_news_news_block-block_1' => array(
          'module' => 'views',
          'delta' => 'teacher_news_news_block-block_1',
          'region' => 'content',
          'weight' => '-22',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('tfk news');
  $export['Teacher News Landing Page'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'Teacher News Landing Page For Editors';
  $context->description = '';
  $context->tag = 'tfk news';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news' => 'news',
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
        'tfk_news-tfk-news-latest-news-link' => array(
          'module' => 'tfk_news',
          'delta' => 'tfk-news-latest-news-link',
          'region' => 'sidebar_first',
          'weight' => '-26',
        ),
        'tfk_news-tfk-news-taxonomy-links' => array(
          'module' => 'tfk_news',
          'delta' => 'tfk-news-taxonomy-links',
          'region' => 'sidebar_first',
          'weight' => '-25',
        ),
        'tfk_news-tfk-news-year-filter' => array(
          'module' => 'tfk_news',
          'delta' => 'tfk-news-year-filter',
          'region' => 'sidebar_first',
          'weight' => '-24',
        ),
        'views-teacher_news_top_story-block_1' => array(
          'module' => 'views',
          'delta' => 'teacher_news_top_story-block_1',
          'region' => 'content',
          'weight' => '-23',
        ),
        'views-teacher_news_news_block-block_1' => array(
          'module' => 'views',
          'delta' => 'teacher_news_news_block-block_1',
          'region' => 'content',
          'weight' => '-22',
        ),
        'views-ab4d5bcf761474ee8d3ddde451e6d424' => array(
          'module' => 'views',
          'delta' => 'ab4d5bcf761474ee8d3ddde451e6d424',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('tfk news');
  $export['Teacher News Landing Page For Editors'] = $context;

  return $export;
}
