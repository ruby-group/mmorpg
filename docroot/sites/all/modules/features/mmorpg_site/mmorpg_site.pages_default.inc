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
  $handler->name = 'site_template__article_page';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Article page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'article_page',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'mmorpg_article' => 'mmorpg_article',
            ),
          ),
          'context' => 'node',
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
  $display->uuid = 'a4448960-4e01-4ac6-8bda-950f583929b6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a50dd31e-fe3b-439b-9d24-21ba5418bb0f';
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
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a50dd31e-fe3b-439b-9d24-21ba5418bb0f';
    $display->content['new-a50dd31e-fe3b-439b-9d24-21ba5418bb0f'] = $pane;
    $display->panels['content'][0] = 'new-a50dd31e-fe3b-439b-9d24-21ba5418bb0f';
    $pane = new stdClass();
    $pane->pid = 'new-d3724784-4e06-404c-80a9-648ac08dd08f';
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
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd3724784-4e06-404c-80a9-648ac08dd08f';
    $display->content['new-d3724784-4e06-404c-80a9-648ac08dd08f'] = $pane;
    $display->panels['header'][0] = 'new-d3724784-4e06-404c-80a9-648ac08dd08f';
    $pane = new stdClass();
    $pane->pid = 'new-129c11c6-4724-4223-9591-43afc8d61208';
    $pane->panel = 'highlighted';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_siteskins-active_siteskin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '129c11c6-4724-4223-9591-43afc8d61208';
    $display->content['new-129c11c6-4724-4223-9591-43afc8d61208'] = $pane;
    $display->panels['highlighted'][0] = 'new-129c11c6-4724-4223-9591-43afc8d61208';
    $pane = new stdClass();
    $pane->pid = 'new-94735cd2-bed4-40b8-a989-39845a993e25';
    $pane->panel = 'sidebar_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'promoted_signup_now_link-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '94735cd2-bed4-40b8-a989-39845a993e25';
    $display->content['new-94735cd2-bed4-40b8-a989-39845a993e25'] = $pane;
    $display->panels['sidebar_second'][0] = 'new-94735cd2-bed4-40b8-a989-39845a993e25';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__article_page'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__game_overview';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -19;
  $handler->conf = array(
    'title' => 'Game Overview',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'game_overview',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'game/*/overview',
          ),
          'context' => 'alias',
          'not' => FALSE,
        ),
      ),
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
  $display->uuid = '4a7fb93b-76b6-4706-a315-07a586cb45bc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-343e9fe5-bac9-411a-a776-fe6fe6f429eb';
    $pane->panel = 'content';
    $pane->type = 'views';
    $pane->subtype = 'nodetitleview';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '%1',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => '',
      ),
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
    $pane->uuid = '343e9fe5-bac9-411a-a776-fe6fe6f429eb';
    $display->content['new-343e9fe5-bac9-411a-a776-fe6fe6f429eb'] = $pane;
    $display->panels['content'][0] = 'new-343e9fe5-bac9-411a-a776-fe6fe6f429eb';
    $pane = new stdClass();
    $pane->pid = 'new-381e24fb-6082-4c9f-80a2-ab955f0953b2';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_game-game_rss_link_block';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '381e24fb-6082-4c9f-80a2-ab955f0953b2';
    $display->content['new-381e24fb-6082-4c9f-80a2-ab955f0953b2'] = $pane;
    $display->panels['content'][1] = 'new-381e24fb-6082-4c9f-80a2-ab955f0953b2';
    $pane = new stdClass();
    $pane->pid = 'new-718dc336-91be-4446-83ba-6138dcca3841';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_game-game_menu_block';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '718dc336-91be-4446-83ba-6138dcca3841';
    $display->content['new-718dc336-91be-4446-83ba-6138dcca3841'] = $pane;
    $display->panels['content'][2] = 'new-718dc336-91be-4446-83ba-6138dcca3841';
    $pane = new stdClass();
    $pane->pid = 'new-7b400639-bb8b-4544-8866-d9598aad6d4a';
    $pane->panel = 'content';
    $pane->type = 'views';
    $pane->subtype = 'game_overview_articles';
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
      'args' => '%1',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => '',
      ),
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '7b400639-bb8b-4544-8866-d9598aad6d4a';
    $display->content['new-7b400639-bb8b-4544-8866-d9598aad6d4a'] = $pane;
    $display->panels['content'][3] = 'new-7b400639-bb8b-4544-8866-d9598aad6d4a';
    $pane = new stdClass();
    $pane->pid = 'new-0e5e0dfc-7b03-454b-8de8-204a6f4e52c8';
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
    $pane->uuid = '0e5e0dfc-7b03-454b-8de8-204a6f4e52c8';
    $display->content['new-0e5e0dfc-7b03-454b-8de8-204a6f4e52c8'] = $pane;
    $display->panels['header'][0] = 'new-0e5e0dfc-7b03-454b-8de8-204a6f4e52c8';
    $pane = new stdClass();
    $pane->pid = 'new-d1bd1815-3846-4938-84b4-0da3dfd8caa1';
    $pane->panel = 'highlighted';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_siteskins-active_siteskin';
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
    $pane->uuid = 'd1bd1815-3846-4938-84b4-0da3dfd8caa1';
    $display->content['new-d1bd1815-3846-4938-84b4-0da3dfd8caa1'] = $pane;
    $display->panels['highlighted'][0] = 'new-d1bd1815-3846-4938-84b4-0da3dfd8caa1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7b400639-bb8b-4544-8866-d9598aad6d4a';
  $handler->conf['display'] = $display;
  $export['site_template__game_overview'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__game_ratings';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -20;
  $handler->conf = array(
    'title' => 'Game Ratings',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'game_ratings',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'game/*/ratings',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'omega:mm3col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
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
  $display->uuid = '02ea9666-92cb-4cb4-95ca-8c43cacd6699';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e2f7604b-2c19-46a4-80d4-173a02fec4e9';
    $pane->panel = 'content';
    $pane->type = 'views';
    $pane->subtype = 'nodetitleview';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '%1',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => '',
      ),
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
    $pane->uuid = 'e2f7604b-2c19-46a4-80d4-173a02fec4e9';
    $display->content['new-e2f7604b-2c19-46a4-80d4-173a02fec4e9'] = $pane;
    $display->panels['content'][0] = 'new-e2f7604b-2c19-46a4-80d4-173a02fec4e9';
    $pane = new stdClass();
    $pane->pid = 'new-4ddfff5e-248f-4d22-ae9e-37fe3a034b1d';
    $pane->panel = 'content';
    $pane->type = 'views';
    $pane->subtype = 'game_ratings';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '%1',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => '',
      ),
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
    $pane->uuid = '4ddfff5e-248f-4d22-ae9e-37fe3a034b1d';
    $display->content['new-4ddfff5e-248f-4d22-ae9e-37fe3a034b1d'] = $pane;
    $display->panels['content'][1] = 'new-4ddfff5e-248f-4d22-ae9e-37fe3a034b1d';
    $pane = new stdClass();
    $pane->pid = 'new-f95552f3-bc6b-488e-b948-01be2320c4d9';
    $pane->panel = 'content';
    $pane->type = 'views';
    $pane->subtype = 'game_ratings';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '%1',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => '',
      ),
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'f95552f3-bc6b-488e-b948-01be2320c4d9';
    $display->content['new-f95552f3-bc6b-488e-b948-01be2320c4d9'] = $pane;
    $display->panels['content'][2] = 'new-f95552f3-bc6b-488e-b948-01be2320c4d9';
    $pane = new stdClass();
    $pane->pid = 'new-c517c4e4-926c-4c57-a667-4cf748b4e986';
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
    $pane->uuid = 'c517c4e4-926c-4c57-a667-4cf748b4e986';
    $display->content['new-c517c4e4-926c-4c57-a667-4cf748b4e986'] = $pane;
    $display->panels['header'][0] = 'new-c517c4e4-926c-4c57-a667-4cf748b4e986';
    $pane = new stdClass();
    $pane->pid = 'new-d024ad21-381c-4850-b047-f2caab284517';
    $pane->panel = 'highlighted';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_siteskins-active_siteskin';
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
    $pane->uuid = 'd024ad21-381c-4850-b047-f2caab284517';
    $display->content['new-d024ad21-381c-4850-b047-f2caab284517'] = $pane;
    $display->panels['highlighted'][0] = 'new-d024ad21-381c-4850-b047-f2caab284517';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__game_ratings'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__giveaway';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -22;
  $handler->conf = array(
    'title' => 'Giveaway',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'giveaway',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'giveaway' => 'giveaway',
            ),
          ),
          'context' => 'node',
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
  $display->uuid = '2c3fdbf5-1fd6-47b9-87a7-18cf545ad8b5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3655c96a-f744-43ee-a15f-dcb599433642';
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
    $pane->locks = array();
    $pane->uuid = '3655c96a-f744-43ee-a15f-dcb599433642';
    $display->content['new-3655c96a-f744-43ee-a15f-dcb599433642'] = $pane;
    $display->panels['content'][0] = 'new-3655c96a-f744-43ee-a15f-dcb599433642';
    $pane = new stdClass();
    $pane->pid = 'new-f193b516-ef64-4f63-beb6-666a9eefd73f';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_article_hero_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => '',
        'image_link' => '',
      ),
      'context' => 'node',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f193b516-ef64-4f63-beb6-666a9eefd73f';
    $display->content['new-f193b516-ef64-4f63-beb6-666a9eefd73f'] = $pane;
    $display->panels['content'][1] = 'new-f193b516-ef64-4f63-beb6-666a9eefd73f';
    $pane = new stdClass();
    $pane->pid = 'new-c45fcf7b-5ff0-4b8c-a342-aa2b473363b8';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'node',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c45fcf7b-5ff0-4b8c-a342-aa2b473363b8';
    $display->content['new-c45fcf7b-5ff0-4b8c-a342-aa2b473363b8'] = $pane;
    $display->panels['content'][2] = 'new-c45fcf7b-5ff0-4b8c-a342-aa2b473363b8';
    $pane = new stdClass();
    $pane->pid = 'new-1d555fec-c2c8-4bf8-9295-287aa1d7b7ee';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'giveaway-giveaway_keys_left_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '1d555fec-c2c8-4bf8-9295-287aa1d7b7ee';
    $display->content['new-1d555fec-c2c8-4bf8-9295-287aa1d7b7ee'] = $pane;
    $display->panels['content'][3] = 'new-1d555fec-c2c8-4bf8-9295-287aa1d7b7ee';
    $pane = new stdClass();
    $pane->pid = 'new-a6aa9cae-ff3f-4ebd-876a-667dccdb19dd';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'giveaway-giveaway_claim_block';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'giveaway_user_has_claimed',
          'settings' => NULL,
          'context' => array(
            0 => 'logged-in-user',
            1 => 'node',
          ),
          'not' => TRUE,
        ),
        1 => array(
          'name' => 'giveaway_keys_are_available',
          'settings' => NULL,
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'a6aa9cae-ff3f-4ebd-876a-667dccdb19dd';
    $display->content['new-a6aa9cae-ff3f-4ebd-876a-667dccdb19dd'] = $pane;
    $display->panels['content'][4] = 'new-a6aa9cae-ff3f-4ebd-876a-667dccdb19dd';
    $pane = new stdClass();
    $pane->pid = 'new-991fd90a-fe18-49e6-8396-6ab93f03e14c';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'giveaway-giveaway_user_claimed_key_block';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'giveaway_user_has_claimed',
          'settings' => NULL,
          'context' => array(
            0 => 'logged-in-user',
            1 => 'node',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '991fd90a-fe18-49e6-8396-6ab93f03e14c';
    $display->content['new-991fd90a-fe18-49e6-8396-6ab93f03e14c'] = $pane;
    $display->panels['content'][5] = 'new-991fd90a-fe18-49e6-8396-6ab93f03e14c';
    $pane = new stdClass();
    $pane->pid = 'new-e1730cd1-ad8f-4490-a50f-0ee9544643c5';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_successfuly_giveaway_body';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'giveaway_user_has_claimed',
          'settings' => NULL,
          'context' => array(
            0 => 'logged-in-user',
            1 => 'node',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'e1730cd1-ad8f-4490-a50f-0ee9544643c5';
    $display->content['new-e1730cd1-ad8f-4490-a50f-0ee9544643c5'] = $pane;
    $display->panels['content'][6] = 'new-e1730cd1-ad8f-4490-a50f-0ee9544643c5';
    $pane = new stdClass();
    $pane->pid = 'new-becc6577-b7e9-462e-ad48-0d7e32d575de';
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
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'becc6577-b7e9-462e-ad48-0d7e32d575de';
    $display->content['new-becc6577-b7e9-462e-ad48-0d7e32d575de'] = $pane;
    $display->panels['header'][0] = 'new-becc6577-b7e9-462e-ad48-0d7e32d575de';
    $pane = new stdClass();
    $pane->pid = 'new-a60d5ae0-7d35-43d3-a98f-f51e9ba17b94';
    $pane->panel = 'highlighted';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_siteskins-active_siteskin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a60d5ae0-7d35-43d3-a98f-f51e9ba17b94';
    $display->content['new-a60d5ae0-7d35-43d3-a98f-f51e9ba17b94'] = $pane;
    $display->panels['highlighted'][0] = 'new-a60d5ae0-7d35-43d3-a98f-f51e9ba17b94';
    $pane = new stdClass();
    $pane->pid = 'new-71fe6184-a530-436f-be89-8deeab75ab41';
    $pane->panel = 'sidebar_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'promoted_signup_now_link-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '71fe6184-a530-436f-be89-8deeab75ab41';
    $display->content['new-71fe6184-a530-436f-be89-8deeab75ab41'] = $pane;
    $display->panels['sidebar_second'][0] = 'new-71fe6184-a530-436f-be89-8deeab75ab41';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-becc6577-b7e9-462e-ad48-0d7e32d575de';
  $handler->conf['display'] = $display;
  $export['site_template__giveaway'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__giveaway_listing';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -23;
  $handler->conf = array(
    'title' => 'Giveaway Listing ',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'giveaway_listing',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'giveaways',
          ),
          'context' => 'empty',
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
  $display->title = 'Special Offers & Giveaways';
  $display->uuid = '9981227f-b807-4b3b-934a-e8b6ccd98043';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bc0ac0ce-75c6-4954-b6b9-a1b03eb05a09';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'views-9b140173c25d0bcb9547caefc717b04f';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 1,
      'override_title_text' => 'Special Offers & Giveaways',
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
    $pane->uuid = 'bc0ac0ce-75c6-4954-b6b9-a1b03eb05a09';
    $display->content['new-bc0ac0ce-75c6-4954-b6b9-a1b03eb05a09'] = $pane;
    $display->panels['content'][0] = 'new-bc0ac0ce-75c6-4954-b6b9-a1b03eb05a09';
    $pane = new stdClass();
    $pane->pid = 'new-2f087762-5a3f-425e-a744-9f5c55b9dd9d';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'giveaway_listing-panel_pane_1';
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
    $pane->uuid = '2f087762-5a3f-425e-a744-9f5c55b9dd9d';
    $display->content['new-2f087762-5a3f-425e-a744-9f5c55b9dd9d'] = $pane;
    $display->panels['content'][1] = 'new-2f087762-5a3f-425e-a744-9f5c55b9dd9d';
    $pane = new stdClass();
    $pane->pid = 'new-11a9df9c-84e5-432b-a1f9-c72cb0a21a88';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'giveaway_listing-panel_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '11a9df9c-84e5-432b-a1f9-c72cb0a21a88';
    $display->content['new-11a9df9c-84e5-432b-a1f9-c72cb0a21a88'] = $pane;
    $display->panels['content'][2] = 'new-11a9df9c-84e5-432b-a1f9-c72cb0a21a88';
    $pane = new stdClass();
    $pane->pid = 'new-00af7f15-76bb-441e-8ea4-8be6b56fc3b9';
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
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '00af7f15-76bb-441e-8ea4-8be6b56fc3b9';
    $display->content['new-00af7f15-76bb-441e-8ea4-8be6b56fc3b9'] = $pane;
    $display->panels['header'][0] = 'new-00af7f15-76bb-441e-8ea4-8be6b56fc3b9';
    $pane = new stdClass();
    $pane->pid = 'new-3c407aa2-ca1c-4ed3-bd57-472c0b627219';
    $pane->panel = 'highlighted';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_siteskins-active_siteskin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3c407aa2-ca1c-4ed3-bd57-472c0b627219';
    $display->content['new-3c407aa2-ca1c-4ed3-bd57-472c0b627219'] = $pane;
    $display->panels['highlighted'][0] = 'new-3c407aa2-ca1c-4ed3-bd57-472c0b627219';
    $pane = new stdClass();
    $pane->pid = 'new-3f64300a-7232-483c-bd90-6312fd0cb729';
    $pane->panel = 'sidebar_second';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3f64300a-7232-483c-bd90-6312fd0cb729';
    $display->content['new-3f64300a-7232-483c-bd90-6312fd0cb729'] = $pane;
    $display->panels['sidebar_second'][0] = 'new-3f64300a-7232-483c-bd90-6312fd0cb729';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-00af7f15-76bb-441e-8ea4-8be6b56fc3b9';
  $handler->conf['display'] = $display;
  $export['site_template__giveaway_listing'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__homepage';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
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
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'none',
      ),
    );
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
    $pane->pid = 'new-8948bcd2-b7ec-46ef-a4b7-7f7f2f5a7ee4';
    $pane->panel = 'highlighted';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_siteskins-active_siteskin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8948bcd2-b7ec-46ef-a4b7-7f7f2f5a7ee4';
    $display->content['new-8948bcd2-b7ec-46ef-a4b7-7f7f2f5a7ee4'] = $pane;
    $display->panels['highlighted'][0] = 'new-8948bcd2-b7ec-46ef-a4b7-7f7f2f5a7ee4';
    $pane = new stdClass();
    $pane->pid = 'new-afeb6bb9-06a4-4e1b-9c5a-3f7ff30f8660';
    $pane->panel = 'sidebar_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'promoted_signup_now_link-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'none',
      ),
    );
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
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__homepage'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__invisible_content';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'http_response';
  $handler->weight = -21;
  $handler->conf = array(
    'title' => 'invisible content',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => '<front>',
    'name' => 'invisible_content',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'promoted_signup_now_link' => 'promoted_signup_now_link',
              'signup_now_link' => 'signup_now_link',
              'siteskin' => 'siteskin',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $export['site_template__invisible_content'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__node';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Game',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'node',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'game' => 'game',
            ),
          ),
          'context' => 'node',
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
  $display->uuid = '6b2bec4c-341f-45f2-b7c2-446c61d239d0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-71b6079b-c0eb-42fc-83ea-36ee32c6f533';
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
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '71b6079b-c0eb-42fc-83ea-36ee32c6f533';
    $display->content['new-71b6079b-c0eb-42fc-83ea-36ee32c6f533'] = $pane;
    $display->panels['content'][0] = 'new-71b6079b-c0eb-42fc-83ea-36ee32c6f533';
    $pane = new stdClass();
    $pane->pid = 'new-c237bda8-9688-4624-aa4b-bad1006f4b82';
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
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c237bda8-9688-4624-aa4b-bad1006f4b82';
    $display->content['new-c237bda8-9688-4624-aa4b-bad1006f4b82'] = $pane;
    $display->panels['header'][0] = 'new-c237bda8-9688-4624-aa4b-bad1006f4b82';
    $pane = new stdClass();
    $pane->pid = 'new-8898c07d-0ebb-4238-9a5d-a455ae5c16c3';
    $pane->panel = 'highlighted';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_siteskins-active_siteskin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8898c07d-0ebb-4238-9a5d-a455ae5c16c3';
    $display->content['new-8898c07d-0ebb-4238-9a5d-a455ae5c16c3'] = $pane;
    $display->panels['highlighted'][0] = 'new-8898c07d-0ebb-4238-9a5d-a455ae5c16c3';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-c237bda8-9688-4624-aa4b-bad1006f4b82';
  $handler->conf['display'] = $display;
  $export['site_template__node'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__play_now';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'Play Now',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'play_now',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'play-now',
          ),
          'context' => 'alias',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'play-now/*',
          ),
          'context' => 'alias',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
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
  $display->uuid = 'f6a1774c-b3f7-49a9-9772-05a343d9514e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a167ad1c-c41b-41fb-9b7d-3e5c0b48d32c';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'play_now-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a167ad1c-c41b-41fb-9b7d-3e5c0b48d32c';
    $display->content['new-a167ad1c-c41b-41fb-9b7d-3e5c0b48d32c'] = $pane;
    $display->panels['content'][0] = 'new-a167ad1c-c41b-41fb-9b7d-3e5c0b48d32c';
    $pane = new stdClass();
    $pane->pid = 'new-685d8f56-53b4-45d2-9760-aa3e7d7e3479';
    $pane->panel = 'content';
    $pane->type = 'views';
    $pane->subtype = 'play_now';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '%1',
      'url' => '',
      'display' => 'page',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '685d8f56-53b4-45d2-9760-aa3e7d7e3479';
    $display->content['new-685d8f56-53b4-45d2-9760-aa3e7d7e3479'] = $pane;
    $display->panels['content'][1] = 'new-685d8f56-53b4-45d2-9760-aa3e7d7e3479';
    $pane = new stdClass();
    $pane->pid = 'new-667323f0-03a0-4cf1-b0cc-37dd417d5da3';
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
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '667323f0-03a0-4cf1-b0cc-37dd417d5da3';
    $display->content['new-667323f0-03a0-4cf1-b0cc-37dd417d5da3'] = $pane;
    $display->panels['header'][0] = 'new-667323f0-03a0-4cf1-b0cc-37dd417d5da3';
    $pane = new stdClass();
    $pane->pid = 'new-07b4d143-c7ea-43ce-b159-3063976bfeb0';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_signup_now-play_now_page_filters';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'play-now
play-now/*',
          ),
          'context' => 'alias',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Games / Play Now',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '604800',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '07b4d143-c7ea-43ce-b159-3063976bfeb0';
    $display->content['new-07b4d143-c7ea-43ce-b159-3063976bfeb0'] = $pane;
    $display->panels['header'][1] = 'new-07b4d143-c7ea-43ce-b159-3063976bfeb0';
    $pane = new stdClass();
    $pane->pid = 'new-3f14db0b-a913-4eeb-9ba5-04a8833dd171';
    $pane->panel = 'header';
    $pane->type = 'views';
    $pane->subtype = 'play_now_slider';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
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
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3f14db0b-a913-4eeb-9ba5-04a8833dd171';
    $display->content['new-3f14db0b-a913-4eeb-9ba5-04a8833dd171'] = $pane;
    $display->panels['header'][2] = 'new-3f14db0b-a913-4eeb-9ba5-04a8833dd171';
    $pane = new stdClass();
    $pane->pid = 'new-e809eee7-513d-4014-bcc2-49dc42d7f0a7';
    $pane->panel = 'highlighted';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_siteskins-active_siteskin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e809eee7-513d-4014-bcc2-49dc42d7f0a7';
    $display->content['new-e809eee7-513d-4014-bcc2-49dc42d7f0a7'] = $pane;
    $display->panels['highlighted'][0] = 'new-e809eee7-513d-4014-bcc2-49dc42d7f0a7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__play_now'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__screenshot_gallery';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Screenshot Gallery ',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'screenshot_gallery',
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'game/*/screenshots',
          ),
          'context' => 'empty',
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
  $display->uuid = 'a7a2ca11-393d-4743-93d4-7e1eda7954ab';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-04276d70-28e0-4b7d-8558-998900eeb834';
    $pane->panel = 'content';
    $pane->type = 'views';
    $pane->subtype = 'nodetitleview';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '%1',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => '',
      ),
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
    $pane->uuid = '04276d70-28e0-4b7d-8558-998900eeb834';
    $display->content['new-04276d70-28e0-4b7d-8558-998900eeb834'] = $pane;
    $display->panels['content'][0] = 'new-04276d70-28e0-4b7d-8558-998900eeb834';
    $pane = new stdClass();
    $pane->pid = 'new-47fcb198-dd62-4167-9d2b-85cbe1022c9b';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_game-game_rss_link_block';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '47fcb198-dd62-4167-9d2b-85cbe1022c9b';
    $display->content['new-47fcb198-dd62-4167-9d2b-85cbe1022c9b'] = $pane;
    $display->panels['content'][1] = 'new-47fcb198-dd62-4167-9d2b-85cbe1022c9b';
    $pane = new stdClass();
    $pane->pid = 'new-e7aa4d2c-2872-4473-b6e5-16ac5c0f03d9';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_game-game_menu_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e7aa4d2c-2872-4473-b6e5-16ac5c0f03d9';
    $display->content['new-e7aa4d2c-2872-4473-b6e5-16ac5c0f03d9'] = $pane;
    $display->panels['content'][2] = 'new-e7aa4d2c-2872-4473-b6e5-16ac5c0f03d9';
    $pane = new stdClass();
    $pane->pid = 'new-5b00099f-e55a-4593-841c-1af567e499e8';
    $pane->panel = 'content';
    $pane->type = 'views';
    $pane->subtype = 'screenshot_gallery_grid';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '18',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '%1',
      'url' => '',
      'display' => 'page_1',
      'context' => array(
        0 => '',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '5b00099f-e55a-4593-841c-1af567e499e8';
    $display->content['new-5b00099f-e55a-4593-841c-1af567e499e8'] = $pane;
    $display->panels['content'][3] = 'new-5b00099f-e55a-4593-841c-1af567e499e8';
    $pane = new stdClass();
    $pane->pid = 'new-e9b33dd0-2810-4ea8-a97b-506ee998d33e';
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
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e9b33dd0-2810-4ea8-a97b-506ee998d33e';
    $display->content['new-e9b33dd0-2810-4ea8-a97b-506ee998d33e'] = $pane;
    $display->panels['header'][0] = 'new-e9b33dd0-2810-4ea8-a97b-506ee998d33e';
    $pane = new stdClass();
    $pane->pid = 'new-52f7829d-0d47-47c1-8d84-4afd8ad39aad';
    $pane->panel = 'highlighted';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_siteskins-active_siteskin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '52f7829d-0d47-47c1-8d84-4afd8ad39aad';
    $display->content['new-52f7829d-0d47-47c1-8d84-4afd8ad39aad'] = $pane;
    $display->panels['highlighted'][0] = 'new-52f7829d-0d47-47c1-8d84-4afd8ad39aad';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-e9b33dd0-2810-4ea8-a97b-506ee998d33e';
  $handler->conf['display'] = $display;
  $export['site_template__screenshot_gallery'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__video_detail_page';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -24;
  $handler->conf = array(
    'title' => 'Video Detail Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'video_detail_page',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'game/*/video/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'omega:mm3col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
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
  $display->uuid = '9dfd06bb-09eb-408a-82e6-335c6b3480bc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a0cdb036-55c4-4893-beda-531f2aa34ed7';
    $pane->panel = 'content';
    $pane->type = 'views';
    $pane->subtype = 'nodetitleview';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '%1',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => '',
      ),
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
    $pane->uuid = 'a0cdb036-55c4-4893-beda-531f2aa34ed7';
    $display->content['new-a0cdb036-55c4-4893-beda-531f2aa34ed7'] = $pane;
    $display->panels['content'][0] = 'new-a0cdb036-55c4-4893-beda-531f2aa34ed7';
    $pane = new stdClass();
    $pane->pid = 'new-4d8ad233-0e7a-4549-a42e-5dd16d43ec01';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_game-game_rss_link_block';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4d8ad233-0e7a-4549-a42e-5dd16d43ec01';
    $display->content['new-4d8ad233-0e7a-4549-a42e-5dd16d43ec01'] = $pane;
    $display->panels['content'][1] = 'new-4d8ad233-0e7a-4549-a42e-5dd16d43ec01';
    $pane = new stdClass();
    $pane->pid = 'new-0544883b-c5ce-4f86-9b04-70bcacf61ed3';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_game-game_menu_block';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0544883b-c5ce-4f86-9b04-70bcacf61ed3';
    $display->content['new-0544883b-c5ce-4f86-9b04-70bcacf61ed3'] = $pane;
    $display->panels['content'][2] = 'new-0544883b-c5ce-4f86-9b04-70bcacf61ed3';
    $pane = new stdClass();
    $pane->pid = 'new-2bb2f150-96cd-4574-882d-996e11239b17';
    $pane->panel = 'content';
    $pane->type = 'views';
    $pane->subtype = 'video_details_player';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '%3',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => '',
      ),
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '2bb2f150-96cd-4574-882d-996e11239b17';
    $display->content['new-2bb2f150-96cd-4574-882d-996e11239b17'] = $pane;
    $display->panels['content'][3] = 'new-2bb2f150-96cd-4574-882d-996e11239b17';
    $pane = new stdClass();
    $pane->pid = 'new-71b3b4e9-f7e4-469d-9459-9e189db385a8';
    $pane->panel = 'content';
    $pane->type = 'sharethis';
    $pane->subtype = 'sharethis';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path' => 'current',
      'path-external' => '',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '71b3b4e9-f7e4-469d-9459-9e189db385a8';
    $display->content['new-71b3b4e9-f7e4-469d-9459-9e189db385a8'] = $pane;
    $display->panels['content'][4] = 'new-71b3b4e9-f7e4-469d-9459-9e189db385a8';
    $pane = new stdClass();
    $pane->pid = 'new-07a9bab4-ec83-4a40-8003-d9879289c95b';
    $pane->panel = 'content';
    $pane->type = 'node_comment_wrapper';
    $pane->subtype = 'node_comment_wrapper';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '07a9bab4-ec83-4a40-8003-d9879289c95b';
    $display->content['new-07a9bab4-ec83-4a40-8003-d9879289c95b'] = $pane;
    $display->panels['content'][5] = 'new-07a9bab4-ec83-4a40-8003-d9879289c95b';
    $pane = new stdClass();
    $pane->pid = 'new-9ccd08bf-8771-47e1-a1b4-2d3d93cf683d';
    $pane->panel = 'content';
    $pane->type = 'token';
    $pane->subtype = 'node:comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '9ccd08bf-8771-47e1-a1b4-2d3d93cf683d';
    $display->content['new-9ccd08bf-8771-47e1-a1b4-2d3d93cf683d'] = $pane;
    $display->panels['content'][6] = 'new-9ccd08bf-8771-47e1-a1b4-2d3d93cf683d';
    $pane = new stdClass();
    $pane->pid = 'new-449f3985-da87-4b81-a982-4ec43fdc0ebc';
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
    $pane->uuid = '449f3985-da87-4b81-a982-4ec43fdc0ebc';
    $display->content['new-449f3985-da87-4b81-a982-4ec43fdc0ebc'] = $pane;
    $display->panels['header'][0] = 'new-449f3985-da87-4b81-a982-4ec43fdc0ebc';
    $pane = new stdClass();
    $pane->pid = 'new-b0a7cfca-949e-4cac-8c35-8baf87baf1cd';
    $pane->panel = 'highlighted';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_siteskins-active_siteskin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b0a7cfca-949e-4cac-8c35-8baf87baf1cd';
    $display->content['new-b0a7cfca-949e-4cac-8c35-8baf87baf1cd'] = $pane;
    $display->panels['highlighted'][0] = 'new-b0a7cfca-949e-4cac-8c35-8baf87baf1cd';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__video_detail_page'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__video_listing';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'Video Listing ',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'video_listing',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'game/*/videos',
          ),
          'context' => 'empty',
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
  $display->uuid = '9981227f-b807-4b3b-934a-e8b6ccd98043';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-332c1339-34e9-434c-be47-b68dd8b3160f';
    $pane->panel = 'content';
    $pane->type = 'views';
    $pane->subtype = 'nodetitleview';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '%1',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => '',
      ),
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
    $pane->uuid = '332c1339-34e9-434c-be47-b68dd8b3160f';
    $display->content['new-332c1339-34e9-434c-be47-b68dd8b3160f'] = $pane;
    $display->panels['content'][0] = 'new-332c1339-34e9-434c-be47-b68dd8b3160f';
    $pane = new stdClass();
    $pane->pid = 'new-68abb798-5556-4063-a13e-c9488de0c358';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_game-game_rss_link_block';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '68abb798-5556-4063-a13e-c9488de0c358';
    $display->content['new-68abb798-5556-4063-a13e-c9488de0c358'] = $pane;
    $display->panels['content'][1] = 'new-68abb798-5556-4063-a13e-c9488de0c358';
    $pane = new stdClass();
    $pane->pid = 'new-d3ed0033-3f91-40b7-ab77-6ef07f65638b';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_game-game_menu_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '604800',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd3ed0033-3f91-40b7-ab77-6ef07f65638b';
    $display->content['new-d3ed0033-3f91-40b7-ab77-6ef07f65638b'] = $pane;
    $display->panels['content'][2] = 'new-d3ed0033-3f91-40b7-ab77-6ef07f65638b';
    $pane = new stdClass();
    $pane->pid = 'new-1dabaf04-d8eb-493c-8db4-faed841b29eb';
    $pane->panel = 'content';
    $pane->type = 'views';
    $pane->subtype = 'video_exclusive';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '%1',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => '',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '1dabaf04-d8eb-493c-8db4-faed841b29eb';
    $display->content['new-1dabaf04-d8eb-493c-8db4-faed841b29eb'] = $pane;
    $display->panels['content'][3] = 'new-1dabaf04-d8eb-493c-8db4-faed841b29eb';
    $pane = new stdClass();
    $pane->pid = 'new-973b3525-2ec5-4e58-b916-669fcbb907b1';
    $pane->panel = 'content';
    $pane->type = 'views';
    $pane->subtype = 'video_gallery_grid';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '16',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '%1',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => '',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '973b3525-2ec5-4e58-b916-669fcbb907b1';
    $display->content['new-973b3525-2ec5-4e58-b916-669fcbb907b1'] = $pane;
    $display->panels['content'][4] = 'new-973b3525-2ec5-4e58-b916-669fcbb907b1';
    $pane = new stdClass();
    $pane->pid = 'new-00af7f15-76bb-441e-8ea4-8be6b56fc3b9';
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
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '00af7f15-76bb-441e-8ea4-8be6b56fc3b9';
    $display->content['new-00af7f15-76bb-441e-8ea4-8be6b56fc3b9'] = $pane;
    $display->panels['header'][0] = 'new-00af7f15-76bb-441e-8ea4-8be6b56fc3b9';
    $pane = new stdClass();
    $pane->pid = 'new-3c407aa2-ca1c-4ed3-bd57-472c0b627219';
    $pane->panel = 'highlighted';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_siteskins-active_siteskin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3c407aa2-ca1c-4ed3-bd57-472c0b627219';
    $display->content['new-3c407aa2-ca1c-4ed3-bd57-472c0b627219'] = $pane;
    $display->panels['highlighted'][0] = 'new-3c407aa2-ca1c-4ed3-bd57-472c0b627219';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-00af7f15-76bb-441e-8ea4-8be6b56fc3b9';
  $handler->conf['display'] = $display;
  $export['site_template__video_listing'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context_basic';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -20;
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
