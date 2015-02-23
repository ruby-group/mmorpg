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
