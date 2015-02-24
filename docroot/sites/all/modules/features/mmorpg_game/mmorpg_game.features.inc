<?php
/**
 * @file
 * mmorpg_game.features.inc
 */

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
  );
  drupal_alter('node_info', $items);
  return $items;
}
