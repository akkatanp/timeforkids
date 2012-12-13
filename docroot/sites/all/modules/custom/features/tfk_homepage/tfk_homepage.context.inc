<?php
/**
 * @file
 * tfk_homepage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tfk_homepage_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage_blocks_anon';
  $context->description = 'Homepage Blocks';
  $context->tag = 'homepage';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
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
        'views-homepage_top_story-block_2' => array(
          'module' => 'views',
          'delta' => 'homepage_top_story-block_2',
          'region' => 'content',
          'weight' => '-93',
        ),
        'views-homepage_minisite-block_2' => array(
          'module' => 'views',
          'delta' => 'homepage_minisite-block_2',
          'region' => 'content',
          'weight' => '-92',
        ),
        'views-87292ca88f5f6512230be6a9f15f64e4' => array(
          'module' => 'views',
          'delta' => '87292ca88f5f6512230be6a9f15f64e4',
          'region' => 'content',
          'weight' => '-91',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Homepage Blocks');
  t('homepage');
  $export['homepage_blocks_anon'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage_for_editors';
  $context->description = 'Homepage Draggable Views For Editors';
  $context->tag = 'homepage';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
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
        'tfk_notification-tfk-notification-message' => array(
          'module' => 'tfk_notification',
          'delta' => 'tfk-notification-message',
          'region' => 'content',
          'weight' => '-79',
        ),
        'views-homepage_top_story-block_1' => array(
          'module' => 'views',
          'delta' => 'homepage_top_story-block_1',
          'region' => 'content',
          'weight' => '-78',
        ),
        'views-homepage_minisite-block_1' => array(
          'module' => 'views',
          'delta' => 'homepage_minisite-block_1',
          'region' => 'content',
          'weight' => '-77',
        ),
        'views-homepage_news_block-block_1' => array(
          'module' => 'views',
          'delta' => 'homepage_news_block-block_1',
          'region' => 'content',
          'weight' => '-76',
        ),
        'views-d9ecdac86a36421c8c519cb6d2d4b832' => array(
          'module' => 'views',
          'delta' => 'd9ecdac86a36421c8c519cb6d2d4b832',
          'region' => 'content',
          'weight' => '-74',
        ),
        'views-c961244a5f53171ccbd67c925912616e' => array(
          'module' => 'views',
          'delta' => 'c961244a5f53171ccbd67c925912616e',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Homepage Draggable Views For Editors');
  t('homepage');
  $export['homepage_for_editors'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage_for_teachers';
  $context->description = 'Homepage Draggable Views For Editors';
  $context->tag = 'homepage';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
    'user' => array(
      'values' => array(
        'Board Member' => 'Board Member',
        'teacher' => 'teacher',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'tfk_notification-tfk-notification-message' => array(
          'module' => 'tfk_notification',
          'delta' => 'tfk-notification-message',
          'region' => 'content',
          'weight' => '-79',
        ),
        'views-homepage_top_story-block_1' => array(
          'module' => 'views',
          'delta' => 'homepage_top_story-block_1',
          'region' => 'content',
          'weight' => '-78',
        ),
        'views-homepage_minisite-block_1' => array(
          'module' => 'views',
          'delta' => 'homepage_minisite-block_1',
          'region' => 'content',
          'weight' => '-77',
        ),
        'views-homepage_news_block-block_1' => array(
          'module' => 'views',
          'delta' => 'homepage_news_block-block_1',
          'region' => 'content',
          'weight' => '-76',
        ),
        'views-d9ecdac86a36421c8c519cb6d2d4b832' => array(
          'module' => 'views',
          'delta' => 'd9ecdac86a36421c8c519cb6d2d4b832',
          'region' => 'content',
          'weight' => '-74',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Homepage Draggable Views For Editors');
  t('homepage');
  $export['homepage_for_teachers'] = $context;

  return $export;
}
