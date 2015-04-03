<?php
/**
 * @file
 * demo.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function demo_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: user_permission
  $overrides["user_permission.create article_news_post content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.create customer content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.create game content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.create game_link content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.create mmorpg_article content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.create promoted_signup_now_link content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.create siteskin content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete any article_news_post content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete any customer content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete any game content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete any game_link content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete any mmorpg_article content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete any promoted_signup_now_link content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete any screenshot_gallery content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete any siteskin content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete any video content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete own article_news_post content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete own customer content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete own game content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete own game_link content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete own mmorpg_article content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete own promoted_signup_now_link content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete own screenshot_gallery content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete own siteskin content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete own video content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit any article_news_post content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit any customer content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit any game content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit any game_link content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit any mmorpg_article content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit any promoted_signup_now_link content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit any screenshot_gallery content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit any siteskin content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit any video content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit own article_news_post content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit own customer content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit own game content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit own game_link content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit own mmorpg_article content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit own promoted_signup_now_link content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit own screenshot_gallery content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit own siteskin content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit own video content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.use text format filtered_html.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.view any unpublished customer content.roles|subadmin"] = 'subadmin';

 return $overrides;
}
