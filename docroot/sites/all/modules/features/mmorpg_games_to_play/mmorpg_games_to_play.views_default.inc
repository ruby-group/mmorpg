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

  /* Display: Home Page */
  $handler = $view->new_display('block', 'Home Page', 'block_2');
  $export['games_to_play'] = $view;

  return $export;
}
