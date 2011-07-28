<?php
/**
 * @file
 * feature_tfk_kid_reporters.features.menu_links.inc
 */

/**
 * Implementation of hook_menu_default_menu_links().
 */
function feature_tfk_kid_reporters_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-kid-reporter-articles-link:<front>
  $menu_links['menu-kid-reporter-articles-link:<front>'] = array(
    'menu_name' => 'menu-kid-reporter-articles-link',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Link to kid reporter articles',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'link-to-kid-articles',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-kid-reporter-listings-link:tfk-kid-reporters
  $menu_links['menu-kid-reporter-listings-link:tfk-kid-reporters'] = array(
    'menu_name' => 'menu-kid-reporter-listings-link',
    'link_path' => 'tfk-kid-reporters',
    'router_path' => 'tfk-kid-reporters',
    'link_title' => 'Back to kid reporters listing page',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'kid-reporters-link',
        ),
      ),
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
  t('Back to kid reporters listing page');
  t('Link to kid reporter articles');


  return $menu_links;
}
