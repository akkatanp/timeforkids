<?php
/**
 * @file
 * features_misc.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function features_misc_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_global_right_sidebar_promo';
  $strongarm->value = 0;
  $export['comment_anonymous_global_right_sidebar_promo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_global_right_sidebar_promo';
  $strongarm->value = 1;
  $export['comment_default_mode_global_right_sidebar_promo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_global_right_sidebar_promo';
  $strongarm->value = '50';
  $export['comment_default_per_page_global_right_sidebar_promo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_global_right_sidebar_promo';
  $strongarm->value = 1;
  $export['comment_form_location_global_right_sidebar_promo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_global_right_sidebar_promo';
  $strongarm->value = '1';
  $export['comment_global_right_sidebar_promo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_global_right_sidebar_promo';
  $strongarm->value = '1';
  $export['comment_preview_global_right_sidebar_promo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_global_right_sidebar_promo';
  $strongarm->value = 1;
  $export['comment_subject_field_global_right_sidebar_promo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_global_right_sidebar_promo';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_global_right_sidebar_promo'] = $strongarm;

  return $export;
}
