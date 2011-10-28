<?php
/**
 * @file
 * tfk_quizzes.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function tfk_quizzes_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_pdf_quiz';
  $strongarm->value = 0;
  $export['comment_anonymous_pdf_quiz'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_pdf_quiz';
  $strongarm->value = 1;
  $export['comment_default_mode_pdf_quiz'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_pdf_quiz';
  $strongarm->value = '50';
  $export['comment_default_per_page_pdf_quiz'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_pdf_quiz';
  $strongarm->value = 1;
  $export['comment_form_location_pdf_quiz'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_pdf_quiz';
  $strongarm->value = '1';
  $export['comment_pdf_quiz'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_pdf_quiz';
  $strongarm->value = '1';
  $export['comment_preview_pdf_quiz'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_pdf_quiz';
  $strongarm->value = 1;
  $export['comment_subject_field_pdf_quiz'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_pdf_quiz';
  $strongarm->value = array();
  $export['node_options_pdf_quiz'] = $strongarm;

  return $export;
}
