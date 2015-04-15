<?php
/**
 * @file
 * mmorpg_signup_now.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mmorpg_signup_now_views_default_views() {
  $export = array();

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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_game_target_id']['id'] = 'field_game_target_id';
  $handler->display->display_options['relationships']['field_game_target_id']['table'] = 'field_data_field_game';
  $handler->display->display_options['relationships']['field_game_target_id']['field'] = 'field_game_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_game_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Platforms */
  $handler->display->display_options['fields']['field_platforms']['id'] = 'field_platforms';
  $handler->display->display_options['fields']['field_platforms']['table'] = 'field_data_field_platforms';
  $handler->display->display_options['fields']['field_platforms']['field'] = 'field_platforms';
  $handler->display->display_options['fields']['field_platforms']['relationship'] = 'field_game_target_id';
  $handler->display->display_options['fields']['field_platforms']['label'] = '';
  $handler->display->display_options['fields']['field_platforms']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_platforms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_platforms']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Payment Methods */
  $handler->display->display_options['fields']['field_payment_methods_1']['id'] = 'field_payment_methods_1';
  $handler->display->display_options['fields']['field_payment_methods_1']['table'] = 'field_data_field_payment_methods';
  $handler->display->display_options['fields']['field_payment_methods_1']['field'] = 'field_payment_methods';
  $handler->display->display_options['fields']['field_payment_methods_1']['relationship'] = 'field_game_target_id';
  $handler->display->display_options['fields']['field_payment_methods_1']['label'] = 'Payment Types';
  $handler->display->display_options['fields']['field_payment_methods_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_payment_methods_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: MMO Genre */
  $handler->display->display_options['fields']['field_mmo_genre']['id'] = 'field_mmo_genre';
  $handler->display->display_options['fields']['field_mmo_genre']['table'] = 'field_data_field_mmo_genre';
  $handler->display->display_options['fields']['field_mmo_genre']['field'] = 'field_mmo_genre';
  $handler->display->display_options['fields']['field_mmo_genre']['relationship'] = 'field_game_target_id';
  $handler->display->display_options['fields']['field_mmo_genre']['label'] = 'Genre';
  $handler->display->display_options['fields']['field_mmo_genre']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mmo_genre']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Development Status */
  $handler->display->display_options['fields']['field_dev_status']['id'] = 'field_dev_status';
  $handler->display->display_options['fields']['field_dev_status']['table'] = 'field_data_field_dev_status';
  $handler->display->display_options['fields']['field_dev_status']['field'] = 'field_dev_status';
  $handler->display->display_options['fields']['field_dev_status']['relationship'] = 'field_game_target_id';
  $handler->display->display_options['fields']['field_dev_status']['label'] = 'Status';
  $handler->display->display_options['fields']['field_dev_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dev_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_game_target_id';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Show More';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[nid]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'play_now_screenshots';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Field: Target URL */
  $handler->display->display_options['fields']['field_target_url']['id'] = 'field_target_url';
  $handler->display->display_options['fields']['field_target_url']['table'] = 'field_data_field_target_url';
  $handler->display->display_options['fields']['field_target_url']['field'] = 'field_target_url';
  $handler->display->display_options['fields']['field_target_url']['label'] = '';
  $handler->display->display_options['fields']['field_target_url']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_game_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'More info, videos, forums...';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'game/[nid]/overview';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="play_now_row_header">
<div class="play_now_title">[title]</div>
<div class="play_now_platforms">[field_platforms]</div>
</div>
<div class="play_now_row_details">
<div class="play_now_details play_now_payment"><span class="label">Payment Types: </span><span class="content payment_content">[field_payment_methods_1],</span></div>
<div class="play_now_details play_now_genre"><span class="label">Genre: </span><span class="content genre_content">[field_mmo_genre],</span></div>
<div class="play_now_details play_now_status"><span class="label">Status: </span><span class="content status_content">[field_dev_status]</span></div>
</div>
<div class="play_now_row_content">
<div class="play_now_body">[body]</div>
<div class="play_now_screenshots">[view]</div>
</div>
<div class="play_now_row_footer">
<div class="play_now_url">[field_target_url]</div>
<div class="play_now_more">[nid]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Platforms (field_platforms) */
  $handler->display->display_options['arguments']['field_platforms_tid']['id'] = 'field_platforms_tid';
  $handler->display->display_options['arguments']['field_platforms_tid']['table'] = 'field_data_field_platforms';
  $handler->display->display_options['arguments']['field_platforms_tid']['field'] = 'field_platforms_tid';
  $handler->display->display_options['arguments']['field_platforms_tid']['relationship'] = 'field_game_target_id';
  $handler->display->display_options['arguments']['field_platforms_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_platforms_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_platforms_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_platforms_tid']['summary_options']['items_per_page'] = '25';
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
    'signup_now_link' => 'signup_now_link',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_game_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['group'] = 1;
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

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'playnow.xml';

  /* Display: Promoted Play Now */
  $handler = $view->new_display('panel_pane', 'Promoted Play Now', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_game_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'More info, videos, forums...';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'game/[nid]/overview';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Background Image */
  $handler->display->display_options['fields']['field_pnpg_background_image']['id'] = 'field_pnpg_background_image';
  $handler->display->display_options['fields']['field_pnpg_background_image']['table'] = 'field_data_field_pnpg_background_image';
  $handler->display->display_options['fields']['field_pnpg_background_image']['field'] = 'field_pnpg_background_image';
  $handler->display->display_options['fields']['field_pnpg_background_image']['label'] = '';
  $handler->display->display_options['fields']['field_pnpg_background_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pnpg_background_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pnpg_background_image']['settings'] = array(
    'image_style' => 'promoted_play_now_background',
    'image_link' => '',
  );
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
    'play_now_promoted_game' => 'play_now_promoted_game',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $translatables['play_now'] = array(
    t('Master'),
    t('Play Now'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content entity referenced from field_game'),
    t('Payment Types'),
    t('Genre'),
    t('Status'),
    t('Show More'),
    t('More info, videos, forums...'),
    t('<div class="play_now_row_header">
<div class="play_now_title">[title]</div>
<div class="play_now_platforms">[field_platforms]</div>
</div>
<div class="play_now_row_details">
<div class="play_now_details play_now_payment"><span class="label">Payment Types: </span><span class="content payment_content">[field_payment_methods_1],</span></div>
<div class="play_now_details play_now_genre"><span class="label">Genre: </span><span class="content genre_content">[field_mmo_genre],</span></div>
<div class="play_now_details play_now_status"><span class="label">Status: </span><span class="content status_content">[field_dev_status]</span></div>
</div>
<div class="play_now_row_content">
<div class="play_now_body">[body]</div>
<div class="play_now_screenshots">[view]</div>
</div>
<div class="play_now_row_footer">
<div class="play_now_url">[field_target_url]</div>
<div class="play_now_more">[nid]</div>
</div>'),
    t('All'),
    t('Title'),
    t('Page'),
    t('Feed'),
    t('Promoted Play Now'),
    t('Screenshots'),
    t('View panes'),
  );
  $export['play_now'] = $view;

  $view = new view();
  $view->name = 'play_now_screenshots';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Play Now Screenshots';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  $handler->display->display_options['fields']['field_screenshot_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_screenshot_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_screenshot_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_screenshot_image']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_screenshot_image']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_game_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
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
  $translatables['play_now_screenshots'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content entity referenced from field_game'),
    t('All'),
  );
  $export['play_now_screenshots'] = $view;

  $view = new view();
  $view->name = 'play_now_slider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Play Now Slider';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_game_target_id']['id'] = 'field_game_target_id';
  $handler->display->display_options['relationships']['field_game_target_id']['table'] = 'field_data_field_game';
  $handler->display->display_options['relationships']['field_game_target_id']['field'] = 'field_game_target_id';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_game_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'link';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Hero Image */
  $handler->display->display_options['fields']['field_game_hero_image']['id'] = 'field_game_hero_image';
  $handler->display->display_options['fields']['field_game_hero_image']['table'] = 'field_data_field_game_hero_image';
  $handler->display->display_options['fields']['field_game_hero_image']['field'] = 'field_game_hero_image';
  $handler->display->display_options['fields']['field_game_hero_image']['relationship'] = 'field_game_target_id';
  $handler->display->display_options['fields']['field_game_hero_image']['label'] = '';
  $handler->display->display_options['fields']['field_game_hero_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_game_hero_image']['alter']['path'] = 'game/[nid]/overview';
  $handler->display->display_options['fields']['field_game_hero_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_game_hero_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_game_hero_image']['settings'] = array(
    'image_style' => 'plaw_now_slider',
    'image_link' => '',
  );
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

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $translatables['play_now_slider'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content entity referenced from field_game'),
    t('link'),
    t('Content pane'),
    t('View panes'),
  );
  $export['play_now_slider'] = $view;

  $view = new view();
  $view->name = 'promoted_signup_now_link';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Promoted Signup Now Link';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_psnl_tier',
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
  $handler->display->display_options['relationships']['field_game_target_id']['id'] = 'field_game_target_id';
  $handler->display->display_options['relationships']['field_game_target_id']['table'] = 'field_data_field_game';
  $handler->display->display_options['relationships']['field_game_target_id']['field'] = 'field_game_target_id';
  /* Field: Content: Hero Image */
  $handler->display->display_options['fields']['field_game_hero_image']['id'] = 'field_game_hero_image';
  $handler->display->display_options['fields']['field_game_hero_image']['table'] = 'field_data_field_game_hero_image';
  $handler->display->display_options['fields']['field_game_hero_image']['field'] = 'field_game_hero_image';
  $handler->display->display_options['fields']['field_game_hero_image']['relationship'] = 'field_game_target_id';
  $handler->display->display_options['fields']['field_game_hero_image']['label'] = '';
  $handler->display->display_options['fields']['field_game_hero_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_game_hero_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_game_hero_image']['settings'] = array(
    'image_style' => 'promoted_signup_now_links__26_x_26_',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_game_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Target URL */
  $handler->display->display_options['fields']['field_target_url']['id'] = 'field_target_url';
  $handler->display->display_options['fields']['field_target_url']['table'] = 'field_data_field_target_url';
  $handler->display->display_options['fields']['field_target_url']['field'] = 'field_target_url';
  $handler->display->display_options['fields']['field_target_url']['label'] = '';
  $handler->display->display_options['fields']['field_target_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_target_url']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['field_target_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_target_url']['alter']['path'] = '[field_target_url-link_url]';
  $handler->display->display_options['fields']['field_target_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_target_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_target_url']['type'] = 'clickmeter_link_default';
  /* Field: Content: Tier */
  $handler->display->display_options['fields']['field_psnl_tier']['id'] = 'field_psnl_tier';
  $handler->display->display_options['fields']['field_psnl_tier']['table'] = 'field_data_field_psnl_tier';
  $handler->display->display_options['fields']['field_psnl_tier']['field'] = 'field_psnl_tier';
  $handler->display->display_options['fields']['field_psnl_tier']['label'] = '';
  $handler->display->display_options['fields']['field_psnl_tier']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_psnl_tier']['element_label_colon'] = FALSE;
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
  /* Sort criterion: Content: Type */
  $handler->display->display_options['sorts']['type']['id'] = 'type';
  $handler->display->display_options['sorts']['type']['table'] = 'node';
  $handler->display->display_options['sorts']['type']['field'] = 'type';
  /* Sort criterion: Content: Tier (field_psnl_tier) */
  $handler->display->display_options['sorts']['field_psnl_tier_tid']['id'] = 'field_psnl_tier_tid';
  $handler->display->display_options['sorts']['field_psnl_tier_tid']['table'] = 'field_data_field_psnl_tier';
  $handler->display->display_options['sorts']['field_psnl_tier_tid']['field'] = 'field_psnl_tier_tid';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Schedule -  start date (field_psnl_schedule) */
  $handler->display->display_options['filters']['field_psnl_schedule_value']['id'] = 'field_psnl_schedule_value';
  $handler->display->display_options['filters']['field_psnl_schedule_value']['table'] = 'field_data_field_psnl_schedule';
  $handler->display->display_options['filters']['field_psnl_schedule_value']['field'] = 'field_psnl_schedule_value';
  $handler->display->display_options['filters']['field_psnl_schedule_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_psnl_schedule_value']['group'] = 1;
  $handler->display->display_options['filters']['field_psnl_schedule_value']['default_date'] = 'now';
  /* Filter criterion: Content: Schedule - end date (field_psnl_schedule:value2) */
  $handler->display->display_options['filters']['field_psnl_schedule_value2']['id'] = 'field_psnl_schedule_value2';
  $handler->display->display_options['filters']['field_psnl_schedule_value2']['table'] = 'field_data_field_psnl_schedule';
  $handler->display->display_options['filters']['field_psnl_schedule_value2']['field'] = 'field_psnl_schedule_value2';
  $handler->display->display_options['filters']['field_psnl_schedule_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_psnl_schedule_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_psnl_schedule_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'signup_now_link' => 'signup_now_link',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;

  /* Display: Sitewide */
  $handler = $view->new_display('panel_pane', 'Sitewide', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'A content pane for sitewide promoted links';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'promoted_signup_now_link' => 'promoted_signup_now_link',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Area (field_psnl_area) */
  $handler->display->display_options['filters']['field_psnl_area_tid']['id'] = 'field_psnl_area_tid';
  $handler->display->display_options['filters']['field_psnl_area_tid']['table'] = 'field_data_field_psnl_area';
  $handler->display->display_options['filters']['field_psnl_area_tid']['field'] = 'field_psnl_area_tid';
  $handler->display->display_options['filters']['field_psnl_area_tid']['value'] = array(
    12685 => '12685',
  );
  $handler->display->display_options['filters']['field_psnl_area_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_psnl_area_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_psnl_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_psnl_area_tid']['vocabulary'] = 'area_games_to_play_';
  /* Filter criterion: Content: Schedule -  start date (field_psnl_schedule) */
  $handler->display->display_options['filters']['field_psnl_schedule_value']['id'] = 'field_psnl_schedule_value';
  $handler->display->display_options['filters']['field_psnl_schedule_value']['table'] = 'field_data_field_psnl_schedule';
  $handler->display->display_options['filters']['field_psnl_schedule_value']['field'] = 'field_psnl_schedule_value';
  $handler->display->display_options['filters']['field_psnl_schedule_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_psnl_schedule_value']['group'] = 1;
  $handler->display->display_options['filters']['field_psnl_schedule_value']['default_date'] = 'now';
  /* Filter criterion: Content: Schedule - end date (field_psnl_schedule:value2) */
  $handler->display->display_options['filters']['field_psnl_schedule_value2']['id'] = 'field_psnl_schedule_value2';
  $handler->display->display_options['filters']['field_psnl_schedule_value2']['table'] = 'field_data_field_psnl_schedule';
  $handler->display->display_options['filters']['field_psnl_schedule_value2']['field'] = 'field_psnl_schedule_value2';
  $handler->display->display_options['filters']['field_psnl_schedule_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_psnl_schedule_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_psnl_schedule_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'signup_now_link' => 'signup_now_link',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;

  /* Display: Home Page */
  $handler = $view->new_display('panel_pane', 'Home Page', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'A content pane to display promoted links on home page';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'promoted_signup_now_link' => 'promoted_signup_now_link',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Schedule -  start date (field_psnl_schedule) */
  $handler->display->display_options['filters']['field_psnl_schedule_value']['id'] = 'field_psnl_schedule_value';
  $handler->display->display_options['filters']['field_psnl_schedule_value']['table'] = 'field_data_field_psnl_schedule';
  $handler->display->display_options['filters']['field_psnl_schedule_value']['field'] = 'field_psnl_schedule_value';
  $handler->display->display_options['filters']['field_psnl_schedule_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_psnl_schedule_value']['group'] = 1;
  $handler->display->display_options['filters']['field_psnl_schedule_value']['default_date'] = 'now';
  /* Filter criterion: Content: Schedule - end date (field_psnl_schedule:value2) */
  $handler->display->display_options['filters']['field_psnl_schedule_value2']['id'] = 'field_psnl_schedule_value2';
  $handler->display->display_options['filters']['field_psnl_schedule_value2']['table'] = 'field_data_field_psnl_schedule';
  $handler->display->display_options['filters']['field_psnl_schedule_value2']['field'] = 'field_psnl_schedule_value2';
  $handler->display->display_options['filters']['field_psnl_schedule_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_psnl_schedule_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_psnl_schedule_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Area (field_psnl_area) */
  $handler->display->display_options['filters']['field_psnl_area_tid']['id'] = 'field_psnl_area_tid';
  $handler->display->display_options['filters']['field_psnl_area_tid']['table'] = 'field_data_field_psnl_area';
  $handler->display->display_options['filters']['field_psnl_area_tid']['field'] = 'field_psnl_area_tid';
  $handler->display->display_options['filters']['field_psnl_area_tid']['value'] = array(
    12686 => '12686',
    12685 => '12685',
  );
  $handler->display->display_options['filters']['field_psnl_area_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_psnl_area_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_psnl_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_psnl_area_tid']['vocabulary'] = 'area_games_to_play_';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'signup_now_link' => 'signup_now_link',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  $translatables['promoted_signup_now_link'] = array(
    t('Master'),
    t('MMOs to Play, Download or Pre-Order Now!'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Checkout our complete list of free to play, signup for, pre-order and download now MMORPGs!'),
    t('term'),
    t('Content entity referenced from field_game'),
    t('[title]'),
    t('Sitewide'),
    t('A content pane for sitewide promoted links'),
    t('View panes'),
    t('Home Page'),
    t('A content pane to display promoted links on home page'),
  );
  $export['promoted_signup_now_link'] = $view;

  $view = new view();
  $view->name = 'promoted_signup_now_links_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Promoted Signup Now Links Admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Promoted Signup Now Links (All)';
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
      'field' => 'field_psnl_tier',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title_1' => 'title_1',
    'field_psnl_area' => 'field_psnl_area',
    'field_psnl_schedule' => 'field_psnl_schedule',
    'field_psnl_schedule_1' => 'field_psnl_schedule_1',
    'edit_node' => 'edit_node',
    'field_psnl_tier' => 'field_psnl_tier',
    'nid' => 'edit_node',
    'delete_node' => 'edit_node',
    'field_target_url' => 'edit_node',
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
    'field_psnl_area' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_psnl_schedule' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_psnl_schedule_1' => array(
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
    'field_psnl_tier' => array(
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
    'field_target_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_game_target_id']['id'] = 'field_game_target_id';
  $handler->display->display_options['relationships']['field_game_target_id']['table'] = 'field_data_field_game';
  $handler->display->display_options['relationships']['field_game_target_id']['field'] = 'field_game_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_game_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Game';
  /* Field: Content: Area */
  $handler->display->display_options['fields']['field_psnl_area']['id'] = 'field_psnl_area';
  $handler->display->display_options['fields']['field_psnl_area']['table'] = 'field_data_field_psnl_area';
  $handler->display->display_options['fields']['field_psnl_area']['field'] = 'field_psnl_area';
  /* Field: Content: Schedule */
  $handler->display->display_options['fields']['field_psnl_schedule']['id'] = 'field_psnl_schedule';
  $handler->display->display_options['fields']['field_psnl_schedule']['table'] = 'field_data_field_psnl_schedule';
  $handler->display->display_options['fields']['field_psnl_schedule']['field'] = 'field_psnl_schedule';
  $handler->display->display_options['fields']['field_psnl_schedule']['label'] = 'Start';
  $handler->display->display_options['fields']['field_psnl_schedule']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_psnl_schedule']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Schedule */
  $handler->display->display_options['fields']['field_psnl_schedule_1']['id'] = 'field_psnl_schedule_1';
  $handler->display->display_options['fields']['field_psnl_schedule_1']['table'] = 'field_data_field_psnl_schedule';
  $handler->display->display_options['fields']['field_psnl_schedule_1']['field'] = 'field_psnl_schedule';
  $handler->display->display_options['fields']['field_psnl_schedule_1']['label'] = 'End';
  $handler->display->display_options['fields']['field_psnl_schedule_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_psnl_schedule_1']['settings'] = array(
    'format_type' => 'long',
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
  $handler->display->display_options['fields']['field_psnl_tier']['id'] = 'field_psnl_tier';
  $handler->display->display_options['fields']['field_psnl_tier']['table'] = 'field_data_field_psnl_tier';
  $handler->display->display_options['fields']['field_psnl_tier']['field'] = 'field_psnl_tier';
  $handler->display->display_options['fields']['field_psnl_tier']['label'] = '';
  $handler->display->display_options['fields']['field_psnl_tier']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_psnl_tier']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_psnl_tier']['type'] = 'taxonomy_term_reference_plain';
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
  /* Field: Field: Target URL */
  $handler->display->display_options['fields']['field_target_url']['id'] = 'field_target_url';
  $handler->display->display_options['fields']['field_target_url']['table'] = 'field_data_field_target_url';
  $handler->display->display_options['fields']['field_target_url']['field'] = 'field_target_url';
  $handler->display->display_options['fields']['field_target_url']['label'] = '';
  $handler->display->display_options['fields']['field_target_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_target_url']['alter']['text'] = 'URL';
  $handler->display->display_options['fields']['field_target_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_target_url']['alter']['path'] = '[field_target_url-url]';
  $handler->display->display_options['fields']['field_target_url']['element_label_colon'] = FALSE;
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
    'promoted_signup_now_link' => 'promoted_signup_now_link',
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

  /* Display: Active */
  $handler = $view->new_display('page', 'Active', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Promoted Signup Now Links (Active)';
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
    'promoted_signup_now_link' => 'promoted_signup_now_link',
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
  /* Filter criterion: Content: Schedule - end date (field_psnl_schedule:value2) */
  $handler->display->display_options['filters']['field_psnl_schedule_value2']['id'] = 'field_psnl_schedule_value2';
  $handler->display->display_options['filters']['field_psnl_schedule_value2']['table'] = 'field_data_field_psnl_schedule';
  $handler->display->display_options['filters']['field_psnl_schedule_value2']['field'] = 'field_psnl_schedule_value2';
  $handler->display->display_options['filters']['field_psnl_schedule_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_psnl_schedule_value2']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'admin/mmorpg/promo-signup-now-links/active';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Active';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Past */
  $handler = $view->new_display('page', 'Past', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Promoted Signup Now Links (Past)';
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
    'promoted_signup_now_link' => 'promoted_signup_now_link',
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
  /* Filter criterion: Content: Schedule - end date (field_psnl_schedule:value2) */
  $handler->display->display_options['filters']['field_psnl_schedule_value2']['id'] = 'field_psnl_schedule_value2';
  $handler->display->display_options['filters']['field_psnl_schedule_value2']['table'] = 'field_data_field_psnl_schedule';
  $handler->display->display_options['filters']['field_psnl_schedule_value2']['field'] = 'field_psnl_schedule_value2';
  $handler->display->display_options['filters']['field_psnl_schedule_value2']['operator'] = '<';
  $handler->display->display_options['filters']['field_psnl_schedule_value2']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'admin/mmorpg/promo-signup-now-links/past';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Past';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: All */
  $handler = $view->new_display('page', 'All', 'page_3');
  $handler->display->display_options['path'] = 'admin/mmorpg/promo-signup-now-links';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Promoted Signup Now Links';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Promoted Signup Now Links';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $translatables['promoted_signup_now_links_admin'] = array(
    t('Master'),
    t('Promoted Signup Now Links (All)'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content entity referenced from field_game'),
    t('Game'),
    t('Area'),
    t('Start'),
    t('End'),
    t('Actions'),
    t('unpublish'),
    t('URL'),
    t('Show Disabled?'),
    t('Active'),
    t('Promoted Signup Now Links (Active)'),
    t('Past'),
    t('Promoted Signup Now Links (Past)'),
    t('All'),
  );
  $export['promoted_signup_now_links_admin'] = $view;

  return $export;
}
