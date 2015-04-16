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
    $pane->cache = array();
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
    $pane->cache = array();
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
    $pane->cache = array();
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
    $pane->cache = array();
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
    $pane->pid = 'new-f9393c76-9f0b-4ce5-b231-9e6575ba7ed0';
    $pane->panel = 'highlighted';
    $pane->type = 'views';
    $pane->subtype = 'siteskins_rendering';
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
      'display' => 'active_siteskin',
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
    $pane->uuid = 'f9393c76-9f0b-4ce5-b231-9e6575ba7ed0';
    $display->content['new-f9393c76-9f0b-4ce5-b231-9e6575ba7ed0'] = $pane;
    $display->panels['highlighted'][0] = 'new-f9393c76-9f0b-4ce5-b231-9e6575ba7ed0';
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
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__homepage'] = $handler;

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
    $pane->pid = 'new-640a8f4c-361c-4aff-b1a5-734cdf197e10';
    $pane->panel = 'content';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '%1',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
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
    $pane->uuid = '640a8f4c-361c-4aff-b1a5-734cdf197e10';
    $display->content['new-640a8f4c-361c-4aff-b1a5-734cdf197e10'] = $pane;
    $display->panels['content'][0] = 'new-640a8f4c-361c-4aff-b1a5-734cdf197e10';
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
    $pane->cache = array();
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
  $display->hide_title = PANELS_TITLE_FIXED;
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
    $pane->cache = array();
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
    $pane->cache = array();
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
    $pane->cache = array();
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
    $pane->cache = array();
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
    $pane->cache = array();
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
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__play_now'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__screenshot_gallery_';
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
    'name' => 'screenshot_gallery_',
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
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e7aa4d2c-2872-4473-b6e5-16ac5c0f03d9';
    $display->content['new-e7aa4d2c-2872-4473-b6e5-16ac5c0f03d9'] = $pane;
    $display->panels['content'][0] = 'new-e7aa4d2c-2872-4473-b6e5-16ac5c0f03d9';
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
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5b00099f-e55a-4593-841c-1af567e499e8';
    $display->content['new-5b00099f-e55a-4593-841c-1af567e499e8'] = $pane;
    $display->panels['content'][1] = 'new-5b00099f-e55a-4593-841c-1af567e499e8';
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
    $pane->cache = array();
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
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e9b33dd0-2810-4ea8-a97b-506ee998d33e';
  $handler->conf['display'] = $display;
  $export['site_template__screenshot_gallery_'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__video_listing_';
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
    'name' => 'video_listing_',
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
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd3ed0033-3f91-40b7-ab77-6ef07f65638b';
    $display->content['new-d3ed0033-3f91-40b7-ab77-6ef07f65638b'] = $pane;
    $display->panels['content'][0] = 'new-d3ed0033-3f91-40b7-ab77-6ef07f65638b';
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
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1dabaf04-d8eb-493c-8db4-faed841b29eb';
    $display->content['new-1dabaf04-d8eb-493c-8db4-faed841b29eb'] = $pane;
    $display->panels['content'][1] = 'new-1dabaf04-d8eb-493c-8db4-faed841b29eb';
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
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '973b3525-2ec5-4e58-b916-669fcbb907b1';
    $display->content['new-973b3525-2ec5-4e58-b916-669fcbb907b1'] = $pane;
    $display->panels['content'][2] = 'new-973b3525-2ec5-4e58-b916-669fcbb907b1';
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
    $pane->cache = array();
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
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-00af7f15-76bb-441e-8ea4-8be6b56fc3b9';
  $handler->conf['display'] = $display;
  $export['site_template__video_listing_'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context_basic';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
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
