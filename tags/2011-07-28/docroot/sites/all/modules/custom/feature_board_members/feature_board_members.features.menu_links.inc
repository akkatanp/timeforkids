<?php
/**
 * @file
 * feature_board_members.features.menu_links.inc
 */

/**
 * Implementation of hook_menu_default_menu_links().
 */
function feature_board_members_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-link-to-board-members:teacher-board-members
  $menu_links['menu-link-to-board-members:teacher-board-members'] = array(
    'menu_name' => 'menu-link-to-board-members',
    'link_path' => 'teacher-board-members',
    'router_path' => 'teacher-board-members',
    'link_title' => 'Back to the teachers board',
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
  t('Back to the teachers board');


  return $menu_links;
}
