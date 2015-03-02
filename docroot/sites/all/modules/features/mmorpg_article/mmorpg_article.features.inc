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
