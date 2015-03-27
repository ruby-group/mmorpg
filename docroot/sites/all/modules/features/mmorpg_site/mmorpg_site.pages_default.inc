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
    $pane->pid = 'new-e817aa24-9735-488d-916a-1b782300ccfb';
    $pane->panel = 'header';
    $pane->type = 'panels_mini';
    $pane->subtype = 'header';
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
    $pane->uuid = 'e817aa24-9735-488d-916a-1b782300ccfb';
    $display->content['new-e817aa24-9735-488d-916a-1b782300ccfb'] = $pane;
    $display->panels['header'][0] = 'new-e817aa24-9735-488d-916a-1b782300ccfb';
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
    $pane->pid = 'new-10ece434-3046-45c5-9249-d97a24167a6a';
    $pane->panel = 'sidebar_second';
    $pane->type = 'views';
    $pane->subtype = 'promoted_signup_now_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
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
    $pane->uuid = '10ece434-3046-45c5-9249-d97a24167a6a';
    $display->content['new-10ece434-3046-45c5-9249-d97a24167a6a'] = $pane;
    $display->panels['sidebar_second'][0] = 'new-10ece434-3046-45c5-9249-d97a24167a6a';
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
    $pane->pid = 'new-66b135b6-ed64-4b06-b994-d87b7134b958';
    $pane->panel = 'header';
    $pane->type = 'panels_mini';
    $pane->subtype = 'header';
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
    $pane->uuid = '66b135b6-ed64-4b06-b994-d87b7134b958';
    $display->content['new-66b135b6-ed64-4b06-b994-d87b7134b958'] = $pane;
    $display->panels['header'][0] = 'new-66b135b6-ed64-4b06-b994-d87b7134b958';
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
    $pane->pid = 'new-5a5e0202-7dba-4d07-b848-2c07d3e78e94';
    $pane->panel = 'sidebar_second';
    $pane->type = 'views';
    $pane->subtype = 'promoted_signup_now_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
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
    $pane->uuid = '5a5e0202-7dba-4d07-b848-2c07d3e78e94';
    $display->content['new-5a5e0202-7dba-4d07-b848-2c07d3e78e94'] = $pane;
    $display->panels['sidebar_second'][0] = 'new-5a5e0202-7dba-4d07-b848-2c07d3e78e94';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
