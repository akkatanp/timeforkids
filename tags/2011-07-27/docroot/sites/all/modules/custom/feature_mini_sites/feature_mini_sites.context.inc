<?php
/**
 * @file
 * feature_mini_sites.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function feature_mini_sites_context_default_contexts() {
  $export = array();

  $context = new stdClass;
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

  $context = new stdClass;
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
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('minisite');
  $export['minisite_landing_page_for_editors'] = $context;

  $context = new stdClass;
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
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('minisite');
  $export['minisite_node_view'] = $context;

  $context = new stdClass;
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
          'weight' => '-38',
        ),
        'views-minisite_articles-block_5' => array(
          'module' => 'views',
          'delta' => 'minisite_articles-block_5',
          'region' => 'sidebar_first',
          'weight' => '-37',
        ),
        'views-minisite_articles-block_6' => array(
          'module' => 'views',
          'delta' => 'minisite_articles-block_6',
          'region' => 'sidebar_first',
          'weight' => '-10',
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
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('minisite');
  $export['minisite_node_view_for_teachers'] = $context;

  return $export;
}
