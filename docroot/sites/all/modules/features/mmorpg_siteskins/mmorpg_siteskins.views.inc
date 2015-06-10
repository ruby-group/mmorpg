<?php

/**
 * Implements hook_views_plugins().
 */
function mmorpg_siteskins_views_plugins() {
  return array(
    'style' => array(
      'mmorpg_siteskins' => array(
        'title' => t('MMORPG Siteskin'),
        'handler' => 'mmorpg_siteskins_plugin_style_siteskin',
        'type' => 'normal',
        'uses row plugin' => FALSE,
        'uses fields' => TRUE,
        'uses options' => FALSE,
      ),
    ),
  );
}

/**
 * Implements hook_views_data().
 */
function mmorpg_siteskins_views_data() {
  return array(
    'views' => array(
      'current_url' => array(
        'title' => t('Current URL Matches Paths'),
        'help' => t('Check whether the current url matches anything in the provided list.'),
        'filter' => array(
          'handler' => 'mmorpg_siteskins_handler_filter_current_url',
        ),
      ),
    ),
  );
}
