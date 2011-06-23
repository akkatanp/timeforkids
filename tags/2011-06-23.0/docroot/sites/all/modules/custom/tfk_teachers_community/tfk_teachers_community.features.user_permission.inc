<?php
/**
 * @file
 * tfk_teachers_community.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function tfk_teachers_community_user_default_permissions() {
  $permissions = array();

  // Exported permission: edit question description
  $permissions['edit question description'] = array(
    'name' => 'edit question description',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'tfk_teachers_community',
  );

  // Exported permission: upload comment avatar
  $permissions['upload comment avatar'] = array(
    'name' => 'upload comment avatar',
    'roles' => array(
      0 => 'Board Member',
      1 => 'administrator',
      2 => 'editor',
    ),
    'module' => 'tfk_teachers_community',
  );

  return $permissions;
}
