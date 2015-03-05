<?php
/**
 * @file
 * mmorpg_site.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mmorpg_site_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
