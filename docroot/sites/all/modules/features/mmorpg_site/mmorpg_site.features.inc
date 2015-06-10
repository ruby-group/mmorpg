<?php
/**
 * @file
 * mmorpg_site.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mmorpg_site_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mmorpg_site_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function mmorpg_site_image_default_styles() {
  $styles = array();

  // Exported image style: giveaway_node_700x305.
  $styles['giveaway_node_700x305'] = array(
    'label' => 'Giveaway Node (700x305)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 700,
          'height' => 305,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: giveaway_promoted_700x400.
  $styles['giveaway_promoted_700x400'] = array(
    'label' => 'Giveaway Promoted (700x400)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 700,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: play_now_screenshots_160x100.
  $styles['play_now_screenshots_160x100'] = array(
    'label' => 'Play Now Screenshots (160x100)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 160,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: promoted_play_now_880x360.
  $styles['promoted_play_now_880x360'] = array(
    'label' => 'Promoted Play Now (880x360)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 880,
          'height' => 360,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
