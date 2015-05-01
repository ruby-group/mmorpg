<?php
/**
 * @file
 * mmorpg_site.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mmorpg_site_ctools_plugin_api($module = NULL, $api = NULL) {
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

  // Exported image style: giveaway_node__700x305_.
  $styles['giveaway_node__700x305_'] = array(
    'label' => 'Giveaway Node (700x305)',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 700,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      3 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 700,
          'height' => 305,
          'anchor' => 'left-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: giveaway_promoted__700x400_.
  $styles['giveaway_promoted__700x400_'] = array(
    'label' => 'Giveaway Promoted (700x400)',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 700,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      8 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 700,
          'height' => 400,
          'anchor' => 'left-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: play_now_promoted.
  $styles['play_now_promoted'] = array(
    'label' => 'Play Now promoted',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 880,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      3 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 880,
          'height' => 360,
          'anchor' => 'left-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: play_now_screenshots__160x100_.
  $styles['play_now_screenshots__160x100_'] = array(
    'label' => 'Play Now Screenshots [160x100]',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 160,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      5 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 160,
          'height' => 100,
          'anchor' => 'left-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
