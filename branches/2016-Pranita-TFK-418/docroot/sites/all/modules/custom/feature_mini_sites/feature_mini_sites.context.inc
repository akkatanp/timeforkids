<?php
/**
 * @file
 * feature_mini_sites.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function feature_mini_sites_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'minisite_landing_page';
  $context->description = '';
  $context->tag = 'minisite';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'mini-sites' => 'mini-sites',
      ),
    ),
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
        'teacher' => 'teacher',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-mini_site_home-block_1' => array(
          'module' => 'views',
          'delta' => 'mini_site_home-block_1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-mini_site_home-block_2' => array(
          'module' => 'views',
          'delta' => 'mini_site_home-block_2',
          'region' => 'content',
          'weight' => '-77',
        ),
        'views-mini_site_home-block' => array(
          'module' => 'views',
          'delta' => 'mini_site_home-block',
          'region' => 'content',
          'weight' => '-76',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('minisite');
  $export['minisite_landing_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'minisite_landing_page_for_editors';
  $context->description = '';
  $context->tag = 'minisite';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'mini-sites' => 'mini-sites',
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
        'views-mini_site_home-block_1' => array(
          'module' => 'views',
          'delta' => 'mini_site_home-block_1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-mini_site_home-block_3' => array(
          'module' => 'views',
          'delta' => 'mini_site_home-block_3',
          'region' => 'content',
          'weight' => '-60',
        ),
        'views-mini_site_home-block' => array(
          'module' => 'views',
          'delta' => 'mini_site_home-block',
          'region' => 'content',
          'weight' => '-59',
        ),
        'views-mini_site_home-block_4' => array(
          'module' => 'views',
          'delta' => 'mini_site_home-block_4',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('minisite');
  $export['minisite_landing_page_for_editors'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'minisite_node_view';
  $context->description = '';
  $context->tag = 'minisite';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'minisite' => 'minisite',
      ),
      'options' => array(
        'node_form' => '1',
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
        'views-minisite_articles-block_4' => array(
          'module' => 'views',
          'delta' => 'minisite_articles-block_4',
          'region' => 'sidebar_first',
          'weight' => '-46',
        ),
        'views-minisite_articles-block_6' => array(
          'module' => 'views',
          'delta' => 'minisite_articles-block_6',
          'region' => 'sidebar_first',
          'weight' => '-45',
        ),
        'views-minisite_articles-block_7' => array(
          'module' => 'views',
          'delta' => 'minisite_articles-block_7',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-minisite_articles-block_3' => array(
          'module' => 'views',
          'delta' => 'minisite_articles-block_3',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-minisite_articles-block_1' => array(
          'module' => 'views',
          'delta' => 'minisite_articles-block_1',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-minisite_articles-block_8' => array(
          'module' => 'views',
          'delta' => 'minisite_articles-block_8',
          'region' => 'content',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('minisite');
  $export['minisite_node_view'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'minisite_node_view_for_teachers';
  $context->description = '';
  $context->tag = 'minisite';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'minisite' => 'minisite',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'user' => array(
      'values' => array(
        'administrator' => 'administrator',
        'authenticated user' => 'authenticated user',
        'editor' => 'editor',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-minisite_articles-block_4' => array(
          'module' => 'views',
          'delta' => 'minisite_articles-block_4',
          'region' => 'sidebar_first',
          'weight' => '-83',
        ),
        'views-minisite_articles-block_5' => array(
          'module' => 'views',
          'delta' => 'minisite_articles-block_5',
          'region' => 'sidebar_first',
          'weight' => '-82',
        ),
        'views-minisite_articles-block_6' => array(
          'module' => 'views',
          'delta' => 'minisite_articles-block_6',
          'region' => 'sidebar_first',
          'weight' => '-81',
        ),
        'views-minisite_articles-block_7' => array(
          'module' => 'views',
          'delta' => 'minisite_articles-block_7',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-minisite_articles-block_2' => array(
          'module' => 'views',
          'delta' => 'minisite_articles-block_2',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-minisite_articles-block' => array(
          'module' => 'views',
          'delta' => 'minisite_articles-block',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-minisite_articles-block_8' => array(
          'module' => 'views',
          'delta' => 'minisite_articles-block_8',
          'region' => 'content',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('minisite');
  $export['minisite_node_view_for_teachers'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'tfk_slideshow_node_view';
  $context->description = 'Slideshow block for regular slideshow pages, Featured sidebar and back to all link.';
  $context->tag = 'TFK Photos and Video';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'photos-video/slideshow' => 'photos-video/slideshow',
        'photos-video/slideshow/*' => 'photos-video/slideshow/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'tfk_search-tfk_search_photos_video_back' => array(
          'module' => 'tfk_search',
          'delta' => 'tfk_search_photos_video_back',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'tfk_helper-featured_block_sidebar_slideshow' => array(
          'module' => 'tfk_helper',
          'delta' => 'featured_block_sidebar_slideshow',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'tfk_news-tfk-news-minisite-articles' => array(
          'module' => 'tfk_news',
          'delta' => 'tfk-news-minisite-articles',
          'region' => 'sidebar_bottom',
          'weight' => '-90',
        ),
        'tfk_news-tfk-news-minisite-more' => array(
          'module' => 'tfk_news',
          'delta' => 'tfk-news-minisite-more',
          'region' => 'sidebar_bottom',
          'weight' => '-89',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'tfk_helper-tfk_helper_slideshow' => array(
          'module' => 'tfk_helper',
          'delta' => 'tfk_helper_slideshow',
          'region' => 'content',
          'weight' => '-9',
        ),
        'tfk_helper-more_items_block' => array(
          'module' => 'tfk_helper',
          'delta' => 'more_items_block',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Slideshow block for regular slideshow pages, Featured sidebar and back to all link.');
  t('TFK Photos and Video');
  $export['tfk_slideshow_node_view'] = $context;

  return $export;
}
