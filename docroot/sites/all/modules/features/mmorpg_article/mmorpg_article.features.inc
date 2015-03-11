<?php
/**
 * @file
 * mmorpg_article.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mmorpg_article_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "radioactivity" && $api == "radioactivity_decay_profile") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mmorpg_article_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function mmorpg_article_image_default_styles() {
  $styles = array();

  // Exported image style: 200x160_user_menu.
  $styles['200x160_user_menu'] = array(
    'label' => '200x160 User Menu',
    'effects' => array(
      1 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 200,
          'height' => 160,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 60x45_updates_menu.
  $styles['60x45_updates_menu'] = array(
    'label' => '60x45 Updates Menu',
    'effects' => array(
      1 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 60,
          'height' => 45,
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
function mmorpg_article_node_info() {
  $items = array(
    'article_news_post' => array(
      'name' => t('Article News Post'),
      'base' => 'node_content',
      'description' => t('The article news post content type to add only news post content in multipage'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'mmorpg_article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Content type for MMORPG articles'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
