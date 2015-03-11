<?php
/**
 * @file
 * mmorpg_games_to_play.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mmorpg_games_to_play_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__games_to_play';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__games_to_play'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_games_to_play';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_games_to_play'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_games_to_play';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_games_to_play'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_games_to_play';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_games_to_play'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_games_to_play';
  $strongarm->value = '1';
  $export['node_preview_games_to_play'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_games_to_play';
  $strongarm->value = 1;
  $export['node_submitted_games_to_play'] = $strongarm;

  return $export;
}
