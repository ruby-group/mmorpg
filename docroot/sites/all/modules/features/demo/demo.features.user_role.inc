<?php
/**
 * @file
 * demo.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function demo_user_default_roles() {
  $roles = array();

  // Exported role: subadmin.
  $roles['subadmin'] = array(
    'name' => 'subadmin',
    'weight' => 11,
  );

  return $roles;
}
