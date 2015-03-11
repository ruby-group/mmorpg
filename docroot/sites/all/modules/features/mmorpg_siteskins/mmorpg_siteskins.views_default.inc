<?php
/**
 * @file
 * mmorpg_siteskins.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mmorpg_siteskins_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'siteskins';
  $view->description = '';
  $view->tag = 'siteskins';
  $view->base_table = 'node';
  $view->human_name = 'Site Skins Administration';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Site Skins';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
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
  /* Header: Global: Link */
  $handler->display->display_options['header']['link']['id'] = 'link';
  $handler->display->display_options['header']['link']['table'] = 'views';
  $handler->display->display_options['header']['link']['field'] = 'link';
  $handler->display->display_options['header']['link']['text'] = 'Add new skin';
  $handler->display->display_options['header']['link']['path'] = 'node/add/siteskin';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No items to display.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Skin';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Customer */
  $handler->display->display_options['fields']['field_siteskin_customer']['id'] = 'field_siteskin_customer';
  $handler->display->display_options['fields']['field_siteskin_customer']['table'] = 'field_data_field_siteskin_customer';
  $handler->display->display_options['fields']['field_siteskin_customer']['field'] = 'field_siteskin_customer';
  $handler->display->display_options['fields']['field_siteskin_customer']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Siteskin Active */
  $handler->display->display_options['fields']['field_siteskin_active']['id'] = 'field_siteskin_active';
  $handler->display->display_options['fields']['field_siteskin_active']['table'] = 'field_data_field_siteskin_active';
  $handler->display->display_options['fields']['field_siteskin_active']['field'] = 'field_siteskin_active';
  $handler->display->display_options['fields']['field_siteskin_active']['label'] = 'Active between';
  $handler->display->display_options['fields']['field_siteskin_active']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_siteskin_location']['id'] = 'field_siteskin_location';
  $handler->display->display_options['fields']['field_siteskin_location']['table'] = 'field_data_field_siteskin_location';
  $handler->display->display_options['fields']['field_siteskin_location']['field'] = 'field_siteskin_location';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Enabled';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Clone link */
  $handler->display->display_options['fields']['clone_node']['id'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['table'] = 'node';
  $handler->display->display_options['fields']['clone_node']['field'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['label'] = 'Clone';
  $handler->display->display_options['fields']['clone_node']['text'] = 'Clone';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Base url */
  $handler->display->display_options['fields']['base_url']['id'] = 'base_url';
  $handler->display->display_options['fields']['base_url']['table'] = 'views';
  $handler->display->display_options['fields']['base_url']['field'] = 'base_url';
  $handler->display->display_options['fields']['base_url']['label'] = 'Preview';
  $handler->display->display_options['fields']['base_url']['show_link'] = 1;
  $handler->display->display_options['fields']['base_url']['show_link_options'] = array(
    'link_path' => '',
    'link_text' => 'Preview',
    'link_class' => '',
    'link_title' => '',
    'link_rel' => '',
    'link_fragment' => '',
    'link_query' => 'preview=[nid]',
    'link_target' => '',
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
    'siteskin' => 'siteskin',
  );

  /* Display: Siteskins */
  $handler = $view->new_display('page', 'Siteskins', 'siteskins');
  $handler->display->display_options['path'] = 'admin/mmorpg/siteskins';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Siteskins';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Upcoming */
  $handler = $view->new_display('page', 'Upcoming', 'upcoming');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Siteskin Active -  start date (field_siteskin_active) */
  $handler->display->display_options['sorts']['field_siteskin_active_value']['id'] = 'field_siteskin_active_value';
  $handler->display->display_options['sorts']['field_siteskin_active_value']['table'] = 'field_data_field_siteskin_active';
  $handler->display->display_options['sorts']['field_siteskin_active_value']['field'] = 'field_siteskin_active_value';
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
    'siteskin' => 'siteskin',
  );
  /* Filter criterion: Content: Siteskin Active -  start date (field_siteskin_active) */
  $handler->display->display_options['filters']['field_siteskin_active_value']['id'] = 'field_siteskin_active_value';
  $handler->display->display_options['filters']['field_siteskin_active_value']['table'] = 'field_data_field_siteskin_active';
  $handler->display->display_options['filters']['field_siteskin_active_value']['field'] = 'field_siteskin_active_value';
  $handler->display->display_options['filters']['field_siteskin_active_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_siteskin_active_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'admin/mmorpg/siteskins/upcoming';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Upcoming';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Homepage */
  $handler = $view->new_display('page', 'Homepage', 'homepage');
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
    'siteskin' => 'siteskin',
  );
  /* Filter criterion: Content: Location (field_siteskin_location) */
  $handler->display->display_options['filters']['field_siteskin_location_value']['id'] = 'field_siteskin_location_value';
  $handler->display->display_options['filters']['field_siteskin_location_value']['table'] = 'field_data_field_siteskin_location';
  $handler->display->display_options['filters']['field_siteskin_location_value']['field'] = 'field_siteskin_location_value';
  $handler->display->display_options['filters']['field_siteskin_location_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_siteskin_location_value']['value'] = '<front>';
  $handler->display->display_options['path'] = 'admin/mmorpg/siteskins/home';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Homepage';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Gamelist */
  $handler = $view->new_display('page', 'Gamelist', 'gamelist');
  $handler->display->display_options['path'] = 'admin/mmorpg/siteskins/gamelist';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Gamelist';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Other Areas */
  $handler = $view->new_display('page', 'Other Areas', 'other_areas');
  $handler->display->display_options['path'] = 'admin/mmorpg/siteskins/other_areas';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Other Areas';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Remnants */
  $handler = $view->new_display('page', 'Remnants', 'remnants');
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
    'siteskin' => 'siteskin',
  );
  /* Filter criterion: Content: Remnant Pool (field_siteskin_remnant_pool) */
  $handler->display->display_options['filters']['field_siteskin_remnant_pool_value']['id'] = 'field_siteskin_remnant_pool_value';
  $handler->display->display_options['filters']['field_siteskin_remnant_pool_value']['table'] = 'field_data_field_siteskin_remnant_pool';
  $handler->display->display_options['filters']['field_siteskin_remnant_pool_value']['field'] = 'field_siteskin_remnant_pool_value';
  $handler->display->display_options['filters']['field_siteskin_remnant_pool_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'admin/mmorpg/siteskins/remnants';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Remnants';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['siteskins'] = $view;

  $view = new view();
  $view->name = 'siteskins_rendering';
  $view->description = '';
  $view->tag = 'siteskins';
  $view->base_table = 'node';
  $view->human_name = 'Site Skins Rendering';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'mmorpg_siteskins';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_siteskin_location']['id'] = 'field_siteskin_location';
  $handler->display->display_options['fields']['field_siteskin_location']['table'] = 'field_data_field_siteskin_location';
  $handler->display->display_options['fields']['field_siteskin_location']['field'] = 'field_siteskin_location';
  $handler->display->display_options['fields']['field_siteskin_location']['label'] = '';
  $handler->display->display_options['fields']['field_siteskin_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_siteskin_location']['type'] = 'text_plain';
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
    'siteskin' => 'siteskin',
  );

  /* Display: Active Siteskin */
  $handler = $view->new_display('block', 'Active Siteskin', 'active_siteskin');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: View area */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  $handler->display->display_options['empty']['view']['empty'] = TRUE;
  $handler->display->display_options['empty']['view']['view_to_insert'] = 'siteskins_rendering:remnant_pool';
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
    'siteskin' => 'siteskin',
  );
  /* Filter criterion: Date: Between Dates (node) */
  $handler->display->display_options['filters']['between_date_filter']['id'] = 'between_date_filter';
  $handler->display->display_options['filters']['between_date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['between_date_filter']['field'] = 'between_date_filter';
  $handler->display->display_options['filters']['between_date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['between_date_filter']['start_date_field'] = 'field_data_field_siteskin_active.field_siteskin_active_value';
  $handler->display->display_options['filters']['between_date_filter']['end_date_field'] = 'field_data_field_siteskin_active.field_siteskin_active_value2';
  /* Filter criterion: Global: Current URL Matches Paths */
  $handler->display->display_options['filters']['current_url']['id'] = 'current_url';
  $handler->display->display_options['filters']['current_url']['table'] = 'views';
  $handler->display->display_options['filters']['current_url']['field'] = 'current_url';

  /* Display: Remnant Pool */
  $handler = $view->new_display('block', 'Remnant Pool', 'remnant_pool');
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
    'siteskin' => 'siteskin',
  );
  /* Filter criterion: Content: Remnant Pool (field_siteskin_remnant_pool) */
  $handler->display->display_options['filters']['field_siteskin_remnant_pool_value']['id'] = 'field_siteskin_remnant_pool_value';
  $handler->display->display_options['filters']['field_siteskin_remnant_pool_value']['table'] = 'field_data_field_siteskin_remnant_pool';
  $handler->display->display_options['filters']['field_siteskin_remnant_pool_value']['field'] = 'field_siteskin_remnant_pool_value';
  $handler->display->display_options['filters']['field_siteskin_remnant_pool_value']['value'] = array(
    1 => '1',
  );

  /* Display: Preview */
  $handler = $view->new_display('block', 'Preview', 'preview');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $export['siteskins_rendering'] = $view;

  return $export;
}
