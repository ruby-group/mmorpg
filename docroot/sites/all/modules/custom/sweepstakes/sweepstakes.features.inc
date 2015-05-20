<?php
/**
 * @file
 * sweepstakes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sweepstakes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "data" && $api == "data_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function sweepstakes_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function sweepstakes_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: sweepstakes
  $nodequeues['sweepstakes'] = array(
    'name' => 'sweepstakes',
    'title' => 'Sweepstakes',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_node_info().
 */
function sweepstakes_node_info() {
  $items = array(
    'sweepstake' => array(
      'name' => t('Sweepstakes'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
