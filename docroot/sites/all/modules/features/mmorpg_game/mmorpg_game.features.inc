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
 * Implements hook_image_default_styles().
 */
function mmorpg_game_image_default_styles() {
  $styles = array();

  // Exported image style: overview_articles__200x155_.
  $styles['overview_articles__200x155_'] = array(
    'label' => 'Overview Articles (200x155)',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 200,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      6 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 200,
          'height' => 155,
          'anchor' => 'left-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: screenshot_gallery__228_x_150_.
  $styles['screenshot_gallery__228_x_150_'] = array(
    'label' => 'Screenshot Gallery (228 X 150)',
    'effects' => array(
      2 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 228,
          'height' => 150,
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
