<?php
/**
 * @file
 * tfk_worksheets.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function tfk_worksheets_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_worksheet';
  $strongarm->value = 0;
  $export['comment_anonymous_worksheet'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_worksheet';
  $strongarm->value = 1;
  $export['comment_default_mode_worksheet'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_worksheet';
  $strongarm->value = '50';
  $export['comment_default_per_page_worksheet'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_worksheet';
  $strongarm->value = 1;
  $export['comment_form_location_worksheet'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_worksheet';
  $strongarm->value = '1';
  $export['comment_preview_worksheet'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_worksheet';
  $strongarm->value = 1;
  $export['comment_subject_field_worksheet'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_worksheet';
  $strongarm->value = '1';
  $export['comment_worksheet'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_worksheet';
  $strongarm->value = array();
  $export['node_options_worksheet'] = $strongarm;

  return $export;
}
