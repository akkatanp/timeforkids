<?php
/**
 * @file
 * time_for_kids.features.menu_links.inc
 */

/**
 * Implementation of hook_menu_default_menu_links().
 */
function time_for_kids_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: main-menu:articles
  $menu_links['main-menu:articles'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'articles',
    'router_path' => 'articles',
    'link_title' => 'Articles',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: main-menu:destinations
  $menu_links['main-menu:destinations'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'destinations',
    'router_path' => 'destinations',
    'link_title' => 'Destinatinos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: main-menu:homework
  $menu_links['main-menu:homework'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'homework',
    'router_path' => 'homework',
    'link_title' => 'Homework',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-kids:articles
  $menu_links['menu-kids:articles'] = array(
    'menu_name' => 'menu-kids',
    'link_path' => 'articles',
    'router_path' => 'articles',
    'link_title' => 'Articles',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-kids:destinations
  $menu_links['menu-kids:destinations'] = array(
    'menu_name' => 'menu-kids',
    'link_path' => 'destinations',
    'router_path' => 'destinations',
    'link_title' => 'Destinations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '0',
  );
  // Exported menu link: menu-kids:node/4
  $menu_links['menu-kids:node/4'] = array(
    'menu_name' => 'menu-kids',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'China',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'destinations',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Articles');
  t('China');
  t('Destinatinos');
  t('Destinations');
  t('Home');
  t('Homework');


  return $menu_links;
}
