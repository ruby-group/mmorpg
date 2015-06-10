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

  // Exported permission: 'add reviews'.
  $permissions['add reviews'] = array(
    'name' => 'add reviews',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'reviews',
  );

  // Exported permission: 'administer reviews'.
  $permissions['administer reviews'] = array(
    'name' => 'administer reviews',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'reviews',
  );

  // Exported permission: 'create game content'.
  $permissions['create game content'] = array(
    'name' => 'create game content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create game_link content'.
  $permissions['create game_link content'] = array(
    'name' => 'create game_link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create screenshot_gallery content'.
  $permissions['create screenshot_gallery content'] = array(
    'name' => 'create screenshot_gallery content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create video content'.
  $permissions['create video content'] = array(
    'name' => 'create video content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any game content'.
  $permissions['delete any game content'] = array(
    'name' => 'delete any game content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any game_link content'.
  $permissions['delete any game_link content'] = array(
    'name' => 'delete any game_link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any screenshot_gallery content'.
  $permissions['delete any screenshot_gallery content'] = array(
    'name' => 'delete any screenshot_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any video content'.
  $permissions['delete any video content'] = array(
    'name' => 'delete any video content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own game content'.
  $permissions['delete own game content'] = array(
    'name' => 'delete own game content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own game_link content'.
  $permissions['delete own game_link content'] = array(
    'name' => 'delete own game_link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own screenshot_gallery content'.
  $permissions['delete own screenshot_gallery content'] = array(
    'name' => 'delete own screenshot_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own video content'.
  $permissions['delete own video content'] = array(
    'name' => 'delete own video content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any game content'.
  $permissions['edit any game content'] = array(
    'name' => 'edit any game content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any game_link content'.
  $permissions['edit any game_link content'] = array(
    'name' => 'edit any game_link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any screenshot_gallery content'.
  $permissions['edit any screenshot_gallery content'] = array(
    'name' => 'edit any screenshot_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any video content'.
  $permissions['edit any video content'] = array(
    'name' => 'edit any video content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own game content'.
  $permissions['edit own game content'] = array(
    'name' => 'edit own game content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own game_link content'.
  $permissions['edit own game_link content'] = array(
    'name' => 'edit own game_link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own screenshot_gallery content'.
  $permissions['edit own screenshot_gallery content'] = array(
    'name' => 'edit own screenshot_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own video content'.
  $permissions['edit own video content'] = array(
    'name' => 'edit own video content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit reviews'.
  $permissions['edit reviews'] = array(
    'name' => 'edit reviews',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'reviews',
  );

  // Exported permission: 'moderate reviews'.
  $permissions['moderate reviews'] = array(
    'name' => 'moderate reviews',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'reviews',
  );

  // Exported permission: 'read reviews'.
  $permissions['read reviews'] = array(
    'name' => 'read reviews',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'reviews',
  );

  // Exported permission: 'set game published on date'.
  $permissions['set game published on date'] = array(
    'name' => 'set game published on date',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publication_date',
  );

  // Exported permission: 'set game_link published on date'.
  $permissions['set game_link published on date'] = array(
    'name' => 'set game_link published on date',
    'roles' => array(),
    'module' => 'publication_date',
  );

  // Exported permission: 'set screenshot_gallery published on date'.
  $permissions['set screenshot_gallery published on date'] = array(
    'name' => 'set screenshot_gallery published on date',
    'roles' => array(),
    'module' => 'publication_date',
  );

  // Exported permission: 'set video published on date'.
  $permissions['set video published on date'] = array(
    'name' => 'set video published on date',
    'roles' => array(),
    'module' => 'publication_date',
  );

  // Exported permission: 'view any unpublished game_link content'.
  $permissions['view any unpublished game_link content'] = array(
    'name' => 'view any unpublished game_link content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished screenshot_gallery content'.
  $permissions['view any unpublished screenshot_gallery content'] = array(
    'name' => 'view any unpublished screenshot_gallery content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished video content'.
  $permissions['view any unpublished video content'] = array(
    'name' => 'view any unpublished video content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
