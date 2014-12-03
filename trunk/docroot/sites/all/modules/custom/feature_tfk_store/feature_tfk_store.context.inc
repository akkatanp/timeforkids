<?php
/**
 * @file
 * feature_tfk_store.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function feature_tfk_store_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'books';
  $context->description = '';
  $context->tag = 'tfk store';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'store/books' => 'store/books',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-store-pages-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-store-pages-menu',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-books-block' => array(
          'module' => 'views',
          'delta' => 'books-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-books-all_books' => array(
          'module' => 'views',
          'delta' => 'books-all_books',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('tfk store');
  $export['books'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'other_products';
  $context->description = '';
  $context->tag = 'tfk store';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'store/products' => 'store/products',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-store-pages-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-store-pages-menu',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-other_products-block' => array(
          'module' => 'views',
          'delta' => 'other_products-block',
          'region' => 'content',
          'weight' => '-98',
        ),
        'views-other_products-all_products' => array(
          'module' => 'views',
          'delta' => 'other_products-all_products',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('tfk store');
  $export['other_products'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'subscriptions';
  $context->description = '';
  $context->tag = 'tfk store';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'store/subscriptions' => 'store/subscriptions',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-store-pages-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-store-pages-menu',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('tfk store');
  $export['subscriptions'] = $context;

  return $export;
}
