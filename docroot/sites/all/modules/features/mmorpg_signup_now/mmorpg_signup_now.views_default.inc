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
  $view->name = 'signup_now_links';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Signup Now Links';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Signup Now Links';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
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
    'signup_now_link' => 'signup_now_link',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
<<<<<<< HEAD
  /* Filter criterion: Content: Customer (field_customer) */
  $handler->display->display_options['filters']['field_customer_target_id']['id'] = 'field_customer_target_id';
  $handler->display->display_options['filters']['field_customer_target_id']['table'] = 'field_data_field_customer';
  $handler->display->display_options['filters']['field_customer_target_id']['field'] = 'field_customer_target_id';
  $handler->display->display_options['filters']['field_customer_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_customer_target_id']['expose']['operator_id'] = 'field_customer_target_id_op';
  $handler->display->display_options['filters']['field_customer_target_id']['expose']['label'] = 'Ad Provider';
  $handler->display->display_options['filters']['field_customer_target_id']['expose']['operator'] = 'field_customer_target_id_op';
  $handler->display->display_options['filters']['field_customer_target_id']['expose']['identifier'] = 'field_customer_target_id';
  $handler->display->display_options['filters']['field_customer_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
=======
>>>>>>> New feature field controller added & removes bases from existing features where there were conflict

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/config/clickmeter/stats';
  $translatables['signup_now_links'] = array(
    t('Master'),
    t('Signup Now Links'),
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
<<<<<<< HEAD
    t('Content entity referenced from field_customer'),
    t('Title'),
    t('Nid'),
    t('Custom text'),
    t('Ad Provider'),
=======
    t('Content entity referenced from field_gtp_customer'),
    t('Title'),
    t('Nid'),
    t('Custom text'),
>>>>>>> New feature field controller added & removes bases from existing features where there were conflict
    t('Page'),
  );
  $export['signup_now_links'] = $view;

  return $export;
}
