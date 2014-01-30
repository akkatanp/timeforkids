<?php
/**
 * @file
 * feature_board_members.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function feature_board_members_user_default_roles() {
  $roles = array();

  // Exported role: Board Member.
  $roles['Board Member'] = array(
    'name' => 'Board Member',
    'weight' => '5',
  );

  return $roles;
}
