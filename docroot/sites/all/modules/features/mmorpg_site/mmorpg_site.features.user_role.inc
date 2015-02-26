<?php
/**
 * @file
 * mmorpg_site.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function mmorpg_site_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 10,
  );

  return $roles;
}
