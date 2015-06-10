<?php
/**
 * @file
 * mmorpg_site.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function mmorpg_site_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'game_rating_notice';
  $content->admin_title = 'Game Rating Notice';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'Game Rating Notice',
    'title' => '',
    'body' => '<p><span style="font-family: sans-serif; font-size: 14px; background-color: rgb(255, 255, 255);">PLEASE NOTE: Manipulation of the ratings will result in the reset and disabling of this game\'s ratings. Examples of manipulation include (but are not limited to): creating multiple accounts in order to drive up the rating, developers encouraging fans to vote the rating to a specific number, and the offering of incentives for fans to vote up the rating (such as in-game rewards).</span></p>',
    'format' => 'filtered_html',
    'substitute' => 0,
  );
  $export['game_rating_notice'] = $content;

  return $export;
}
