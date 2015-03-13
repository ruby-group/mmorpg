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
  $handler->display->display_options['relationships']['reverse_field_siteskin_customer_node']['id'] = 'reverse_field_siteskin_customer_node';
  $handler->display->display_options['relationships']['reverse_field_siteskin_customer_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_siteskin_customer_node']['field'] = 'reverse_field_siteskin_customer_node';
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
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_cust_phone_no']['id'] = 'field_cust_phone_no';
  $handler->display->display_options['fields']['field_cust_phone_no']['table'] = 'field_data_field_cust_phone_no';
  $handler->display->display_options['fields']['field_cust_phone_no']['field'] = 'field_cust_phone_no';
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
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_siteskin_customer_node';
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
  $export['customers'] = $view;

  return $export;
}
