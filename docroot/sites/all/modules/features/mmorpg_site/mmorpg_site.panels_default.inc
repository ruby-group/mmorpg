<?php
/**
 * @file
 * mmorpg_site.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function mmorpg_site_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'header';
  $mini->category = '';
  $mini->admin_title = 'Header';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'omega:mmhead';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content' => NULL,
      'middle' => NULL,
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
  $display->uuid = '16d6cb68-7d4e-42f7-b8bd-bda0531f3c95';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-66312ceb-38e4-4a77-adf1-acdc529fce21';
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
    $pane->uuid = '66312ceb-38e4-4a77-adf1-acdc529fce21';
    $display->content['new-66312ceb-38e4-4a77-adf1-acdc529fce21'] = $pane;
    $display->panels['navigation'][0] = 'new-66312ceb-38e4-4a77-adf1-acdc529fce21';
    $pane = new stdClass();
    $pane->pid = 'new-6771122a-7e7e-4fd7-b556-bb9b324cf09e';
    $pane->panel = 'navigation';
    $pane->type = 'block';
    $pane->subtype = 'om_maximenu-om-maximenu-1';
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
    $pane->uuid = '6771122a-7e7e-4fd7-b556-bb9b324cf09e';
    $display->content['new-6771122a-7e7e-4fd7-b556-bb9b324cf09e'] = $pane;
    $display->panels['navigation'][1] = 'new-6771122a-7e7e-4fd7-b556-bb9b324cf09e';
    $pane = new stdClass();
    $pane->pid = 'new-4775b163-6118-4d30-9af5-6e813c0e1f1a';
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
    $pane->uuid = '4775b163-6118-4d30-9af5-6e813c0e1f1a';
    $display->content['new-4775b163-6118-4d30-9af5-6e813c0e1f1a'] = $pane;
    $display->panels['trending'][0] = 'new-4775b163-6118-4d30-9af5-6e813c0e1f1a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['header'] = $mini;

  return $export;
}
