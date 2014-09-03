<?php
/**
 * @file
 * features_misc.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function features_misc_filter_default_formats() {
  $formats = array();

  // Exported format: textfield.
  $formats['text_field'] = array(
    'format' => 'text_field',
    'name' => 'textfield',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'media_filter' => array(
        'weight' => '-46',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => '-45',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
