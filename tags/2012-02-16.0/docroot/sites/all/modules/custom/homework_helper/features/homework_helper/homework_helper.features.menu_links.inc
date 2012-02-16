<?php
/**
 * @file
 * homework_helper.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function homework_helper_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-homework-help:homework-helper/writing-tips
  $menu_links['menu-homework-help:homework-helper/writing-tips'] = array(
    'menu_name' => 'menu-homework-help',
    'link_path' => 'homework-helper/writing-tips',
    'router_path' => 'homework-helper/writing-tips',
    'link_title' => 'Writing Tips',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Writing Tips');


  return $menu_links;
}
