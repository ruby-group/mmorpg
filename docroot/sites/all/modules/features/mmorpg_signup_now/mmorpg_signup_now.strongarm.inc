<?php
/**
 * @file
 * mmorpg_signup_now.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mmorpg_signup_now_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_play_now_promoted_game';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_play_now_promoted_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_promoted_signup_now_link';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_promoted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_signup_now_link';
  $strongarm->value = 'edit-unique-field';
  $export['additional_settings__active_tab_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_play_now_promoted_game';
  $strongarm->value = '';
  $export['ant_pattern_play_now_promoted_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_promoted_signup_now_link';
  $strongarm->value = '[node:field-customer] [node:field-psnl-schedule:value] to [node:field-psnl-schedule:value2]';
  $export['ant_pattern_promoted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_signup_now_link';
  $strongarm->value = '';
  $export['ant_pattern_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_play_now_promoted_game';
  $strongarm->value = 0;
  $export['ant_php_play_now_promoted_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_promoted_signup_now_link';
  $strongarm->value = 0;
  $export['ant_php_promoted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_signup_now_link';
  $strongarm->value = 0;
  $export['ant_php_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_play_now_promoted_game';
  $strongarm->value = '0';
  $export['ant_play_now_promoted_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_promoted_signup_now_link';
  $strongarm->value = '1';
  $export['ant_promoted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_signup_now_link';
  $strongarm->value = '0';
  $export['ant_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_promoted_signup_now_link';
  $strongarm->value = 0;
  $export['clone_reset_promoted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_signup_now_link';
  $strongarm->value = 0;
  $export['clone_reset_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_play_now_promoted_game';
  $strongarm->value = 0;
  $export['comment_anonymous_play_now_promoted_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_promoted_signup_now_link';
  $strongarm->value = 0;
  $export['comment_anonymous_promoted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_signup_now_link';
  $strongarm->value = 0;
  $export['comment_anonymous_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_play_now_promoted_game';
  $strongarm->value = 0;
  $export['comment_default_mode_play_now_promoted_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_promoted_signup_now_link';
  $strongarm->value = 0;
  $export['comment_default_mode_promoted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_signup_now_link';
  $strongarm->value = 0;
  $export['comment_default_mode_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_play_now_promoted_game';
  $strongarm->value = '50';
  $export['comment_default_per_page_play_now_promoted_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_promoted_signup_now_link';
  $strongarm->value = '50';
  $export['comment_default_per_page_promoted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_signup_now_link';
  $strongarm->value = '50';
  $export['comment_default_per_page_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_play_now_promoted_game';
  $strongarm->value = 0;
  $export['comment_form_location_play_now_promoted_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_promoted_signup_now_link';
  $strongarm->value = 0;
  $export['comment_form_location_promoted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_signup_now_link';
  $strongarm->value = 0;
  $export['comment_form_location_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_play_now_promoted_game';
  $strongarm->value = '1';
  $export['comment_play_now_promoted_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_play_now_promoted_game';
  $strongarm->value = '0';
  $export['comment_preview_play_now_promoted_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_promoted_signup_now_link';
  $strongarm->value = '0';
  $export['comment_preview_promoted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_signup_now_link';
  $strongarm->value = '0';
  $export['comment_preview_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_promoted_signup_now_link';
  $strongarm->value = '1';
  $export['comment_promoted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_signup_now_link';
  $strongarm->value = '1';
  $export['comment_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_play_now_promoted_game';
  $strongarm->value = 0;
  $export['comment_subject_field_play_now_promoted_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_promoted_signup_now_link';
  $strongarm->value = 0;
  $export['comment_subject_field_promoted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_signup_now_link';
  $strongarm->value = 0;
  $export['comment_subject_field_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'country_specific_nodes_def_cn';
  $strongarm->value = 'US';
  $export['country_specific_nodes_def_cn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'country_specific_nodes_include_list';
  $strongarm->value = 'signup_now_link,0,0,0,0,0,0';
  $export['country_specific_nodes_include_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_play_now_promoted_game';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_play_now_promoted_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_promoted_signup_now_link';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_promoted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_signup_now_link';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_play_now_promoted_game';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_play_now_promoted_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_promoted_signup_now_link';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_promoted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_signup_now_link';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_play_now_promoted_game';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_play_now_promoted_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_promoted_signup_now_link';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_promoted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_signup_now_link';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__play_now_promoted_game';
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
  $export['field_bundle_settings_node__play_now_promoted_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__promoted_signup_now_link';
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
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__promoted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__signup_now_link';
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
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_play_now_promoted_game';
  $strongarm->value = '0';
  $export['language_content_type_play_now_promoted_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_promoted_signup_now_link';
  $strongarm->value = '0';
  $export['language_content_type_promoted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_signup_now_link';
  $strongarm->value = '0';
  $export['language_content_type_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_play_now_promoted_game';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_play_now_promoted_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_promoted_signup_now_link';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_promoted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_signup_now_link';
  $strongarm->value = array();
  $export['menu_options_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_play_now_promoted_game';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_play_now_promoted_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_promoted_signup_now_link';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_promoted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_signup_now_link';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_play_now_promoted_game';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_play_now_promoted_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_promoted_signup_now_link';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_promoted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_signup_now_link';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_play_now_promoted_game';
  $strongarm->value = '1';
  $export['node_preview_play_now_promoted_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_promoted_signup_now_link';
  $strongarm->value = '1';
  $export['node_preview_promoted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_signup_now_link';
  $strongarm->value = '1';
  $export['node_preview_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_play_now_promoted_game';
  $strongarm->value = 1;
  $export['node_submitted_play_now_promoted_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_promoted_signup_now_link';
  $strongarm->value = 1;
  $export['node_submitted_promoted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_signup_now_link';
  $strongarm->value = 0;
  $export['node_submitted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_expand_fieldset_play_now_promoted_game';
  $strongarm->value = '0';
  $export['scheduler_expand_fieldset_play_now_promoted_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_expand_fieldset_promoted_signup_now_link';
  $strongarm->value = '0';
  $export['scheduler_expand_fieldset_promoted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_expand_fieldset_signup_now_link';
  $strongarm->value = '0';
  $export['scheduler_expand_fieldset_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_play_now_promoted_game';
  $strongarm->value = 0;
  $export['scheduler_publish_enable_play_now_promoted_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_promoted_signup_now_link';
  $strongarm->value = 0;
  $export['scheduler_publish_enable_promoted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_signup_now_link';
  $strongarm->value = 0;
  $export['scheduler_publish_enable_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_past_date_play_now_promoted_game';
  $strongarm->value = 'error';
  $export['scheduler_publish_past_date_play_now_promoted_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_past_date_promoted_signup_now_link';
  $strongarm->value = 'error';
  $export['scheduler_publish_past_date_promoted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_past_date_signup_now_link';
  $strongarm->value = 'error';
  $export['scheduler_publish_past_date_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_play_now_promoted_game';
  $strongarm->value = 0;
  $export['scheduler_publish_required_play_now_promoted_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_promoted_signup_now_link';
  $strongarm->value = 0;
  $export['scheduler_publish_required_promoted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_signup_now_link';
  $strongarm->value = 0;
  $export['scheduler_publish_required_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_play_now_promoted_game';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_play_now_promoted_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_promoted_signup_now_link';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_promoted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_signup_now_link';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_play_now_promoted_game';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_play_now_promoted_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_promoted_signup_now_link';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_promoted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_signup_now_link';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_play_now_promoted_game';
  $strongarm->value = 0;
  $export['scheduler_unpublish_enable_play_now_promoted_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_promoted_signup_now_link';
  $strongarm->value = 0;
  $export['scheduler_unpublish_enable_promoted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_signup_now_link';
  $strongarm->value = 0;
  $export['scheduler_unpublish_enable_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_play_now_promoted_game';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_play_now_promoted_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_promoted_signup_now_link';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_promoted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_signup_now_link';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_play_now_promoted_game';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_play_now_promoted_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_promoted_signup_now_link';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_promoted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_signup_now_link';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_use_vertical_tabs_play_now_promoted_game';
  $strongarm->value = '1';
  $export['scheduler_use_vertical_tabs_play_now_promoted_game'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_use_vertical_tabs_promoted_signup_now_link';
  $strongarm->value = '1';
  $export['scheduler_use_vertical_tabs_promoted_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_use_vertical_tabs_signup_now_link';
  $strongarm->value = '1';
  $export['scheduler_use_vertical_tabs_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'unique_field_comp_signup_now_link';
  $strongarm->value = 'all';
  $export['unique_field_comp_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'unique_field_fields_signup_now_link';
  $strongarm->value = array(
    0 => 'field_countries_cce',
    1 => 'field_game',
    2 => 'field_customer',
  );
  $export['unique_field_fields_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'unique_field_scope_signup_now_link';
  $strongarm->value = 'type';
  $export['unique_field_scope_signup_now_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'unique_field_show_matches_signup_now_link';
  $strongarm->value = array(
    0 => 'show_matches',
  );
  $export['unique_field_show_matches_signup_now_link'] = $strongarm;

  return $export;
}
