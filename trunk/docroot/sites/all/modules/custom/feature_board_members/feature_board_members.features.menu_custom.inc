<?php
/**
 * @file
 * feature_board_members.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function feature_board_members_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-link-to-board-members
  $menus['menu-link-to-board-members'] = array(
    'menu_name' => 'menu-link-to-board-members',
    'title' => 'Link to board members landing page',
    'description' => 'Links to /teacher-board-members, used on board member profile pages',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Link to board members landing page');
  t('Links to /teacher-board-members, used on board member profile pages');


  return $menus;
}
