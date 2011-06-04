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

  return $export;
}
