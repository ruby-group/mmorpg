<?php
/**
 * @file
 * demo.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function demo_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'bypass country restriction'.
  $permissions['bypass country restriction'] = array(
    'name' => 'bypass country restriction',
    'roles' => array(
      'subadmin' => 'subadmin',
    ),
    'module' => 'country_specific_nodes',
  );

  return $permissions;
}
