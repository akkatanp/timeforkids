<?php
/**
 * @file
 * homework_helper.features.menu_custom.inc
 */

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function homework_helper_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-homework-help
  $menus['menu-homework-help'] = array(
    'menu_name' => 'menu-homework-help',
    'title' => 'Homework Helper',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Homework Helper');


  return $menus;
}
