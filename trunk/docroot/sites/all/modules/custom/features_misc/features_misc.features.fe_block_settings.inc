<?php
/**
 * @file
 * features_misc.features.fe_block_settings.inc
 */

/**
 * Implementation of hook_default_fe_block_settings().
 */
function features_misc_default_fe_block_settings() {
  $export = array();

  // bartik
  $theme = array();

  $theme['block-global_right_sidebar_ad'] = array(
    'module' => 'block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'machine_name' => 'global_right_sidebar_ad',
  );

  $theme['menu-menu-tfk-footer-primary'] = array(
    'module' => 'menu',
    'delta' => 'menu-tfk-footer-primary',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-tfk-footer-secondary'] = array(
    'module' => 'menu',
    'delta' => 'menu-tfk-footer-secondary',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-tfk-global-navigation'] = array(
    'module' => 'menu',
    'delta' => 'menu-tfk-global-navigation',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-tfk-teachers-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-tfk-teachers-menu',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $export['bartik'] = $theme;

  // seven
  $theme = array();

  $theme['block-global_right_sidebar_ad'] = array(
    'module' => 'block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'machine_name' => 'global_right_sidebar_ad',
  );

  $theme['menu-menu-tfk-footer-primary'] = array(
    'module' => 'menu',
    'delta' => 'menu-tfk-footer-primary',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-tfk-footer-secondary'] = array(
    'module' => 'menu',
    'delta' => 'menu-tfk-footer-secondary',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-tfk-global-navigation'] = array(
    'module' => 'menu',
    'delta' => 'menu-tfk-global-navigation',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-tfk-teachers-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-tfk-teachers-menu',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $export['seven'] = $theme;

  // tfk
  $theme = array();

  $theme['block-global_right_sidebar_ad'] = array(
    'module' => 'block',
    'theme' => 'tfk',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'machine_name' => 'global_right_sidebar_ad',
  );

  $theme['menu-menu-tfk-footer-primary'] = array(
    'module' => 'menu',
    'delta' => 'menu-tfk-footer-primary',
    'theme' => 'tfk',
    'status' => 0,
    'weight' => '-3',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-tfk-footer-secondary'] = array(
    'module' => 'menu',
    'delta' => 'menu-tfk-footer-secondary',
    'theme' => 'tfk',
    'status' => 0,
    'weight' => '-2',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-tfk-global-navigation'] = array(
    'module' => 'menu',
    'delta' => 'menu-tfk-global-navigation',
    'theme' => 'tfk',
    'status' => 0,
    'weight' => '-1',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-tfk-teachers-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-tfk-teachers-menu',
    'theme' => 'tfk',
    'status' => 0,
    'weight' => '2',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
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
