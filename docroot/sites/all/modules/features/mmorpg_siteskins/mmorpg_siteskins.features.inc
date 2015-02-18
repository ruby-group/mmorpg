<?php
/**
 * @file
 * mmorpg_siteskins.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mmorpg_siteskins_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mmorpg_siteskins_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function mmorpg_siteskins_node_info() {
  $items = array(
    'siteskin' => array(
      'name' => t('Site Skin'),
      'base' => 'node_content',
      'description' => t('Ad System: SiteSkins.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
