<?php
/**
 * @file
 * mmorpg_game.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mmorpg_game_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'game_overview_articles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Game Overview Articles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Hero Image */
  $handler->display->display_options['fields']['field_article_hero_image']['id'] = 'field_article_hero_image';
  $handler->display->display_options['fields']['field_article_hero_image']['table'] = 'field_data_field_article_hero_image';
  $handler->display->display_options['fields']['field_article_hero_image']['field'] = 'field_article_hero_image';
  $handler->display->display_options['fields']['field_article_hero_image']['label'] = '';
  $handler->display->display_options['fields']['field_article_hero_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_hero_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_article_hero_image']['settings'] = array(
    'image_style' => 'overview_articles__200x155_',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Overview */
  $handler->display->display_options['fields']['field_article_overview']['id'] = 'field_article_overview';
  $handler->display->display_options['fields']['field_article_overview']['table'] = 'field_data_field_article_overview';
  $handler->display->display_options['fields']['field_article_overview']['field'] = 'field_article_overview';
  $handler->display->display_options['fields']['field_article_overview']['label'] = '';
  $handler->display->display_options['fields']['field_article_overview']['element_label_colon'] = FALSE;
  /* Field: Content: Promoted to front page */
  $handler->display->display_options['fields']['promote']['id'] = 'promote';
  $handler->display->display_options['fields']['promote']['table'] = 'node';
  $handler->display->display_options['fields']['promote']['field'] = 'promote';
  $handler->display->display_options['fields']['promote']['type'] = 'custom';
  $handler->display->display_options['fields']['promote']['type_custom_true'] = '<div>true</div>';
  $handler->display->display_options['fields']['promote']['type_custom_false'] = '<div>false</div>';
  $handler->display->display_options['fields']['promote']['not'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Game (field_game) */
  $handler->display->display_options['arguments']['field_game_target_id']['id'] = 'field_game_target_id';
  $handler->display->display_options['arguments']['field_game_target_id']['table'] = 'field_data_field_game';
  $handler->display->display_options['arguments']['field_game_target_id']['field'] = 'field_game_target_id';
  $handler->display->display_options['arguments']['field_game_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_game_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_game_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_game_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_game_target_id']['summary_options']['items_per_page'] = '25';
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
    'mmorpg_article' => 'mmorpg_article',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'field_game_target_id' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Game (field_game)',
    ),
  );
  $translatables['game_overview_articles'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Promoted to front page'),
    t('<div>true</div>'),
    t('<div>false</div>'),
    t('All'),
    t('Content pane'),
    t('View panes'),
  );
  $export['game_overview_articles'] = $view;

  $view = new view();
  $view->name = 'play_now';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Play Now';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Play Now';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_game_target_id']['id'] = 'field_game_target_id';
  $handler->display->display_options['relationships']['field_game_target_id']['table'] = 'field_data_field_game';
  $handler->display->display_options['relationships']['field_game_target_id']['field'] = 'field_game_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_game_node']['id'] = 'reverse_field_game_node';
  $handler->display->display_options['relationships']['reverse_field_game_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_game_node']['field'] = 'reverse_field_game_node';
  $handler->display->display_options['relationships']['reverse_field_game_node']['relationship'] = 'field_game_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_game_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Platforms */
  $handler->display->display_options['fields']['field_platforms']['id'] = 'field_platforms';
  $handler->display->display_options['fields']['field_platforms']['table'] = 'field_data_field_platforms';
  $handler->display->display_options['fields']['field_platforms']['field'] = 'field_platforms';
  $handler->display->display_options['fields']['field_platforms']['relationship'] = 'field_game_target_id';
  $handler->display->display_options['fields']['field_platforms']['label'] = '';
  $handler->display->display_options['fields']['field_platforms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_platforms']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Payment Methods */
  $handler->display->display_options['fields']['field_payment_methods_1']['id'] = 'field_payment_methods_1';
  $handler->display->display_options['fields']['field_payment_methods_1']['table'] = 'field_data_field_payment_methods';
  $handler->display->display_options['fields']['field_payment_methods_1']['field'] = 'field_payment_methods';
  $handler->display->display_options['fields']['field_payment_methods_1']['relationship'] = 'field_game_target_id';
  $handler->display->display_options['fields']['field_payment_methods_1']['label'] = 'Payment Types';
  $handler->display->display_options['fields']['field_payment_methods_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: MMO Genre */
  $handler->display->display_options['fields']['field_mmo_genre']['id'] = 'field_mmo_genre';
  $handler->display->display_options['fields']['field_mmo_genre']['table'] = 'field_data_field_mmo_genre';
  $handler->display->display_options['fields']['field_mmo_genre']['field'] = 'field_mmo_genre';
  $handler->display->display_options['fields']['field_mmo_genre']['relationship'] = 'field_game_target_id';
  $handler->display->display_options['fields']['field_mmo_genre']['label'] = 'Genre';
  $handler->display->display_options['fields']['field_mmo_genre']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Development Status */
  $handler->display->display_options['fields']['field_dev_status']['id'] = 'field_dev_status';
  $handler->display->display_options['fields']['field_dev_status']['table'] = 'field_data_field_dev_status';
  $handler->display->display_options['fields']['field_dev_status']['field'] = 'field_dev_status';
  $handler->display->display_options['fields']['field_dev_status']['relationship'] = 'field_game_target_id';
  $handler->display->display_options['fields']['field_dev_status']['label'] = 'Status';
  $handler->display->display_options['fields']['field_dev_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_game_target_id';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '600';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Show More';
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_screenshot_image']['id'] = 'field_screenshot_image';
  $handler->display->display_options['fields']['field_screenshot_image']['table'] = 'field_data_field_screenshot_image';
  $handler->display->display_options['fields']['field_screenshot_image']['field'] = 'field_screenshot_image';
  $handler->display->display_options['fields']['field_screenshot_image']['relationship'] = 'reverse_field_game_node';
  $handler->display->display_options['fields']['field_screenshot_image']['label'] = 'Screenshots';
  $handler->display->display_options['fields']['field_screenshot_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_screenshot_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_screenshot_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_screenshot_image']['delta_limit'] = '4';
  $handler->display->display_options['fields']['field_screenshot_image']['delta_offset'] = '0';
  /* Field: Field: Target URL */
  $handler->display->display_options['fields']['field_target_url']['id'] = 'field_target_url';
  $handler->display->display_options['fields']['field_target_url']['table'] = 'field_data_field_target_url';
  $handler->display->display_options['fields']['field_target_url']['field'] = 'field_target_url';
  $handler->display->display_options['fields']['field_target_url']['relationship'] = 'field_game_target_id';
  $handler->display->display_options['fields']['field_target_url']['label'] = '';
  $handler->display->display_options['fields']['field_target_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_target_url']['alter']['text'] = 'Play Now';
  $handler->display->display_options['fields']['field_target_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_target_url']['alter']['path'] = '[field_target_url-link_url]';
  $handler->display->display_options['fields']['field_target_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_target_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_target_url']['type'] = 'clickmeter_link_default';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'More info, videos, forums...';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'game/[nid]/overview';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Type */
  $handler->display->display_options['sorts']['type']['id'] = 'type';
  $handler->display->display_options['sorts']['type']['table'] = 'node';
  $handler->display->display_options['sorts']['type']['field'] = 'type';
  /* Sort criterion: Content: Tier (field_psnl_tier) */
  $handler->display->display_options['sorts']['field_psnl_tier_tid']['id'] = 'field_psnl_tier_tid';
  $handler->display->display_options['sorts']['field_psnl_tier_tid']['table'] = 'field_data_field_psnl_tier';
  $handler->display->display_options['sorts']['field_psnl_tier_tid']['field'] = 'field_psnl_tier_tid';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'promoted_signup_now_link' => 'promoted_signup_now_link',
    'signup_now_link' => 'signup_now_link',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_game_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'play-now';
  $translatables['play_now'] = array(
    t('Master'),
    t('Play Now'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content entity referenced from field_game'),
    t('Content referencing Content from field_game'),
    t('Payment Types'),
    t('Genre'),
    t('Status'),
    t('Show More'),
    t('Screenshots'),
    t('More info, videos, forums...'),
    t('Title'),
    t('Page'),
  );
  $export['play_now'] = $view;

  $view = new view();
  $view->name = 'screenshot_gallery_grid';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Screenshot Gallery Grid';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '18';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_game_target_id']['id'] = 'field_game_target_id';
  $handler->display->display_options['relationships']['field_game_target_id']['table'] = 'field_data_field_game';
  $handler->display->display_options['relationships']['field_game_target_id']['field'] = 'field_game_target_id';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_screenshot_image']['id'] = 'field_screenshot_image';
  $handler->display->display_options['fields']['field_screenshot_image']['table'] = 'field_data_field_screenshot_image';
  $handler->display->display_options['fields']['field_screenshot_image']['field'] = 'field_screenshot_image';
  $handler->display->display_options['fields']['field_screenshot_image']['label'] = '';
  $handler->display->display_options['fields']['field_screenshot_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_screenshot_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_screenshot_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_screenshot_image']['settings'] = array(
    'image_style' => 'screenshot_gallery__228_x_150_',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_screenshot_image']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_screenshot_image']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_game_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="screenshot_image">[field_screenshot_image]</div>
<div class="screenshot_hover">[title]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Game (field_game) */
  $handler->display->display_options['arguments']['field_game_target_id']['id'] = 'field_game_target_id';
  $handler->display->display_options['arguments']['field_game_target_id']['table'] = 'field_data_field_game';
  $handler->display->display_options['arguments']['field_game_target_id']['field'] = 'field_game_target_id';
  $handler->display->display_options['arguments']['field_game_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_game_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_game_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_game_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_game_target_id']['summary_options']['items_per_page'] = '25';
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
    'screenshot_gallery' => 'screenshot_gallery',
  );

  /* Display: Screenshot Gallery Grid */
  $handler = $view->new_display('panel_pane', 'Screenshot Gallery Grid', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'field_game_target_id' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Game (field_game)',
    ),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'game/%/screenshots';
  $translatables['screenshot_gallery_grid'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content entity referenced from field_game'),
    t('<div class="screenshot_image">[field_screenshot_image]</div>
<div class="screenshot_hover">[title]</div>'),
    t('All'),
    t('Screenshot Gallery Grid'),
    t('View panes'),
    t('Page'),
  );
  $export['screenshot_gallery_grid'] = $view;

  $view = new view();
  $view->name = 'video_exclusive';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Video Exclusive View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Video URL */
  $handler->display->display_options['fields']['field_video_url']['id'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['fields']['field_video_url']['field'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['relationship'] = 'field_game_target_id';
  $handler->display->display_options['fields']['field_video_url']['label'] = '';
  $handler->display->display_options['fields']['field_video_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_video_url']['type'] = 'isfield_video';
  $handler->display->display_options['fields']['field_video_url']['settings'] = array(
    'dimensions' => '670x400',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Game (field_game) */
  $handler->display->display_options['arguments']['field_game_target_id']['id'] = 'field_game_target_id';
  $handler->display->display_options['arguments']['field_game_target_id']['table'] = 'field_data_field_game';
  $handler->display->display_options['arguments']['field_game_target_id']['field'] = 'field_game_target_id';
  $handler->display->display_options['arguments']['field_game_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_game_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_game_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_game_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_game_target_id']['summary_options']['items_per_page'] = '25';
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
    'video' => 'video',
  );
  /* Filter criterion: Content: Game Overview (field_video_game_overview) */
  $handler->display->display_options['filters']['field_video_game_overview_value']['id'] = 'field_video_game_overview_value';
  $handler->display->display_options['filters']['field_video_game_overview_value']['table'] = 'field_data_field_video_game_overview';
  $handler->display->display_options['filters']['field_video_game_overview_value']['field'] = 'field_video_game_overview_value';
  $handler->display->display_options['filters']['field_video_game_overview_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'field_game_target_id' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Game (field_game)',
    ),
  );
  $translatables['video_exclusive'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Content pane'),
    t('View panes'),
  );
  $export['video_exclusive'] = $view;

  $view = new view();
  $view->name = 'video_gallery_grid';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Video Gallery Grid';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Video URL */
  $handler->display->display_options['fields']['field_video_url']['id'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['fields']['field_video_url']['field'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['label'] = '';
  $handler->display->display_options['fields']['field_video_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_video_url']['alter']['path'] = 'game/!1/video/[nid]';
  $handler->display->display_options['fields']['field_video_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_video_url']['type'] = 'isfield_thumbnail';
  $handler->display->display_options['fields']['field_video_url']['settings'] = array(
    'dimensions' => '140x105',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'game/!1/video/[nid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Video';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="screenshot_image">[field_video_url]</div>
<div class="screenshot_hover">[title]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Game (field_game) */
  $handler->display->display_options['arguments']['field_game_target_id']['id'] = 'field_game_target_id';
  $handler->display->display_options['arguments']['field_game_target_id']['table'] = 'field_data_field_game';
  $handler->display->display_options['arguments']['field_game_target_id']['field'] = 'field_game_target_id';
  $handler->display->display_options['arguments']['field_game_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_game_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_game_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_game_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_game_target_id']['summary_options']['items_per_page'] = '25';
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
    'video' => 'video',
  );

  /* Display: Video Gallery Grid */
  $handler = $view->new_display('panel_pane', 'Video Gallery Grid', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'field_game_target_id' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Game (field_game)',
    ),
  );
  $translatables['video_gallery_grid'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Video'),
    t('<div class="screenshot_image">[field_video_url]</div>
<div class="screenshot_hover">[title]</div>'),
    t('All'),
    t('Video Gallery Grid'),
    t('View panes'),
  );
  $export['video_gallery_grid'] = $view;

  $view = new view();
  $view->name = 'video_preview_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Video Preview Admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Video URL */
  $handler->display->display_options['fields']['field_video_url']['id'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['fields']['field_video_url']['field'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['label'] = '';
  $handler->display->display_options['fields']['field_video_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_video_url']['type'] = 'isfield_video';
  $handler->display->display_options['fields']['field_video_url']['settings'] = array(
    'dimensions' => '420x315',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'video' => 'video',
  );

  /* Display: Video Preview Admin */
  $handler = $view->new_display('panel_pane', 'Video Preview Admin', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:field_collection_item.archived',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $translatables['video_preview_admin'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Video Preview Admin'),
    t('View panes'),
  );
  $export['video_preview_admin'] = $view;

  return $export;
}
