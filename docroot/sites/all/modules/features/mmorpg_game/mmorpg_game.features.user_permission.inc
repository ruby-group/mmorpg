<?php
/**
 * @file
 * mmorpg_game.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mmorpg_game_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create game content'.
  $permissions['create game content'] = array(
    'name' => 'create game content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any game content'.
  $permissions['delete any game content'] = array(
    'name' => 'delete any game content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own game content'.
  $permissions['delete own game content'] = array(
    'name' => 'delete own game content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any game content'.
  $permissions['edit any game content'] = array(
    'name' => 'edit any game content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own game content'.
  $permissions['edit own game content'] = array(
    'name' => 'edit own game content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'set game published on date'.
  $permissions['set game published on date'] = array(
    'name' => 'set game published on date',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publication_date',
  );

  return $permissions;
}
