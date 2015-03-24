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
  $strongarm->name = 'CLICKMETER_KEY';
  $strongarm->value = '0BB244DB-4823-4966-AFC2-69AFB56F27D9';
  $export['CLICKMETER_KEY'] = $strongarm;

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
        'region' => '',
        'weight' => '0',
      ),
      'links' => array(
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
              'visibility' => 0,
            ),
            'views___trending-latest_news' => array(
              'title' => '<none>',
              'title_path' => '',
              'title_path_query' => '',
              'title_path_fragment' => '',
              'module' => 'views',
              'delta' => 'trending-latest_news',
              'weight' => '0',
              'visibility' => 0,
            ),
          ),
        ),
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
  $strongarm->name = 'radioactivity_checksum_salt';
  $strongarm->value = '6Pqik8ZUKGqqLHRx5936';
  $export['radioactivity_checksum_salt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'radioactivity_flood_protection';
  $strongarm->value = 1;
  $export['radioactivity_flood_protection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'radioactivity_flood_timeout';
  $strongarm->value = '15';
  $export['radioactivity_flood_timeout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_default_country';
  $strongarm->value = 'US';
  $export['site_default_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'home';
  $export['site_frontpage'] = $strongarm;

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
  $strongarm->value = 'mmorpg';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_mmorpg_settings';
  $strongarm->value = array(
    'toggle_logo' => 0,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 0,
    'toggle_secondary_menu' => 0,
    'omega_toggle_front_page_content' => 0,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'omega_enable_warning' => TRUE,
    'omega_toggle_extension_assets' => 1,
    'omega_js_footer' => array(),
    'omega_css_exclude' => array(),
    'omega_js_exclude' => array(),
    'omega_libraries' => array(
      'selectivizr' => array(
        'status' => 0,
      ),
      'respond' => array(
        'status' => 0,
      ),
      'pie' => array(
        'status' => 0,
        'selectors' => array(),
      ),
      'html5shiv' => array(
        'status' => 0,
      ),
    ),
    'omega_toggle_extension_development' => 1,
    'omega_enable_export_reminder' => 0,
    'omega_rebuild_theme_registry' => 0,
    'omega_rebuild_aggregates' => 0,
    'omega_browser_width_indicator' => 0,
    'omega_livereload' => 0,
    'omega_livereload_script' => 'http://localhost:35729/livereload.js',
    'omega_livereload_host' => 'localhost',
    'omega_livereload_port' => '35729',
    'omega_demo_regions' => 0,
    'omega_toggle_extension_compatibility' => 1,
    'omega_conditional_classes_html' => 1,
    'omega_apple_touch' => 1,
    'omega_cleartype' => 1,
    'omega_handheld_friendly' => 1,
    'omega_mobile_optimized' => 1,
    'omega_viewport' => 1,
    'omega_viewport_user_scaleable' => 1,
    'omega_chrome_edge' => 1,
    'omega_toggle_extension_layouts' => 0,
    'omega_layout' => 'mm3col',
  );
  $export['theme_mmorpg_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '3';
  $export['user_admin_role'] = $strongarm;

  return $export;
}
