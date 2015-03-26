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

  // Exported permission: 'create promoted_signup_now_link content'.
  $permissions['create promoted_signup_now_link content'] = array(
    'name' => 'create promoted_signup_now_link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any promoted_signup_now_link content'.
  $permissions['delete any promoted_signup_now_link content'] = array(
    'name' => 'delete any promoted_signup_now_link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own promoted_signup_now_link content'.
  $permissions['delete own promoted_signup_now_link content'] = array(
    'name' => 'delete own promoted_signup_now_link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any promoted_signup_now_link content'.
  $permissions['edit any promoted_signup_now_link content'] = array(
    'name' => 'edit any promoted_signup_now_link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own promoted_signup_now_link content'.
  $permissions['edit own promoted_signup_now_link content'] = array(
    'name' => 'edit own promoted_signup_now_link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'set promoted_signup_now_link published on date'.
  $permissions['set promoted_signup_now_link published on date'] = array(
    'name' => 'set promoted_signup_now_link published on date',
    'roles' => array(),
    'module' => 'publication_date',
  );

  // Exported permission: 'view any unpublished promoted_signup_now_link content'.
  $permissions['view any unpublished promoted_signup_now_link content'] = array(
    'name' => 'view any unpublished promoted_signup_now_link content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
