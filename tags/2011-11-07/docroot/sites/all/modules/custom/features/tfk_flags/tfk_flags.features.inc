<?php
/**
 * @file
 * tfk_flags.features.inc
 */

/**
 * Implementation of hook_flag_default_flags().
 */
function tfk_flags_flag_default_flags() {
  $flags = array();
  // Exported flag: "Spanish translation".
  $flags['spanish'] = array(
    'content_type' => 'node',
    'title' => 'Spanish translation',
    'global' => '1',
    'types' => array(
      0 => 'article',
      1 => 'pdf_quiz',
      2 => 'worksheet',
    ),
    'flag_short' => 'Spanish translation',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Spanish translation',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '3',
        1 => '4',
      ),
      'unflag' => array(
        0 => '3',
        1 => '4',
      ),
    ),
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'tfk_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;
}
