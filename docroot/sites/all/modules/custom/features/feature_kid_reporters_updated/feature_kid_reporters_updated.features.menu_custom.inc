<?php
/**
 * @file
 * feature_kid_reporters_updated.features.menu_custom.inc
 */

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function feature_kid_reporters_updated_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-kid-reporter-listings-link
  $menus['menu-kid-reporter-listings-link'] = array(
    'menu_name' => 'menu-kid-reporter-listings-link',
    'title' => 'Link to kid reporter listings',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Link to kid reporter listings');


  return $menus;
}
