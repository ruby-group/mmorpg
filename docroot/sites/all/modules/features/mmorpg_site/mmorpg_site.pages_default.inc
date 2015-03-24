<?php
/**
 * @file
 * mmorpg_site.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function mmorpg_site_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_705afb1b-2532-4131-aafd-9ceb25f69b2e';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(),
    ),
  );
  $display = new panels_display();
  $display->layout = 'omega:mm3col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content' => NULL,
      'trending' => NULL,
      'advert_bar' => NULL,
      'navigation' => NULL,
      'header' => NULL,
      'highlighted' => NULL,
      'help' => NULL,
      'sidebar_first' => NULL,
      'sidebar_second' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b30ea998-398c-488a-a10a-9e34f70e20ae';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-abf5f2d9-5ff6-43bf-bdf9-b739d7263954';
    $pane->panel = 'content';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'abf5f2d9-5ff6-43bf-bdf9-b739d7263954';
    $display->content['new-abf5f2d9-5ff6-43bf-bdf9-b739d7263954'] = $pane;
    $display->panels['content'][0] = 'new-abf5f2d9-5ff6-43bf-bdf9-b739d7263954';
    $pane = new stdClass();
    $pane->pid = 'new-3e165485-3a16-4c5f-86aa-e604118d955c';
    $pane->panel = 'highlighted';
    $pane->type = 'block';
    $pane->subtype = 'views-84704714368b01ac4cef5044099a1714';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3e165485-3a16-4c5f-86aa-e604118d955c';
    $display->content['new-3e165485-3a16-4c5f-86aa-e604118d955c'] = $pane;
    $display->panels['highlighted'][0] = 'new-3e165485-3a16-4c5f-86aa-e604118d955c';
    $pane = new stdClass();
    $pane->pid = 'new-831285b7-ca4b-46a0-b110-f2d33eefa38d';
    $pane->panel = 'navigation';
    $pane->type = 'block';
    $pane->subtype = 'logo_block-logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '831285b7-ca4b-46a0-b110-f2d33eefa38d';
    $display->content['new-831285b7-ca4b-46a0-b110-f2d33eefa38d'] = $pane;
    $display->panels['navigation'][0] = 'new-831285b7-ca4b-46a0-b110-f2d33eefa38d';
    $pane = new stdClass();
    $pane->pid = 'new-0b845ed9-f429-4817-8f04-6076bd8e73e2';
    $pane->panel = 'navigation';
    $pane->type = 'block';
    $pane->subtype = 'om_maximenu-om-maximenu-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0b845ed9-f429-4817-8f04-6076bd8e73e2';
    $display->content['new-0b845ed9-f429-4817-8f04-6076bd8e73e2'] = $pane;
    $display->panels['navigation'][1] = 'new-0b845ed9-f429-4817-8f04-6076bd8e73e2';
    $pane = new stdClass();
    $pane->pid = 'new-6123cc0f-b2f1-40fc-8244-cc5abadb59ce';
    $pane->panel = 'sidebar_second';
    $pane->type = 'block';
    $pane->subtype = 'views-games_to_play-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6123cc0f-b2f1-40fc-8244-cc5abadb59ce';
    $display->content['new-6123cc0f-b2f1-40fc-8244-cc5abadb59ce'] = $pane;
    $display->panels['sidebar_second'][0] = 'new-6123cc0f-b2f1-40fc-8244-cc5abadb59ce';
    $pane = new stdClass();
    $pane->pid = 'new-42e9d4ee-2cd6-4a09-a733-8340492c463c';
    $pane->panel = 'trending';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_article-trending';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '42e9d4ee-2cd6-4a09-a733-8340492c463c';
    $display->content['new-42e9d4ee-2cd6-4a09-a733-8340492c463c'] = $pane;
    $display->panels['trending'][0] = 'new-42e9d4ee-2cd6-4a09-a733-8340492c463c';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_705afb1b-2532-4131-aafd-9ceb25f69b2e'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function mmorpg_site_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home__panel_context_cb4e2ffa-c259-4381-98b7-9511d11b9634';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'omega:mm3col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'trending' => NULL,
      'advert_bar' => NULL,
      'navigation' => NULL,
      'header' => NULL,
      'highlighted' => NULL,
      'help' => NULL,
      'content' => NULL,
      'sidebar_first' => NULL,
      'sidebar_second' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f22b5375-a1ab-42e9-9c17-dc0899bf0f06';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e8bd40f8-c54e-46f1-be50-45551c245c45';
    $pane->panel = 'highlighted';
    $pane->type = 'block';
    $pane->subtype = 'views-84704714368b01ac4cef5044099a1714';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e8bd40f8-c54e-46f1-be50-45551c245c45';
    $display->content['new-e8bd40f8-c54e-46f1-be50-45551c245c45'] = $pane;
    $display->panels['highlighted'][0] = 'new-e8bd40f8-c54e-46f1-be50-45551c245c45';
    $pane = new stdClass();
    $pane->pid = 'new-170553ce-6d76-4fca-91cd-9d9f69e4c659';
    $pane->panel = 'navigation';
    $pane->type = 'block';
    $pane->subtype = 'logo_block-logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '170553ce-6d76-4fca-91cd-9d9f69e4c659';
    $display->content['new-170553ce-6d76-4fca-91cd-9d9f69e4c659'] = $pane;
    $display->panels['navigation'][0] = 'new-170553ce-6d76-4fca-91cd-9d9f69e4c659';
    $pane = new stdClass();
    $pane->pid = 'new-d867cf52-92a3-41b9-a03e-6a02f3cd4b75';
    $pane->panel = 'navigation';
    $pane->type = 'block';
    $pane->subtype = 'om_maximenu-om-maximenu-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd867cf52-92a3-41b9-a03e-6a02f3cd4b75';
    $display->content['new-d867cf52-92a3-41b9-a03e-6a02f3cd4b75'] = $pane;
    $display->panels['navigation'][1] = 'new-d867cf52-92a3-41b9-a03e-6a02f3cd4b75';
    $pane = new stdClass();
    $pane->pid = 'new-ab2bc283-5cc7-49eb-8ca3-b5d9795d9491';
    $pane->panel = 'sidebar_second';
    $pane->type = 'block';
    $pane->subtype = 'views-games_to_play-block_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ab2bc283-5cc7-49eb-8ca3-b5d9795d9491';
    $display->content['new-ab2bc283-5cc7-49eb-8ca3-b5d9795d9491'] = $pane;
    $display->panels['sidebar_second'][0] = 'new-ab2bc283-5cc7-49eb-8ca3-b5d9795d9491';
    $pane = new stdClass();
    $pane->pid = 'new-42c207e1-c824-4948-be58-f7eee657040a';
    $pane->panel = 'trending';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_article-trending';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '42c207e1-c824-4948-be58-f7eee657040a';
    $display->content['new-42c207e1-c824-4948-be58-f7eee657040a'] = $pane;
    $display->panels['trending'][0] = 'new-42c207e1-c824-4948-be58-f7eee657040a';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-42c207e1-c824-4948-be58-f7eee657040a';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
