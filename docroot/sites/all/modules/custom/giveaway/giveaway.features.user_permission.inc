<?php
/**
 * @file
 * giveaway.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function giveaway_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'clear key_giveaway_importer feeds'.
  $permissions['clear key_giveaway_importer feeds'] = array(
    'name' => 'clear key_giveaway_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'create giveaway content'.
  $permissions['create giveaway content'] = array(
    'name' => 'create giveaway content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any giveaway content'.
  $permissions['delete any giveaway content'] = array(
    'name' => 'delete any giveaway content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own giveaway content'.
  $permissions['delete own giveaway content'] = array(
    'name' => 'delete own giveaway content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any giveaway content'.
  $permissions['edit any giveaway content'] = array(
    'name' => 'edit any giveaway content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit data in table giveaway_keys'.
  $permissions['edit data in table giveaway_keys'] = array(
    'name' => 'edit data in table giveaway_keys',
    'roles' => array(),
    'module' => 'data_entity',
  );

  // Exported permission: 'edit own giveaway content'.
  $permissions['edit own giveaway content'] = array(
    'name' => 'edit own giveaway content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'import key_giveaway_importer feeds'.
  $permissions['import key_giveaway_importer feeds'] = array(
    'name' => 'import key_giveaway_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'set giveaway published on date'.
  $permissions['set giveaway published on date'] = array(
    'name' => 'set giveaway published on date',
    'roles' => array(),
    'module' => 'publication_date',
  );

  // Exported permission: 'unlock key_giveaway_importer feeds'.
  $permissions['unlock key_giveaway_importer feeds'] = array(
    'name' => 'unlock key_giveaway_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'view any unpublished giveaway content'.
  $permissions['view any unpublished giveaway content'] = array(
    'name' => 'view any unpublished giveaway content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
