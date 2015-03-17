<?php
/**
 * @file
 * mmorpg_signup_now.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mmorpg_signup_now_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mmorpg_signup_now_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function mmorpg_signup_now_node_info() {
  $items = array(
    'signup_now_link' => array(
      'name' => t('Signup Now Link'),
      'base' => 'node_content',
      'description' => t('Signup now link content type for advertisements.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
