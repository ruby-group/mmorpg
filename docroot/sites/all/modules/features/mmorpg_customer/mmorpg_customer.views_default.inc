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
  $handler->display->display_options['title'] = 'Ad Reports';
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
    ),
    'field_customer_target_id' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
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
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
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
  /* Field: Content: Game */
  $handler->display->display_options['fields']['field_gtp_game']['id'] = 'field_gtp_game';
  $handler->display->display_options['fields']['field_gtp_game']['table'] = 'field_data_field_gtp_game';
  $handler->display->display_options['fields']['field_gtp_game']['field'] = 'field_gtp_game';
  $handler->display->display_options['fields']['field_gtp_game']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Customer */
  $handler->display->display_options['fields']['field_customer']['id'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['table'] = 'field_data_field_customer';
  $handler->display->display_options['fields']['field_customer']['field'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['label'] = 'Company';
  $handler->display->display_options['fields']['field_customer']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Clicks';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';

  /* Display: Games To Play */
  $handler = $view->new_display('page', 'Games To Play', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Game */
  $handler->display->display_options['fields']['field_gtp_game']['id'] = 'field_gtp_game';
  $handler->display->display_options['fields']['field_gtp_game']['table'] = 'field_data_field_gtp_game';
  $handler->display->display_options['fields']['field_gtp_game']['field'] = 'field_gtp_game';
  $handler->display->display_options['fields']['field_gtp_game']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Customer */
  $handler->display->display_options['fields']['field_customer']['id'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['table'] = 'field_data_field_customer';
  $handler->display->display_options['fields']['field_customer']['field'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['label'] = 'Company';
  $handler->display->display_options['fields']['field_customer']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Tier */
  $handler->display->display_options['fields']['field_gtp_tier']['id'] = 'field_gtp_tier';
  $handler->display->display_options['fields']['field_gtp_tier']['table'] = 'field_data_field_gtp_tier';
  $handler->display->display_options['fields']['field_gtp_tier']['field'] = 'field_gtp_tier';
  $handler->display->display_options['fields']['field_gtp_tier']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gtp_tier']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Clicks';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'games_to_play' => 'games_to_play',
  );
  $handler->display->display_options['path'] = 'admin/mmorpg/reports/gtp';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Reports: Games To Play';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Siteskins */
  $handler = $view->new_display('page', 'Siteskins', 'siteskins');
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Background Image (field_siteskin_image:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_siteskin_image';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = 'SubSkinId';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_siteskin_location']['id'] = 'field_siteskin_location';
  $handler->display->display_options['fields']['field_siteskin_location']['table'] = 'field_data_field_siteskin_location';
  $handler->display->display_options['fields']['field_siteskin_location']['field'] = 'field_siteskin_location';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Clicks';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'siteskin' => 'siteskin',
  );
  $handler->display->display_options['path'] = 'admin/mmorpg/reports/siteskins';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Reports: Siteskins';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['ad_reports'] = array(
    t('Master'),
    t('Ad Reports'),
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
    t('Game'),
    t('Company'),
    t('Clicks'),
    t('Games To Play'),
    t('Tier'),
    t('Siteskins'),
    t('Customer'),
    t('SubSkinId'),
    t('.'),
    t(','),
    t('Location'),
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
