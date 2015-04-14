<?php
/**
 * @file
 * mmorpg_signup_now.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mmorpg_signup_now_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'bypass country restriction'.
  $permissions['bypass country restriction'] = array(
    'name' => 'bypass country restriction',
    'roles' => array(),
    'module' => 'country_specific_nodes',
  );

  // Exported permission: 'create play_now_promoted_game content'.
  $permissions['create play_now_promoted_game content'] = array(
    'name' => 'create play_now_promoted_game content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create promoted_signup_now_link content'.
  $permissions['create promoted_signup_now_link content'] = array(
    'name' => 'create promoted_signup_now_link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create signup_now_link content'.
  $permissions['create signup_now_link content'] = array(
    'name' => 'create signup_now_link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any play_now_promoted_game content'.
  $permissions['delete any play_now_promoted_game content'] = array(
    'name' => 'delete any play_now_promoted_game content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any promoted_signup_now_link content'.
  $permissions['delete any promoted_signup_now_link content'] = array(
    'name' => 'delete any promoted_signup_now_link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any signup_now_link content'.
  $permissions['delete any signup_now_link content'] = array(
    'name' => 'delete any signup_now_link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own play_now_promoted_game content'.
  $permissions['delete own play_now_promoted_game content'] = array(
    'name' => 'delete own play_now_promoted_game content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own promoted_signup_now_link content'.
  $permissions['delete own promoted_signup_now_link content'] = array(
    'name' => 'delete own promoted_signup_now_link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own signup_now_link content'.
  $permissions['delete own signup_now_link content'] = array(
    'name' => 'delete own signup_now_link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any play_now_promoted_game content'.
  $permissions['edit any play_now_promoted_game content'] = array(
    'name' => 'edit any play_now_promoted_game content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any promoted_signup_now_link content'.
  $permissions['edit any promoted_signup_now_link content'] = array(
    'name' => 'edit any promoted_signup_now_link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any signup_now_link content'.
  $permissions['edit any signup_now_link content'] = array(
    'name' => 'edit any signup_now_link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own play_now_promoted_game content'.
  $permissions['edit own play_now_promoted_game content'] = array(
    'name' => 'edit own play_now_promoted_game content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own promoted_signup_now_link content'.
  $permissions['edit own promoted_signup_now_link content'] = array(
    'name' => 'edit own promoted_signup_now_link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own signup_now_link content'.
  $permissions['edit own signup_now_link content'] = array(
    'name' => 'edit own signup_now_link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'set play_now_promoted_game published on date'.
  $permissions['set play_now_promoted_game published on date'] = array(
    'name' => 'set play_now_promoted_game published on date',
    'roles' => array(),
    'module' => 'publication_date',
  );

  // Exported permission: 'set promoted_signup_now_link published on date'.
  $permissions['set promoted_signup_now_link published on date'] = array(
    'name' => 'set promoted_signup_now_link published on date',
    'roles' => array(),
    'module' => 'publication_date',
  );

  // Exported permission: 'set signup_now_link published on date'.
  $permissions['set signup_now_link published on date'] = array(
    'name' => 'set signup_now_link published on date',
    'roles' => array(),
    'module' => 'publication_date',
  );

  // Exported permission: 'view any unpublished play_now_promoted_game content'.
  $permissions['view any unpublished play_now_promoted_game content'] = array(
    'name' => 'view any unpublished play_now_promoted_game content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished promoted_signup_now_link content'.
  $permissions['view any unpublished promoted_signup_now_link content'] = array(
    'name' => 'view any unpublished promoted_signup_now_link content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished signup_now_link content'.
  $permissions['view any unpublished signup_now_link content'] = array(
    'name' => 'view any unpublished signup_now_link content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
