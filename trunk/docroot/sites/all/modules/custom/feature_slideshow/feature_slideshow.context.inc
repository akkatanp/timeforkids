<?php
/**
 * @file
 * feature_slideshow.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function feature_slideshow_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'TFK Photos and Video';
  $context->description = 'Left-rail facet placement for PV section.';
  $context->tag = 'TFK';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'photos-video' => 'photos-video',
        'photos-video/*' => 'photos-video/*',
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
          'weight' => '-44',
        ),
        'apachesolr_search-im_10_field_article_category' => array(
          'module' => 'apachesolr_search',
          'delta' => 'im_10_field_article_category',
          'region' => 'sidebar_first',
          'weight' => '-43',
        ),
        'apachesolr_search-im_36_field_themes' => array(
          'module' => 'apachesolr_search',
          'delta' => 'im_36_field_themes',
          'region' => 'sidebar_first',
          'weight' => '-42',
        ),
        'apachesolr_search-currentsearch' => array(
          'module' => 'apachesolr_search',
          'delta' => 'currentsearch',
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
  t('TFK');
  $export['TFK Photos and Video'] = $context;

  return $export;
}
