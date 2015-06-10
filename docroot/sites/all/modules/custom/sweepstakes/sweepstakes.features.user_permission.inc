<?php
/**
 * @file
 * sweepstakes.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function sweepstakes_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create sweepstake content'.
  $permissions['create sweepstake content'] = array(
    'name' => 'create sweepstake content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any sweepstake content'.
  $permissions['delete any sweepstake content'] = array(
    'name' => 'delete any sweepstake content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own sweepstake content'.
  $permissions['delete own sweepstake content'] = array(
    'name' => 'delete own sweepstake content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any sweepstake content'.
  $permissions['edit any sweepstake content'] = array(
    'name' => 'edit any sweepstake content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit data in table sweepstakes_entries'.
  $permissions['edit data in table sweepstakes_entries'] = array(
    'name' => 'edit data in table sweepstakes_entries',
    'roles' => array(),
    'module' => 'data_entity',
  );

  // Exported permission: 'edit own sweepstake content'.
  $permissions['edit own sweepstake content'] = array(
    'name' => 'edit own sweepstake content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'set sweepstake published on date'.
  $permissions['set sweepstake published on date'] = array(
    'name' => 'set sweepstake published on date',
    'roles' => array(),
    'module' => 'publication_date',
  );

  // Exported permission: 'view any unpublished sweepstake content'.
  $permissions['view any unpublished sweepstake content'] = array(
    'name' => 'view any unpublished sweepstake content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
