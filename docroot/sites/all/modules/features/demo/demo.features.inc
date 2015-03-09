<?php
/**
 * @file
 * demo.features.inc
 */

/**
 * Implements hook_user_default_permissions_alter().
 */
function demo_user_default_permissions_alter(&$data) {
  if (isset($data['create mmorpg_article content'])) {
    $data['create mmorpg_article content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete any mmorpg_article content'])) {
    $data['delete any mmorpg_article content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete own mmorpg_article content'])) {
    $data['delete own mmorpg_article content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit any mmorpg_article content'])) {
    $data['edit any mmorpg_article content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit own mmorpg_article content'])) {
    $data['edit own mmorpg_article content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
}
