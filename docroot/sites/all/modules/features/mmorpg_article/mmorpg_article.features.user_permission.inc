<?php
/**
 * @file
 * mmorpg_article.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mmorpg_article_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create mmorpg_article content'.
  $permissions['create mmorpg_article content'] = array(
    'name' => 'create mmorpg_article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any mmorpg_article content'.
  $permissions['delete any mmorpg_article content'] = array(
    'name' => 'delete any mmorpg_article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own mmorpg_article content'.
  $permissions['delete own mmorpg_article content'] = array(
    'name' => 'delete own mmorpg_article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any mmorpg_article content'.
  $permissions['edit any mmorpg_article content'] = array(
    'name' => 'edit any mmorpg_article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own mmorpg_article content'.
  $permissions['edit own mmorpg_article content'] = array(
    'name' => 'edit own mmorpg_article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'set mmorpg_article published on date'.
  $permissions['set mmorpg_article published on date'] = array(
    'name' => 'set mmorpg_article published on date',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publication_date',
  );

  return $permissions;
}
