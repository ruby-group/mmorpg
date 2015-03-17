<?php
/**
 * @file
 * mmorpg_games_to_play.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mmorpg_games_to_play_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'games_to_play';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Games To Play';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'MMOs to Play, Download or Pre-Order Now!';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_gtp_tier',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = 'Checkout our complete list of free to play, signup for, pre-order and download now MMORPGs!';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'tiers_games_to_play_' => 'tiers_games_to_play_',
    'ai_systems' => 0,
    'area_games_to_play_' => 0,
    'article_subcategory' => 0,
    'article_types' => 0,
    'blog_tags' => 0,
    'business_model' => 0,
    'camera_types' => 0,
    'cancel_reason' => 0,
    'card_types' => 0,
    'classification' => 0,
    'collision_and_physics' => 0,
    'column' => 0,
    'cons_highlights' => 0,
    'distribution_types' => 0,
    'engine' => 0,
    'esrb' => 0,
    'expansion_types' => 0,
    'faq_category' => 0,
    'game_development_status' => 0,
    'genres' => 0,
    'keys_per_day_spread' => 0,
    'languages' => 0,
    'mmo_genre' => 0,
    'offer_types' => 0,
    'origin' => 0,
    'payment_methods' => 0,
    'platforms' => 0,
    'player_controls' => 0,
    'pros_highlights' => 0,
    'rendering_engines' => 0,
    'screenshot_type' => 0,
    'shows_events' => 0,
    'sound_engines' => 0,
    'style' => 0,
    'tags' => 0,
    'video_category' => 0,
    'video_mode' => 0,
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_gtp_game_target_id']['id'] = 'field_gtp_game_target_id';
  $handler->display->display_options['relationships']['field_gtp_game_target_id']['table'] = 'field_data_field_gtp_game';
  $handler->display->display_options['relationships']['field_gtp_game_target_id']['field'] = 'field_gtp_game_target_id';
  /* Field: Content: Hero Image */
  $handler->display->display_options['fields']['field_game_hero_image']['id'] = 'field_game_hero_image';
  $handler->display->display_options['fields']['field_game_hero_image']['table'] = 'field_data_field_game_hero_image';
  $handler->display->display_options['fields']['field_game_hero_image']['field'] = 'field_game_hero_image';
  $handler->display->display_options['fields']['field_game_hero_image']['relationship'] = 'field_gtp_game_target_id';
  $handler->display->display_options['fields']['field_game_hero_image']['label'] = '';
  $handler->display->display_options['fields']['field_game_hero_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_game_hero_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_game_hero_image']['settings'] = array(
    'image_style' => 'games_to_play__26x26_',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_gtp_game_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Target URL */
  $handler->display->display_options['fields']['field_gtp_target_url']['id'] = 'field_gtp_target_url';
  $handler->display->display_options['fields']['field_gtp_target_url']['table'] = 'field_data_field_gtp_target_url';
  $handler->display->display_options['fields']['field_gtp_target_url']['field'] = 'field_gtp_target_url';
  $handler->display->display_options['fields']['field_gtp_target_url']['label'] = '';
  $handler->display->display_options['fields']['field_gtp_target_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_gtp_target_url']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['field_gtp_target_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_gtp_target_url']['alter']['path'] = '[field_gtp_target_url-url] ';
  $handler->display->display_options['fields']['field_gtp_target_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gtp_target_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_gtp_target_url']['type'] = 'link_absolute';
  /* Field: Content: Tier */
  $handler->display->display_options['fields']['field_gtp_tier']['id'] = 'field_gtp_tier';
  $handler->display->display_options['fields']['field_gtp_tier']['table'] = 'field_data_field_gtp_tier';
  $handler->display->display_options['fields']['field_gtp_tier']['field'] = 'field_gtp_tier';
  $handler->display->display_options['fields']['field_gtp_tier']['label'] = '';
  $handler->display->display_options['fields']['field_gtp_tier']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_gtp_tier']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Max links to display */
  $handler->display->display_options['fields']['field_tiers_max_links_to_display']['id'] = 'field_tiers_max_links_to_display';
  $handler->display->display_options['fields']['field_tiers_max_links_to_display']['table'] = 'field_data_field_tiers_max_links_to_display';
  $handler->display->display_options['fields']['field_tiers_max_links_to_display']['field'] = 'field_tiers_max_links_to_display';
  $handler->display->display_options['fields']['field_tiers_max_links_to_display']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_tiers_max_links_to_display']['label'] = '';
  $handler->display->display_options['fields']['field_tiers_max_links_to_display']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tiers_max_links_to_display']['element_wrapper_class'] = 'hidden';
  $handler->display->display_options['fields']['field_tiers_max_links_to_display']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Tier (field_gtp_tier) */
  $handler->display->display_options['sorts']['field_gtp_tier_tid']['id'] = 'field_gtp_tier_tid';
  $handler->display->display_options['sorts']['field_gtp_tier_tid']['table'] = 'field_data_field_gtp_tier';
  $handler->display->display_options['sorts']['field_gtp_tier_tid']['field'] = 'field_gtp_tier_tid';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'games_to_play' => 'games_to_play',
  );
  /* Filter criterion: Content: Area (field_gtp_area) */
  $handler->display->display_options['filters']['field_gtp_area_tid']['id'] = 'field_gtp_area_tid';
  $handler->display->display_options['filters']['field_gtp_area_tid']['table'] = 'field_data_field_gtp_area';
  $handler->display->display_options['filters']['field_gtp_area_tid']['field'] = 'field_gtp_area_tid';
  $handler->display->display_options['filters']['field_gtp_area_tid']['value'] = array(
    12687 => '12687',
  );
  $handler->display->display_options['filters']['field_gtp_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_gtp_area_tid']['vocabulary'] = 'area_games_to_play_';
  /* Filter criterion: Content: Schedule -  start date (field_gtp_schedule) */
  $handler->display->display_options['filters']['field_gtp_schedule_value']['id'] = 'field_gtp_schedule_value';
  $handler->display->display_options['filters']['field_gtp_schedule_value']['table'] = 'field_data_field_gtp_schedule';
  $handler->display->display_options['filters']['field_gtp_schedule_value']['field'] = 'field_gtp_schedule_value';
  $handler->display->display_options['filters']['field_gtp_schedule_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_gtp_schedule_value']['default_date'] = 'now';
  /* Filter criterion: Content: Schedule - end date (field_gtp_schedule:value2) */
  $handler->display->display_options['filters']['field_gtp_schedule_value2']['id'] = 'field_gtp_schedule_value2';
  $handler->display->display_options['filters']['field_gtp_schedule_value2']['table'] = 'field_data_field_gtp_schedule';
  $handler->display->display_options['filters']['field_gtp_schedule_value2']['field'] = 'field_gtp_schedule_value2';
  $handler->display->display_options['filters']['field_gtp_schedule_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_gtp_schedule_value2']['default_date'] = 'now';

  /* Display: Sitewide */
  $handler = $view->new_display('block', 'Sitewide', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'sidebar-listing';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'games_to_play' => 'games_to_play',
  );
  /* Filter criterion: Content: Area (field_gtp_area) */
  $handler->display->display_options['filters']['field_gtp_area_tid']['id'] = 'field_gtp_area_tid';
  $handler->display->display_options['filters']['field_gtp_area_tid']['table'] = 'field_data_field_gtp_area';
  $handler->display->display_options['filters']['field_gtp_area_tid']['field'] = 'field_gtp_area_tid';
  $handler->display->display_options['filters']['field_gtp_area_tid']['value'] = array(
    12688 => '12688',
  );
  $handler->display->display_options['filters']['field_gtp_area_tid']['vocabulary'] = 'area_games_to_play_';
  /* Filter criterion: Content: Schedule -  start date (field_gtp_schedule) */
  $handler->display->display_options['filters']['field_gtp_schedule_value']['id'] = 'field_gtp_schedule_value';
  $handler->display->display_options['filters']['field_gtp_schedule_value']['table'] = 'field_data_field_gtp_schedule';
  $handler->display->display_options['filters']['field_gtp_schedule_value']['field'] = 'field_gtp_schedule_value';
  $handler->display->display_options['filters']['field_gtp_schedule_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_gtp_schedule_value']['default_date'] = 'now';
  /* Filter criterion: Content: Schedule - end date (field_gtp_schedule:value2) */
  $handler->display->display_options['filters']['field_gtp_schedule_value2']['id'] = 'field_gtp_schedule_value2';
  $handler->display->display_options['filters']['field_gtp_schedule_value2']['table'] = 'field_data_field_gtp_schedule';
  $handler->display->display_options['filters']['field_gtp_schedule_value2']['field'] = 'field_gtp_schedule_value2';
  $handler->display->display_options['filters']['field_gtp_schedule_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_gtp_schedule_value2']['default_date'] = 'now';

  /* Display: Home Page */
  $handler = $view->new_display('block', 'Home Page', 'block_2');
  $export['games_to_play'] = $view;

  $view = new view();
  $view->name = 'games_to_play_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Games To Play Admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Games To Play (All)';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'status' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => 'Yes|No
No|Yes',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_gtp_tier',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title_1' => 'title_1',
    'field_gtp_area' => 'field_gtp_area',
    'field_gtp_schedule' => 'field_gtp_schedule',
    'field_gtp_schedule_1' => 'field_gtp_schedule_1',
    'edit_node' => 'edit_node',
    'field_gtp_tier' => 'edit_node',
    'nid' => 'edit_node',
    'delete_node' => 'edit_node',
    'field_gtp_target_url' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_gtp_area' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_gtp_schedule' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_gtp_schedule_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'field_gtp_tier' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_gtp_target_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_gtp_game_target_id']['id'] = 'field_gtp_game_target_id';
  $handler->display->display_options['relationships']['field_gtp_game_target_id']['table'] = 'field_data_field_gtp_game';
  $handler->display->display_options['relationships']['field_gtp_game_target_id']['field'] = 'field_gtp_game_target_id';
  $handler->display->display_options['relationships']['field_gtp_game_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_gtp_game_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Game';
  /* Field: Content: Area */
  $handler->display->display_options['fields']['field_gtp_area']['id'] = 'field_gtp_area';
  $handler->display->display_options['fields']['field_gtp_area']['table'] = 'field_data_field_gtp_area';
  $handler->display->display_options['fields']['field_gtp_area']['field'] = 'field_gtp_area';
  /* Field: Content: Schedule */
  $handler->display->display_options['fields']['field_gtp_schedule']['id'] = 'field_gtp_schedule';
  $handler->display->display_options['fields']['field_gtp_schedule']['table'] = 'field_data_field_gtp_schedule';
  $handler->display->display_options['fields']['field_gtp_schedule']['field'] = 'field_gtp_schedule';
  $handler->display->display_options['fields']['field_gtp_schedule']['label'] = 'Start';
  $handler->display->display_options['fields']['field_gtp_schedule']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gtp_schedule']['settings'] = array(
    'format_type' => 'short_date_w_o_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Schedule */
  $handler->display->display_options['fields']['field_gtp_schedule_1']['id'] = 'field_gtp_schedule_1';
  $handler->display->display_options['fields']['field_gtp_schedule_1']['table'] = 'field_data_field_gtp_schedule';
  $handler->display->display_options['fields']['field_gtp_schedule_1']['field'] = 'field_gtp_schedule';
  $handler->display->display_options['fields']['field_gtp_schedule_1']['label'] = 'End';
  $handler->display->display_options['fields']['field_gtp_schedule_1']['settings'] = array(
    'format_type' => 'short_date_w_o_time',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Tier */
  $handler->display->display_options['fields']['field_gtp_tier']['id'] = 'field_gtp_tier';
  $handler->display->display_options['fields']['field_gtp_tier']['table'] = 'field_data_field_gtp_tier';
  $handler->display->display_options['fields']['field_gtp_tier']['field'] = 'field_gtp_tier';
  $handler->display->display_options['fields']['field_gtp_tier']['label'] = '';
  $handler->display->display_options['fields']['field_gtp_tier']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_gtp_tier']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'unpublish';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'url_unpublish/[nid]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Field: Content: Target URL */
  $handler->display->display_options['fields']['field_gtp_target_url']['id'] = 'field_gtp_target_url';
  $handler->display->display_options['fields']['field_gtp_target_url']['table'] = 'field_data_field_gtp_target_url';
  $handler->display->display_options['fields']['field_gtp_target_url']['field'] = 'field_gtp_target_url';
  $handler->display->display_options['fields']['field_gtp_target_url']['label'] = '';
  $handler->display->display_options['fields']['field_gtp_target_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_gtp_target_url']['alter']['text'] = 'URL';
  $handler->display->display_options['fields']['field_gtp_target_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_gtp_target_url']['alter']['path'] = '[field_gtp_target_url-url]';
  $handler->display->display_options['fields']['field_gtp_target_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gtp_target_url']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'games_to_play' => 'games_to_play',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
  $handler->display->display_options['filters']['status']['group'] = 2;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Show Disabled?';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;

  /* Display: All */
  $handler = $view->new_display('page', 'All', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_gtp_game_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Game';
  /* Field: Content: Area */
  $handler->display->display_options['fields']['field_gtp_area']['id'] = 'field_gtp_area';
  $handler->display->display_options['fields']['field_gtp_area']['table'] = 'field_data_field_gtp_area';
  $handler->display->display_options['fields']['field_gtp_area']['field'] = 'field_gtp_area';
  /* Field: Content: Schedule */
  $handler->display->display_options['fields']['field_gtp_schedule']['id'] = 'field_gtp_schedule';
  $handler->display->display_options['fields']['field_gtp_schedule']['table'] = 'field_data_field_gtp_schedule';
  $handler->display->display_options['fields']['field_gtp_schedule']['field'] = 'field_gtp_schedule';
  $handler->display->display_options['fields']['field_gtp_schedule']['label'] = 'Start';
  $handler->display->display_options['fields']['field_gtp_schedule']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gtp_schedule']['settings'] = array(
    'format_type' => 'short_date_w_o_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Schedule */
  $handler->display->display_options['fields']['field_gtp_schedule_1']['id'] = 'field_gtp_schedule_1';
  $handler->display->display_options['fields']['field_gtp_schedule_1']['table'] = 'field_data_field_gtp_schedule';
  $handler->display->display_options['fields']['field_gtp_schedule_1']['field'] = 'field_gtp_schedule';
  $handler->display->display_options['fields']['field_gtp_schedule_1']['label'] = 'End';
  $handler->display->display_options['fields']['field_gtp_schedule_1']['settings'] = array(
    'format_type' => 'short_date_w_o_time',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Tier */
  $handler->display->display_options['fields']['field_gtp_tier']['id'] = 'field_gtp_tier';
  $handler->display->display_options['fields']['field_gtp_tier']['table'] = 'field_data_field_gtp_tier';
  $handler->display->display_options['fields']['field_gtp_tier']['field'] = 'field_gtp_tier';
  $handler->display->display_options['fields']['field_gtp_tier']['label'] = '';
  $handler->display->display_options['fields']['field_gtp_tier']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_gtp_tier']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'unpublish';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'url_unpublish/[nid]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Field: Content: Target URL */
  $handler->display->display_options['fields']['field_gtp_target_url']['id'] = 'field_gtp_target_url';
  $handler->display->display_options['fields']['field_gtp_target_url']['table'] = 'field_data_field_gtp_target_url';
  $handler->display->display_options['fields']['field_gtp_target_url']['field'] = 'field_gtp_target_url';
  $handler->display->display_options['fields']['field_gtp_target_url']['label'] = '';
  $handler->display->display_options['fields']['field_gtp_target_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_gtp_target_url']['alter']['text'] = 'URL';
  $handler->display->display_options['fields']['field_gtp_target_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_gtp_target_url']['alter']['path'] = '[field_gtp_target_url-url]';
  $handler->display->display_options['fields']['field_gtp_target_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gtp_target_url']['click_sort_column'] = 'url';
  $handler->display->display_options['path'] = 'admin/mmorpg/games-to-play-admin';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Games To Play';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Active */
  $handler = $view->new_display('page', 'Active', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Games To Play (Active)';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'games_to_play' => 'games_to_play',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
  $handler->display->display_options['filters']['status']['group'] = 2;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Show Disabled?';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Content: Schedule - end date (field_gtp_schedule:value2) */
  $handler->display->display_options['filters']['field_gtp_schedule_value2']['id'] = 'field_gtp_schedule_value2';
  $handler->display->display_options['filters']['field_gtp_schedule_value2']['table'] = 'field_data_field_gtp_schedule';
  $handler->display->display_options['filters']['field_gtp_schedule_value2']['field'] = 'field_gtp_schedule_value2';
  $handler->display->display_options['filters']['field_gtp_schedule_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_gtp_schedule_value2']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'admin/mmorpg/games-to-play-admin/active';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Active';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Past */
  $handler = $view->new_display('page', 'Past', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Games To Play (Past)';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'games_to_play' => 'games_to_play',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
  $handler->display->display_options['filters']['status']['group'] = 2;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Show Disabled?';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Content: Schedule - end date (field_gtp_schedule:value2) */
  $handler->display->display_options['filters']['field_gtp_schedule_value2']['id'] = 'field_gtp_schedule_value2';
  $handler->display->display_options['filters']['field_gtp_schedule_value2']['table'] = 'field_data_field_gtp_schedule';
  $handler->display->display_options['filters']['field_gtp_schedule_value2']['field'] = 'field_gtp_schedule_value2';
  $handler->display->display_options['filters']['field_gtp_schedule_value2']['operator'] = '<';
  $handler->display->display_options['filters']['field_gtp_schedule_value2']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'admin/mmorpg/games-to-play-admin/past';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Past';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['games_to_play_admin'] = $view;

  return $export;
}
