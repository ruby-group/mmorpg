<?php
/**
 * @file
 * mmorpg_site.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mmorpg_site_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'adminimal';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_url';
  $strongarm->value = '1';
  $export['clean_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_api_version';
  $strongarm->value = '7.2';
  $export['date_api_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone';
  $strongarm->value = 'America/New_York';
  $export['date_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_profile';
  $strongarm->value = 'mmorpg';
  $export['install_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_task';
  $strongarm->value = 'done';
  $export['install_task'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = '1';
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'om_maximenu';
  $strongarm->value = array(
    1 => array(
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
        'weight' => '0',
      ),
      'links' => array(
        2 => array(
          'link_title' => 'Updates',
          'link_title_option' => 'title',
          'path_icon' => '',
          'icon_option' => 0,
          'php_option' => 0,
          'path' => '',
          'path_query' => '',
          'path_fragment' => '',
          'weight' => '0',
          'id' => '',
          'class' => '',
          'rel' => '',
          'target' => '_self',
          'description' => '',
          'description_option' => 'hover',
          'roles' => array(
            1 => 0,
            2 => 0,
            3 => 0,
          ),
          'content' => array(
            'views___latest_updates-block' => array(
              'title' => '<none>',
              'title_path' => '',
              'title_path_query' => '',
              'title_path_fragment' => '',
              'module' => 'views',
              'delta' => 'latest_updates-block',
              'weight' => '0',
              'visibility' => 0,
            ),
          ),
        ),
        1 => array(
          'link_title' => 'User Name',
          'link_title_option' => 'title',
          'path_icon' => '',
          'icon_option' => 0,
          'php_option' => 0,
          'path' => '',
          'path_query' => '',
          'path_fragment' => '',
          'weight' => '0',
          'id' => '',
          'class' => '',
          'rel' => '',
          'target' => '_self',
          'description' => '',
          'description_option' => 'hover',
          'roles' => array(
            1 => 0,
            2 => 0,
            3 => 0,
          ),
          'content' => array(
            'system___user-menu' => array(
              'title' => 'Profile',
              'title_path' => '',
              'title_path_query' => '',
              'title_path_fragment' => '',
              'module' => 'system',
              'delta' => 'user-menu',
              'weight' => '5',
              'visibility' => '0',
            ),
            'views___trending-block_1' => array(
              'title' => '<none>',
              'title_path' => '',
              'title_path_query' => '',
              'title_path_fragment' => '',
              'module' => 'views',
              'delta' => 'trending-block_1',
              'weight' => '0',
              'visibility' => '0',
            ),
            'views___latest_updates-block' => array(
              'title' => 'View: Latest Updates',
              'title_path' => '',
              'title_path_query' => '',
              'title_path_fragment' => '',
              'module' => 'views',
              'delta' => 'latest_updates-block',
              'weight' => '0',
              'visibility' => '0',
            ),
          ),
        ),
      ),
    ),
  );
  $export['om_maximenu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_default_country';
  $strongarm->value = 'US';
  $export['site_default_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'admin@example.com';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'MMORPG';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'mmorpgnew';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '3';
  $export['user_admin_role'] = $strongarm;

  return $export;
}
