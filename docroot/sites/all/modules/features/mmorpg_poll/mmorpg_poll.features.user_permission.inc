<?php
/**
 * @file
 * mmorpg_poll.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mmorpg_poll_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'view pollim polls'.
  $permissions['view pollim polls'] = array(
    'name' => 'view pollim polls',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'pollim',
  );

  // Exported permission: 'vote pollim polls'.
  $permissions['vote pollim polls'] = array(
    'name' => 'vote pollim polls',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'pollim',
  );

  return $permissions;
}
