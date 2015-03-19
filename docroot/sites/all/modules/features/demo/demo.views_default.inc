<?php
/**
 * @file
 * demo.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function demo_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'radioactivity';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Radioactivity';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Radioactivity';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Article Radioactivity */
  $handler->display->display_options['fields']['field_article_radioactivity']['id'] = 'field_article_radioactivity';
  $handler->display->display_options['fields']['field_article_radioactivity']['table'] = 'field_data_field_article_radioactivity';
  $handler->display->display_options['fields']['field_article_radioactivity']['field'] = 'field_article_radioactivity';
  $handler->display->display_options['fields']['field_article_radioactivity']['label'] = 'Radioactivity';
  $handler->display->display_options['fields']['field_article_radioactivity']['click_sort_column'] = 'radioactivity_energy';
  $handler->display->display_options['fields']['field_article_radioactivity']['settings'] = array(
    'energy' => '0',
    'type' => 'energy',
    'accuracy' => '100',
  );
  /* Sort criterion: Content: Article Radioactivity (field_article_radioactivity:radioactivity_energy) */
  $handler->display->display_options['sorts']['field_article_radioactivity_radioactivity_energy']['id'] = 'field_article_radioactivity_radioactivity_energy';
  $handler->display->display_options['sorts']['field_article_radioactivity_radioactivity_energy']['table'] = 'field_data_field_article_radioactivity';
  $handler->display->display_options['sorts']['field_article_radioactivity_radioactivity_energy']['field'] = 'field_article_radioactivity_radioactivity_energy';
  $handler->display->display_options['sorts']['field_article_radioactivity_radioactivity_energy']['order'] = 'DESC';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'demo/radioactivity';
  $translatables['radioactivity'] = array(
    t('Master'),
    t('Radioactivity'),
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
    t('Title'),
    t('Page'),
  );
  $export['radioactivity'] = $view;

  return $export;
}
