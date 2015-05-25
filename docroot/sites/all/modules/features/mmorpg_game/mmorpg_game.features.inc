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

  // Exported image style: articles_overview_200x155.
  $styles['articles_overview_200x155'] = array(
    'label' => 'Articles Overview (200x155)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 155,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: screenshot_gallery_228x150.
  $styles['screenshot_gallery_228x150'] = array(
    'label' => 'Screenshot Gallery (228x150)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
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
    'review' => array(
      'name' => t('Review'),
      'base' => 'node_content',
      'description' => t('The official review content type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'review_content' => array(
      'name' => t('Review Content'),
      'base' => 'node_content',
      'description' => t('The content pages for reviews.'),
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
