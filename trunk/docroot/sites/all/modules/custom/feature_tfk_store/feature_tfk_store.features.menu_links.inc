<?php
/**
 * @file
 * feature_tfk_store.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_tfk_store_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-store-pages-menu:store/books
  $menu_links['menu-store-pages-menu:store/books'] = array(
    'menu_name' => 'menu-store-pages-menu',
    'link_path' => 'store/books',
    'router_path' => 'store',
    'link_title' => 'Books',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-store-pages-menu:store/products
  $menu_links['menu-store-pages-menu:store/products'] = array(
    'menu_name' => 'menu-store-pages-menu',
    'link_path' => 'store/products',
    'router_path' => 'store',
    'link_title' => 'Other Products',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Books');
  t('Other Products');


  return $menu_links;
}
