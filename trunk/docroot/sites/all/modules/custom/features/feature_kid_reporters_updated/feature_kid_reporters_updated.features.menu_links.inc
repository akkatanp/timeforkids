<?php
/**
 * @file
 * feature_kid_reporters_updated.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_kid_reporters_updated_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-kid-reporter-articles-link:kid-reporters
  $menu_links['menu-kid-reporter-articles-link:kid-reporters'] = array(
    'menu_name' => 'menu-kid-reporter-articles-link',
    'link_path' => 'kid-reporters',
    'router_path' => 'kid-reporters',
    'link_title' => 'Back to kid reporter articles',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Back to kid reporter articles');


  return $menu_links;
}
