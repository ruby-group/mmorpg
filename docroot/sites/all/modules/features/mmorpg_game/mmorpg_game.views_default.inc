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
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
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
  $handler->display->display_options['fields']['promote']['label'] = '';
  $handler->display->display_options['fields']['promote']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['promote']['type'] = 'custom';
  $handler->display->display_options['fields']['promote']['type_custom_true'] = '<div>true</div>';
  $handler->display->display_options['fields']['promote']['type_custom_false'] = '<div>false</div>';
  $handler->display->display_options['fields']['promote']['not'] = 0;
  /* Field: Content: ShareThis Link */
  $handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['table'] = 'node';
  $handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['label'] = '';
  $handler->display->display_options['fields']['sharethis']['element_label_colon'] = FALSE;
  /* Field: Content: Article Type */
  $handler->display->display_options['fields']['field_article_type']['id'] = 'field_article_type';
  $handler->display->display_options['fields']['field_article_type']['table'] = 'field_data_field_article_type';
  $handler->display->display_options['fields']['field_article_type']['field'] = 'field_article_type';
  $handler->display->display_options['fields']['field_article_type']['label'] = '';
  $handler->display->display_options['fields']['field_article_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'Keep Reading';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = 'Posted by [name] on [created]';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'F jS';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'overview_feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'game/%/overview/rss.xml';
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
    t('author'),
    t('<div>true</div>'),
    t('<div>false</div>'),
    t('Keep Reading'),
    t('Posted by [name] on [created]'),
    t('All'),
    t('Content pane'),
    t('View panes'),
    t('Feed'),
  );
  $export['game_overview_articles'] = $view;

  $view = new view();
  $view->name = 'game_ratings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Game Ratings';
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
  /* Relationship: Content: Vote results */
  $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['label'] = 'Graphics';
  $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
    'value_type' => 'percent',
    'tag' => 'Graphics',
    'function' => 'average',
  );
  /* Relationship: Content: Vote results */
  $handler->display->display_options['relationships']['votingapi_cache_1']['id'] = 'votingapi_cache_1';
  $handler->display->display_options['relationships']['votingapi_cache_1']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_cache_1']['field'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache_1']['label'] = 'Value';
  $handler->display->display_options['relationships']['votingapi_cache_1']['votingapi'] = array(
    'value_type' => 'percent',
    'tag' => 'Value',
    'function' => 'average',
  );
  /* Relationship: Content: Vote results */
  $handler->display->display_options['relationships']['votingapi_cache_2']['id'] = 'votingapi_cache_2';
  $handler->display->display_options['relationships']['votingapi_cache_2']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_cache_2']['field'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache_2']['label'] = 'Fun';
  $handler->display->display_options['relationships']['votingapi_cache_2']['votingapi'] = array(
    'value_type' => 'percent',
    'tag' => 'Fun',
    'function' => 'average',
  );
  /* Relationship: Content: Vote results */
  $handler->display->display_options['relationships']['votingapi_cache_3']['id'] = 'votingapi_cache_3';
  $handler->display->display_options['relationships']['votingapi_cache_3']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_cache_3']['field'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache_3']['label'] = 'Community';
  $handler->display->display_options['relationships']['votingapi_cache_3']['votingapi'] = array(
    'value_type' => 'percent',
    'tag' => 'Community',
    'function' => 'average',
  );
  /* Relationship: Content: Vote results */
  $handler->display->display_options['relationships']['votingapi_cache_4']['id'] = 'votingapi_cache_4';
  $handler->display->display_options['relationships']['votingapi_cache_4']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_cache_4']['field'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache_4']['label'] = 'Role-playing';
  $handler->display->display_options['relationships']['votingapi_cache_4']['votingapi'] = array(
    'value_type' => 'percent',
    'tag' => 'Role_playing',
    'function' => 'average',
  );
  /* Relationship: Content: Vote results */
  $handler->display->display_options['relationships']['votingapi_cache_5']['id'] = 'votingapi_cache_5';
  $handler->display->display_options['relationships']['votingapi_cache_5']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_cache_5']['field'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache_5']['label'] = 'Performance Lag';
  $handler->display->display_options['relationships']['votingapi_cache_5']['votingapi'] = array(
    'value_type' => 'percent',
    'tag' => 'Performance_lag',
    'function' => 'average',
  );
  /* Relationship: Content: Vote results */
  $handler->display->display_options['relationships']['votingapi_cache_6']['id'] = 'votingapi_cache_6';
  $handler->display->display_options['relationships']['votingapi_cache_6']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_cache_6']['field'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache_6']['label'] = 'Service';
  $handler->display->display_options['relationships']['votingapi_cache_6']['votingapi'] = array(
    'value_type' => 'percent',
    'tag' => 'Service',
    'function' => 'average',
  );
  /* Relationship: Content: Vote results */
  $handler->display->display_options['relationships']['votingapi_cache_7']['id'] = 'votingapi_cache_7';
  $handler->display->display_options['relationships']['votingapi_cache_7']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_cache_7']['field'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache_7']['label'] = 'Sound';
  $handler->display->display_options['relationships']['votingapi_cache_7']['votingapi'] = array(
    'value_type' => 'percent',
    'tag' => 'Sound',
    'function' => 'average',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['relationship'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value']['label'] = 'Graphics';
  $handler->display->display_options['fields']['value']['alter']['text'] = '[value]';
  $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value']['precision'] = '0';
  $handler->display->display_options['fields']['value']['separator'] = '.';
  $handler->display->display_options['fields']['value']['appearance'] = 'rate_views_widget';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['relationship'] = 'votingapi_cache_1';
  $handler->display->display_options['fields']['value_1']['precision'] = '0';
  $handler->display->display_options['fields']['value_1']['appearance'] = 'rate_views_widget';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value_3']['id'] = 'value_3';
  $handler->display->display_options['fields']['value_3']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_3']['field'] = 'value';
  $handler->display->display_options['fields']['value_3']['relationship'] = 'votingapi_cache_2';
  $handler->display->display_options['fields']['value_3']['label'] = 'Fun';
  $handler->display->display_options['fields']['value_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_3']['precision'] = '0';
  $handler->display->display_options['fields']['value_3']['appearance'] = 'rate_views_widget';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value_2']['id'] = 'value_2';
  $handler->display->display_options['fields']['value_2']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_2']['field'] = 'value';
  $handler->display->display_options['fields']['value_2']['relationship'] = 'votingapi_cache_3';
  $handler->display->display_options['fields']['value_2']['label'] = 'Community';
  $handler->display->display_options['fields']['value_2']['precision'] = '0';
  $handler->display->display_options['fields']['value_2']['appearance'] = 'rate_views_widget';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value_4']['id'] = 'value_4';
  $handler->display->display_options['fields']['value_4']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_4']['field'] = 'value';
  $handler->display->display_options['fields']['value_4']['relationship'] = 'votingapi_cache_4';
  $handler->display->display_options['fields']['value_4']['label'] = 'Role-playing';
  $handler->display->display_options['fields']['value_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_4']['precision'] = '0';
  $handler->display->display_options['fields']['value_4']['appearance'] = 'rate_views_widget';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value_5']['id'] = 'value_5';
  $handler->display->display_options['fields']['value_5']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_5']['field'] = 'value';
  $handler->display->display_options['fields']['value_5']['relationship'] = 'votingapi_cache_5';
  $handler->display->display_options['fields']['value_5']['label'] = 'Performance/Lag';
  $handler->display->display_options['fields']['value_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_5']['precision'] = '0';
  $handler->display->display_options['fields']['value_5']['appearance'] = 'rate_views_widget';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value_6']['id'] = 'value_6';
  $handler->display->display_options['fields']['value_6']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_6']['field'] = 'value';
  $handler->display->display_options['fields']['value_6']['relationship'] = 'votingapi_cache_6';
  $handler->display->display_options['fields']['value_6']['label'] = 'Service';
  $handler->display->display_options['fields']['value_6']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_6']['precision'] = '0';
  $handler->display->display_options['fields']['value_6']['appearance'] = 'rate_views_widget';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value_7']['id'] = 'value_7';
  $handler->display->display_options['fields']['value_7']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_7']['field'] = 'value';
  $handler->display->display_options['fields']['value_7']['relationship'] = 'votingapi_cache_7';
  $handler->display->display_options['fields']['value_7']['label'] = 'Sound';
  $handler->display->display_options['fields']['value_7']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_7']['precision'] = '0';
  $handler->display->display_options['fields']['value_7']['appearance'] = 'rate_views_widget';
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
    'game' => 'game',
  );

  /* Display: Active Ratings */
  $handler = $view->new_display('page', 'Active Ratings', 'active_ratings');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="cell ratingstotal"><span class="label">Player Rating</span><h3 class="currentScore">8.6</h3></div>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<input type="submit" name="submit" value="Cast your rating" class="btn large cta" id="castRatingSubmit">';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['path'] = 'active_ratings';

  /* Display: Inactive Ratings */
  $handler = $view->new_display('page', 'Inactive Ratings', 'inactive_ratings');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="cell ratingstotal">
										<span class="label">Player Rating</span><h3 class="currentScore">8.6</h3>
										<a href="#" class="btn castratebutton">Rate this Game</a>
									</div>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['relationship'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value']['label'] = 'Graphics';
  $handler->display->display_options['fields']['value']['alter']['text'] = '[value]';
  $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value']['precision'] = '0';
  $handler->display->display_options['fields']['value']['separator'] = '.';
  $handler->display->display_options['fields']['value']['appearance'] = 'rate_views_widget_disabled';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['relationship'] = 'votingapi_cache_1';
  $handler->display->display_options['fields']['value_1']['precision'] = '0';
  $handler->display->display_options['fields']['value_1']['appearance'] = 'rate_views_widget_disabled';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value_3']['id'] = 'value_3';
  $handler->display->display_options['fields']['value_3']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_3']['field'] = 'value';
  $handler->display->display_options['fields']['value_3']['relationship'] = 'votingapi_cache_2';
  $handler->display->display_options['fields']['value_3']['label'] = 'Fun';
  $handler->display->display_options['fields']['value_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_3']['precision'] = '0';
  $handler->display->display_options['fields']['value_3']['appearance'] = 'rate_views_widget_disabled';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value_2']['id'] = 'value_2';
  $handler->display->display_options['fields']['value_2']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_2']['field'] = 'value';
  $handler->display->display_options['fields']['value_2']['relationship'] = 'votingapi_cache_3';
  $handler->display->display_options['fields']['value_2']['label'] = 'Community';
  $handler->display->display_options['fields']['value_2']['precision'] = '0';
  $handler->display->display_options['fields']['value_2']['appearance'] = 'rate_views_widget_disabled';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value_4']['id'] = 'value_4';
  $handler->display->display_options['fields']['value_4']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_4']['field'] = 'value';
  $handler->display->display_options['fields']['value_4']['relationship'] = 'votingapi_cache_4';
  $handler->display->display_options['fields']['value_4']['label'] = 'Role-playing';
  $handler->display->display_options['fields']['value_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_4']['precision'] = '0';
  $handler->display->display_options['fields']['value_4']['appearance'] = 'rate_views_widget_disabled';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value_5']['id'] = 'value_5';
  $handler->display->display_options['fields']['value_5']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_5']['field'] = 'value';
  $handler->display->display_options['fields']['value_5']['relationship'] = 'votingapi_cache_5';
  $handler->display->display_options['fields']['value_5']['label'] = 'Performance/Lag';
  $handler->display->display_options['fields']['value_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_5']['precision'] = '0';
  $handler->display->display_options['fields']['value_5']['appearance'] = 'rate_views_widget_disabled';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value_6']['id'] = 'value_6';
  $handler->display->display_options['fields']['value_6']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_6']['field'] = 'value';
  $handler->display->display_options['fields']['value_6']['relationship'] = 'votingapi_cache_6';
  $handler->display->display_options['fields']['value_6']['label'] = 'Service';
  $handler->display->display_options['fields']['value_6']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_6']['precision'] = '0';
  $handler->display->display_options['fields']['value_6']['appearance'] = 'rate_views_widget_disabled';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value_7']['id'] = 'value_7';
  $handler->display->display_options['fields']['value_7']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_7']['field'] = 'value';
  $handler->display->display_options['fields']['value_7']['relationship'] = 'votingapi_cache_7';
  $handler->display->display_options['fields']['value_7']['label'] = 'Sound';
  $handler->display->display_options['fields']['value_7']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_7']['precision'] = '0';
  $handler->display->display_options['fields']['value_7']['appearance'] = 'rate_views_widget_disabled';
  $handler->display->display_options['path'] = 'inactive_ratings';
  $translatables['game_ratings'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Graphics'),
    t('Value'),
    t('Fun'),
    t('Community'),
    t('Role-playing'),
    t('Performance Lag'),
    t('Service'),
    t('Sound'),
    t('[value]'),
    t('.'),
    t(','),
    t('Performance/Lag'),
    t('All'),
    t('Active Ratings'),
    t('<div class="cell ratingstotal"><span class="label">Player Rating</span><h3 class="currentScore">8.6</h3></div>'),
    t('<input type="submit" name="submit" value="Cast your rating" class="btn large cta" id="castRatingSubmit">'),
    t('Inactive Ratings'),
    t('<div class="cell ratingstotal">
										<span class="label">Player Rating</span><h3 class="currentScore">8.6</h3>
										<a href="#" class="btn castratebutton">Rate this Game</a>
									</div>'),
  );
  $export['game_ratings'] = $view;

  $view = new view();
  $view->name = 'reviews';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'reviews';
  $view->human_name = 'Reviews';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Reviews: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'reviews';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Reviews: Node */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'reviews';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'promoted_signup_now_links__26_x_26_';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name] writes:';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Reviews: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'reviews';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'n/j/y H:i:s A';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Reviews: Review */
  $handler->display->display_options['fields']['review']['id'] = 'review';
  $handler->display->display_options['fields']['review']['table'] = 'reviews';
  $handler->display->display_options['fields']['review']['field'] = 'review';
  $handler->display->display_options['fields']['review']['label'] = '';
  $handler->display->display_options['fields']['review']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Reviews: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'reviews';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Review Count */
  $handler = $view->new_display('page', 'Review Count', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Reviews: Node review count */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'reviews_count';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'nid';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['count']['alter']['text'] = '[count] Comments';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'review-count/%';
  $translatables['reviews'] = array(
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
    t('User'),
    t('Node'),
    t('[name] writes:'),
    t('All'),
    t('Review Count'),
    t('[count] Comments'),
    t('.'),
    t(','),
  );
  $export['reviews'] = $view;

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
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_screenshot_category_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Show All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => 'House Submitted|Official Only
User Submitted|User Uploaded Only',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
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
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_screenshot_category']['id'] = 'field_screenshot_category';
  $handler->display->display_options['fields']['field_screenshot_category']['table'] = 'field_data_field_screenshot_category';
  $handler->display->display_options['fields']['field_screenshot_category']['field'] = 'field_screenshot_category';
  $handler->display->display_options['fields']['field_screenshot_category']['label'] = '';
  $handler->display->display_options['fields']['field_screenshot_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_screenshot_category']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_screenshot_category']['alter']['text'] = '[field_screenshot_category-tid]
';
  $handler->display->display_options['fields']['field_screenshot_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_screenshot_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_screenshot_category';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = '378';
  $handler->display->display_options['fields']['views_conditional']['then'] = '<div class="screenshot_hover user_submitted"><span>User Photo</span></div>';
  $handler->display->display_options['fields']['views_conditional']['or'] = '<div class="screenshot_hover house_submitted"><span>Photo</span></div>';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="screenshot_image">[field_screenshot_image]</div>
[views_conditional]';
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
  /* Filter criterion: Content: Category (field_screenshot_category) */
  $handler->display->display_options['filters']['field_screenshot_category_tid']['id'] = 'field_screenshot_category_tid';
  $handler->display->display_options['filters']['field_screenshot_category_tid']['table'] = 'field_data_field_screenshot_category';
  $handler->display->display_options['filters']['field_screenshot_category_tid']['field'] = 'field_screenshot_category_tid';
  $handler->display->display_options['filters']['field_screenshot_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_screenshot_category_tid']['expose']['operator_id'] = 'field_screenshot_category_tid_op';
  $handler->display->display_options['filters']['field_screenshot_category_tid']['expose']['operator'] = 'field_screenshot_category_tid_op';
  $handler->display->display_options['filters']['field_screenshot_category_tid']['expose']['identifier'] = 'field_screenshot_category_tid';
  $handler->display->display_options['filters']['field_screenshot_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_screenshot_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_screenshot_category_tid']['vocabulary'] = 'screenshot_type';

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
  $handler->display->display_options['path'] = 'game/%/screenshotview';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'game/%/screenshots/rss.xml';
  $translatables['screenshot_gallery_grid'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Advanced options'),
    t('Show All'),
    t('House Submitted|Official Only
User Submitted|User Uploaded Only'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content entity referenced from field_game'),
    t('[field_screenshot_category-tid]
'),
    t('<div class="screenshot_image">[field_screenshot_image]</div>
[views_conditional]'),
    t('All'),
    t('Screenshot Gallery Grid'),
    t('View panes'),
    t('Page'),
    t('Feed'),
  );
  $export['screenshot_gallery_grid'] = $view;

  $view = new view();
  $view->name = 'video_details_player';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Video Details Player';
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
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="promoted_bg"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  $translatables['video_details_player'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="promoted_bg"></div>'),
    t('All'),
  );
  $export['video_details_player'] = $view;

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
  $handler->display->display_options['fields']['field_video_url']['label'] = '';
  $handler->display->display_options['fields']['field_video_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_video_url']['type'] = 'isfield_video';
  $handler->display->display_options['fields']['field_video_url']['settings'] = array(
    'dimensions' => '480x360',
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
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="promoted_bg"></div>';
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
    t('<div class="promoted_bg"></div>'),
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
  $handler->display->display_options['style_plugin'] = 'default';
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
    'dimensions' => '150x120',
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
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/game/!1/video/[nid]"><div class="video_hover"><span>Video</span></div></a>
<div class="video_image">[field_video_url]</div>
<div class="video_title">[title]</div>';
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'game/!1/video/[nid]';
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

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'game/%/videos/rss.xml';
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
    t('<a href="/game/!1/video/[nid]"><div class="video_hover"><span>Video</span></div></a>
<div class="video_image">[field_video_url]</div>
<div class="video_title">[title]</div>'),
    t('All'),
    t('Video Gallery Grid'),
    t('View panes'),
    t('Feed'),
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
