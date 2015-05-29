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
  $overrides["user_permission.access administration menu.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.access administration pages.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.access all webform results.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.access content overview.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.access site in maintenance mode.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.administer nodequeue.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.administer nodes.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.administer pollims.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.administer signupnow settings.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.administer taxonomy.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.create field_screenshot_category.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.create review content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.create review_content content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.create sweepstake content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.create webform content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete any review content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete any review_content content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete any sweepstake content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete any webform content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete own review content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete own review_content content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete own sweepstake content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete own webform content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete revisions.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit any game_of_the_year pollim.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit any review content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit any review_content content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit any sweepstake content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit any webform content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit field_screenshot_category.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit own field_screenshot_category.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit own review content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit own review_content content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit own sweepstake content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit own webform content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit webform components.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.manipulate all queues.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.manipulate queues.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.revert revisions.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.schedule (un)publishing of nodes.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.set any published on date.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.set customer published on date.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.set giveaway published on date.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.set review published on date.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.set review_content published on date.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.set siteskin published on date.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.set sweepstake published on date.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.use advanced search.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.view any game_of_the_year pollim.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.view any unpublished content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.view any unpublished game content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.view any unpublished mmorpg_article content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.view any unpublished panel content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.view any unpublished review content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.view any unpublished review_content content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.view any unpublished sweepstake content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.view any unpublished webform content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.view own field_screenshot_category.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.view own unpublished content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.view revisions.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.view scheduled content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.view the administration theme.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.bypass country restriction.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.clear key_giveaway_importer feeds.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.clone node.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.clone own nodes.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.create customer content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.create game content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.create game_link content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.create giveaway content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.create mmorpg_article content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.create play_now_promoted_game content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.create promoted_signup_now_link content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.create signup_now_link content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.create siteskin content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete any customer content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete any game content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete any game_link content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete any giveaway content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete any mmorpg_article content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete any play_now_promoted_game content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete any promoted_signup_now_link content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete any screenshot_gallery content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete any signup_now_link content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete any siteskin content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete any video content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete own customer content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete own game content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete own game_link content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete own giveaway content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete own mmorpg_article content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete own play_now_promoted_game content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete own promoted_signup_now_link content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete own screenshot_gallery content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete own signup_now_link content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete own siteskin content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.delete own video content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit any customer content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit any game content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit any game_link content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit any giveaway content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit any mmorpg_article content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit any play_now_promoted_game content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit any promoted_signup_now_link content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit any screenshot_gallery content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit any signup_now_link content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit any siteskin content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit any video content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit own customer content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit own game content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit own game_link content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit own giveaway content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit own mmorpg_article content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit own play_now_promoted_game content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit own promoted_signup_now_link content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit own screenshot_gallery content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit own signup_now_link content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit own siteskin content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.edit own video content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.import key_giveaway_importer feeds.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.set article_news_post published on date.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.set game published on date.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.set game_link published on date.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.set mmorpg_article published on date.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.set play_now_promoted_game published on date.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.set promoted_signup_now_link published on date.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.set screenshot_gallery published on date.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.set signup_now_link published on date.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.set video published on date.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.use text format filtered_html.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.view any unpublished customer content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.view any unpublished game_link content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.view any unpublished giveaway content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.view any unpublished play_now_promoted_game content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.view any unpublished promoted_signup_now_link content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.view any unpublished screenshot_gallery content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.view any unpublished signup_now_link content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.view any unpublished siteskin content.roles|subadmin"] = 'subadmin';
  $overrides["user_permission.view any unpublished video content.roles|subadmin"] = 'subadmin';

 return $overrides;
}
