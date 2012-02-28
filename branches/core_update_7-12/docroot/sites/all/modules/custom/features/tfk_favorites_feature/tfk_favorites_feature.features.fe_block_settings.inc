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

  // bartik
  $theme = array();

  $theme['tfk_favorites-tfk_favorites_links'] = array(
    'module' => 'tfk_favorites',
    'delta' => 'tfk_favorites_links',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $export['bartik'] = $theme;

  // seven
  $theme = array();

  $theme['tfk_favorites-tfk_favorites_links'] = array(
    'module' => 'tfk_favorites',
    'delta' => 'tfk_favorites_links',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $export['seven'] = $theme;

  // tfk
  $theme = array();

  $theme['tfk_favorites-tfk_favorites_links'] = array(
    'module' => 'tfk_favorites',
    'delta' => 'tfk_favorites_links',
    'theme' => 'tfk',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $export['tfk'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
