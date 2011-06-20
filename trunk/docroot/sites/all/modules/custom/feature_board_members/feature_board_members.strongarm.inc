<?php
/**
 * @file
 * feature_board_members.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function feature_board_members_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_board_member';
  $strongarm->value = 0;
  $export['comment_anonymous_board_member'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_board_member';
  $strongarm->value = '1';
  $export['comment_board_member'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_board_member';
  $strongarm->value = 1;
  $export['comment_default_mode_board_member'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_board_member';
  $strongarm->value = '50';
  $export['comment_default_per_page_board_member'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_board_member';
  $strongarm->value = 1;
  $export['comment_form_location_board_member'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_board_member';
  $strongarm->value = '1';
  $export['comment_preview_board_member'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_board_member';
  $strongarm->value = 1;
  $export['comment_subject_field_board_member'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_board_member';
  $strongarm->value = array();
  $export['node_options_board_member'] = $strongarm;

  return $export;
}
