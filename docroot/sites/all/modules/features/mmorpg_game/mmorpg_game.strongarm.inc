<?php
/**
 * @file
 * mmorpg_game.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mmorpg_game_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_game';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_game_link';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_game_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_video';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_game';
  $strongarm->value = '0';
  $export['ant_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_game_link';
  $strongarm->value = '0';
  $export['ant_game_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_game';
  $strongarm->value = '';
  $export['ant_pattern_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_game_link';
  $strongarm->value = '';
  $export['ant_pattern_game_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_video';
  $strongarm->value = '';
  $export['ant_pattern_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_game';
  $strongarm->value = 0;
  $export['ant_php_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_game_link';
  $strongarm->value = 0;
  $export['ant_php_game_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_video';
  $strongarm->value = 0;
  $export['ant_php_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_video';
  $strongarm->value = '0';
  $export['ant_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_game_link';
  $strongarm->value = 0;
  $export['clone_reset_game_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_screenshot_gallery';
  $strongarm->value = 0;
  $export['clone_reset_screenshot_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_video';
  $strongarm->value = 0;
  $export['clone_reset_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_game';
  $strongarm->value = 0;
  $export['comment_anonymous_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_game_link';
  $strongarm->value = 0;
  $export['comment_anonymous_game_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_screenshot_gallery';
  $strongarm->value = 0;
  $export['comment_anonymous_screenshot_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_video';
  $strongarm->value = 0;
  $export['comment_anonymous_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_game';
  $strongarm->value = 0;
  $export['comment_default_mode_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_game_link';
  $strongarm->value = 0;
  $export['comment_default_mode_game_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_screenshot_gallery';
  $strongarm->value = 1;
  $export['comment_default_mode_screenshot_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_video';
  $strongarm->value = 0;
  $export['comment_default_mode_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_game';
  $strongarm->value = '50';
  $export['comment_default_per_page_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_game_link';
  $strongarm->value = '50';
  $export['comment_default_per_page_game_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_screenshot_gallery';
  $strongarm->value = '50';
  $export['comment_default_per_page_screenshot_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_video';
  $strongarm->value = '50';
  $export['comment_default_per_page_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_game';
  $strongarm->value = 0;
  $export['comment_form_location_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_game_link';
  $strongarm->value = 0;
  $export['comment_form_location_game_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_screenshot_gallery';
  $strongarm->value = 1;
  $export['comment_form_location_screenshot_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_video';
  $strongarm->value = 0;
  $export['comment_form_location_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_game';
  $strongarm->value = '1';
  $export['comment_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_game_link';
  $strongarm->value = '1';
  $export['comment_game_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_game';
  $strongarm->value = '0';
  $export['comment_preview_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_game_link';
  $strongarm->value = '0';
  $export['comment_preview_game_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_screenshot_gallery';
  $strongarm->value = '1';
  $export['comment_preview_screenshot_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_video';
  $strongarm->value = '0';
  $export['comment_preview_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_screenshot_gallery';
  $strongarm->value = '2';
  $export['comment_screenshot_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_game';
  $strongarm->value = 0;
  $export['comment_subject_field_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_game_link';
  $strongarm->value = 0;
  $export['comment_subject_field_game_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_screenshot_gallery';
  $strongarm->value = 1;
  $export['comment_subject_field_screenshot_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_video';
  $strongarm->value = 0;
  $export['comment_subject_field_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_video';
  $strongarm->value = '1';
  $export['comment_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_game_link';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_game_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_video';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_game';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_game_link';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_game_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_video';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_game';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_game_link';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_game_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_video';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_field_collection_item__field_game_development_status';
  $strongarm->value = array(
    'view_modes' => array(
      'token' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_field_collection_item__field_game_development_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__game';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__game_link';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__game_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__screenshot_gallery';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__screenshot_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__video';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'isfield_thumbnail_dimensions';
  $strongarm->value = '140x105
120x90
150x120';
  $export['isfield_thumbnail_dimensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'isfield_video_dimensions';
  $strongarm->value = '420x315
480x360
640x480
960x720';
  $export['isfield_video_dimensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_game';
  $strongarm->value = '0';
  $export['language_content_type_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_game_link';
  $strongarm->value = '0';
  $export['language_content_type_game_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_screenshot_gallery';
  $strongarm->value = '0';
  $export['language_content_type_screenshot_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_video';
  $strongarm->value = '0';
  $export['language_content_type_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_game';
  $strongarm->value = array();
  $export['menu_options_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_game_link';
  $strongarm->value = array();
  $export['menu_options_game_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_screenshot_gallery';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_screenshot_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_video';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_game';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_game_link';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_game_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_screenshot_gallery';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_screenshot_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_video';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_game';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_game_link';
  $strongarm->value = array();
  $export['node_options_game_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_screenshot_gallery';
  $strongarm->value = array();
  $export['node_options_screenshot_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_video';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_game';
  $strongarm->value = '1';
  $export['node_preview_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_game_link';
  $strongarm->value = '1';
  $export['node_preview_game_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_screenshot_gallery';
  $strongarm->value = '1';
  $export['node_preview_screenshot_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_video';
  $strongarm->value = '1';
  $export['node_preview_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_game';
  $strongarm->value = 0;
  $export['node_submitted_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_game_link';
  $strongarm->value = 1;
  $export['node_submitted_game_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_screenshot_gallery';
  $strongarm->value = 1;
  $export['node_submitted_screenshot_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_video';
  $strongarm->value = 1;
  $export['node_submitted_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_game_pattern';
  $strongarm->value = 'game/[node:title]';
  $export['pathauto_node_game_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rate_widgets';
  $strongarm->value = array(
    1 => (object) array(
      'name' => 'graphics',
      'tag' => 'Graphics',
      'title' => 'Graphics',
      'node_types' => array(
        0 => 'game',
      ),
      'comment_types' => array(),
      'options' => array(
        0 => '0',
        '0.1' => '0.1',
        '0.2' => '0.2',
        '0.3' => '0.3',
        '0.4' => '0.4',
        '0.5' => '0.5',
        '0.6' => '0.6',
        '0.7' => '0.7',
        '0.8' => '0.8',
        '0.9' => '0.9',
        1 => '1',
        '1.1' => '1.1',
        '1.2' => '1.2',
        '1.3' => '1.3',
        '1.4' => '1.4',
        '1.5' => '1.5',
        '1.6' => '1.6',
        '1.7' => '1.7',
        '1.8' => '1.8',
        '1.9' => '1.9',
        2 => '2',
        '2.1' => '2.1',
        '2.2' => '2.2',
        '2.3' => '2.3',
        '2.4' => '2.4',
        '2.5' => '2.5',
        '2.6' => '2.6',
        '2.7' => '2.7',
        '2.8' => '2.8',
        '2.9' => '2.9',
        3 => '3',
        '3.1' => '3.1',
        '3.2' => '3.2',
        '3.3' => '3.3',
        '3.4' => '3.4',
        '3.5' => '3.5',
        '3.6' => '3.6',
        '3.7' => '3.7',
        '3.8' => '3.8',
        '3.9' => '3.9',
        4 => '4',
        '4.1' => '4.1',
        '4.2' => '4.2',
        '4.3' => '4.3',
        '4.4' => '4.4',
        '4.5' => '4.5',
        '4.6' => '4.6',
        '4.7' => '4.7',
        '4.8' => '4.8',
        '4.9' => '4.9',
        5 => '5',
        '5.1' => '5.1',
        '5.2' => '5.2',
        '5.3' => '5.3',
        '5.4' => '5.4',
        '5.5' => '5.5',
        '5.6' => '5.6',
        '5.7' => '5.7',
        '5.8' => '5.8',
        '5.9' => '5.9',
        6 => '6',
        '6.1' => '6.1',
        '6.2' => '6.2',
        '6.3' => '6.3',
        '6.4' => '6.4',
        '6.5' => '6.5',
        '6.6' => '6.6',
        '6.7' => '6.7',
        '6.8' => '6.8',
        '6.9' => '6.9',
        7 => '7',
        '7.1' => '7.1',
        '7.2' => '7.2',
        '7.3' => '7.3',
        '7.4' => '7.4',
        '7.5' => '7.5',
        '7.6' => '7.6',
        '7.7' => '7.7',
        '7.8' => '7.8',
        '7.9' => '7.9',
        8 => '8',
        '8.1' => '8.1',
        '8.2' => '8.2',
        '8.3' => '8.3',
        '8.4' => '8.4',
        '8.5' => '8.5',
        '8.6' => '8.6',
        '8.7' => '8.7',
        '8.8' => '8.8',
        '8.9' => '8.9',
        9 => '9',
        '9.1' => '9.1',
        '9.2' => '9.2',
        '9.3' => '9.3',
        '9.4' => '9.4',
        '9.5' => '9.5',
        '9.6' => '9.6',
        '9.7' => '9.7',
        '9.8' => '9.8',
        '9.9' => '9.9',
        10 => '10',
      ),
      'template' => 'mmorpg',
      'node_display' => '2',
      'teaser_display' => FALSE,
      'comment_display' => '2',
      'node_display_mode' => '1',
      'teaser_display_mode' => '1',
      'comment_display_mode' => '1',
      'roles' => array(
        3 => 0,
        1 => 0,
        2 => 0,
        4 => 0,
      ),
      'allow_voting_by_author' => 1,
      'noperm_behaviour' => '1',
      'displayed' => '1',
      'displayed_just_voted' => '2',
      'description' => '',
      'description_in_compact' => TRUE,
      'delete_vote_on_second_click' => '0',
      'use_source_translation' => TRUE,
      'value_type' => 'percent',
      'theme' => 'rate_template_mmorpg',
      'css' => 'sites/all/modules/custom/mmorpg_rate/templates/mmorpg_rate/mmorpg.css',
      'js' => 'sites/all/modules/custom/mmorpg_rate/templates/mmorpg_rate/mmorpg.js',
      'translate' => FALSE,
    ),
    2 => (object) array(
      'name' => 'value',
      'tag' => 'Value',
      'title' => 'Value',
      'node_types' => array(
        0 => 'game',
      ),
      'comment_types' => array(),
      'options' => array(
        0 => '0',
        '0.1' => '0.1',
        '0.2' => '0.2',
        '0.3' => '0.3',
        '0.4' => '0.4',
        '0.5' => '0.5',
        '0.6' => '0.6',
        '0.7' => '0.7',
        '0.8' => '0.8',
        '0.9' => '0.9',
        1 => '1',
        '1.1' => '1.1',
        '1.2' => '1.2',
        '1.3' => '1.3',
        '1.4' => '1.4',
        '1.5' => '1.5',
        '1.6' => '1.6',
        '1.7' => '1.7',
        '1.8' => '1.8',
        '1.9' => '1.9',
        2 => '2',
        '2.1' => '2.1',
        '2.2' => '2.2',
        '2.3' => '2.3',
        '2.4' => '2.4',
        '2.5' => '2.5',
        '2.6' => '2.6',
        '2.7' => '2.7',
        '2.8' => '2.8',
        '2.9' => '2.9',
        3 => '3',
        '3.1' => '3.1',
        '3.2' => '3.2',
        '3.3' => '3.3',
        '3.4' => '3.4',
        '3.5' => '3.5',
        '3.6' => '3.6',
        '3.7' => '3.7',
        '3.8' => '3.8',
        '3.9' => '3.9',
        4 => '4',
        '4.1' => '4.1',
        '4.2' => '4.2',
        '4.3' => '4.3',
        '4.4' => '4.4',
        '4.5' => '4.5',
        '4.6' => '4.6',
        '4.7' => '4.7',
        '4.8' => '4.8',
        '4.9' => '4.9',
        5 => '5',
        '5.1' => '5.1',
        '5.2' => '5.2',
        '5.3' => '5.3',
        '5.4' => '5.4',
        '5.5' => '5.5',
        '5.6' => '5.6',
        '5.7' => '5.7',
        '5.8' => '5.8',
        '5.9' => '5.9',
        6 => '6',
        '6.1' => '6.1',
        '6.2' => '6.2',
        '6.3' => '6.3',
        '6.4' => '6.4',
        '6.5' => '6.5',
        '6.6' => '6.6',
        '6.7' => '6.7',
        '6.8' => '6.8',
        '6.9' => '6.9',
        7 => '7',
        '7.1' => '7.1',
        '7.2' => '7.2',
        '7.3' => '7.3',
        '7.4' => '7.4',
        '7.5' => '7.5',
        '7.6' => '7.6',
        '7.7' => '7.7',
        '7.8' => '7.8',
        '7.9' => '7.9',
        8 => '8',
        '8.1' => '8.1',
        '8.2' => '8.2',
        '8.3' => '8.3',
        '8.4' => '8.4',
        '8.5' => '8.5',
        '8.6' => '8.6',
        '8.7' => '8.7',
        '8.8' => '8.8',
        '8.9' => '8.9',
        9 => '9',
        '9.1' => '9.1',
        '9.2' => '9.2',
        '9.3' => '9.3',
        '9.4' => '9.4',
        '9.5' => '9.5',
        '9.6' => '9.6',
        '9.7' => '9.7',
        '9.8' => '9.8',
        '9.9' => '9.9',
        10 => '10',
      ),
      'template' => 'mmorpg',
      'node_display' => '2',
      'teaser_display' => FALSE,
      'comment_display' => '2',
      'node_display_mode' => '1',
      'teaser_display_mode' => '1',
      'comment_display_mode' => '1',
      'roles' => array(
        3 => 0,
        1 => 0,
        2 => 0,
        4 => 0,
      ),
      'allow_voting_by_author' => 1,
      'noperm_behaviour' => '1',
      'displayed' => '1',
      'displayed_just_voted' => '2',
      'description' => '',
      'description_in_compact' => TRUE,
      'delete_vote_on_second_click' => '0',
      'use_source_translation' => TRUE,
      'value_type' => 'percent',
      'theme' => 'rate_template_mmorpg',
      'css' => 'sites/all/modules/custom/mmorpg_rate/templates/mmorpg_rate/mmorpg.css',
      'js' => 'sites/all/modules/custom/mmorpg_rate/templates/mmorpg_rate/mmorpg.js',
      'translate' => FALSE,
    ),
    3 => (object) array(
      'name' => 'fun',
      'tag' => 'Fun',
      'title' => 'Fun',
      'node_types' => array(
        0 => 'game',
      ),
      'comment_types' => array(),
      'options' => array(
        0 => '0',
        '0.1' => '0.1',
        '0.2' => '0.2',
        '0.3' => '0.3',
        '0.4' => '0.4',
        '0.5' => '0.5',
        '0.6' => '0.6',
        '0.7' => '0.7',
        '0.8' => '0.8',
        '0.9' => '0.9',
        1 => '1',
        '1.1' => '1.1',
        '1.2' => '1.2',
        '1.3' => '1.3',
        '1.4' => '1.4',
        '1.5' => '1.5',
        '1.6' => '1.6',
        '1.7' => '1.7',
        '1.8' => '1.8',
        '1.9' => '1.9',
        2 => '2',
        '2.1' => '2.1',
        '2.2' => '2.2',
        '2.3' => '2.3',
        '2.4' => '2.4',
        '2.5' => '2.5',
        '2.6' => '2.6',
        '2.7' => '2.7',
        '2.8' => '2.8',
        '2.9' => '2.9',
        3 => '3',
        '3.1' => '3.1',
        '3.2' => '3.2',
        '3.3' => '3.3',
        '3.4' => '3.4',
        '3.5' => '3.5',
        '3.6' => '3.6',
        '3.7' => '3.7',
        '3.8' => '3.8',
        '3.9' => '3.9',
        4 => '4',
        '4.1' => '4.1',
        '4.2' => '4.2',
        '4.3' => '4.3',
        '4.4' => '4.4',
        '4.5' => '4.5',
        '4.6' => '4.6',
        '4.7' => '4.7',
        '4.8' => '4.8',
        '4.9' => '4.9',
        5 => '5',
        '5.1' => '5.1',
        '5.2' => '5.2',
        '5.3' => '5.3',
        '5.4' => '5.4',
        '5.5' => '5.5',
        '5.6' => '5.6',
        '5.7' => '5.7',
        '5.8' => '5.8',
        '5.9' => '5.9',
        6 => '6',
        '6.1' => '6.1',
        '6.2' => '6.2',
        '6.3' => '6.3',
        '6.4' => '6.4',
        '6.5' => '6.5',
        '6.6' => '6.6',
        '6.7' => '6.7',
        '6.8' => '6.8',
        '6.9' => '6.9',
        7 => '7',
        '7.1' => '7.1',
        '7.2' => '7.2',
        '7.3' => '7.3',
        '7.4' => '7.4',
        '7.5' => '7.5',
        '7.6' => '7.6',
        '7.7' => '7.7',
        '7.8' => '7.8',
        '7.9' => '7.9',
        8 => '8',
        '8.1' => '8.1',
        '8.2' => '8.2',
        '8.3' => '8.3',
        '8.4' => '8.4',
        '8.5' => '8.5',
        '8.6' => '8.6',
        '8.7' => '8.7',
        '8.8' => '8.8',
        '8.9' => '8.9',
        9 => '9',
        '9.1' => '9.1',
        '9.2' => '9.2',
        '9.3' => '9.3',
        '9.4' => '9.4',
        '9.5' => '9.5',
        '9.6' => '9.6',
        '9.7' => '9.7',
        '9.8' => '9.8',
        '9.9' => '9.9',
        10 => '10',
      ),
      'template' => 'mmorpg',
      'node_display' => '2',
      'teaser_display' => FALSE,
      'comment_display' => '2',
      'node_display_mode' => '1',
      'teaser_display_mode' => '1',
      'comment_display_mode' => '1',
      'roles' => array(
        3 => 0,
        1 => 0,
        2 => 0,
        4 => 0,
      ),
      'allow_voting_by_author' => 1,
      'noperm_behaviour' => '1',
      'displayed' => '1',
      'displayed_just_voted' => '2',
      'description' => '',
      'description_in_compact' => TRUE,
      'delete_vote_on_second_click' => '0',
      'use_source_translation' => TRUE,
      'value_type' => 'percent',
      'theme' => 'rate_template_mmorpg',
      'css' => 'sites/all/modules/custom/mmorpg_rate/templates/mmorpg_rate/mmorpg.css',
      'js' => 'sites/all/modules/custom/mmorpg_rate/templates/mmorpg_rate/mmorpg.js',
      'translate' => FALSE,
    ),
    4 => (object) array(
      'name' => 'community',
      'tag' => 'Community',
      'title' => 'Community',
      'node_types' => array(
        0 => 'game',
      ),
      'comment_types' => array(),
      'options' => array(
        0 => '0',
        '0.1' => '0.1',
        '0.2' => '0.2',
        '0.3' => '0.3',
        '0.4' => '0.4',
        '0.5' => '0.5',
        '0.6' => '0.6',
        '0.7' => '0.7',
        '0.8' => '0.8',
        '0.9' => '0.9',
        1 => '1',
        '1.1' => '1.1',
        '1.2' => '1.2',
        '1.3' => '1.3',
        '1.4' => '1.4',
        '1.5' => '1.5',
        '1.6' => '1.6',
        '1.7' => '1.7',
        '1.8' => '1.8',
        '1.9' => '1.9',
        2 => '2',
        '2.1' => '2.1',
        '2.2' => '2.2',
        '2.3' => '2.3',
        '2.4' => '2.4',
        '2.5' => '2.5',
        '2.6' => '2.6',
        '2.7' => '2.7',
        '2.8' => '2.8',
        '2.9' => '2.9',
        3 => '3',
        '3.1' => '3.1',
        '3.2' => '3.2',
        '3.3' => '3.3',
        '3.4' => '3.4',
        '3.5' => '3.5',
        '3.6' => '3.6',
        '3.7' => '3.7',
        '3.8' => '3.8',
        '3.9' => '3.9',
        4 => '4',
        '4.1' => '4.1',
        '4.2' => '4.2',
        '4.3' => '4.3',
        '4.4' => '4.4',
        '4.5' => '4.5',
        '4.6' => '4.6',
        '4.7' => '4.7',
        '4.8' => '4.8',
        '4.9' => '4.9',
        5 => '5',
        '5.1' => '5.1',
        '5.2' => '5.2',
        '5.3' => '5.3',
        '5.4' => '5.4',
        '5.5' => '5.5',
        '5.6' => '5.6',
        '5.7' => '5.7',
        '5.8' => '5.8',
        '5.9' => '5.9',
        6 => '6',
        '6.1' => '6.1',
        '6.2' => '6.2',
        '6.3' => '6.3',
        '6.4' => '6.4',
        '6.5' => '6.5',
        '6.6' => '6.6',
        '6.7' => '6.7',
        '6.8' => '6.8',
        '6.9' => '6.9',
        7 => '7',
        '7.1' => '7.1',
        '7.2' => '7.2',
        '7.3' => '7.3',
        '7.4' => '7.4',
        '7.5' => '7.5',
        '7.6' => '7.6',
        '7.7' => '7.7',
        '7.8' => '7.8',
        '7.9' => '7.9',
        8 => '8',
        '8.1' => '8.1',
        '8.2' => '8.2',
        '8.3' => '8.3',
        '8.4' => '8.4',
        '8.5' => '8.5',
        '8.6' => '8.6',
        '8.7' => '8.7',
        '8.8' => '8.8',
        '8.9' => '8.9',
        9 => '9',
        '9.1' => '9.1',
        '9.2' => '9.2',
        '9.3' => '9.3',
        '9.4' => '9.4',
        '9.5' => '9.5',
        '9.6' => '9.6',
        '9.7' => '9.7',
        '9.8' => '9.8',
        '9.9' => '9.9',
        10 => '10',
      ),
      'template' => 'mmorpg',
      'node_display' => '2',
      'teaser_display' => FALSE,
      'comment_display' => '2',
      'node_display_mode' => '1',
      'teaser_display_mode' => '1',
      'comment_display_mode' => '1',
      'roles' => array(
        3 => 0,
        1 => 0,
        2 => 0,
        4 => 0,
      ),
      'allow_voting_by_author' => 1,
      'noperm_behaviour' => '1',
      'displayed' => '1',
      'displayed_just_voted' => '2',
      'description' => '',
      'description_in_compact' => TRUE,
      'delete_vote_on_second_click' => '0',
      'use_source_translation' => TRUE,
      'value_type' => 'percent',
      'theme' => 'rate_template_mmorpg',
      'css' => 'sites/all/modules/custom/mmorpg_rate/templates/mmorpg_rate/mmorpg.css',
      'js' => 'sites/all/modules/custom/mmorpg_rate/templates/mmorpg_rate/mmorpg.js',
      'translate' => FALSE,
    ),
    5 => (object) array(
      'name' => 'role_playing',
      'tag' => 'Role_playing',
      'title' => 'Role-playing',
      'node_types' => array(
        0 => 'game',
      ),
      'comment_types' => array(),
      'options' => array(
        0 => '0',
        '0.1' => '0.1',
        '0.2' => '0.2',
        '0.3' => '0.3',
        '0.4' => '0.4',
        '0.5' => '0.5',
        '0.6' => '0.6',
        '0.7' => '0.7',
        '0.8' => '0.8',
        '0.9' => '0.9',
        1 => '1',
        '1.1' => '1.1',
        '1.2' => '1.2',
        '1.3' => '1.3',
        '1.4' => '1.4',
        '1.5' => '1.5',
        '1.6' => '1.6',
        '1.7' => '1.7',
        '1.8' => '1.8',
        '1.9' => '1.9',
        2 => '2',
        '2.1' => '2.1',
        '2.2' => '2.2',
        '2.3' => '2.3',
        '2.4' => '2.4',
        '2.5' => '2.5',
        '2.6' => '2.6',
        '2.7' => '2.7',
        '2.8' => '2.8',
        '2.9' => '2.9',
        3 => '3',
        '3.1' => '3.1',
        '3.2' => '3.2',
        '3.3' => '3.3',
        '3.4' => '3.4',
        '3.5' => '3.5',
        '3.6' => '3.6',
        '3.7' => '3.7',
        '3.8' => '3.8',
        '3.9' => '3.9',
        4 => '4',
        '4.1' => '4.1',
        '4.2' => '4.2',
        '4.3' => '4.3',
        '4.4' => '4.4',
        '4.5' => '4.5',
        '4.6' => '4.6',
        '4.7' => '4.7',
        '4.8' => '4.8',
        '4.9' => '4.9',
        5 => '5',
        '5.1' => '5.1',
        '5.2' => '5.2',
        '5.3' => '5.3',
        '5.4' => '5.4',
        '5.5' => '5.5',
        '5.6' => '5.6',
        '5.7' => '5.7',
        '5.8' => '5.8',
        '5.9' => '5.9',
        6 => '6',
        '6.1' => '6.1',
        '6.2' => '6.2',
        '6.3' => '6.3',
        '6.4' => '6.4',
        '6.5' => '6.5',
        '6.6' => '6.6',
        '6.7' => '6.7',
        '6.8' => '6.8',
        '6.9' => '6.9',
        7 => '7',
        '7.1' => '7.1',
        '7.2' => '7.2',
        '7.3' => '7.3',
        '7.4' => '7.4',
        '7.5' => '7.5',
        '7.6' => '7.6',
        '7.7' => '7.7',
        '7.8' => '7.8',
        '7.9' => '7.9',
        8 => '8',
        '8.1' => '8.1',
        '8.2' => '8.2',
        '8.3' => '8.3',
        '8.4' => '8.4',
        '8.5' => '8.5',
        '8.6' => '8.6',
        '8.7' => '8.7',
        '8.8' => '8.8',
        '8.9' => '8.9',
        9 => '9',
        '9.1' => '9.1',
        '9.2' => '9.2',
        '9.3' => '9.3',
        '9.4' => '9.4',
        '9.5' => '9.5',
        '9.6' => '9.6',
        '9.7' => '9.7',
        '9.8' => '9.8',
        '9.9' => '9.9',
        10 => '10',
      ),
      'template' => 'mmorpg',
      'node_display' => '2',
      'teaser_display' => FALSE,
      'comment_display' => '2',
      'node_display_mode' => '1',
      'teaser_display_mode' => '1',
      'comment_display_mode' => '1',
      'roles' => array(
        3 => 0,
        1 => 0,
        2 => 0,
        4 => 0,
      ),
      'allow_voting_by_author' => 1,
      'noperm_behaviour' => '1',
      'displayed' => '1',
      'displayed_just_voted' => '2',
      'description' => '',
      'description_in_compact' => TRUE,
      'delete_vote_on_second_click' => '0',
      'use_source_translation' => TRUE,
      'value_type' => 'percent',
      'theme' => 'rate_template_mmorpg',
      'css' => 'sites/all/modules/custom/mmorpg_rate/templates/mmorpg_rate/mmorpg.css',
      'js' => 'sites/all/modules/custom/mmorpg_rate/templates/mmorpg_rate/mmorpg.js',
      'translate' => FALSE,
    ),
    6 => (object) array(
      'name' => 'performance_lag',
      'tag' => 'Performance_lag',
      'title' => 'Performance/Lag',
      'node_types' => array(
        0 => 'game',
      ),
      'comment_types' => array(),
      'options' => array(
        0 => '0',
        '0.1' => '0.1',
        '0.2' => '0.2',
        '0.3' => '0.3',
        '0.4' => '0.4',
        '0.5' => '0.5',
        '0.6' => '0.6',
        '0.7' => '0.7',
        '0.8' => '0.8',
        '0.9' => '0.9',
        1 => '1',
        '1.1' => '1.1',
        '1.2' => '1.2',
        '1.3' => '1.3',
        '1.4' => '1.4',
        '1.5' => '1.5',
        '1.6' => '1.6',
        '1.7' => '1.7',
        '1.8' => '1.8',
        '1.9' => '1.9',
        2 => '2',
        '2.1' => '2.1',
        '2.2' => '2.2',
        '2.3' => '2.3',
        '2.4' => '2.4',
        '2.5' => '2.5',
        '2.6' => '2.6',
        '2.7' => '2.7',
        '2.8' => '2.8',
        '2.9' => '2.9',
        3 => '3',
        '3.1' => '3.1',
        '3.2' => '3.2',
        '3.3' => '3.3',
        '3.4' => '3.4',
        '3.5' => '3.5',
        '3.6' => '3.6',
        '3.7' => '3.7',
        '3.8' => '3.8',
        '3.9' => '3.9',
        4 => '4',
        '4.1' => '4.1',
        '4.2' => '4.2',
        '4.3' => '4.3',
        '4.4' => '4.4',
        '4.5' => '4.5',
        '4.6' => '4.6',
        '4.7' => '4.7',
        '4.8' => '4.8',
        '4.9' => '4.9',
        5 => '5',
        '5.1' => '5.1',
        '5.2' => '5.2',
        '5.3' => '5.3',
        '5.4' => '5.4',
        '5.5' => '5.5',
        '5.6' => '5.6',
        '5.7' => '5.7',
        '5.8' => '5.8',
        '5.9' => '5.9',
        6 => '6',
        '6.1' => '6.1',
        '6.2' => '6.2',
        '6.3' => '6.3',
        '6.4' => '6.4',
        '6.5' => '6.5',
        '6.6' => '6.6',
        '6.7' => '6.7',
        '6.8' => '6.8',
        '6.9' => '6.9',
        7 => '7',
        '7.1' => '7.1',
        '7.2' => '7.2',
        '7.3' => '7.3',
        '7.4' => '7.4',
        '7.5' => '7.5',
        '7.6' => '7.6',
        '7.7' => '7.7',
        '7.8' => '7.8',
        '7.9' => '7.9',
        8 => '8',
        '8.1' => '8.1',
        '8.2' => '8.2',
        '8.3' => '8.3',
        '8.4' => '8.4',
        '8.5' => '8.5',
        '8.6' => '8.6',
        '8.7' => '8.7',
        '8.8' => '8.8',
        '8.9' => '8.9',
        9 => '9',
        '9.1' => '9.1',
        '9.2' => '9.2',
        '9.3' => '9.3',
        '9.4' => '9.4',
        '9.5' => '9.5',
        '9.6' => '9.6',
        '9.7' => '9.7',
        '9.8' => '9.8',
        '9.9' => '9.9',
        10 => '10',
      ),
      'template' => 'mmorpg',
      'node_display' => '2',
      'teaser_display' => FALSE,
      'comment_display' => '2',
      'node_display_mode' => '1',
      'teaser_display_mode' => '1',
      'comment_display_mode' => '1',
      'roles' => array(
        3 => 0,
        1 => 0,
        2 => 0,
        4 => 0,
      ),
      'allow_voting_by_author' => 1,
      'noperm_behaviour' => '1',
      'displayed' => '1',
      'displayed_just_voted' => '2',
      'description' => '',
      'description_in_compact' => TRUE,
      'delete_vote_on_second_click' => '0',
      'use_source_translation' => TRUE,
      'value_type' => 'percent',
      'theme' => 'rate_template_mmorpg',
      'css' => 'sites/all/modules/custom/mmorpg_rate/templates/mmorpg_rate/mmorpg.css',
      'js' => 'sites/all/modules/custom/mmorpg_rate/templates/mmorpg_rate/mmorpg.js',
      'translate' => FALSE,
    ),
    7 => (object) array(
      'name' => 'service',
      'tag' => 'Service',
      'title' => 'Service',
      'node_types' => array(
        0 => 'game',
      ),
      'comment_types' => array(),
      'options' => array(
        0 => '0',
        '0.1' => '0.1',
        '0.2' => '0.2',
        '0.3' => '0.3',
        '0.4' => '0.4',
        '0.5' => '0.5',
        '0.6' => '0.6',
        '0.7' => '0.7',
        '0.8' => '0.8',
        '0.9' => '0.9',
        1 => '1',
        '1.1' => '1.1',
        '1.2' => '1.2',
        '1.3' => '1.3',
        '1.4' => '1.4',
        '1.5' => '1.5',
        '1.6' => '1.6',
        '1.7' => '1.7',
        '1.8' => '1.8',
        '1.9' => '1.9',
        2 => '2',
        '2.1' => '2.1',
        '2.2' => '2.2',
        '2.3' => '2.3',
        '2.4' => '2.4',
        '2.5' => '2.5',
        '2.6' => '2.6',
        '2.7' => '2.7',
        '2.8' => '2.8',
        '2.9' => '2.9',
        3 => '3',
        '3.1' => '3.1',
        '3.2' => '3.2',
        '3.3' => '3.3',
        '3.4' => '3.4',
        '3.5' => '3.5',
        '3.6' => '3.6',
        '3.7' => '3.7',
        '3.8' => '3.8',
        '3.9' => '3.9',
        4 => '4',
        '4.1' => '4.1',
        '4.2' => '4.2',
        '4.3' => '4.3',
        '4.4' => '4.4',
        '4.5' => '4.5',
        '4.6' => '4.6',
        '4.7' => '4.7',
        '4.8' => '4.8',
        '4.9' => '4.9',
        5 => '5',
        '5.1' => '5.1',
        '5.2' => '5.2',
        '5.3' => '5.3',
        '5.4' => '5.4',
        '5.5' => '5.5',
        '5.6' => '5.6',
        '5.7' => '5.7',
        '5.8' => '5.8',
        '5.9' => '5.9',
        6 => '6',
        '6.1' => '6.1',
        '6.2' => '6.2',
        '6.3' => '6.3',
        '6.4' => '6.4',
        '6.5' => '6.5',
        '6.6' => '6.6',
        '6.7' => '6.7',
        '6.8' => '6.8',
        '6.9' => '6.9',
        7 => '7',
        '7.1' => '7.1',
        '7.2' => '7.2',
        '7.3' => '7.3',
        '7.4' => '7.4',
        '7.5' => '7.5',
        '7.6' => '7.6',
        '7.7' => '7.7',
        '7.8' => '7.8',
        '7.9' => '7.9',
        8 => '8',
        '8.1' => '8.1',
        '8.2' => '8.2',
        '8.3' => '8.3',
        '8.4' => '8.4',
        '8.5' => '8.5',
        '8.6' => '8.6',
        '8.7' => '8.7',
        '8.8' => '8.8',
        '8.9' => '8.9',
        9 => '9',
        '9.1' => '9.1',
        '9.2' => '9.2',
        '9.3' => '9.3',
        '9.4' => '9.4',
        '9.5' => '9.5',
        '9.6' => '9.6',
        '9.7' => '9.7',
        '9.8' => '9.8',
        '9.9' => '9.9',
        10 => '10',
      ),
      'template' => 'mmorpg',
      'node_display' => '2',
      'teaser_display' => FALSE,
      'comment_display' => '2',
      'node_display_mode' => '1',
      'teaser_display_mode' => '1',
      'comment_display_mode' => '1',
      'roles' => array(
        3 => 0,
        1 => 0,
        2 => 0,
        4 => 0,
      ),
      'allow_voting_by_author' => 1,
      'noperm_behaviour' => '1',
      'displayed' => '1',
      'displayed_just_voted' => '2',
      'description' => '',
      'description_in_compact' => TRUE,
      'delete_vote_on_second_click' => '0',
      'use_source_translation' => TRUE,
      'value_type' => 'percent',
      'theme' => 'rate_template_mmorpg',
      'css' => 'sites/all/modules/custom/mmorpg_rate/templates/mmorpg_rate/mmorpg.css',
      'js' => 'sites/all/modules/custom/mmorpg_rate/templates/mmorpg_rate/mmorpg.js',
      'translate' => FALSE,
    ),
    8 => (object) array(
      'name' => 'sound',
      'tag' => 'Sound',
      'title' => 'Sound',
      'node_types' => array(
        0 => 'game',
      ),
      'comment_types' => array(),
      'options' => array(
        0 => '0',
        '0.1' => '0.1',
        '0.2' => '0.2',
        '0.3' => '0.3',
        '0.4' => '0.4',
        '0.5' => '0.5',
        '0.6' => '0.6',
        '0.7' => '0.7',
        '0.8' => '0.8',
        '0.9' => '0.9',
        1 => '1',
        '1.1' => '1.1',
        '1.2' => '1.2',
        '1.3' => '1.3',
        '1.4' => '1.4',
        '1.5' => '1.5',
        '1.6' => '1.6',
        '1.7' => '1.7',
        '1.8' => '1.8',
        '1.9' => '1.9',
        2 => '2',
        '2.1' => '2.1',
        '2.2' => '2.2',
        '2.3' => '2.3',
        '2.4' => '2.4',
        '2.5' => '2.5',
        '2.6' => '2.6',
        '2.7' => '2.7',
        '2.8' => '2.8',
        '2.9' => '2.9',
        3 => '3',
        '3.1' => '3.1',
        '3.2' => '3.2',
        '3.3' => '3.3',
        '3.4' => '3.4',
        '3.5' => '3.5',
        '3.6' => '3.6',
        '3.7' => '3.7',
        '3.8' => '3.8',
        '3.9' => '3.9',
        4 => '4',
        '4.1' => '4.1',
        '4.2' => '4.2',
        '4.3' => '4.3',
        '4.4' => '4.4',
        '4.5' => '4.5',
        '4.6' => '4.6',
        '4.7' => '4.7',
        '4.8' => '4.8',
        '4.9' => '4.9',
        5 => '5',
        '5.1' => '5.1',
        '5.2' => '5.2',
        '5.3' => '5.3',
        '5.4' => '5.4',
        '5.5' => '5.5',
        '5.6' => '5.6',
        '5.7' => '5.7',
        '5.8' => '5.8',
        '5.9' => '5.9',
        6 => '6',
        '6.1' => '6.1',
        '6.2' => '6.2',
        '6.3' => '6.3',
        '6.4' => '6.4',
        '6.5' => '6.5',
        '6.6' => '6.6',
        '6.7' => '6.7',
        '6.8' => '6.8',
        '6.9' => '6.9',
        7 => '7',
        '7.1' => '7.1',
        '7.2' => '7.2',
        '7.3' => '7.3',
        '7.4' => '7.4',
        '7.5' => '7.5',
        '7.6' => '7.6',
        '7.7' => '7.7',
        '7.8' => '7.8',
        '7.9' => '7.9',
        8 => '8',
        '8.1' => '8.1',
        '8.2' => '8.2',
        '8.3' => '8.3',
        '8.4' => '8.4',
        '8.5' => '8.5',
        '8.6' => '8.6',
        '8.7' => '8.7',
        '8.8' => '8.8',
        '8.9' => '8.9',
        9 => '9',
        '9.1' => '9.1',
        '9.2' => '9.2',
        '9.3' => '9.3',
        '9.4' => '9.4',
        '9.5' => '9.5',
        '9.6' => '9.6',
        '9.7' => '9.7',
        '9.8' => '9.8',
        '9.9' => '9.9',
        10 => '10',
      ),
      'template' => 'mmorpg',
      'node_display' => '2',
      'teaser_display' => FALSE,
      'comment_display' => '2',
      'node_display_mode' => '1',
      'teaser_display_mode' => '1',
      'comment_display_mode' => '1',
      'roles' => array(
        3 => 0,
        1 => 0,
        2 => 0,
        4 => 0,
      ),
      'allow_voting_by_author' => 1,
      'noperm_behaviour' => '1',
      'displayed' => '1',
      'displayed_just_voted' => '2',
      'description' => '',
      'description_in_compact' => TRUE,
      'delete_vote_on_second_click' => '0',
      'use_source_translation' => TRUE,
      'value_type' => 'percent',
      'theme' => 'rate_template_mmorpg',
      'css' => 'sites/all/modules/custom/mmorpg_rate/templates/mmorpg_rate/mmorpg.css',
      'js' => 'sites/all/modules/custom/mmorpg_rate/templates/mmorpg_rate/mmorpg.js',
      'translate' => FALSE,
    ),
  );
  $export['rate_widgets'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_expand_fieldset_game';
  $strongarm->value = '0';
  $export['scheduler_expand_fieldset_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_expand_fieldset_game_link';
  $strongarm->value = '0';
  $export['scheduler_expand_fieldset_game_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_expand_fieldset_video';
  $strongarm->value = '0';
  $export['scheduler_expand_fieldset_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_game';
  $strongarm->value = 0;
  $export['scheduler_publish_enable_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_game_link';
  $strongarm->value = 0;
  $export['scheduler_publish_enable_game_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_video';
  $strongarm->value = 0;
  $export['scheduler_publish_enable_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_past_date_game';
  $strongarm->value = 'error';
  $export['scheduler_publish_past_date_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_past_date_game_link';
  $strongarm->value = 'error';
  $export['scheduler_publish_past_date_game_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_past_date_video';
  $strongarm->value = 'error';
  $export['scheduler_publish_past_date_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_game';
  $strongarm->value = 0;
  $export['scheduler_publish_required_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_game_link';
  $strongarm->value = 0;
  $export['scheduler_publish_required_game_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_video';
  $strongarm->value = 0;
  $export['scheduler_publish_required_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_game';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_game_link';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_game_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_video';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_game';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_game_link';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_game_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_video';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_game';
  $strongarm->value = 0;
  $export['scheduler_unpublish_enable_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_game_link';
  $strongarm->value = 0;
  $export['scheduler_unpublish_enable_game_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_video';
  $strongarm->value = 0;
  $export['scheduler_unpublish_enable_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_game';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_game_link';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_game_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_video';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_game';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_game_link';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_game_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_video';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_use_vertical_tabs_game';
  $strongarm->value = '1';
  $export['scheduler_use_vertical_tabs_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_use_vertical_tabs_game_link';
  $strongarm->value = '1';
  $export['scheduler_use_vertical_tabs_game_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_use_vertical_tabs_video';
  $strongarm->value = '1';
  $export['scheduler_use_vertical_tabs_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'votingapi_anonymous_window';
  $strongarm->value = '86400';
  $export['votingapi_anonymous_window'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'votingapi_calculation_schedule';
  $strongarm->value = 'immediate';
  $export['votingapi_calculation_schedule'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'votingapi_user_window';
  $strongarm->value = '-1';
  $export['votingapi_user_window'] = $strongarm;

  return $export;
}
