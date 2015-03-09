<?php
/**
 * @file
 * mmorpg_article.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mmorpg_article_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'latest_updates';
  $view->description = 'This block will display a visual list of recent articles';
  $view->tag = 'articles';
  $view->base_table = 'node';
  $view->human_name = 'Latest Updates';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Latest Updates';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No updates at present.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Hero Image */
  $handler->display->display_options['fields']['field_article_hero_image']['id'] = 'field_article_hero_image';
  $handler->display->display_options['fields']['field_article_hero_image']['table'] = 'field_data_field_article_hero_image';
  $handler->display->display_options['fields']['field_article_hero_image']['field'] = 'field_article_hero_image';
  $handler->display->display_options['fields']['field_article_hero_image']['label'] = '';
  $handler->display->display_options['fields']['field_article_hero_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_hero_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_article_hero_image']['settings'] = array(
    'image_style' => '60x45_updates_menu',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
    'mmorpg_article' => 'mmorpg_article',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Link */
  $handler->display->display_options['footer']['link']['id'] = 'link';
  $handler->display->display_options['footer']['link']['table'] = 'views';
  $handler->display->display_options['footer']['link']['field'] = 'link';
  $handler->display->display_options['footer']['link']['text'] = 'More New Stuff';
  $handler->display->display_options['footer']['link']['path'] = 'recent_updates';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'recent_updates';
  $export['latest_updates'] = $view;

  $view = new view();
  $view->name = 'trending';
  $view->description = 'This view is not used directly in the UI. It feeds data to the trending block.';
  $view->tag = 'articles';
  $view->base_table = 'node';
  $view->human_name = 'Trending';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Trending';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Latest News (User Menu) */
  $handler = $view->new_display('block', 'Latest News (User Menu)', 'latest_news');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Hero Image */
  $handler->display->display_options['fields']['field_article_hero_image']['id'] = 'field_article_hero_image';
  $handler->display->display_options['fields']['field_article_hero_image']['table'] = 'field_data_field_article_hero_image';
  $handler->display->display_options['fields']['field_article_hero_image']['field'] = 'field_article_hero_image';
  $handler->display->display_options['fields']['field_article_hero_image']['label'] = '';
  $handler->display->display_options['fields']['field_article_hero_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_hero_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_hero_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_article_hero_image']['settings'] = array(
    'image_style' => '200x160_user_menu',
    'image_link' => 'content',
  );
  /* Field: Content: Article Type */
  $handler->display->display_options['fields']['field_article_type']['id'] = 'field_article_type';
  $handler->display->display_options['fields']['field_article_type']['table'] = 'field_data_field_article_type';
  $handler->display->display_options['fields']['field_article_type']['field'] = 'field_article_type';
  $handler->display->display_options['fields']['field_article_type']['label'] = '';
  $handler->display->display_options['fields']['field_article_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="updates_text">
<div class="updates_type">[field_article_type]</div> 
<div class="updates_title">[title]</div>
</div>
<div class="updates_image">[field_article_hero_image]</div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
    'mmorpg_article' => 'mmorpg_article',
  );

  /* Display: Organic */
  $handler = $view->new_display('block', 'Organic', 'organic');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Article Radioactivity (field_article_radioactivity:radioactivity_energy) */
  $handler->display->display_options['sorts']['field_article_radioactivity_radioactivity_energy']['id'] = 'field_article_radioactivity_radioactivity_energy';
  $handler->display->display_options['sorts']['field_article_radioactivity_radioactivity_energy']['table'] = 'field_data_field_article_radioactivity';
  $handler->display->display_options['sorts']['field_article_radioactivity_radioactivity_energy']['field'] = 'field_article_radioactivity_radioactivity_energy';
  $handler->display->display_options['sorts']['field_article_radioactivity_radioactivity_energy']['order'] = 'DESC';
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
    'mmorpg_article' => 'mmorpg_article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: This Article is Sponsored (field_article_sponsored) */
  $handler->display->display_options['filters']['field_article_sponsored_value']['id'] = 'field_article_sponsored_value';
  $handler->display->display_options['filters']['field_article_sponsored_value']['table'] = 'field_data_field_article_sponsored';
  $handler->display->display_options['filters']['field_article_sponsored_value']['field'] = 'field_article_sponsored_value';
  $handler->display->display_options['filters']['field_article_sponsored_value']['value'] = array(
    0 => '0',
  );

  /* Display: Sponsored */
  $handler = $view->new_display('block', 'Sponsored', 'sponsored');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
    'mmorpg_article' => 'mmorpg_article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: This Article is Sponsored (field_article_sponsored) */
  $handler->display->display_options['filters']['field_article_sponsored_value']['id'] = 'field_article_sponsored_value';
  $handler->display->display_options['filters']['field_article_sponsored_value']['table'] = 'field_data_field_article_sponsored';
  $handler->display->display_options['filters']['field_article_sponsored_value']['field'] = 'field_article_sponsored_value';
  $handler->display->display_options['filters']['field_article_sponsored_value']['value'] = array(
    1 => '1',
  );
  $export['trending'] = $view;

  return $export;
}
