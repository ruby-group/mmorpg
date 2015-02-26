<?php
/**
 * @file
 * Drush commands for multi purpose updates by code.
 */

/**
 * Implements hook_drush_command().
 */
function mmorpg_updates_drush_command() {
  $items = array();

  // Generate the maximenu menu items.
  $items['mmorpg-create-maxi-menu'] = array(
    'description' => "Create the maximenu link array configuration and store in the database.",
    'callback' => 'mmorpg_updates_mmorpg_create_maxi_menu',
    'aliases' => array('mcmm'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL, // Initialize Drupal fully
  );

  // Place blocks to proper regions .
  $items['mmorpg-place-blocks'] = array(
    'description' => "Create and place the blocks in required regions.",
    'callback' => 'mmorpg_updates_mmorpg_place_block',
    'aliases' => array('mpb'),
  );

  return $items;
}

/**
 * Implements drush_hook_COMMAND_validate().
 */
function drush_mmorpg_updates_mmorpg_create_maxi_menu_validate() {
  if(!module_exists('om_maximenu')) {
    return drush_set_error(t('Maximenu module is not enabled. Please enable it and try again.'));
  }
}

/**
 * Implements drush_hook_COMMAND_validate().
 */
function drush_mmorpg_updates_mmorpg_place_block_validate() {
  if(!module_exists('views') && !module_exists('menu') && !module_exists('om_maximenu')) {
    return drush_set_error(t('Blocks dependency missing. Ensure - Views, Menu & Maximenu.'));
  }
}

/**
 * Submit call back to drush command to create shortcut.
 */
function mmorpg_updates_mmorpg_place_block() {
  block_flush_caches();

  mmorpg_updates_place_block('om_maximenu', 'om-maximenu-1', 'bartik', array(
    'status' => 1,
    'weight' => 0,
    'region' => 'header',
    'title' => '<none>',
    'pages' => '',
  ));

  mmorpg_updates_place_block('om_maximenu', 'om-maximenu-1', 'mmorpg', array(
    'status' => 1,
    'weight' => 0,
    'region' => 'header',
    'title' => '<none>',
    'pages' => '',
  ));

  drush_print('Blocks are placed in appropriate regions.', $indent = 0);
}

/**
 * Submit call back to drush command to create shortcut.
 */
function mmorpg_updates_mmorpg_create_maxi_menu() {

  //Maximenu configuration stored in variable.
  $maximenu_var = array(
    '1' => array(
      'code' => 'om-u1-233032521',
      'title' => 'User Menu',
      'action' => 'click_fast',
      'skin' => 'bubble',
      'style' => '',
      'output' => 'block',
      'delay' => '1000',
      'menu_visibility' => array(
        'visibility' => 0,
        'pages' => '',
      ),
      'block_options' => array(
        'stacking' => 'row',
        'direction' => 'block-down',
        'region' => 'header',
        'weight' => 0,
      ),
      'links' => array(
        '1' => array(
          'link_title' => 'User Name',
          'link_title_option' => 'title',
          'path_icon' => '',
          'icon_option' => 0,
          'php_option' => 0,
          'path' => '',
          'path_query' => '',
          'path_fragment' => '',
          'weight' => 0,
          'id' => '',
          'class' => '',
          'rel' => '',
          'target' => '_self',
          'description' => '',
          'description_option' => 'hover',
          'roles' => array(
            '1' => 0,
            '2' => 0,
            '3' => 0,
          ),
          'content' => array(
            'system___user-menu' => array(
              'title' => 'Profile',
              'title_path' => '',
              'title_path_query' => '',
              'title_path_fragment' => '',
              'module' => 'system',
              'delta' => 'user-menu',
              'weight' => 5,
              'visibility' => 0,
            ),
            'views___trending-block_1' => array(
              'title' => '<none>',
              'title_path' => '',
              'title_path_query' => '',
              'title_path_fragment' => '',
              'module' => 'views',
              'delta' => 'trending-block_1',
              'weight' => 0,
              'visibility' => 0,
            ),
          ),
        ),
      ),
    ),
  );

  //Set variable.
  variable_set('om_maximenu', $maximenu_var);
  drush_print('Maximenu created successfully.', $indent = 0);
}

/**
 * Place block by either inserting or updating.
 */
function mmorpg_updates_place_block($module, $delta, $theme, $fields) {
  db_merge('block')
    ->key(array('theme' => $theme, 'delta' => $delta, 'module' => $module))
    ->fields($fields)
    ->execute();
}