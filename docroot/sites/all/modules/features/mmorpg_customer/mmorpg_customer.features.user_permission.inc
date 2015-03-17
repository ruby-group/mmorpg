<?php
/**
 * @file
 * mmorpg_customer.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mmorpg_customer_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create customer content'.
  $permissions['create customer content'] = array(
    'name' => 'create customer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any customer content'.
  $permissions['delete any customer content'] = array(
    'name' => 'delete any customer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own customer content'.
  $permissions['delete own customer content'] = array(
    'name' => 'delete own customer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any customer content'.
  $permissions['edit any customer content'] = array(
    'name' => 'edit any customer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own customer content'.
  $permissions['edit own customer content'] = array(
    'name' => 'edit own customer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'view any unpublished customer content'.
  $permissions['view any unpublished customer content'] = array(
    'name' => 'view any unpublished customer content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
