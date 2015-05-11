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
  $handler->name = 'node_view__403';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'http_response';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => '403',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => '<front>',
    'name' => '403',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_access',
          'settings' => array(
            'type' => 'view',
          ),
          'context' => array(
            0 => 'logged-in-user',
            1 => 'argument_entity_id:node_1',
          ),
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $export['node_view__403'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__article';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Article, Game',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'article',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'mmorpg_article' => 'mmorpg_article',
              'game' => 'game',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
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
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd574ab09-bfc2-4620-9056-de5ba050757c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bcd3060f-0635-45bb-b054-78cd14ec61cb';
    $pane->panel = 'middle';
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
    $pane->uuid = 'bcd3060f-0635-45bb-b054-78cd14ec61cb';
    $display->content['new-bcd3060f-0635-45bb-b054-78cd14ec61cb'] = $pane;
    $display->panels['middle'][0] = 'new-bcd3060f-0635-45bb-b054-78cd14ec61cb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__article'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__giveaway';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
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
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f8c558f8-00bf-4659-ad1c-8babef1b8dd3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-60a87a87-1c56-4f6f-8631-676caaaafb08';
    $pane->panel = 'middle';
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
    $pane->uuid = '60a87a87-1c56-4f6f-8631-676caaaafb08';
    $display->content['new-60a87a87-1c56-4f6f-8631-676caaaafb08'] = $pane;
    $display->panels['middle'][0] = 'new-60a87a87-1c56-4f6f-8631-676caaaafb08';
    $pane = new stdClass();
    $pane->pid = 'new-29c5c6e2-7cb5-4a25-a38d-7b371fc62617';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_article_hero_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => '',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
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
    $pane->uuid = '29c5c6e2-7cb5-4a25-a38d-7b371fc62617';
    $display->content['new-29c5c6e2-7cb5-4a25-a38d-7b371fc62617'] = $pane;
    $display->panels['middle'][1] = 'new-29c5c6e2-7cb5-4a25-a38d-7b371fc62617';
    $pane = new stdClass();
    $pane->pid = 'new-a8c3e22c-c637-44bb-8ce7-dab82cf44437';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'giveaway-giveaway_keys_left_block';
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
    $pane->uuid = 'a8c3e22c-c637-44bb-8ce7-dab82cf44437';
    $display->content['new-a8c3e22c-c637-44bb-8ce7-dab82cf44437'] = $pane;
    $display->panels['middle'][2] = 'new-a8c3e22c-c637-44bb-8ce7-dab82cf44437';
    $pane = new stdClass();
    $pane->pid = 'new-51ed5465-2763-427a-9b0f-f9b5fb0ebf46';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'giveaway-giveaway_user_claimed_key_block';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '51ed5465-2763-427a-9b0f-f9b5fb0ebf46';
    $display->content['new-51ed5465-2763-427a-9b0f-f9b5fb0ebf46'] = $pane;
    $display->panels['middle'][3] = 'new-51ed5465-2763-427a-9b0f-f9b5fb0ebf46';
    $pane = new stdClass();
    $pane->pid = 'new-717982bb-8ccf-477d-bb5c-2a141d85cfbe';
    $pane->panel = 'middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
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
    $pane->uuid = '717982bb-8ccf-477d-bb5c-2a141d85cfbe';
    $display->content['new-717982bb-8ccf-477d-bb5c-2a141d85cfbe'] = $pane;
    $display->panels['middle'][4] = 'new-717982bb-8ccf-477d-bb5c-2a141d85cfbe';
    $pane = new stdClass();
    $pane->pid = 'new-f84b3c3d-8c37-4939-af33-f0beb38625ff';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'giveaway-giveaway_claim_block';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'f84b3c3d-8c37-4939-af33-f0beb38625ff';
    $display->content['new-f84b3c3d-8c37-4939-af33-f0beb38625ff'] = $pane;
    $display->panels['middle'][5] = 'new-f84b3c3d-8c37-4939-af33-f0beb38625ff';
    $pane = new stdClass();
    $pane->pid = 'new-413e3e2a-5369-4d48-9788-d8a68d5487b6';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_successfuly_giveaway_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
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
    $pane->uuid = '413e3e2a-5369-4d48-9788-d8a68d5487b6';
    $display->content['new-413e3e2a-5369-4d48-9788-d8a68d5487b6'] = $pane;
    $display->panels['middle'][6] = 'new-413e3e2a-5369-4d48-9788-d8a68d5487b6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-60a87a87-1c56-4f6f-8631-676caaaafb08';
  $handler->conf['display'] = $display;
  $export['node_view__giveaway'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__invisible_content';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'http_response';
  $handler->weight = 4;
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
          'context' => 'argument_entity_id:node_1',
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
  $export['node_view__invisible_content'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__video_detail';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Video',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'video_detail',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'video' => 'video',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'game/*/video/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
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
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '89be2883-3c88-48f9-baf6-1fb752a6510e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dc1e6d12-5d66-44cf-aef5-6b85e4a7cd36';
    $pane->panel = 'middle';
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
    $pane->uuid = 'dc1e6d12-5d66-44cf-aef5-6b85e4a7cd36';
    $display->content['new-dc1e6d12-5d66-44cf-aef5-6b85e4a7cd36'] = $pane;
    $display->panels['middle'][0] = 'new-dc1e6d12-5d66-44cf-aef5-6b85e4a7cd36';
    $pane = new stdClass();
    $pane->pid = 'new-2ea27bac-cda5-4005-bc8a-e676cbdb4e09';
    $pane->panel = 'middle';
    $pane->type = 'sharethis';
    $pane->subtype = 'sharethis';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path' => 'global',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2ea27bac-cda5-4005-bc8a-e676cbdb4e09';
    $display->content['new-2ea27bac-cda5-4005-bc8a-e676cbdb4e09'] = $pane;
    $display->panels['middle'][1] = 'new-2ea27bac-cda5-4005-bc8a-e676cbdb4e09';
    $pane = new stdClass();
    $pane->pid = 'new-9249518d-341d-4ff2-8749-24eb664e33c2';
    $pane->panel = 'middle';
    $pane->type = 'node_comment_wrapper';
    $pane->subtype = 'node_comment_wrapper';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9249518d-341d-4ff2-8749-24eb664e33c2';
    $display->content['new-9249518d-341d-4ff2-8749-24eb664e33c2'] = $pane;
    $display->panels['middle'][2] = 'new-9249518d-341d-4ff2-8749-24eb664e33c2';
    $pane = new stdClass();
    $pane->pid = 'new-b669d612-3376-4bb0-9df4-aebc6b26b63f';
    $pane->panel = 'middle';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'b669d612-3376-4bb0-9df4-aebc6b26b63f';
    $display->content['new-b669d612-3376-4bb0-9df4-aebc6b26b63f'] = $pane;
    $display->panels['middle'][3] = 'new-b669d612-3376-4bb0-9df4-aebc6b26b63f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__video_detail'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__403';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'http_response';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => '403',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => '<front>',
    'name' => '403',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_access',
          'settings' => array(
            'type' => 'view',
          ),
          'context' => array(
            0 => 'logged-in-user',
            1 => 'node',
          ),
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $export['site_template__403'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__article_page';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -21;
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
      'plugins' => array(),
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
  $handler->name = 'site_template__default';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'default',
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
  $display->uuid = 'b3ceda6d-2c35-417e-b4b9-fb962a678274';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-86f2eda9-0a6e-4a2c-8a1c-fa3c395977fe';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_site-title_block';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'game/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
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
    $pane->uuid = '86f2eda9-0a6e-4a2c-8a1c-fa3c395977fe';
    $display->content['new-86f2eda9-0a6e-4a2c-8a1c-fa3c395977fe'] = $pane;
    $display->panels['content'][0] = 'new-86f2eda9-0a6e-4a2c-8a1c-fa3c395977fe';
    $pane = new stdClass();
    $pane->pid = 'new-01e9b746-3189-4792-bff0-a70be3628d36';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_game-game_rss_link_block';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'game/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
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
    $pane->uuid = '01e9b746-3189-4792-bff0-a70be3628d36';
    $display->content['new-01e9b746-3189-4792-bff0-a70be3628d36'] = $pane;
    $display->panels['content'][1] = 'new-01e9b746-3189-4792-bff0-a70be3628d36';
    $pane = new stdClass();
    $pane->pid = 'new-5f2b4e0d-abea-4fab-9e65-0d0a905c54e5';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_game-game_menu_block';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'game/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        1 => array(
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
    );
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
    $pane->uuid = '5f2b4e0d-abea-4fab-9e65-0d0a905c54e5';
    $display->content['new-5f2b4e0d-abea-4fab-9e65-0d0a905c54e5'] = $pane;
    $display->panels['content'][2] = 'new-5f2b4e0d-abea-4fab-9e65-0d0a905c54e5';
    $pane = new stdClass();
    $pane->pid = 'new-7a64b417-72ac-4036-9987-a5ff1b12c3ac';
    $pane->panel = 'content';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
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
    $pane->uuid = '7a64b417-72ac-4036-9987-a5ff1b12c3ac';
    $display->content['new-7a64b417-72ac-4036-9987-a5ff1b12c3ac'] = $pane;
    $display->panels['content'][3] = 'new-7a64b417-72ac-4036-9987-a5ff1b12c3ac';
    $pane = new stdClass();
    $pane->pid = 'new-130e300d-6ed6-4177-b8d5-d5cd2dc1b086';
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
    $pane->uuid = '130e300d-6ed6-4177-b8d5-d5cd2dc1b086';
    $display->content['new-130e300d-6ed6-4177-b8d5-d5cd2dc1b086'] = $pane;
    $display->panels['header'][0] = 'new-130e300d-6ed6-4177-b8d5-d5cd2dc1b086';
    $pane = new stdClass();
    $pane->pid = 'new-0a786241-4c3f-40b3-8bc4-633ca4d592e9';
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
    $pane->uuid = '0a786241-4c3f-40b3-8bc4-633ca4d592e9';
    $display->content['new-0a786241-4c3f-40b3-8bc4-633ca4d592e9'] = $pane;
    $display->panels['highlighted'][0] = 'new-0a786241-4c3f-40b3-8bc4-633ca4d592e9';
    $pane = new stdClass();
    $pane->pid = 'new-20e08960-7330-41f9-aa19-8bbb012bc9a2';
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
    $pane->uuid = '20e08960-7330-41f9-aa19-8bbb012bc9a2';
    $display->content['new-20e08960-7330-41f9-aa19-8bbb012bc9a2'] = $pane;
    $display->panels['sidebar_second'][0] = 'new-20e08960-7330-41f9-aa19-8bbb012bc9a2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-130e300d-6ed6-4177-b8d5-d5cd2dc1b086';
  $handler->conf['display'] = $display;
  $export['site_template__default'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__game_overview';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
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
    $pane->pid = 'new-e00e623e-66cc-4448-81bd-bb5bf2eb3fb3';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_site-title_block';
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
    $pane->uuid = 'e00e623e-66cc-4448-81bd-bb5bf2eb3fb3';
    $display->content['new-e00e623e-66cc-4448-81bd-bb5bf2eb3fb3'] = $pane;
    $display->panels['content'][0] = 'new-e00e623e-66cc-4448-81bd-bb5bf2eb3fb3';
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
  $handler->weight = -27;
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
    $pane->pid = 'new-9a2ff95d-a9d7-440f-9efe-176e46a64b20';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_site-title_block';
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
    $pane->uuid = '9a2ff95d-a9d7-440f-9efe-176e46a64b20';
    $display->content['new-9a2ff95d-a9d7-440f-9efe-176e46a64b20'] = $pane;
    $display->panels['content'][0] = 'new-9a2ff95d-a9d7-440f-9efe-176e46a64b20';
    $pane = new stdClass();
    $pane->pid = 'new-2ee23c4d-4b41-4828-b1f3-eabcbbbcde74';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2ee23c4d-4b41-4828-b1f3-eabcbbbcde74';
    $display->content['new-2ee23c4d-4b41-4828-b1f3-eabcbbbcde74'] = $pane;
    $display->panels['content'][1] = 'new-2ee23c4d-4b41-4828-b1f3-eabcbbbcde74';
    $pane = new stdClass();
    $pane->pid = 'new-aab3be27-c390-4baf-a914-c8ad8851b416';
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
      'display' => 'inactive_ratings',
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
    $pane->uuid = 'aab3be27-c390-4baf-a914-c8ad8851b416';
    $display->content['new-aab3be27-c390-4baf-a914-c8ad8851b416'] = $pane;
    $display->panels['content'][2] = 'new-aab3be27-c390-4baf-a914-c8ad8851b416';
    $pane = new stdClass();
    $pane->pid = 'new-1cf620e9-ba13-425c-8440-94efa09d0437';
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
      'display' => 'active_ratings',
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
    $pane->uuid = '1cf620e9-ba13-425c-8440-94efa09d0437';
    $display->content['new-1cf620e9-ba13-425c-8440-94efa09d0437'] = $pane;
    $display->panels['content'][3] = 'new-1cf620e9-ba13-425c-8440-94efa09d0437';
    $pane = new stdClass();
    $pane->pid = 'new-147301d6-b586-4e3d-b07e-01235966c073';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Game Rating Notice',
      'title' => '',
      'body' => '<p><span style="font-family: sans-serif; font-size: 14px; background-color: rgb(255, 255, 255);">PLEASE NOTE: Manipulation of the ratings will result in the reset and disabling of this game\'s ratings. Examples of manipulation include (but are not limited to): creating multiple accounts in order to drive up the rating, developers encouraging fans to vote the rating to a specific number, and the offering of incentives for fans to vote up the rating (such as in-game rewards).</span></p>',
      'format' => 'filtered_html',
      'substitute' => 0,
      'name' => 'game_rating_notice',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '147301d6-b586-4e3d-b07e-01235966c073';
    $display->content['new-147301d6-b586-4e3d-b07e-01235966c073'] = $pane;
    $display->panels['content'][4] = 'new-147301d6-b586-4e3d-b07e-01235966c073';
    $pane = new stdClass();
    $pane->pid = 'new-69881c8c-11bf-46bd-84c9-4f5a3a2669c2';
    $pane->panel = 'content';
    $pane->type = 'views';
    $pane->subtype = 'reviews';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '69881c8c-11bf-46bd-84c9-4f5a3a2669c2';
    $display->content['new-69881c8c-11bf-46bd-84c9-4f5a3a2669c2'] = $pane;
    $display->panels['content'][5] = 'new-69881c8c-11bf-46bd-84c9-4f5a3a2669c2';
    $pane = new stdClass();
    $pane->pid = 'new-893b5082-b379-41de-a694-67c6a6ffef48';
    $pane->panel = 'content';
    $pane->type = 'views';
    $pane->subtype = 'reviews';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '893b5082-b379-41de-a694-67c6a6ffef48';
    $display->content['new-893b5082-b379-41de-a694-67c6a6ffef48'] = $pane;
    $display->panels['content'][6] = 'new-893b5082-b379-41de-a694-67c6a6ffef48';
    $pane = new stdClass();
    $pane->pid = 'new-10d2a5be-e63a-4d27-84e6-4660d7200eeb';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_rate-add_review_block';
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '10d2a5be-e63a-4d27-84e6-4660d7200eeb';
    $display->content['new-10d2a5be-e63a-4d27-84e6-4660d7200eeb'] = $pane;
    $display->panels['content'][7] = 'new-10d2a5be-e63a-4d27-84e6-4660d7200eeb';
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
  $handler->weight = -18;
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
        'image_style' => 'giveaway_node__700x305_',
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
    $pane->pid = 'new-9cedbb06-ee08-4000-96db-c3360321543d';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_article_overview';
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
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9cedbb06-ee08-4000-96db-c3360321543d';
    $display->content['new-9cedbb06-ee08-4000-96db-c3360321543d'] = $pane;
    $display->panels['content'][2] = 'new-9cedbb06-ee08-4000-96db-c3360321543d';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '991fd90a-fe18-49e6-8396-6ab93f03e14c';
    $display->content['new-991fd90a-fe18-49e6-8396-6ab93f03e14c'] = $pane;
    $display->panels['content'][4] = 'new-991fd90a-fe18-49e6-8396-6ab93f03e14c';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'c45fcf7b-5ff0-4b8c-a342-aa2b473363b8';
    $display->content['new-c45fcf7b-5ff0-4b8c-a342-aa2b473363b8'] = $pane;
    $display->panels['content'][5] = 'new-c45fcf7b-5ff0-4b8c-a342-aa2b473363b8';
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
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'a6aa9cae-ff3f-4ebd-876a-667dccdb19dd';
    $display->content['new-a6aa9cae-ff3f-4ebd-876a-667dccdb19dd'] = $pane;
    $display->panels['content'][6] = 'new-a6aa9cae-ff3f-4ebd-876a-667dccdb19dd';
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'e1730cd1-ad8f-4490-a50f-0ee9544643c5';
    $display->content['new-e1730cd1-ad8f-4490-a50f-0ee9544643c5'] = $pane;
    $display->panels['content'][7] = 'new-e1730cd1-ad8f-4490-a50f-0ee9544643c5';
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
  $handler->weight = -28;
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
      'plugins' => array(),
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
  $handler->weight = -29;
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
  $handler->weight = -20;
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
  $handler->weight = -17;
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
      'plugins' => array(),
      'logic' => 'or',
    ),
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
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 6,
          1 => 'main-row',
          2 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Highlighted',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 2,
          1 => 3,
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'column',
        'width' => 78.495067405574005,
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 4,
        ),
        'class' => 'page content',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'column',
        'width' => 21.504932594425995,
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 5,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'page_content',
        ),
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'sidebar_content',
        ),
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'page_content' => array(
        'type' => 'region',
        'title' => 'Content',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'sidebar_content' => array(
        'type' => 'region',
        'title' => 'Sidebar content',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
        'hide_empty' => 0,
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'header' => array(
        'type' => 'region',
        'title' => 'Header',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
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
      'middle' => NULL,
      'branding' => NULL,
      'navigation' => NULL,
      'hero' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'center' => NULL,
      'page_content' => NULL,
      'sidebar_content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Games / Play Now';
  $display->uuid = 'f6a1774c-b3f7-49a9-9772-05a343d9514e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e809eee7-513d-4014-bcc2-49dc42d7f0a7';
    $pane->panel = 'center';
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
    $display->panels['center'][0] = 'new-e809eee7-513d-4014-bcc2-49dc42d7f0a7';
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
    $pane->pid = 'new-6126e45e-111f-4063-acde-d1de94b584b6';
    $pane->panel = 'page_content';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
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
    $pane->uuid = '6126e45e-111f-4063-acde-d1de94b584b6';
    $display->content['new-6126e45e-111f-4063-acde-d1de94b584b6'] = $pane;
    $display->panels['page_content'][0] = 'new-6126e45e-111f-4063-acde-d1de94b584b6';
    $pane = new stdClass();
    $pane->pid = 'new-be673814-7a36-495c-8c23-c11889b65771';
    $pane->panel = 'sidebar_content';
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
    $pane->uuid = 'be673814-7a36-495c-8c23-c11889b65771';
    $display->content['new-be673814-7a36-495c-8c23-c11889b65771'] = $pane;
    $display->panels['sidebar_content'][0] = 'new-be673814-7a36-495c-8c23-c11889b65771';
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
  $handler->weight = -24;
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
    $pane->pid = 'new-88697797-4c35-49c2-adee-4e2b4e6488cc';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_site-title_block';
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
    $pane->uuid = '88697797-4c35-49c2-adee-4e2b4e6488cc';
    $display->content['new-88697797-4c35-49c2-adee-4e2b4e6488cc'] = $pane;
    $display->panels['content'][0] = 'new-88697797-4c35-49c2-adee-4e2b4e6488cc';
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
    $pane->pid = 'new-0f773144-5819-44b1-8275-def5e061d7c2';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_site-title_block';
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
    $pane->uuid = '0f773144-5819-44b1-8275-def5e061d7c2';
    $display->content['new-0f773144-5819-44b1-8275-def5e061d7c2'] = $pane;
    $display->panels['content'][0] = 'new-0f773144-5819-44b1-8275-def5e061d7c2';
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
    $pane->style = array(
      'settings' => NULL,
    );
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
  $handler->weight = -25;
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
    $pane->pid = 'new-49f68a97-d1f9-41fa-a3e3-69ed81d3830b';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_site-title_block';
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
    $pane->uuid = '49f68a97-d1f9-41fa-a3e3-69ed81d3830b';
    $display->content['new-49f68a97-d1f9-41fa-a3e3-69ed81d3830b'] = $pane;
    $display->panels['content'][0] = 'new-49f68a97-d1f9-41fa-a3e3-69ed81d3830b';
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
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-00af7f15-76bb-441e-8ea4-8be6b56fc3b9';
  $handler->conf['display'] = $display;
  $export['site_template__video_listing'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function mmorpg_site_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'frontpage';
  $page->task = 'page';
  $page->admin_title = 'Frontpage';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array(
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_frontpage__panel_context_ade6de39-bdb4-440c-8479-95a75bd645d5';
  $handler->task = 'page';
  $handler->subtask = 'frontpage';
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
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '97e364a9-5ace-4583-803d-99dbd2cddf39';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['frontpage'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'game_page';
  $page->task = 'page';
  $page->admin_title = 'game tabs';
  $page->admin_description = '';
  $page->path = 'game/%node/!tab';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
    'tab' => array(
      'id' => 1,
      'identifier' => 'tab',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_game_page__panel_context_25650dc0-3e4b-4e07-b064-9a53bd4afb6a';
  $handler->task = 'page';
  $handler->subtask = 'game_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
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
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'overview',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_everywhere_site_template' => 'site_template__node',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
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
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a1a2a5de-4d8e-4f62-a687-2f302ede38e0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7ec2baad-221a-4575-a970-d718e96f688a';
    $pane->panel = 'middle';
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
    $pane->uuid = '7ec2baad-221a-4575-a970-d718e96f688a';
    $display->content['new-7ec2baad-221a-4575-a970-d718e96f688a'] = $pane;
    $display->panels['middle'][0] = 'new-7ec2baad-221a-4575-a970-d718e96f688a';
    $pane = new stdClass();
    $pane->pid = 'new-9e4d0e76-931c-4043-8cef-097154690f69';
    $pane->panel = 'middle';
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
    $pane->uuid = '9e4d0e76-931c-4043-8cef-097154690f69';
    $display->content['new-9e4d0e76-931c-4043-8cef-097154690f69'] = $pane;
    $display->panels['middle'][1] = 'new-9e4d0e76-931c-4043-8cef-097154690f69';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_game_page__game_detail';
  $handler->task = 'page';
  $handler->subtask = 'game_page';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Game Forums',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'game_detail',
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'forums',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
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
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f6a61e8f-51a1-4a11-a16d-f0ac427e49bc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c2df6187-2d6e-4e5c-86db-19ca76ecc1fb';
    $pane->panel = 'middle';
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
    $pane->uuid = 'c2df6187-2d6e-4e5c-86db-19ca76ecc1fb';
    $display->content['new-c2df6187-2d6e-4e5c-86db-19ca76ecc1fb'] = $pane;
    $display->panels['middle'][0] = 'new-c2df6187-2d6e-4e5c-86db-19ca76ecc1fb';
    $pane = new stdClass();
    $pane->pid = 'new-31ccc52c-24a6-4383-82cd-9678a33c9b85';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'screenshot_gallery_grid-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_game_target_id' => '',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '31ccc52c-24a6-4383-82cd-9678a33c9b85';
    $display->content['new-31ccc52c-24a6-4383-82cd-9678a33c9b85'] = $pane;
    $display->panels['middle'][1] = 'new-31ccc52c-24a6-4383-82cd-9678a33c9b85';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-31ccc52c-24a6-4383-82cd-9678a33c9b85';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_game_page__game_ratings';
  $handler->task = 'page';
  $handler->subtask = 'game_page';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
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
        1 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'ratings',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8d70d9d4-3bf2-4c92-9de4-407371d4fcf1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7eda85f3-ac5b-46f5-b4d3-2d48d48fd132';
    $pane->panel = 'middle';
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
      'display' => 'inactive_ratings',
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
    $pane->uuid = '7eda85f3-ac5b-46f5-b4d3-2d48d48fd132';
    $display->content['new-7eda85f3-ac5b-46f5-b4d3-2d48d48fd132'] = $pane;
    $display->panels['middle'][0] = 'new-7eda85f3-ac5b-46f5-b4d3-2d48d48fd132';
    $pane = new stdClass();
    $pane->pid = 'new-72b2da02-e0f8-4b21-b50a-0acf8674fd00';
    $pane->panel = 'middle';
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
      'display' => 'active_ratings',
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
    $pane->uuid = '72b2da02-e0f8-4b21-b50a-0acf8674fd00';
    $display->content['new-72b2da02-e0f8-4b21-b50a-0acf8674fd00'] = $pane;
    $display->panels['middle'][1] = 'new-72b2da02-e0f8-4b21-b50a-0acf8674fd00';
    $pane = new stdClass();
    $pane->pid = 'new-e97f0d8e-2a8b-4e50-9d92-28eed66c3c61';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'reviews';
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
      'display' => 'page_1',
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
    $pane->uuid = 'e97f0d8e-2a8b-4e50-9d92-28eed66c3c61';
    $display->content['new-e97f0d8e-2a8b-4e50-9d92-28eed66c3c61'] = $pane;
    $display->panels['middle'][2] = 'new-e97f0d8e-2a8b-4e50-9d92-28eed66c3c61';
    $pane = new stdClass();
    $pane->pid = 'new-f70e401a-0d0f-4c9d-86df-e3b5b6ceee6b';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'reviews';
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
    $pane->uuid = 'f70e401a-0d0f-4c9d-86df-e3b5b6ceee6b';
    $display->content['new-f70e401a-0d0f-4c9d-86df-e3b5b6ceee6b'] = $pane;
    $display->panels['middle'][3] = 'new-f70e401a-0d0f-4c9d-86df-e3b5b6ceee6b';
    $pane = new stdClass();
    $pane->pid = 'new-f6cd05b5-40e3-4b94-bde8-16e9f55cde76';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_rate-add_review_block';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'f6cd05b5-40e3-4b94-bde8-16e9f55cde76';
    $display->content['new-f6cd05b5-40e3-4b94-bde8-16e9f55cde76'] = $pane;
    $display->panels['middle'][4] = 'new-f6cd05b5-40e3-4b94-bde8-16e9f55cde76';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7eda85f3-ac5b-46f5-b4d3-2d48d48fd132';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_game_page__game_reviews';
  $handler->task = 'page';
  $handler->subtask = 'game_page';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Game Reviews',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'game_reviews',
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'reviews',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1f058a28-5c5e-4b4f-b9cf-6091fb3f20db';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_game_page__game_screenshots';
  $handler->task = 'page';
  $handler->subtask = 'game_page';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'Game Screenshots',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'game_screenshots',
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'screenshots',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'dc9aaba6-c504-452a-bdc8-767ba29749f6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-53384735-c917-49e0-96c2-cb89729547d6';
    $pane->panel = 'middle';
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
    $pane->uuid = '53384735-c917-49e0-96c2-cb89729547d6';
    $display->content['new-53384735-c917-49e0-96c2-cb89729547d6'] = $pane;
    $display->panels['middle'][0] = 'new-53384735-c917-49e0-96c2-cb89729547d6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-53384735-c917-49e0-96c2-cb89729547d6';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_game_page__game_videos';
  $handler->task = 'page';
  $handler->subtask = 'game_page';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'Game Videos',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'game_videos',
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'videos',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a7004151-b4ac-4355-888c-5751a67b79b4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f7b53a6e-e201-4529-b8aa-5cf368d06962';
    $pane->panel = 'middle';
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
    $pane->uuid = 'f7b53a6e-e201-4529-b8aa-5cf368d06962';
    $display->content['new-f7b53a6e-e201-4529-b8aa-5cf368d06962'] = $pane;
    $display->panels['middle'][0] = 'new-f7b53a6e-e201-4529-b8aa-5cf368d06962';
    $pane = new stdClass();
    $pane->pid = 'new-00771e27-479b-4e34-9889-95d752e1dcb1';
    $pane->panel = 'middle';
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
    $pane->uuid = '00771e27-479b-4e34-9889-95d752e1dcb1';
    $display->content['new-00771e27-479b-4e34-9889-95d752e1dcb1'] = $pane;
    $display->panels['middle'][1] = 'new-00771e27-479b-4e34-9889-95d752e1dcb1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f7b53a6e-e201-4529-b8aa-5cf368d06962';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_game_page__game_hype';
  $handler->task = 'page';
  $handler->subtask = 'game_page';
  $handler->handler = 'panel_context';
  $handler->weight = 6;
  $handler->conf = array(
    'title' => 'Game Hype',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'game_hype',
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'hype',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'dea1241a-779b-4743-aa76-4191fc55abc2';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_game_page__game_video_detail';
  $handler->task = 'page';
  $handler->subtask = 'game_page';
  $handler->handler = 'panel_context';
  $handler->weight = 7;
  $handler->conf = array(
    'title' => 'Game Video Detail',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'game_video_detail',
    'access' => array(
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
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2cb7789b-7ba4-47ba-9afe-fc04ab1846dc';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['game_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'keygiveaway';
  $page->task = 'page';
  $page->admin_title = 'KeyGiveaway';
  $page->admin_description = '';
  $page->path = 'giveaways';
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
  $handler->name = 'page_keygiveaway__panel_context_b8c2d494-16f1-405a-9344-e1168b877801';
  $handler->task = 'page';
  $handler->subtask = 'keygiveaway';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'KeyGiveaways',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'panels_everywhere_site_template' => '-1',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
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
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ddf12fe8-b71b-4d31-b027-fe9f79f3fc3c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-abc718a7-34b6-4439-8d02-511d1b331d39';
    $pane->panel = 'middle';
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
    $pane->uuid = 'abc718a7-34b6-4439-8d02-511d1b331d39';
    $display->content['new-abc718a7-34b6-4439-8d02-511d1b331d39'] = $pane;
    $display->panels['middle'][0] = 'new-abc718a7-34b6-4439-8d02-511d1b331d39';
    $pane = new stdClass();
    $pane->pid = 'new-20018026-7063-4c76-96ad-f7af275033d8';
    $pane->panel = 'middle';
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
    $pane->uuid = '20018026-7063-4c76-96ad-f7af275033d8';
    $display->content['new-20018026-7063-4c76-96ad-f7af275033d8'] = $pane;
    $display->panels['middle'][1] = 'new-20018026-7063-4c76-96ad-f7af275033d8';
    $pane = new stdClass();
    $pane->pid = 'new-066c8b24-1e71-4cdd-a525-d9341bdf0d57';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'giveaway_listing-panel_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '066c8b24-1e71-4cdd-a525-d9341bdf0d57';
    $display->content['new-066c8b24-1e71-4cdd-a525-d9341bdf0d57'] = $pane;
    $display->panels['middle'][2] = 'new-066c8b24-1e71-4cdd-a525-d9341bdf0d57';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['keygiveaway'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'playnow';
  $page->task = 'page';
  $page->admin_title = 'play-now';
  $page->admin_description = '';
  $page->path = 'play-now';
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
  $handler->name = 'page_playnow__panel_context_b753f55b-0996-4098-a206-76a9b448b3e5';
  $handler->task = 'page';
  $handler->subtask = 'playnow';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'play now',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'play-now
play-now/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_everywhere_site_template' => 'site_template__play_now',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fb3367dc-28cf-45bd-bb5f-02cc3bef64d1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d0aa539d-1b56-43e9-8840-7794102d63e1';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_signup_now-play_now_page_filters';
    $pane->shown = TRUE;
    $pane->access = array();
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd0aa539d-1b56-43e9-8840-7794102d63e1';
    $display->content['new-d0aa539d-1b56-43e9-8840-7794102d63e1'] = $pane;
    $display->panels['middle'][0] = 'new-d0aa539d-1b56-43e9-8840-7794102d63e1';
    $pane = new stdClass();
    $pane->pid = 'new-91a2ea80-4b44-4b1a-bac5-e04be1c0fbe1';
    $pane->panel = 'middle';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '91a2ea80-4b44-4b1a-bac5-e04be1c0fbe1';
    $display->content['new-91a2ea80-4b44-4b1a-bac5-e04be1c0fbe1'] = $pane;
    $display->panels['middle'][1] = 'new-91a2ea80-4b44-4b1a-bac5-e04be1c0fbe1';
    $pane = new stdClass();
    $pane->pid = 'new-a027cb4b-3b6d-4808-a2cb-01e0e12436f8';
    $pane->panel = 'middle';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a027cb4b-3b6d-4808-a2cb-01e0e12436f8';
    $display->content['new-a027cb4b-3b6d-4808-a2cb-01e0e12436f8'] = $pane;
    $display->panels['middle'][2] = 'new-a027cb4b-3b6d-4808-a2cb-01e0e12436f8';
    $pane = new stdClass();
    $pane->pid = 'new-9fd9af24-cd09-4f4d-af8a-1df40d1fa55e';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'play_now';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '9fd9af24-cd09-4f4d-af8a-1df40d1fa55e';
    $display->content['new-9fd9af24-cd09-4f4d-af8a-1df40d1fa55e'] = $pane;
    $display->panels['middle'][3] = 'new-9fd9af24-cd09-4f4d-af8a-1df40d1fa55e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-d0aa539d-1b56-43e9-8840-7794102d63e1';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['playnow'] = $page;

  return $pages;

}
