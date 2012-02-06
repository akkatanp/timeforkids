<?php
/**
 * @file
 * tfk_teachers_community.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function tfk_teachers_community_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_teacher_community_question';
  $strongarm->value = 0;
  $export['comment_anonymous_teacher_community_question'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_teacher_community_question';
  $strongarm->value = 1;
  $export['comment_default_mode_teacher_community_question'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_teacher_community_question';
  $strongarm->value = '50';
  $export['comment_default_per_page_teacher_community_question'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_teacher_community_question';
  $strongarm->value = 1;
  $export['comment_form_location_teacher_community_question'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_teacher_community_question';
  $strongarm->value = '1';
  $export['comment_preview_teacher_community_question'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_teacher_community_question';
  $strongarm->value = 1;
  $export['comment_subject_field_teacher_community_question'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_teacher_community_question';
  $strongarm->value = '2';
  $export['comment_teacher_community_question'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_teacher_community_question';
  $strongarm->value = array();
  $export['node_options_teacher_community_question'] = $strongarm;

  return $export;
}
