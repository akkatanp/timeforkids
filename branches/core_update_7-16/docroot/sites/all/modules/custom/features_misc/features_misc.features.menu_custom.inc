<?php
/**
 * @file
 * features_misc.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function features_misc_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-info-pages-menu
  $menus['menu-info-pages-menu'] = array(
    'menu_name' => 'menu-info-pages-menu',
    'title' => 'Info Pages Menu',
    'description' => 'Info Pages Menu',
  );
  // Exported menu: menu-tfk-footer-primary
  $menus['menu-tfk-footer-primary'] = array(
    'menu_name' => 'menu-tfk-footer-primary',
    'title' => 'TFK Footer Primary',
    'description' => 'Footer Navigation - First Line',
  );
  // Exported menu: menu-tfk-footer-secondary
  $menus['menu-tfk-footer-secondary'] = array(
    'menu_name' => 'menu-tfk-footer-secondary',
    'title' => 'TFK Footer Secondary',
    'description' => 'Footer Navigation - Second Line',
  );
  // Exported menu: menu-tfk-footer-tertiary
  $menus['menu-tfk-footer-tertiary'] = array(
    'menu_name' => 'menu-tfk-footer-tertiary',
    'title' => 'TFK Footer Tertiary',
    'description' => 'Footer Navigation - Third Line',
  );
  // Exported menu: menu-tfk-global-navigation
  $menus['menu-tfk-global-navigation'] = array(
    'menu_name' => 'menu-tfk-global-navigation',
    'title' => 'TFK Global Navigation',
    'description' => 'This is the TFK global navigation menu.',
  );
  // Exported menu: menu-tfk-teachers-menu
  $menus['menu-tfk-teachers-menu'] = array(
    'menu_name' => 'menu-tfk-teachers-menu',
    'title' => 'TFK Teachers Menu',
    'description' => 'This is the sub-navigation menu that only authenticated teachers will see. ',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer Navigation - First Line');
  t('Footer Navigation - Second Line');
  t('Footer Navigation - Third Line');
  t('Info Pages Menu');
  t('TFK Footer Primary');
  t('TFK Footer Secondary');
  t('TFK Footer Tertiary');
  t('TFK Global Navigation');
  t('TFK Teachers Menu');
  t('This is the TFK global navigation menu.');
  t('This is the sub-navigation menu that only authenticated teachers will see. ');


  return $menus;
}
