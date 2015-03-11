<?php
/**
 * @file
 * demo.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function demo_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: user_permission
  $overrides["user_permission.create mmorpg_article content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete any mmorpg_article content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete own mmorpg_article content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit any mmorpg_article content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit own mmorpg_article content.roles|subadmin"] = 'subadmin';

 return $overrides;
}
