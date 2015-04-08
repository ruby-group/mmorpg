<?php
/**
 * @file
 * mmorpg_signup_now.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mmorpg_signup_now_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mmorpg_signup_now_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function mmorpg_signup_now_image_default_styles() {
  $styles = array();

  // Exported image style: plaw_now_slider.
  $styles['plaw_now_slider'] = array(
    'label' => 'Plaw Now Slider',
    'effects' => array(
      4 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 192,
          'height' => 128,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: promoted_signup_now_links__26_x_26_.
  $styles['promoted_signup_now_links__26_x_26_'] = array(
    'label' => 'Promoted Signup Now Links (26 X 26)',
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
function mmorpg_signup_now_node_info() {
  $items = array(
    'promoted_signup_now_link' => array(
      'name' => t('Promoted Signup Link'),
      'base' => 'node_content',
      'description' => t('A content type to add promoted signup now links'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'signup_now_link' => array(
      'name' => t('Signup Now Link'),
      'base' => 'node_content',
      'description' => t('Signup now link content type for advertisements.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
