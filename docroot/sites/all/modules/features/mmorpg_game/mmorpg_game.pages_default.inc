<?php
/**
 * @file
 * mmorpg_game.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function mmorpg_game_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit__video';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Video',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'video',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'video' => 'video',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1600235f-2fb4-4ea9-b1c9-37e3a4e08ed8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bd252b22-ab72-4abd-a4ea-3b9fb2d08103';
    $pane->panel = 'center';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = 'bd252b22-ab72-4abd-a4ea-3b9fb2d08103';
    $display->content['new-bd252b22-ab72-4abd-a4ea-3b9fb2d08103'] = $pane;
    $display->panels['center'][0] = 'new-bd252b22-ab72-4abd-a4ea-3b9fb2d08103';
    $pane = new stdClass();
    $pane->pid = 'new-3d2380a9-e75b-4a32-b0c0-8c361e74f8dd';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'video_preview_admin-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
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
    $pane->uuid = '3d2380a9-e75b-4a32-b0c0-8c361e74f8dd';
    $display->content['new-3d2380a9-e75b-4a32-b0c0-8c361e74f8dd'] = $pane;
    $display->panels['center'][1] = 'new-3d2380a9-e75b-4a32-b0c0-8c361e74f8dd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3d2380a9-e75b-4a32-b0c0-8c361e74f8dd';
  $handler->conf['display'] = $display;
  $export['node_edit__video'] = $handler;

  return $export;
}
