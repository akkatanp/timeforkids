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
  $context->name = 'Minisite Landing Page';
  $context->description = '';
  $context->tag = 'minisite';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'mini-sites' => 'mini-sites',
      ),
    ),
    'views' => array(
      'values' => array(
        'minisite_home' => 'minisite_home',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-minisite_home-block_1' => array(
          'module' => 'views',
          'delta' => 'minisite_home-block_1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('minisite');
  $export['Minisite Landing Page'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'Minisite Node VIew';
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
  $export['Minisite Node VIew'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'Minisite Node VIew for Teachers';
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
  $export['Minisite Node VIew for Teachers'] = $context;

  return $export;
}
