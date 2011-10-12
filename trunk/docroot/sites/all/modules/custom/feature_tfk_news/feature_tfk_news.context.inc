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

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'magazine_news_article';
  $context->description = 'Magazine Article Node View. This Context is activated by links coming from the Magazines SERP.';
  $context->tag = 'tfk news';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news/*/*/*' => 'news/*/*/*',
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
        'tfk_search-tfk_magazine_back_btn' => array(
          'module' => 'tfk_search',
          'delta' => 'tfk_magazine_back_btn',
          'region' => 'sidebar_top',
          'weight' => '-10',
        ),
        'tfk_search-tfk_magazine_issue_block' => array(
          'module' => 'tfk_search',
          'delta' => 'tfk_magazine_issue_block',
          'region' => 'sidebar_top',
          'weight' => '-9',
        ),
        'tfk_news-tfk-news-latest-news-link' => array(
          'module' => 'tfk_news',
          'delta' => 'tfk-news-latest-news-link',
          'region' => 'sidebar_first',
          'weight' => '-82',
        ),
        'tfk_news-tfk-news-taxonomy-links' => array(
          'module' => 'tfk_news',
          'delta' => 'tfk-news-taxonomy-links',
          'region' => 'sidebar_first',
          'weight' => '-81',
        ),
        'tfk_news-tfk-news-year-filter' => array(
          'module' => 'tfk_news',
          'delta' => 'tfk-news-year-filter',
          'region' => 'sidebar_first',
          'weight' => '-80',
        ),
        'views-random_kid_reporters-block' => array(
          'module' => 'views',
          'delta' => 'random_kid_reporters-block',
          'region' => 'sidebar_bottom',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'node-type-article',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Magazine Article Node View. This Context is activated by links coming from the Magazines SERP.');
  t('tfk news');
  $export['magazine_news_article'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_archive';
  $context->description = '';
  $context->tag = 'tfk news';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news-archive' => 'news-archive',
        'news-archive/*' => 'news-archive/*',
        '~news-archive/polls' => '~news-archive/polls',
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
        'views-news_archive-block_1' => array(
          'module' => 'views',
          'delta' => 'news_archive-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('tfk news');
  $export['news_archive'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_archive_anon';
  $context->description = '';
  $context->tag = 'tfk news';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news-archive' => 'news-archive',
        'news-archive/*' => 'news-archive/*',
        '~news-archive/polls' => '~news-archive/polls',
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
        'views-news_archive-block_3' => array(
          'module' => 'views',
          'delta' => 'news_archive-block_3',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('tfk news');
  $export['news_archive_anon'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_archive_polls';
  $context->description = '';
  $context->tag = 'tfk news';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news-archive/polls' => 'news-archive/polls',
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
        'views-news_archive-block_2' => array(
          'module' => 'views',
          'delta' => 'news_archive-block_2',
          'region' => 'content',
          'weight' => '-86',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('tfk news');
  $export['news_archive_polls'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_archive_polls_anon';
  $context->description = '';
  $context->tag = 'tfk news';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news-archive/polls' => 'news-archive/polls',
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
        'views-news_archive-block_4' => array(
          'module' => 'views',
          'delta' => 'news_archive-block_4',
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
  $export['news_archive_polls_anon'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_article_node_view';
  $context->description = 'News Article Node View';
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
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'tfk_news-tfk-news-latest-news-link' => array(
          'module' => 'tfk_news',
          'delta' => 'tfk-news-latest-news-link',
          'region' => 'sidebar_first',
          'weight' => '-88',
        ),
        'tfk_news-tfk-news-taxonomy-links' => array(
          'module' => 'tfk_news',
          'delta' => 'tfk-news-taxonomy-links',
          'region' => 'sidebar_first',
          'weight' => '-87',
        ),
        'tfk_news-tfk-news-year-filter' => array(
          'module' => 'tfk_news',
          'delta' => 'tfk-news-year-filter',
          'region' => 'sidebar_first',
          'weight' => '-86',
        ),
        'tfk_news-tfk-news-minisite-articles' => array(
          'module' => 'tfk_news',
          'delta' => 'tfk-news-minisite-articles',
          'region' => 'sidebar_bottom',
          'weight' => '-10',
        ),
        'tfk_news-tfk-news-minisite-more' => array(
          'module' => 'tfk_news',
          'delta' => 'tfk-news-minisite-more',
          'region' => 'sidebar_bottom',
          'weight' => '-9',
        ),
        'views-random_kid_reporters-block' => array(
          'module' => 'views',
          'delta' => 'random_kid_reporters-block',
          'region' => 'sidebar_bottom',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('News Article Node View');
  t('tfk news');
  $export['news_article_node_view'] = $context;

  return $export;
}
