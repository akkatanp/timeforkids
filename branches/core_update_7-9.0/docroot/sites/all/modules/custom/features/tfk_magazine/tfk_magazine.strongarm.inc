<?php
/**
 * @file
 * tfk_magazine.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function tfk_magazine_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_magazine_issue';
  $strongarm->value = 0;
  $export['comment_anonymous_magazine_issue'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_magazine_issue';
  $strongarm->value = 1;
  $export['comment_default_mode_magazine_issue'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_magazine_issue';
  $strongarm->value = '50';
  $export['comment_default_per_page_magazine_issue'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_magazine_issue';
  $strongarm->value = 1;
  $export['comment_form_location_magazine_issue'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_magazine_issue';
  $strongarm->value = '1';
  $export['comment_magazine_issue'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_magazine_issue';
  $strongarm->value = '1';
  $export['comment_preview_magazine_issue'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_magazine_issue';
  $strongarm->value = 1;
  $export['comment_subject_field_magazine_issue'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_magazine_issue';
  $strongarm->value = array();
  $export['node_options_magazine_issue'] = $strongarm;

  return $export;
}
