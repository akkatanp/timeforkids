<?php
/**
 * @file
 * feature_kid_reporters_updated.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_kid_reporters_updated_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'active_kid_reporter_year';
  $strongarm->value = '2011-2012';
  $export['active_kid_reporter_year'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_kid_reporter';
  $strongarm->value = 0;
  $export['comment_anonymous_kid_reporter'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_kid_reporter';
  $strongarm->value = 1;
  $export['comment_default_mode_kid_reporter'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_kid_reporter';
  $strongarm->value = '50';
  $export['comment_default_per_page_kid_reporter'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_kid_reporter';
  $strongarm->value = 1;
  $export['comment_form_location_kid_reporter'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_kid_reporter';
  $strongarm->value = '1';
  $export['comment_kid_reporter'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_kid_reporter';
  $strongarm->value = '1';
  $export['comment_preview_kid_reporter'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_kid_reporter';
  $strongarm->value = 1;
  $export['comment_subject_field_kid_reporter'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_kid_reporter';
  $strongarm->value = array();
  $export['node_options_kid_reporter'] = $strongarm;

  return $export;
}
