<?php
/**
 * @file
 * mmorpg_article.features.inc
 */

/**
 * Implements hook_node_info().
 */
function mmorpg_article_node_info() {
  $items = array(
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
