<?php
/**
 * @file
 * mmorpg_play_now.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mmorpg_play_now_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mmorpg_play_now_node_info() {
  $items = array(
    'play_now_slides' => array(
      'name' => t('Play Now Slides'),
      'base' => 'node_content',
      'description' => t('A node entry for slides on the Play Now page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
