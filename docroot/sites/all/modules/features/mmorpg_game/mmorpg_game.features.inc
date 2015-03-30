<?php
/**
 * @file
 * mmorpg_game.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mmorpg_game_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mmorpg_game_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function mmorpg_game_node_info() {
  $items = array(
    'game' => array(
      'name' => t('Game'),
      'base' => 'node_content',
      'description' => t('Content type for Game List Entry'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'game_link' => array(
      'name' => t('Game Link'),
      'base' => 'node_content',
      'description' => t('The content type to add unofficial links to game.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'screenshot_gallery' => array(
      'name' => t('Screenshot Gallery'),
      'base' => 'node_content',
      'description' => t('The content type to upload screen shots for gallery'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => t('Content type to add vidoes'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
