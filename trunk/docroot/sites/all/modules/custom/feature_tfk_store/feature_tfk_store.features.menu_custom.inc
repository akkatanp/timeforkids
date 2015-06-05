<?php
/**
 * @file
 * feature_tfk_store.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function feature_tfk_store_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-store-pages-menu.
  $menus['menu-store-pages-menu'] = array(
    'menu_name' => 'menu-store-pages-menu',
    'title' => 'Store Pages Menu',
    'description' => 'Links within the TFK Store',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Links within the TFK Store');
  t('Store Pages Menu');


  return $menus;
}
