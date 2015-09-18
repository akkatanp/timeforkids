<?php
/**
 * @file
 * tfk_favorites_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function tfk_favorites_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['tfk_favorites-tfk_favorites_links'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'delta' => 'tfk_favorites_links',
    'module' => 'tfk_favorites',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
      'tfk' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tfk',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  return $export;
}
