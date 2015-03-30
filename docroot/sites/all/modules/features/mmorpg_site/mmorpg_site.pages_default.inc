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

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__homepage';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Homepage',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'homepage',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'front',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'omega:mm3col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
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
  $display->uuid = 'a4a365c3-babf-4d4e-a1da-7558e0e10dee';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5a201f5a-b921-4d84-8df4-4626286450f4';
    $pane->panel = 'content';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'node',
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
    $pane->uuid = '5a201f5a-b921-4d84-8df4-4626286450f4';
    $display->content['new-5a201f5a-b921-4d84-8df4-4626286450f4'] = $pane;
    $display->panels['content'][0] = 'new-5a201f5a-b921-4d84-8df4-4626286450f4';
    $pane = new stdClass();
    $pane->pid = 'new-c9fdf3a7-3081-4edc-aa36-553192fc137a';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'promoted_signup_now_link-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c9fdf3a7-3081-4edc-aa36-553192fc137a';
    $display->content['new-c9fdf3a7-3081-4edc-aa36-553192fc137a'] = $pane;
    $display->panels['content'][1] = 'new-c9fdf3a7-3081-4edc-aa36-553192fc137a';
    $pane = new stdClass();
    $pane->pid = 'new-2f04bf28-e72e-4e5a-b807-cb9688c2bcd2';
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
    $pane->uuid = '2f04bf28-e72e-4e5a-b807-cb9688c2bcd2';
    $display->content['new-2f04bf28-e72e-4e5a-b807-cb9688c2bcd2'] = $pane;
    $display->panels['header'][0] = 'new-2f04bf28-e72e-4e5a-b807-cb9688c2bcd2';
    $pane = new stdClass();
    $pane->pid = 'new-afeb6bb9-06a4-4e1b-9c5a-3f7ff30f8660';
    $pane->panel = 'sidebar_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'promoted_signup_now_link-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'afeb6bb9-06a4-4e1b-9c5a-3f7ff30f8660';
    $display->content['new-afeb6bb9-06a4-4e1b-9c5a-3f7ff30f8660'] = $pane;
    $display->panels['sidebar_second'][0] = 'new-afeb6bb9-06a4-4e1b-9c5a-3f7ff30f8660';
    $pane = new stdClass();
    $pane->pid = 'new-51330550-847e-4057-9b99-583f19420671';
    $pane->panel = 'sidebar_second';
    $pane->type = 'views';
    $pane->subtype = 'latest_updates';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '6',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '51330550-847e-4057-9b99-583f19420671';
    $display->content['new-51330550-847e-4057-9b99-583f19420671'] = $pane;
    $display->panels['sidebar_second'][1] = 'new-51330550-847e-4057-9b99-583f19420671';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__homepage'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context_basic';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Sample variant',
    'no_blocks' => 1,
    'css_id' => 'page-wrapper',
    'css' => '/* set a fixed overall width */
  #page-wrapper > .panel-flexible-inside {
    width: 1020px;
    margin-left: auto;
    margin-right: auto;
  }

  /* Add some margin to the main content row. This class was set in the layout designer. */
  #page-wrapper .main-content {
    padding: 0 10px;
  }',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'pipeline' => 'standard',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content',
          1 => 'sidebar',
        ),
        'parent' => 'main',
        'class' => 'main-content',
      ),
      'content' => array(
        'type' => 'region',
        'title' => 'Content',
        'width' => '100',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'sidebar' => array(
        'type' => 'region',
        'title' => 'Sidebar',
        'width' => '200',
        'width_type' => 'px',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header',
        ),
        'parent' => 'main',
        'class' => 'header',
      ),
      'header' => array(
        'type' => 'region',
        'title' => 'Header',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content' => NULL,
      'sidebar' => NULL,
      'header' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3d221633-6362-4ddd-b6fa-1f3fef45080f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d462a364-32b1-4097-aeaa-0a3ed87602f5';
    $pane->panel = 'content';
    $pane->type = 'pane_messages';
    $pane->subtype = 'pane_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = 'd462a364-32b1-4097-aeaa-0a3ed87602f5';
    $display->content['new-d462a364-32b1-4097-aeaa-0a3ed87602f5'] = $pane;
    $display->panels['content'][0] = 'new-d462a364-32b1-4097-aeaa-0a3ed87602f5';
    $pane = new stdClass();
    $pane->pid = 'new-f590b0e9-79b7-4589-a806-d64e438dab83';
    $pane->panel = 'content';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = 'f590b0e9-79b7-4589-a806-d64e438dab83';
    $display->content['new-f590b0e9-79b7-4589-a806-d64e438dab83'] = $pane;
    $display->panels['content'][1] = 'new-f590b0e9-79b7-4589-a806-d64e438dab83';
    $pane = new stdClass();
    $pane->pid = 'new-2fa90c01-38ba-4791-b327-d1ad17a7b725';
    $pane->panel = 'header';
    $pane->type = 'pane_header';
    $pane->subtype = 'pane_header';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '2fa90c01-38ba-4791-b327-d1ad17a7b725';
    $display->content['new-2fa90c01-38ba-4791-b327-d1ad17a7b725'] = $pane;
    $display->panels['header'][0] = 'new-2fa90c01-38ba-4791-b327-d1ad17a7b725';
    $pane = new stdClass();
    $pane->pid = 'new-8ece7229-29b9-4974-811c-58369bec52ad';
    $pane->panel = 'header';
    $pane->type = 'pane_navigation';
    $pane->subtype = 'pane_navigation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '8ece7229-29b9-4974-811c-58369bec52ad';
    $display->content['new-8ece7229-29b9-4974-811c-58369bec52ad'] = $pane;
    $display->panels['header'][1] = 'new-8ece7229-29b9-4974-811c-58369bec52ad';
    $pane = new stdClass();
    $pane->pid = 'new-0b2702ae-6ca4-4df9-b154-d69670883fc1';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'user-login';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '0b2702ae-6ca4-4df9-b154-d69670883fc1';
    $display->content['new-0b2702ae-6ca4-4df9-b154-d69670883fc1'] = $pane;
    $display->panels['sidebar'][0] = 'new-0b2702ae-6ca4-4df9-b154-d69670883fc1';
    $pane = new stdClass();
    $pane->pid = 'new-5c371fb7-d1b6-4b67-889d-3cc29b4c5972';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'system-navigation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '5c371fb7-d1b6-4b67-889d-3cc29b4c5972';
    $display->content['new-5c371fb7-d1b6-4b67-889d-3cc29b4c5972'] = $pane;
    $display->panels['sidebar'][1] = 'new-5c371fb7-d1b6-4b67-889d-3cc29b4c5972';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-f590b0e9-79b7-4589-a806-d64e438dab83';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context_basic'] = $handler;

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
