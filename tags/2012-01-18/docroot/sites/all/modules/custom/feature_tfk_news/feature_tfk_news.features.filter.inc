<?php
/**
 * @file
 * feature_tfk_news.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function feature_tfk_news_filter_default_formats() {
  $formats = array();

  // Exported format: Full HTML
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => '1',
    'status' => '1',
    'weight' => '-10',
    'filters' => array(
      'media_filter' => array(
        'weight' => '-50',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => '-47',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Plain text
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => '1',
    'status' => '1',
    'weight' => '-9',
    'filters' => array(
      'wordfilter' => array(
        'weight' => '-50',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_html_escape' => array(
        'weight' => '-49',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => '-47',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '-45',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
