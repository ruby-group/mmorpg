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

  // Exported permission: 'create siteskin content'.
  $permissions['create siteskin content'] = array(
    'name' => 'create siteskin content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any siteskin content'.
  $permissions['delete any siteskin content'] = array(
    'name' => 'delete any siteskin content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own siteskin content'.
  $permissions['delete own siteskin content'] = array(
    'name' => 'delete own siteskin content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any siteskin content'.
  $permissions['edit any siteskin content'] = array(
    'name' => 'edit any siteskin content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own siteskin content'.
  $permissions['edit own siteskin content'] = array(
    'name' => 'edit own siteskin content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view all background images'.
  $permissions['view all background images'] = array(
    'name' => 'view all background images',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bg_image',
  );

  // Exported permission: 'view any unpublished siteskin content'.
  $permissions['view any unpublished siteskin content'] = array(
    'name' => 'view any unpublished siteskin content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
