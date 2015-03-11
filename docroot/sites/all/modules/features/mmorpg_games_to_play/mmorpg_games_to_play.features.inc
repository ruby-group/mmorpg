<?php
/**
 * @file
 * mmorpg_games_to_play.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mmorpg_games_to_play_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mmorpg_games_to_play_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function mmorpg_games_to_play_image_default_styles() {
  $styles = array();

  // Exported image style: games_to_play__26x26_.
  $styles['games_to_play__26x26_'] = array(
    'label' => 'Games To Play (26X26)',
    'effects' => array(
      1 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 26,
          'height' => 26,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function mmorpg_games_to_play_node_info() {
  $items = array(
    'games_to_play' => array(
      'name' => t('Games To Play'),
      'base' => 'node_content',
      'description' => t('Content type to create Games To Play links'),
      'has_title' => '1',
      'title_label' => t('Game Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
