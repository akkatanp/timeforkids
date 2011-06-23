<?php
/**
 * @file
 * tfk_photos_video.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function tfk_photos_video_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'TFK Photos and Video';
  $context->description = 'Left-rail facet placement for PV section.';
  $context->tag = 'TFK Photos and Video';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'photos-video' => 'photos-video',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'tfk_search-tfk_search_photos_video_title' => array(
          'module' => 'tfk_search',
          'delta' => 'tfk_search_photos_video_title',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'apachesolr_search-im_10_field_article_category' => array(
          'module' => 'apachesolr_search',
          'delta' => 'im_10_field_article_category',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'apachesolr_search-im_36_field_themes' => array(
          'module' => 'apachesolr_search',
          'delta' => 'im_36_field_themes',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'tfk_search-tfk_search_photos_video_featured' => array(
          'module' => 'tfk_search',
          'delta' => 'tfk_search_photos_video_featured',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Left-rail facet placement for PV section.');
  t('TFK Photos and Video');
  $export['TFK Photos and Video'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'TFK Photos and Video - Slideshow';
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
        'tfk_helper-tfk_helper_slideshow' => array(
          'module' => 'tfk_helper',
          'delta' => 'tfk_helper_slideshow',
          'region' => 'content',
          'weight' => '-48',
        ),
        'tfk_helper-more_items_block' => array(
          'module' => 'tfk_helper',
          'delta' => 'more_items_block',
          'region' => 'content',
          'weight' => '-46',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Slideshow block for regular slideshow pages, Featured sidebar and back to all link.');
  t('TFK Photos and Video');
  $export['TFK Photos and Video - Slideshow'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'TFK Photos and Video - Video';
  $context->description = '';
  $context->tag = 'TFK Photos and Video';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'photos-video/video' => 'photos-video/video',
        'photos-video/video/*' => 'photos-video/video/*',
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
          'weight' => '-58',
        ),
        'tfk_helper-featured_block_sidebar_slideshow' => array(
          'module' => 'tfk_helper',
          'delta' => 'featured_block_sidebar_slideshow',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'tfk_helper-more_items_block' => array(
          'module' => 'tfk_helper',
          'delta' => 'more_items_block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('TFK Photos and Video');
  $export['TFK Photos and Video - Video'] = $context;

  return $export;
}
