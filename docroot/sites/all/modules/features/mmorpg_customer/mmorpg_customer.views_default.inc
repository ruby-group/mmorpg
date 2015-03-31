<?php
/**
 * @file
 * mmorpg_customer.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mmorpg_customer_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ad_reports';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ad Reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Reports';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_customer_target_id']['id'] = 'field_customer_target_id';
  $handler->display->display_options['relationships']['field_customer_target_id']['table'] = 'field_data_field_customer';
  $handler->display->display_options['relationships']['field_customer_target_id']['field'] = 'field_customer_target_id';
  $handler->display->display_options['relationships']['field_customer_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_psnl_game_target_id']['id'] = 'field_psnl_game_target_id';
  $handler->display->display_options['relationships']['field_psnl_game_target_id']['table'] = 'field_data_field_psnl_game';
  $handler->display->display_options['relationships']['field_psnl_game_target_id']['field'] = 'field_psnl_game_target_id';
  /* Field: Content: Customer */
  $handler->display->display_options['fields']['field_customer']['id'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['table'] = 'field_data_field_customer';
  $handler->display->display_options['fields']['field_customer']['field'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['label'] = 'Company';
  $handler->display->display_options['fields']['field_customer']['settings'] = array(
    'link' => 0,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';

  /* Display: Siteskins */
  $handler = $view->new_display('page', 'Siteskins', 'siteskins');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Sub Skin (field_siteskin_subskin) */
  $handler->display->display_options['relationships']['field_siteskin_subskin_value']['id'] = 'field_siteskin_subskin_value';
  $handler->display->display_options['relationships']['field_siteskin_subskin_value']['table'] = 'field_data_field_siteskin_subskin';
  $handler->display->display_options['relationships']['field_siteskin_subskin_value']['field'] = 'field_siteskin_subskin_value';
  $handler->display->display_options['relationships']['field_siteskin_subskin_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_siteskin_subskin_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_customer_target_id']['id'] = 'field_customer_target_id';
  $handler->display->display_options['relationships']['field_customer_target_id']['table'] = 'field_data_field_customer';
  $handler->display->display_options['relationships']['field_customer_target_id']['field'] = 'field_customer_target_id';
  $handler->display->display_options['relationships']['field_customer_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Target URL */
  $handler->display->display_options['fields']['field_target_url']['id'] = 'field_target_url';
  $handler->display->display_options['fields']['field_target_url']['table'] = 'field_data_field_target_url';
  $handler->display->display_options['fields']['field_target_url']['field'] = 'field_target_url';
  $handler->display->display_options['fields']['field_target_url']['relationship'] = 'field_siteskin_subskin_value';
  $handler->display->display_options['fields']['field_target_url']['label'] = 'impressions';
  $handler->display->display_options['fields']['field_target_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_target_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_target_url']['type'] = 'clickmeter_view_stats';
  /* Field: Field: Target URL */
  $handler->display->display_options['fields']['field_target_url_1']['id'] = 'field_target_url_1';
  $handler->display->display_options['fields']['field_target_url_1']['table'] = 'field_data_field_target_url';
  $handler->display->display_options['fields']['field_target_url_1']['field'] = 'field_target_url';
  $handler->display->display_options['fields']['field_target_url_1']['relationship'] = 'field_siteskin_subskin_value';
  $handler->display->display_options['fields']['field_target_url_1']['label'] = 'clicks';
  $handler->display->display_options['fields']['field_target_url_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_target_url_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_target_url_1']['type'] = 'clickmeter_click_stats';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Customer */
  $handler->display->display_options['fields']['field_customer']['id'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['table'] = 'field_data_field_customer';
  $handler->display->display_options['fields']['field_customer']['field'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Skin';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Sub Skin (field_siteskin_subskin:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_siteskin_subskin';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = 'SubSkinId';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_siteskin_location']['id'] = 'field_siteskin_location';
  $handler->display->display_options['fields']['field_siteskin_location']['table'] = 'field_data_field_siteskin_location';
  $handler->display->display_options['fields']['field_siteskin_location']['field'] = 'field_siteskin_location';
  /* Field: Content: Siteskin Active */
  $handler->display->display_options['fields']['field_siteskin_active']['id'] = 'field_siteskin_active';
  $handler->display->display_options['fields']['field_siteskin_active']['table'] = 'field_data_field_siteskin_active';
  $handler->display->display_options['fields']['field_siteskin_active']['field'] = 'field_siteskin_active';
  $handler->display->display_options['fields']['field_siteskin_active']['label'] = 'Start';
  $handler->display->display_options['fields']['field_siteskin_active']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Siteskin Active */
  $handler->display->display_options['fields']['field_siteskin_active_1']['id'] = 'field_siteskin_active_1';
  $handler->display->display_options['fields']['field_siteskin_active_1']['table'] = 'field_data_field_siteskin_active';
  $handler->display->display_options['fields']['field_siteskin_active_1']['field'] = 'field_siteskin_active';
  $handler->display->display_options['fields']['field_siteskin_active_1']['label'] = 'End';
  $handler->display->display_options['fields']['field_siteskin_active_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Clickmeter Impressions */
  $handler->display->display_options['fields']['impressions']['id'] = 'impressions';
  $handler->display->display_options['fields']['impressions']['table'] = 'views';
  $handler->display->display_options['fields']['impressions']['field'] = 'impressions';
  $handler->display->display_options['fields']['impressions']['label'] = 'Impressions (Unique)';
  $handler->display->display_options['fields']['impressions']['datapoint_id'] = '[field_target_url]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Details';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'https://my.clickmeter.com/Links?linkId=[field_target_url]';
  $handler->display->display_options['fields']['nothing']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Clickmeter Clicks */
  $handler->display->display_options['fields']['clicks']['id'] = 'clicks';
  $handler->display->display_options['fields']['clicks']['table'] = 'views';
  $handler->display->display_options['fields']['clicks']['field'] = 'clicks';
  $handler->display->display_options['fields']['clicks']['label'] = 'Clicks (Unique)';
  $handler->display->display_options['fields']['clicks']['datapoint_id'] = '[field_target_url_1]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Details';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'https://my.clickmeter.com/Links?linkId=[field_target_url_1]';
  $handler->display->display_options['fields']['nothing_1']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'siteskin' => 'siteskin',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_customer_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Customer';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Global: Date Filter */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'views';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Date between';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['path'] = 'admin/mmorpg/reports/siteskins';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Siteskins';
  $handler->display->display_options['menu']['weight'] = '15';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Signup Now Links */
  $handler = $view->new_display('page', 'Signup Now Links', 'signup_now_links');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_customer_contents_target_id']['id'] = 'field_customer_contents_target_id';
  $handler->display->display_options['relationships']['field_customer_contents_target_id']['table'] = 'field_data_field_customer_contents';
  $handler->display->display_options['relationships']['field_customer_contents_target_id']['field'] = 'field_customer_contents_target_id';
  $handler->display->display_options['relationships']['field_customer_contents_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_game_contents_target_id']['id'] = 'field_game_contents_target_id';
  $handler->display->display_options['relationships']['field_game_contents_target_id']['table'] = 'field_data_field_game_contents';
  $handler->display->display_options['relationships']['field_game_contents_target_id']['field'] = 'field_game_contents_target_id';
  $handler->display->display_options['relationships']['field_game_contents_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Target URL */
  $handler->display->display_options['fields']['field_target_url']['id'] = 'field_target_url';
  $handler->display->display_options['fields']['field_target_url']['table'] = 'field_data_field_target_url';
  $handler->display->display_options['fields']['field_target_url']['field'] = 'field_target_url';
  $handler->display->display_options['fields']['field_target_url']['label'] = 'impressions';
  $handler->display->display_options['fields']['field_target_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_target_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_target_url']['type'] = 'clickmeter_view_stats';
  /* Field: Field: Target URL */
  $handler->display->display_options['fields']['field_target_url_1']['id'] = 'field_target_url_1';
  $handler->display->display_options['fields']['field_target_url_1']['table'] = 'field_data_field_target_url';
  $handler->display->display_options['fields']['field_target_url_1']['field'] = 'field_target_url';
  $handler->display->display_options['fields']['field_target_url_1']['label'] = 'clicks';
  $handler->display->display_options['fields']['field_target_url_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_target_url_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_target_url_1']['type'] = 'clickmeter_click_stats';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_customer_contents_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Provider';
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'field_game_contents_target_id';
  $handler->display->display_options['fields']['title_2']['label'] = 'Game';
  $handler->display->display_options['fields']['title_2']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Global: Clickmeter Impressions */
  $handler->display->display_options['fields']['impressions']['id'] = 'impressions';
  $handler->display->display_options['fields']['impressions']['table'] = 'views';
  $handler->display->display_options['fields']['impressions']['field'] = 'impressions';
  $handler->display->display_options['fields']['impressions']['label'] = 'Impressions (Unique)';
  $handler->display->display_options['fields']['impressions']['datapoint_id'] = '[field_target_url]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Details';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'https://my.clickmeter.com/Links?linkId=[field_target_url]';
  $handler->display->display_options['fields']['nothing']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Clickmeter Clicks */
  $handler->display->display_options['fields']['clicks']['id'] = 'clicks';
  $handler->display->display_options['fields']['clicks']['table'] = 'views';
  $handler->display->display_options['fields']['clicks']['field'] = 'clicks';
  $handler->display->display_options['fields']['clicks']['label'] = 'Clicks (Unique)';
  $handler->display->display_options['fields']['clicks']['datapoint_id'] = '[field_target_url_1]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Details';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'https://my.clickmeter.com/Links?linkId=[field_target_url_1]';
  $handler->display->display_options['fields']['nothing_1']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'signup_now_link' => 'signup_now_link',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_customer_contents_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Provider';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'field_game_contents_target_id';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Game';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Global: Date Filter */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'views';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Date between';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['path'] = 'admin/mmorpg/reports/signup_now_links';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Signup Now Links';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Promoted Signup Now Links */
  $handler = $view->new_display('page', 'Promoted Signup Now Links', 'promoted_signup_now_links');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Target URL */
  $handler->display->display_options['fields']['field_target_url']['id'] = 'field_target_url';
  $handler->display->display_options['fields']['field_target_url']['table'] = 'field_data_field_target_url';
  $handler->display->display_options['fields']['field_target_url']['field'] = 'field_target_url';
  $handler->display->display_options['fields']['field_target_url']['label'] = 'impressions';
  $handler->display->display_options['fields']['field_target_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_target_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_target_url']['type'] = 'clickmeter_view_stats';
  /* Field: Field: Target URL */
  $handler->display->display_options['fields']['field_target_url_1']['id'] = 'field_target_url_1';
  $handler->display->display_options['fields']['field_target_url_1']['table'] = 'field_data_field_target_url';
  $handler->display->display_options['fields']['field_target_url_1']['field'] = 'field_target_url';
  $handler->display->display_options['fields']['field_target_url_1']['label'] = 'clicks';
  $handler->display->display_options['fields']['field_target_url_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_target_url_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_target_url_1']['type'] = 'clickmeter_click_stats';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Customer */
  $handler->display->display_options['fields']['field_customer']['id'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['table'] = 'field_data_field_customer';
  $handler->display->display_options['fields']['field_customer']['field'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['label'] = 'Company';
  $handler->display->display_options['fields']['field_customer']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Game */
  $handler->display->display_options['fields']['field_psnl_game']['id'] = 'field_psnl_game';
  $handler->display->display_options['fields']['field_psnl_game']['table'] = 'field_data_field_psnl_game';
  $handler->display->display_options['fields']['field_psnl_game']['field'] = 'field_psnl_game';
  $handler->display->display_options['fields']['field_psnl_game']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Tier */
  $handler->display->display_options['fields']['field_psnl_tier']['id'] = 'field_psnl_tier';
  $handler->display->display_options['fields']['field_psnl_tier']['table'] = 'field_data_field_psnl_tier';
  $handler->display->display_options['fields']['field_psnl_tier']['field'] = 'field_psnl_tier';
  $handler->display->display_options['fields']['field_psnl_tier']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Area */
  $handler->display->display_options['fields']['field_psnl_area']['id'] = 'field_psnl_area';
  $handler->display->display_options['fields']['field_psnl_area']['table'] = 'field_data_field_psnl_area';
  $handler->display->display_options['fields']['field_psnl_area']['field'] = 'field_psnl_area';
  $handler->display->display_options['fields']['field_psnl_area']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: Clickmeter Impressions */
  $handler->display->display_options['fields']['impressions']['id'] = 'impressions';
  $handler->display->display_options['fields']['impressions']['table'] = 'views';
  $handler->display->display_options['fields']['impressions']['field'] = 'impressions';
  $handler->display->display_options['fields']['impressions']['label'] = 'Impressions (Unique)';
  $handler->display->display_options['fields']['impressions']['datapoint_id'] = '[field_target_url]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Details';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'https://my.clickmeter.com/Links?linkId=[field_target_url]';
  $handler->display->display_options['fields']['nothing']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Clickmeter Clicks */
  $handler->display->display_options['fields']['clicks']['id'] = 'clicks';
  $handler->display->display_options['fields']['clicks']['table'] = 'views';
  $handler->display->display_options['fields']['clicks']['field'] = 'clicks';
  $handler->display->display_options['fields']['clicks']['label'] = 'Clicks (Unique)';
  $handler->display->display_options['fields']['clicks']['datapoint_id'] = '[field_target_url_1]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Details';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'https://my.clickmeter.com/Links?linkId=[field_target_url_1]';
  $handler->display->display_options['fields']['nothing_1']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'promoted_signup_now_link' => 'promoted_signup_now_link',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_customer_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Customer';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'field_psnl_game_target_id';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Game';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Global: Date Filter */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'views';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Date between';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['path'] = 'admin/mmorpg/reports/promoted_signup_now_links';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Promoted Signup Now Links';
  $handler->display->display_options['menu']['weight'] = '5';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Articles */
  $handler = $view->new_display('page', 'Articles', 'articles');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_customer_target_id']['id'] = 'field_customer_target_id';
  $handler->display->display_options['relationships']['field_customer_target_id']['table'] = 'field_data_field_customer';
  $handler->display->display_options['relationships']['field_customer_target_id']['field'] = 'field_customer_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_article_game_target_id']['id'] = 'field_article_game_target_id';
  $handler->display->display_options['relationships']['field_article_game_target_id']['table'] = 'field_data_field_article_game';
  $handler->display->display_options['relationships']['field_article_game_target_id']['field'] = 'field_article_game_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Target URL */
  $handler->display->display_options['fields']['field_target_url']['id'] = 'field_target_url';
  $handler->display->display_options['fields']['field_target_url']['table'] = 'field_data_field_target_url';
  $handler->display->display_options['fields']['field_target_url']['field'] = 'field_target_url';
  $handler->display->display_options['fields']['field_target_url']['label'] = 'impressions';
  $handler->display->display_options['fields']['field_target_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_target_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_target_url']['type'] = 'clickmeter_view_stats';
  /* Field: Field: Target URL */
  $handler->display->display_options['fields']['field_target_url_1']['id'] = 'field_target_url_1';
  $handler->display->display_options['fields']['field_target_url_1']['table'] = 'field_data_field_target_url';
  $handler->display->display_options['fields']['field_target_url_1']['field'] = 'field_target_url';
  $handler->display->display_options['fields']['field_target_url_1']['label'] = 'clicks';
  $handler->display->display_options['fields']['field_target_url_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_target_url_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_target_url_1']['type'] = 'clickmeter_click_stats';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Customer */
  $handler->display->display_options['fields']['field_customer']['id'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['table'] = 'field_data_field_customer';
  $handler->display->display_options['fields']['field_customer']['field'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['label'] = 'Company';
  $handler->display->display_options['fields']['field_customer']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Sponsored Untill */
  $handler->display->display_options['fields']['field_article_sponsored_untill']['id'] = 'field_article_sponsored_untill';
  $handler->display->display_options['fields']['field_article_sponsored_untill']['table'] = 'field_data_field_article_sponsored_untill';
  $handler->display->display_options['fields']['field_article_sponsored_untill']['field'] = 'field_article_sponsored_untill';
  $handler->display->display_options['fields']['field_article_sponsored_untill']['label'] = 'End';
  $handler->display->display_options['fields']['field_article_sponsored_untill']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Clickmeter Impressions */
  $handler->display->display_options['fields']['impressions']['id'] = 'impressions';
  $handler->display->display_options['fields']['impressions']['table'] = 'views';
  $handler->display->display_options['fields']['impressions']['field'] = 'impressions';
  $handler->display->display_options['fields']['impressions']['label'] = 'Impressions (Unique)';
  $handler->display->display_options['fields']['impressions']['datapoint_id'] = '[field_target_url]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Details';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'https://my.clickmeter.com/Links?linkId=[field_target_url]';
  $handler->display->display_options['fields']['nothing']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Clickmeter Clicks */
  $handler->display->display_options['fields']['clicks']['id'] = 'clicks';
  $handler->display->display_options['fields']['clicks']['table'] = 'views';
  $handler->display->display_options['fields']['clicks']['field'] = 'clicks';
  $handler->display->display_options['fields']['clicks']['label'] = 'Clicks (Unique)';
  $handler->display->display_options['fields']['clicks']['datapoint_id'] = '[field_target_url_1]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Details';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'https://my.clickmeter.com/Links?linkId=[field_target_url_1]';
  $handler->display->display_options['fields']['nothing_1']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mmorpg_article' => 'mmorpg_article',
  );
  /* Filter criterion: Content: This Article is Sponsored (field_article_sponsored) */
  $handler->display->display_options['filters']['field_article_sponsored_value']['id'] = 'field_article_sponsored_value';
  $handler->display->display_options['filters']['field_article_sponsored_value']['table'] = 'field_data_field_article_sponsored';
  $handler->display->display_options['filters']['field_article_sponsored_value']['field'] = 'field_article_sponsored_value';
  $handler->display->display_options['filters']['field_article_sponsored_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_customer_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Customer';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['title']['group_info']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['group_info']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['title']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'field_article_game_target_id';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Game';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Global: Date Filter */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'views';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Date between';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['path'] = 'admin/mmorpg/reports/articles';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Articles';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['ad_reports'] = array(
    t('Master'),
    t('Reports'),
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
    t('Content entity referenced from field_customer'),
    t('Content entity referenced from field_psnl_game'),
    t('Company'),
    t('Siteskins'),
    t('field collection item from field_siteskin_subskin'),
    t('impressions'),
    t('clicks'),
    t('Edit'),
    t('Customer'),
    t('Skin'),
    t('SubSkinId'),
    t('.'),
    t(','),
    t('Location'),
    t('Start'),
    t('End'),
    t('Impressions (Unique)'),
    t('Details'),
    t('Clicks (Unique)'),
    t('Date between'),
    t('Signup Now Links'),
    t('Content entity referenced from field_customer_contents'),
    t('Content entity referenced from field_game_contents'),
    t('Provider'),
    t('Game'),
    t('Title'),
    t('Promoted Signup Now Links'),
    t('Tier'),
    t('Area'),
    t('Articles'),
    t('Content entity referenced from field_article_game'),
    t('Published'),
  );
  $export['ad_reports'] = $view;

  $view = new view();
  $view->name = 'customers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Customers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Customers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Link */
  $handler->display->display_options['header']['link']['id'] = 'link';
  $handler->display->display_options['header']['link']['table'] = 'views';
  $handler->display->display_options['header']['link']['field'] = 'link';
  $handler->display->display_options['header']['link']['text'] = 'New Customer';
  $handler->display->display_options['header']['link']['path'] = 'node/add/customer';
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_customer_node']['id'] = 'reverse_field_customer_node';
  $handler->display->display_options['relationships']['reverse_field_customer_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_customer_node']['field'] = 'reverse_field_customer_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Company';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Contact Name */
  $handler->display->display_options['fields']['field_cust_contact_name']['id'] = 'field_cust_contact_name';
  $handler->display->display_options['fields']['field_cust_contact_name']['table'] = 'field_data_field_cust_contact_name';
  $handler->display->display_options['fields']['field_cust_contact_name']['field'] = 'field_cust_contact_name';
  $handler->display->display_options['fields']['field_cust_contact_name']['label'] = 'Contact';
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_cust_address']['id'] = 'field_cust_address';
  $handler->display->display_options['fields']['field_cust_address']['table'] = 'field_data_field_cust_address';
  $handler->display->display_options['fields']['field_cust_address']['field'] = 'field_cust_address';
  $handler->display->display_options['fields']['field_cust_address']['label'] = 'Location';
  $handler->display->display_options['fields']['field_cust_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_cust_address']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(
      'address' => 'address',
      'address-hide-postal-code' => 'address-hide-postal-code',
      'address-hide-street' => 'address-hide-street',
    ),
  );
  $handler->display->display_options['fields']['field_cust_address']['group_column'] = 'entity_id';
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_cust_phone_no']['id'] = 'field_cust_phone_no';
  $handler->display->display_options['fields']['field_cust_phone_no']['table'] = 'field_data_field_cust_phone_no';
  $handler->display->display_options['fields']['field_cust_phone_no']['field'] = 'field_cust_phone_no';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_cust_email']['id'] = 'field_cust_email';
  $handler->display->display_options['fields']['field_cust_email']['table'] = 'field_data_field_cust_email';
  $handler->display->display_options['fields']['field_cust_email']['field'] = 'field_cust_email';
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_customer_node';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = 'Campaigns';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'customer' => 'customer',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/mmorpg/customers';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Customers';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['customers'] = array(
    t('Master'),
    t('Customers'),
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
    t('New Customer'),
    t('Displaying @start - @end of @total'),
    t('Content referencing Content from field_customer'),
    t('Company'),
    t('Contact'),
    t('Location'),
    t('Phone'),
    t('Email'),
    t('Campaigns'),
    t('Edit'),
    t('Page'),
  );
  $export['customers'] = $view;

  return $export;
}
