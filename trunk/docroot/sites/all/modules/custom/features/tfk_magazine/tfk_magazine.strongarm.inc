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

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_magazine_issue';
  $strongarm->value = 0;
  $export['comment_anonymous_magazine_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_magazine_issue';
  $strongarm->value = 1;
  $export['comment_default_mode_magazine_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_magazine_issue';
  $strongarm->value = '50';
  $export['comment_default_per_page_magazine_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_magazine_issue';
  $strongarm->value = 1;
  $export['comment_form_location_magazine_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_magazine_issue';
  $strongarm->value = '1';
  $export['comment_magazine_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_magazine_issue';
  $strongarm->value = '1';
  $export['comment_preview_magazine_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_magazine_issue';
  $strongarm->value = 1;
  $export['comment_subject_field_magazine_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__magazine_issue';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'redirect' => array(
          'weight' => '20',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__magazine_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_magazine_issue';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_magazine_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_magazine_issue';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_magazine_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_magazine_issue';
  $strongarm->value = array();
  $export['node_options_magazine_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_magazine_issue';
  $strongarm->value = '1';
  $export['node_preview_magazine_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_magazine_issue';
  $strongarm->value = 0;
  $export['node_submitted_magazine_issue'] = $strongarm;

  return $export;
}
