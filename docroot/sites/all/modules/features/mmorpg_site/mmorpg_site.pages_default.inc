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
  $handler->weight = -25;
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
  $handler->weight = -29;
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
  $handler->weight = -28;
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
    $pane->pid = 'new-7d9e8edb-545c-4327-83fc-1b0b056f7ddd';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_hero_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'giveaway_node_700x305',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'args',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7d9e8edb-545c-4327-83fc-1b0b056f7ddd';
    $display->content['new-7d9e8edb-545c-4327-83fc-1b0b056f7ddd'] = $pane;
    $display->panels['middle'][1] = 'new-7d9e8edb-545c-4327-83fc-1b0b056f7ddd';
    $pane = new stdClass();
    $pane->pid = 'new-18ac3978-8da9-4d4f-846b-7a043793c0fa';
    $pane->panel = 'middle';
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
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'args',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '18ac3978-8da9-4d4f-846b-7a043793c0fa';
    $display->content['new-18ac3978-8da9-4d4f-846b-7a043793c0fa'] = $pane;
    $display->panels['middle'][2] = 'new-18ac3978-8da9-4d4f-846b-7a043793c0fa';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a8c3e22c-c637-44bb-8ce7-dab82cf44437';
    $display->content['new-a8c3e22c-c637-44bb-8ce7-dab82cf44437'] = $pane;
    $display->panels['middle'][3] = 'new-a8c3e22c-c637-44bb-8ce7-dab82cf44437';
    $pane = new stdClass();
    $pane->pid = 'new-51ed5465-2763-427a-9b0f-f9b5fb0ebf46';
    $pane->panel = 'middle';
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
            1 => 'argument_entity_id:node_1',
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
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'args',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '51ed5465-2763-427a-9b0f-f9b5fb0ebf46';
    $display->content['new-51ed5465-2763-427a-9b0f-f9b5fb0ebf46'] = $pane;
    $display->panels['middle'][4] = 'new-51ed5465-2763-427a-9b0f-f9b5fb0ebf46';
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
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'args',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '717982bb-8ccf-477d-bb5c-2a141d85cfbe';
    $display->content['new-717982bb-8ccf-477d-bb5c-2a141d85cfbe'] = $pane;
    $display->panels['middle'][5] = 'new-717982bb-8ccf-477d-bb5c-2a141d85cfbe';
    $pane = new stdClass();
    $pane->pid = 'new-f84b3c3d-8c37-4939-af33-f0beb38625ff';
    $pane->panel = 'middle';
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
            1 => 'argument_entity_id:node_1',
          ),
          'not' => TRUE,
        ),
        1 => array(
          'name' => 'giveaway_keys_are_available',
          'settings' => NULL,
          'context' => 'argument_entity_id:node_1',
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'f84b3c3d-8c37-4939-af33-f0beb38625ff';
    $display->content['new-f84b3c3d-8c37-4939-af33-f0beb38625ff'] = $pane;
    $display->panels['middle'][6] = 'new-f84b3c3d-8c37-4939-af33-f0beb38625ff';
    $pane = new stdClass();
    $pane->pid = 'new-87540677-8a32-4889-82c6-6cd4cf7225f0';
    $pane->panel = 'middle';
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '87540677-8a32-4889-82c6-6cd4cf7225f0';
    $display->content['new-87540677-8a32-4889-82c6-6cd4cf7225f0'] = $pane;
    $display->panels['middle'][7] = 'new-87540677-8a32-4889-82c6-6cd4cf7225f0';
  $display->hide_title = PANELS_TITLE_NONE;
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
  $handler->weight = -26;
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
  $handler->name = 'node_view__reviews';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -24;
  $handler->conf = array(
    'title' => 'Reviews',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Node from Game field',
        'keyword' => 'game',
        'name' => 'entity_from_field:field_game-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'name' => 'reviews',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'review' => 'review',
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
  $display->title = '%node:title';
  $display->uuid = '10f0d031-40ed-4efa-ad64-a175a659a91a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dd499e84-417e-43fb-9235-3990992a9910';
    $pane->panel = 'middle';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $pane->uuid = 'dd499e84-417e-43fb-9235-3990992a9910';
    $display->content['new-dd499e84-417e-43fb-9235-3990992a9910'] = $pane;
    $display->panels['middle'][0] = 'new-dd499e84-417e-43fb-9235-3990992a9910';
    $pane = new stdClass();
    $pane->pid = 'new-14ea8711-3ffb-4ab0-8781-840329039f1b';
    $pane->panel = 'middle';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '%title',
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
    $pane->uuid = '14ea8711-3ffb-4ab0-8781-840329039f1b';
    $display->content['new-14ea8711-3ffb-4ab0-8781-840329039f1b'] = $pane;
    $display->panels['middle'][1] = 'new-14ea8711-3ffb-4ab0-8781-840329039f1b';
    $pane = new stdClass();
    $pane->pid = 'new-7f990e2f-1953-4b5c-87e3-105e8a53556d';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_hero_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'review_hero__700x437_',
        'image_link' => '',
      ),
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
    $pane->uuid = '7f990e2f-1953-4b5c-87e3-105e8a53556d';
    $display->content['new-7f990e2f-1953-4b5c-87e3-105e8a53556d'] = $pane;
    $display->panels['middle'][2] = 'new-7f990e2f-1953-4b5c-87e3-105e8a53556d';
    $pane = new stdClass();
    $pane->pid = 'new-6353efab-bbbb-4df5-aa11-7fdaa60ead92';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_site-related_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'title' => array(
          'prefix' => '',
          'suffix' => '',
        ),
        'content' => array(
          'prefix' => '',
          'suffix' => '',
        ),
        'theme' => 0,
      ),
      'style' => 'wrapper_raw',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '6353efab-bbbb-4df5-aa11-7fdaa60ead92';
    $display->content['new-6353efab-bbbb-4df5-aa11-7fdaa60ead92'] = $pane;
    $display->panels['middle'][3] = 'new-6353efab-bbbb-4df5-aa11-7fdaa60ead92';
    $pane = new stdClass();
    $pane->pid = 'new-ea89b1c9-a3b5-4b0d-ab8b-57e115582c2b';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_final_score';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'number_decimal',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'thousand_separator' => ' ',
        'decimal_separator' => '.',
        'scale' => '2',
        'prefix_suffix' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'wrapper_raw',
      'settings' => array(
        'title' => array(
          'prefix' => '<div class="pro-con-section"><div class="final">',
          'suffix' => '',
        ),
        'content' => array(
          'prefix' => '',
          'suffix' => '</div>',
        ),
        'theme' => 0,
      ),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'ea89b1c9-a3b5-4b0d-ab8b-57e115582c2b';
    $display->content['new-ea89b1c9-a3b5-4b0d-ab8b-57e115582c2b'] = $pane;
    $display->panels['middle'][4] = 'new-ea89b1c9-a3b5-4b0d-ab8b-57e115582c2b';
    $pane = new stdClass();
    $pane->pid = 'new-ec1931f0-f988-4663-914f-17621352f189';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_pros';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_plain',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'ec1931f0-f988-4663-914f-17621352f189';
    $display->content['new-ec1931f0-f988-4663-914f-17621352f189'] = $pane;
    $display->panels['middle'][5] = 'new-ec1931f0-f988-4663-914f-17621352f189';
    $pane = new stdClass();
    $pane->pid = 'new-a301be3e-7fc1-4d49-a57d-f66140a2d129';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_pros_text';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'a301be3e-7fc1-4d49-a57d-f66140a2d129';
    $display->content['new-a301be3e-7fc1-4d49-a57d-f66140a2d129'] = $pane;
    $display->panels['middle'][6] = 'new-a301be3e-7fc1-4d49-a57d-f66140a2d129';
    $pane = new stdClass();
    $pane->pid = 'new-0f134980-2723-42b1-9e74-6b9fe718189f';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_cons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_plain',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '0f134980-2723-42b1-9e74-6b9fe718189f';
    $display->content['new-0f134980-2723-42b1-9e74-6b9fe718189f'] = $pane;
    $display->panels['middle'][7] = 'new-0f134980-2723-42b1-9e74-6b9fe718189f';
    $pane = new stdClass();
    $pane->pid = 'new-3e09677c-5ed1-487e-9ae3-249201360f58';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_cons_text';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'title' => array(
          'prefix' => '',
          'suffix' => '',
        ),
        'content' => array(
          'prefix' => '',
          'suffix' => '</div>',
        ),
        'theme' => 0,
      ),
      'style' => 'wrapper_raw',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '3e09677c-5ed1-487e-9ae3-249201360f58';
    $display->content['new-3e09677c-5ed1-487e-9ae3-249201360f58'] = $pane;
    $display->panels['middle'][8] = 'new-3e09677c-5ed1-487e-9ae3-249201360f58';
    $pane = new stdClass();
    $pane->pid = 'new-3f6b8af2-4267-44c2-b60d-d35662599400';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'sharethis-sharethis_block';
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '3f6b8af2-4267-44c2-b60d-d35662599400';
    $display->content['new-3f6b8af2-4267-44c2-b60d-d35662599400'] = $pane;
    $display->panels['middle'][9] = 'new-3f6b8af2-4267-44c2-b60d-d35662599400';
    $pane = new stdClass();
    $pane->pid = 'new-a29404b0-a603-49b8-853f-90b1300f5259';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'mmorpg_site-related_content_menu';
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
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = 'a29404b0-a603-49b8-853f-90b1300f5259';
    $display->content['new-a29404b0-a603-49b8-853f-90b1300f5259'] = $pane;
    $display->panels['middle'][10] = 'new-a29404b0-a603-49b8-853f-90b1300f5259';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__reviews'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__sweepstakes';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Sweepstakes',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'sweepstakes',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'sweepstake' => 'sweepstake',
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
  $display->uuid = '16675bb2-7480-41d1-8b02-3b0836af30c1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e0171120-f662-4c2e-9583-c551f90f2ef7';
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
    $pane->uuid = 'e0171120-f662-4c2e-9583-c551f90f2ef7';
    $display->content['new-e0171120-f662-4c2e-9583-c551f90f2ef7'] = $pane;
    $display->panels['middle'][0] = 'new-e0171120-f662-4c2e-9583-c551f90f2ef7';
    $pane = new stdClass();
    $pane->pid = 'new-786a3050-4399-48e0-9c3e-fca7ac19a605';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_hero_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'giveaway_node_700x305',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'args',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '786a3050-4399-48e0-9c3e-fca7ac19a605';
    $display->content['new-786a3050-4399-48e0-9c3e-fca7ac19a605'] = $pane;
    $display->panels['middle'][1] = 'new-786a3050-4399-48e0-9c3e-fca7ac19a605';
    $pane = new stdClass();
    $pane->pid = 'new-369d1d2f-0228-41ab-990b-19fc19681989';
    $pane->panel = 'middle';
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
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'args',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '369d1d2f-0228-41ab-990b-19fc19681989';
    $display->content['new-369d1d2f-0228-41ab-990b-19fc19681989'] = $pane;
    $display->panels['middle'][2] = 'new-369d1d2f-0228-41ab-990b-19fc19681989';
    $pane = new stdClass();
    $pane->pid = 'new-7c41d6de-62ca-45a7-bb8f-f33299bb4991';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_sweepstakes_rules';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'args',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '7c41d6de-62ca-45a7-bb8f-f33299bb4991';
    $display->content['new-7c41d6de-62ca-45a7-bb8f-f33299bb4991'] = $pane;
    $display->panels['middle'][3] = 'new-7c41d6de-62ca-45a7-bb8f-f33299bb4991';
    $pane = new stdClass();
    $pane->pid = 'new-7bbbd2b2-d8f7-4b0a-9878-815d9dfccb39';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'sweepstakes-sweepstakes_entry_block';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'sweepstake_user_has_won',
          'settings' => NULL,
          'context' => array(
            0 => 'logged-in-user',
            1 => 'argument_entity_id:node_1',
          ),
          'not' => TRUE,
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '7bbbd2b2-d8f7-4b0a-9878-815d9dfccb39';
    $display->content['new-7bbbd2b2-d8f7-4b0a-9878-815d9dfccb39'] = $pane;
    $display->panels['middle'][4] = 'new-7bbbd2b2-d8f7-4b0a-9878-815d9dfccb39';
    $pane = new stdClass();
    $pane->pid = 'new-69dbc0d4-809b-460c-bce0-7bf996b2596c';
    $pane->panel = 'middle';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:webform';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'sweepstake_user_has_won',
          'settings' => NULL,
          'context' => array(
            0 => 'logged-in-user',
            1 => 'argument_entity_id:node_1',
          ),
          'not' => FALSE,
        ),
      ),
    );
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '69dbc0d4-809b-460c-bce0-7bf996b2596c';
    $display->content['new-69dbc0d4-809b-460c-bce0-7bf996b2596c'] = $pane;
    $display->panels['middle'][5] = 'new-69dbc0d4-809b-460c-bce0-7bf996b2596c';
    $pane = new stdClass();
    $pane->pid = 'new-d413aba7-84f0-4f68-9c1e-826cc84a5dd8';
    $pane->panel = 'middle';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'd413aba7-84f0-4f68-9c1e-826cc84a5dd8';
    $display->content['new-d413aba7-84f0-4f68-9c1e-826cc84a5dd8'] = $pane;
    $display->panels['middle'][6] = 'new-d413aba7-84f0-4f68-9c1e-826cc84a5dd8';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__sweepstakes'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__video_detail';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
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
            'paths' => 'game/*/overview
game/*/video
game/*/videos
game/*/screenshots
game/*/video',
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
        'width' => 78.4950674055740051926477462984621524810791015625,
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
        'width' => 21.5049325944259948073522537015378475189208984375,
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
    'type' => 'none',
    'settings' => NULL,
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
  $page->path = 'game/%node/!tab/!specific';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
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
    'specific' => array(
      'id' => 2,
      'identifier' => 'specific: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
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
    'panels_everywhere_site_template' => '',
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
    $pane->pid = 'new-56dc31e1-423a-4f93-aa32-c09942139233';
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
    $pane->uuid = '56dc31e1-423a-4f93-aa32-c09942139233';
    $display->content['new-56dc31e1-423a-4f93-aa32-c09942139233'] = $pane;
    $display->panels['middle'][0] = 'new-56dc31e1-423a-4f93-aa32-c09942139233';
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
    $pane->css = array(
      'css_id' => 'rate-view',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7eda85f3-ac5b-46f5-b4d3-2d48d48fd132';
    $display->content['new-7eda85f3-ac5b-46f5-b4d3-2d48d48fd132'] = $pane;
    $display->panels['middle'][1] = 'new-7eda85f3-ac5b-46f5-b4d3-2d48d48fd132';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'cast-view',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '72b2da02-e0f8-4b21-b50a-0acf8674fd00';
    $display->content['new-72b2da02-e0f8-4b21-b50a-0acf8674fd00'] = $pane;
    $display->panels['middle'][2] = 'new-72b2da02-e0f8-4b21-b50a-0acf8674fd00';
    $pane = new stdClass();
    $pane->pid = 'new-e5b2e13a-afbf-4979-b18e-cacb2ad334b5';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'hype';
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
      'display' => 'hype_inactive',
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
    $pane->css = array(
      'css_id' => 'rate-view',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'e5b2e13a-afbf-4979-b18e-cacb2ad334b5';
    $display->content['new-e5b2e13a-afbf-4979-b18e-cacb2ad334b5'] = $pane;
    $display->panels['middle'][3] = 'new-e5b2e13a-afbf-4979-b18e-cacb2ad334b5';
    $pane = new stdClass();
    $pane->pid = 'new-20788318-0d3a-499e-8ca2-297d8a5679af';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'hype';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '%1',
      'url' => '',
      'display' => 'active_hype',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '20788318-0d3a-499e-8ca2-297d8a5679af';
    $display->content['new-20788318-0d3a-499e-8ca2-297d8a5679af'] = $pane;
    $display->panels['middle'][4] = 'new-20788318-0d3a-499e-8ca2-297d8a5679af';
    $pane = new stdClass();
    $pane->pid = 'new-ff41606e-1b52-4a79-aab0-debe9eaba230';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'game_rating_notice';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'ff41606e-1b52-4a79-aab0-debe9eaba230';
    $display->content['new-ff41606e-1b52-4a79-aab0-debe9eaba230'] = $pane;
    $display->panels['middle'][5] = 'new-ff41606e-1b52-4a79-aab0-debe9eaba230';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'e97f0d8e-2a8b-4e50-9d92-28eed66c3c61';
    $display->content['new-e97f0d8e-2a8b-4e50-9d92-28eed66c3c61'] = $pane;
    $display->panels['middle'][6] = 'new-e97f0d8e-2a8b-4e50-9d92-28eed66c3c61';
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'f70e401a-0d0f-4c9d-86df-e3b5b6ceee6b';
    $display->content['new-f70e401a-0d0f-4c9d-86df-e3b5b6ceee6b'] = $pane;
    $display->panels['middle'][7] = 'new-f70e401a-0d0f-4c9d-86df-e3b5b6ceee6b';
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'f6cd05b5-40e3-4b94-bde8-16e9f55cde76';
    $display->content['new-f6cd05b5-40e3-4b94-bde8-16e9f55cde76'] = $pane;
    $display->panels['middle'][8] = 'new-f6cd05b5-40e3-4b94-bde8-16e9f55cde76';
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
    $pane = new stdClass();
    $pane->pid = 'new-e5e5e9bb-5a42-47d6-ae94-9c1f25052f27';
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
    $pane->uuid = 'e5e5e9bb-5a42-47d6-ae94-9c1f25052f27';
    $display->content['new-e5e5e9bb-5a42-47d6-ae94-9c1f25052f27'] = $pane;
    $display->panels['middle'][0] = 'new-e5e5e9bb-5a42-47d6-ae94-9c1f25052f27';
    $pane = new stdClass();
    $pane->pid = 'new-688bebc4-047c-4017-bad0-56531800178e';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'game_review_featured';
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
    $pane->uuid = '688bebc4-047c-4017-bad0-56531800178e';
    $display->content['new-688bebc4-047c-4017-bad0-56531800178e'] = $pane;
    $display->panels['middle'][1] = 'new-688bebc4-047c-4017-bad0-56531800178e';
    $pane = new stdClass();
    $pane->pid = 'new-28b79afb-e70a-4957-9f5f-96006deb50a3';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'game_reviews';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '28b79afb-e70a-4957-9f5f-96006deb50a3';
    $display->content['new-28b79afb-e70a-4957-9f5f-96006deb50a3'] = $pane;
    $display->panels['middle'][2] = 'new-28b79afb-e70a-4957-9f5f-96006deb50a3';
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
    $pane->pid = 'new-2e5ad69c-00c9-463b-a6a1-2c33e378df55';
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
    $pane->uuid = '2e5ad69c-00c9-463b-a6a1-2c33e378df55';
    $display->content['new-2e5ad69c-00c9-463b-a6a1-2c33e378df55'] = $pane;
    $display->panels['middle'][0] = 'new-2e5ad69c-00c9-463b-a6a1-2c33e378df55';
    $pane = new stdClass();
    $pane->pid = 'new-98a8febb-ce0d-4daa-8b7a-f35f53a5300d';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'screenshot_gallery_grid-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_game_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-screenshot-gallery-grid ',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '98a8febb-ce0d-4daa-8b7a-f35f53a5300d';
    $display->content['new-98a8febb-ce0d-4daa-8b7a-f35f53a5300d'] = $pane;
    $display->panels['middle'][1] = 'new-98a8febb-ce0d-4daa-8b7a-f35f53a5300d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
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
    $pane->pid = 'new-d56e1f43-0ad4-453e-b902-9d2bb417bb8e';
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
    $pane->uuid = 'd56e1f43-0ad4-453e-b902-9d2bb417bb8e';
    $display->content['new-d56e1f43-0ad4-453e-b902-9d2bb417bb8e'] = $pane;
    $display->panels['middle'][0] = 'new-d56e1f43-0ad4-453e-b902-9d2bb417bb8e';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f7b53a6e-e201-4529-b8aa-5cf368d06962';
    $display->content['new-f7b53a6e-e201-4529-b8aa-5cf368d06962'] = $pane;
    $display->panels['middle'][1] = 'new-f7b53a6e-e201-4529-b8aa-5cf368d06962';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '00771e27-479b-4e34-9889-95d752e1dcb1';
    $display->content['new-00771e27-479b-4e34-9889-95d752e1dcb1'] = $pane;
    $display->panels['middle'][2] = 'new-00771e27-479b-4e34-9889-95d752e1dcb1';
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
    $pane = new stdClass();
    $pane->pid = 'new-e8e32979-ed76-4931-a25b-102e11ca7bf1';
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
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e8e32979-ed76-4931-a25b-102e11ca7bf1';
    $display->content['new-e8e32979-ed76-4931-a25b-102e11ca7bf1'] = $pane;
    $display->panels['middle'][0] = 'new-e8e32979-ed76-4931-a25b-102e11ca7bf1';
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
    $pane = new stdClass();
    $pane->pid = 'new-59acc846-1fe1-4d48-921a-d7d99f3cb5b1';
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
    $pane->uuid = '59acc846-1fe1-4d48-921a-d7d99f3cb5b1';
    $display->content['new-59acc846-1fe1-4d48-921a-d7d99f3cb5b1'] = $pane;
    $display->panels['middle'][0] = 'new-59acc846-1fe1-4d48-921a-d7d99f3cb5b1';
    $pane = new stdClass();
    $pane->pid = 'new-79710e63-0c85-4ebb-bcab-c70735ec0e1d';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_video_url';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'isfield_video',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'dimensions' => '640x480',
      ),
      'context' => 'argument_entity_id:node_2',
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
    $pane->uuid = '79710e63-0c85-4ebb-bcab-c70735ec0e1d';
    $display->content['new-79710e63-0c85-4ebb-bcab-c70735ec0e1d'] = $pane;
    $display->panels['middle'][1] = 'new-79710e63-0c85-4ebb-bcab-c70735ec0e1d';
    $pane = new stdClass();
    $pane->pid = 'new-0b616dda-3bd6-4887-b73f-a00647785013';
    $pane->panel = 'middle';
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
      'context' => 'argument_entity_id:node_2',
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
    $pane->uuid = '0b616dda-3bd6-4887-b73f-a00647785013';
    $display->content['new-0b616dda-3bd6-4887-b73f-a00647785013'] = $pane;
    $display->panels['middle'][2] = 'new-0b616dda-3bd6-4887-b73f-a00647785013';
    $pane = new stdClass();
    $pane->pid = 'new-f40eaba3-8e46-40fe-957f-211f89e28ca9';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'sharethis-sharethis_block';
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
    $pane->uuid = 'f40eaba3-8e46-40fe-957f-211f89e28ca9';
    $display->content['new-f40eaba3-8e46-40fe-957f-211f89e28ca9'] = $pane;
    $display->panels['middle'][3] = 'new-f40eaba3-8e46-40fe-957f-211f89e28ca9';
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
  $page->admin_title = 'Key Giveaways';
  $page->admin_description = '';
  $page->path = 'giveaways';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
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
  $handler->name = 'page_keygiveaway__panel_context_b8c2d494-16f1-405a-9344-e1168b877801';
  $handler->task = 'page';
  $handler->subtask = 'keygiveaway';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Key Giveaways',
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
    $pane->pid = 'new-aeea2675-19d8-4619-a56f-db40919f2ff4';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'giveaway-giveaway_title_rss_block';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'aeea2675-19d8-4619-a56f-db40919f2ff4';
    $display->content['new-aeea2675-19d8-4619-a56f-db40919f2ff4'] = $pane;
    $display->panels['middle'][0] = 'new-aeea2675-19d8-4619-a56f-db40919f2ff4';
    $pane = new stdClass();
    $pane->pid = 'new-55538011-5861-47f4-b38e-43056293dd35';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views-0f573a2d427deda0c16ec83482880061';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
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
    $pane->uuid = '55538011-5861-47f4-b38e-43056293dd35';
    $display->content['new-55538011-5861-47f4-b38e-43056293dd35'] = $pane;
    $display->panels['middle'][1] = 'new-55538011-5861-47f4-b38e-43056293dd35';
    $pane = new stdClass();
    $pane->pid = 'new-a4717b20-fae2-4145-9f21-7a78a2da0e79';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'giveaway_listing-promoted_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
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
    $pane->uuid = 'a4717b20-fae2-4145-9f21-7a78a2da0e79';
    $display->content['new-a4717b20-fae2-4145-9f21-7a78a2da0e79'] = $pane;
    $display->panels['middle'][2] = 'new-a4717b20-fae2-4145-9f21-7a78a2da0e79';
    $pane = new stdClass();
    $pane->pid = 'new-0d250410-5a56-4008-b8b7-44529e09f460';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'giveaway_listing-listing_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
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
    $pane->uuid = '0d250410-5a56-4008-b8b7-44529e09f460';
    $display->content['new-0d250410-5a56-4008-b8b7-44529e09f460'] = $pane;
    $display->panels['middle'][3] = 'new-0d250410-5a56-4008-b8b7-44529e09f460';
  $display->hide_title = PANELS_TITLE_NONE;
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
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
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

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'sweepstakes';
  $page->task = 'page';
  $page->admin_title = 'Sweepstakes';
  $page->admin_description = '';
  $page->path = 'sweepstakes';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
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
  $handler->name = 'page_sweepstakes__panel_context_ef04e5a8-47f5-4f70-9475-d8f6fdeedc8b';
  $handler->task = 'page';
  $handler->subtask = 'sweepstakes';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Sweepstakes',
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
    $pane->pid = 'new-4c93b5dc-6aaa-474b-a3d9-9bdad5aa08a3';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'sweepstakes-sweepstakes_title_rss_block';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4c93b5dc-6aaa-474b-a3d9-9bdad5aa08a3';
    $display->content['new-4c93b5dc-6aaa-474b-a3d9-9bdad5aa08a3'] = $pane;
    $display->panels['middle'][0] = 'new-4c93b5dc-6aaa-474b-a3d9-9bdad5aa08a3';
    $pane = new stdClass();
    $pane->pid = 'new-202f2ce5-bef0-4aa3-b4ce-6667b084f2ed';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views-5949cc515d4897b423a89734083b9967';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
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
    $pane->uuid = '202f2ce5-bef0-4aa3-b4ce-6667b084f2ed';
    $display->content['new-202f2ce5-bef0-4aa3-b4ce-6667b084f2ed'] = $pane;
    $display->panels['middle'][1] = 'new-202f2ce5-bef0-4aa3-b4ce-6667b084f2ed';
    $pane = new stdClass();
    $pane->pid = 'new-14baf3d1-4bfc-40e6-9a52-4af72ed8255d';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'sweepstakes_listing-promoted_pane';
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
    $pane->uuid = '14baf3d1-4bfc-40e6-9a52-4af72ed8255d';
    $display->content['new-14baf3d1-4bfc-40e6-9a52-4af72ed8255d'] = $pane;
    $display->panels['middle'][2] = 'new-14baf3d1-4bfc-40e6-9a52-4af72ed8255d';
    $pane = new stdClass();
    $pane->pid = 'new-133984e3-0bc0-4a4c-9968-ad67d9f7f85a';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'sweepstakes_listing-listing_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '133984e3-0bc0-4a4c-9968-ad67d9f7f85a';
    $display->content['new-133984e3-0bc0-4a4c-9968-ad67d9f7f85a'] = $pane;
    $display->panels['middle'][3] = 'new-133984e3-0bc0-4a4c-9968-ad67d9f7f85a';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['sweepstakes'] = $page;

  return $pages;

}
