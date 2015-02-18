<?php
/**
 * @file
 * mmorpg_siteskins.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mmorpg_siteskins_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer background image'.
  $permissions['administer background image'] = array(
    'name' => 'administer background image',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bg_image',
  );

  // Exported permission: 'clone node'.
  $permissions['clone node'] = array(
    'name' => 'clone node',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'clone',
  );

  // Exported permission: 'clone own nodes'.
  $permissions['clone own nodes'] = array(
    'name' => 'clone own nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'clone',
  );

  // Exported permission: 'view all background images'.
  $permissions['view all background images'] = array(
    'name' => 'view all background images',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bg_image',
  );

  return $permissions;
}
