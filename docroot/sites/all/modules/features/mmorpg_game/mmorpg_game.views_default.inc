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
  );
  $export['game_overview_articles'] = $view;

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
    t('[field_screenshot_category-tid]
'),
    t('<div class="screenshot_image">[field_screenshot_image]</div>
[views_conditional]'),
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
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="video_hover"><span>Video</span></div>
<div class="video_image">[field_video_url]</div>
<div class="video_title">[title]</div>';
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
    t('<div class="video_hover"><span>Video</span></div>
<div class="video_image">[field_video_url]</div>
<div class="video_title">[title]</div>'),
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
