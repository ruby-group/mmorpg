<?php
/**
 * @file
 * demo.features.inc
 */

/**
 * Implements hook_views_api().
 */
function demo_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_user_default_permissions_alter().
 */
function demo_user_default_permissions_alter(&$data) {
  if (isset($data['create article_news_post content'])) {
    $data['create article_news_post content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['create customer content'])) {
    $data['create customer content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['create game content'])) {
    $data['create game content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['create game_link content'])) {
    $data['create game_link content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['create mmorpg_article content'])) {
    $data['create mmorpg_article content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['create promoted_signup_now_link content'])) {
    $data['create promoted_signup_now_link content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['create siteskin content'])) {
    $data['create siteskin content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete any article_news_post content'])) {
    $data['delete any article_news_post content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete any customer content'])) {
    $data['delete any customer content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete any game content'])) {
    $data['delete any game content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete any game_link content'])) {
    $data['delete any game_link content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete any mmorpg_article content'])) {
    $data['delete any mmorpg_article content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete any promoted_signup_now_link content'])) {
    $data['delete any promoted_signup_now_link content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete any screenshot_gallery content'])) {
    $data['delete any screenshot_gallery content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete any siteskin content'])) {
    $data['delete any siteskin content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete any video content'])) {
    $data['delete any video content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete own article_news_post content'])) {
    $data['delete own article_news_post content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete own customer content'])) {
    $data['delete own customer content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete own game content'])) {
    $data['delete own game content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete own game_link content'])) {
    $data['delete own game_link content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete own mmorpg_article content'])) {
    $data['delete own mmorpg_article content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete own promoted_signup_now_link content'])) {
    $data['delete own promoted_signup_now_link content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete own screenshot_gallery content'])) {
    $data['delete own screenshot_gallery content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete own siteskin content'])) {
    $data['delete own siteskin content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete own video content'])) {
    $data['delete own video content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit any article_news_post content'])) {
    $data['edit any article_news_post content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit any customer content'])) {
    $data['edit any customer content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit any game content'])) {
    $data['edit any game content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit any game_link content'])) {
    $data['edit any game_link content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit any mmorpg_article content'])) {
    $data['edit any mmorpg_article content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit any promoted_signup_now_link content'])) {
    $data['edit any promoted_signup_now_link content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit any screenshot_gallery content'])) {
    $data['edit any screenshot_gallery content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit any siteskin content'])) {
    $data['edit any siteskin content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit any video content'])) {
    $data['edit any video content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit own article_news_post content'])) {
    $data['edit own article_news_post content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit own customer content'])) {
    $data['edit own customer content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit own game content'])) {
    $data['edit own game content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit own game_link content'])) {
    $data['edit own game_link content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit own mmorpg_article content'])) {
    $data['edit own mmorpg_article content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit own promoted_signup_now_link content'])) {
    $data['edit own promoted_signup_now_link content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit own screenshot_gallery content'])) {
    $data['edit own screenshot_gallery content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit own siteskin content'])) {
    $data['edit own siteskin content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit own video content'])) {
    $data['edit own video content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['use text format filtered_html'])) {
    $data['use text format filtered_html']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['view any unpublished customer content'])) {
    $data['view any unpublished customer content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
}
