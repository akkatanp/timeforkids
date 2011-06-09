<?php
/**
 * @file
 * feature_slideshow.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function feature_slideshow_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_facetstyle';
  $strongarm->value = 'checkboxes';
  $export['apachesolr_facetstyle'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_type_filter';
  $strongarm->value = array(
    'apachesolr_search' => array(
      'im_36_field_themes' => 0,
      'im_10_field_article_category' => 0,
    ),
  );
  $export['apachesolr_type_filter'] = $strongarm;

  return $export;
}
