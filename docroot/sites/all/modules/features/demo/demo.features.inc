<?php
/**
 * @file
 * demo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function demo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

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
  if (isset($data['administer signupnow settings'])) {
    $data['administer signupnow settings']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['bypass country restriction'])) {
    $data['bypass country restriction']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['clear key_giveaway_importer feeds'])) {
    $data['clear key_giveaway_importer feeds']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['clone node'])) {
    $data['clone node']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['clone own nodes'])) {
    $data['clone own nodes']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
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
  if (isset($data['create giveaway content'])) {
    $data['create giveaway content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['create mmorpg_article content'])) {
    $data['create mmorpg_article content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['create play_now_promoted_game content'])) {
    $data['create play_now_promoted_game content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['create promoted_signup_now_link content'])) {
    $data['create promoted_signup_now_link content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['create signup_now_link content'])) {
    $data['create signup_now_link content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['create siteskin content'])) {
    $data['create siteskin content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
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
  if (isset($data['delete any giveaway content'])) {
    $data['delete any giveaway content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete any mmorpg_article content'])) {
    $data['delete any mmorpg_article content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete any play_now_promoted_game content'])) {
    $data['delete any play_now_promoted_game content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete any promoted_signup_now_link content'])) {
    $data['delete any promoted_signup_now_link content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete any screenshot_gallery content'])) {
    $data['delete any screenshot_gallery content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete any signup_now_link content'])) {
    $data['delete any signup_now_link content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete any siteskin content'])) {
    $data['delete any siteskin content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete any video content'])) {
    $data['delete any video content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
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
  if (isset($data['delete own giveaway content'])) {
    $data['delete own giveaway content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete own mmorpg_article content'])) {
    $data['delete own mmorpg_article content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete own play_now_promoted_game content'])) {
    $data['delete own play_now_promoted_game content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete own promoted_signup_now_link content'])) {
    $data['delete own promoted_signup_now_link content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete own screenshot_gallery content'])) {
    $data['delete own screenshot_gallery content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete own signup_now_link content'])) {
    $data['delete own signup_now_link content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete own siteskin content'])) {
    $data['delete own siteskin content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete own video content'])) {
    $data['delete own video content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
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
  if (isset($data['edit any giveaway content'])) {
    $data['edit any giveaway content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit any mmorpg_article content'])) {
    $data['edit any mmorpg_article content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit any play_now_promoted_game content'])) {
    $data['edit any play_now_promoted_game content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit any promoted_signup_now_link content'])) {
    $data['edit any promoted_signup_now_link content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit any screenshot_gallery content'])) {
    $data['edit any screenshot_gallery content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit any signup_now_link content'])) {
    $data['edit any signup_now_link content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit any siteskin content'])) {
    $data['edit any siteskin content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit any video content'])) {
    $data['edit any video content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
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
  if (isset($data['edit own giveaway content'])) {
    $data['edit own giveaway content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit own mmorpg_article content'])) {
    $data['edit own mmorpg_article content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit own play_now_promoted_game content'])) {
    $data['edit own play_now_promoted_game content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit own promoted_signup_now_link content'])) {
    $data['edit own promoted_signup_now_link content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit own screenshot_gallery content'])) {
    $data['edit own screenshot_gallery content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit own signup_now_link content'])) {
    $data['edit own signup_now_link content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit own siteskin content'])) {
    $data['edit own siteskin content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit own video content'])) {
    $data['edit own video content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['import key_giveaway_importer feeds'])) {
    $data['import key_giveaway_importer feeds']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['set article_news_post published on date'])) {
    $data['set article_news_post published on date']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['set game published on date'])) {
    $data['set game published on date']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['set game_link published on date'])) {
    $data['set game_link published on date']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['set mmorpg_article published on date'])) {
    $data['set mmorpg_article published on date']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['set play_now_promoted_game published on date'])) {
    $data['set play_now_promoted_game published on date']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['set promoted_signup_now_link published on date'])) {
    $data['set promoted_signup_now_link published on date']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['set screenshot_gallery published on date'])) {
    $data['set screenshot_gallery published on date']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['set signup_now_link published on date'])) {
    $data['set signup_now_link published on date']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['set video published on date'])) {
    $data['set video published on date']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['use text format filtered_html'])) {
    $data['use text format filtered_html']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['view any unpublished customer content'])) {
    $data['view any unpublished customer content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['view any unpublished game_link content'])) {
    $data['view any unpublished game_link content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['view any unpublished giveaway content'])) {
    $data['view any unpublished giveaway content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['view any unpublished play_now_promoted_game content'])) {
    $data['view any unpublished play_now_promoted_game content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['view any unpublished promoted_signup_now_link content'])) {
    $data['view any unpublished promoted_signup_now_link content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['view any unpublished screenshot_gallery content'])) {
    $data['view any unpublished screenshot_gallery content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['view any unpublished signup_now_link content'])) {
    $data['view any unpublished signup_now_link content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['view any unpublished siteskin content'])) {
    $data['view any unpublished siteskin content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['view any unpublished video content'])) {
    $data['view any unpublished video content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['access administration pages'])) {
    $data['access administration pages']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['access all webform results'])) {
    $data['access all webform results']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['access content overview'])) {
    $data['access content overview']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['access site in maintenance mode'])) {
    $data['access site in maintenance mode']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['administer nodequeue'])) {
    $data['administer nodequeue']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['administer nodes'])) {
    $data['administer nodes']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['administer pollims'])) {
    $data['administer pollims']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['administer signupnow settings'])) {
    $data['administer signupnow settings']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['administer taxonomy'])) {
    $data['administer taxonomy']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['create field_screenshot_category'])) {
    $data['create field_screenshot_category']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['create review content'])) {
    $data['create review content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['create review_content content'])) {
    $data['create review_content content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['create sweepstake content'])) {
    $data['create sweepstake content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['create webform content'])) {
    $data['create webform content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete any review content'])) {
    $data['delete any review content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete any review_content content'])) {
    $data['delete any review_content content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete any sweepstake content'])) {
    $data['delete any sweepstake content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete any webform content'])) {
    $data['delete any webform content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete own review content'])) {
    $data['delete own review content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete own review_content content'])) {
    $data['delete own review_content content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['access administration menu'])) {
    $data['access administration menu']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete own sweepstake content'])) {
    $data['delete own sweepstake content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete own webform content'])) {
    $data['delete own webform content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['delete revisions'])) {
    $data['delete revisions']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit any game_of_the_year pollim'])) {
    $data['edit any game_of_the_year pollim']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit any review content'])) {
    $data['edit any review content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit any review_content content'])) {
    $data['edit any review_content content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit any sweepstake content'])) {
    $data['edit any sweepstake content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit any webform content'])) {
    $data['edit any webform content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit field_screenshot_category'])) {
    $data['edit field_screenshot_category']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit own field_screenshot_category'])) {
    $data['edit own field_screenshot_category']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit own review content'])) {
    $data['edit own review content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit own review_content content'])) {
    $data['edit own review_content content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit own sweepstake content'])) {
    $data['edit own sweepstake content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit own webform content'])) {
    $data['edit own webform content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['edit webform components'])) {
    $data['edit webform components']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['manipulate all queues'])) {
    $data['manipulate all queues']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['manipulate queues'])) {
    $data['manipulate queues']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['revert revisions'])) {
    $data['revert revisions']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['schedule (un)publishing of nodes'])) {
    $data['schedule (un)publishing of nodes']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['set any published on date'])) {
    $data['set any published on date']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['set customer published on date'])) {
    $data['set customer published on date']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['set giveaway published on date'])) {
    $data['set giveaway published on date']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['set review published on date'])) {
    $data['set review published on date']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['set review_content published on date'])) {
    $data['set review_content published on date']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['set siteskin published on date'])) {
    $data['set siteskin published on date']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['set sweepstake published on date'])) {
    $data['set sweepstake published on date']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['use advanced search'])) {
    $data['use advanced search']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['view any game_of_the_year pollim'])) {
    $data['view any game_of_the_year pollim']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['view any unpublished content'])) {
    $data['view any unpublished content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['view any unpublished game content'])) {
    $data['view any unpublished game content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['view any unpublished mmorpg_article content'])) {
    $data['view any unpublished mmorpg_article content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['view any unpublished panel content'])) {
    $data['view any unpublished panel content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['view any unpublished review content'])) {
    $data['view any unpublished review content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['view any unpublished review_content content'])) {
    $data['view any unpublished review_content content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['view any unpublished sweepstake content'])) {
    $data['view any unpublished sweepstake content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['view any unpublished webform content'])) {
    $data['view any unpublished webform content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['view own field_screenshot_category'])) {
    $data['view own field_screenshot_category']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['view own unpublished content'])) {
    $data['view own unpublished content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['view revisions'])) {
    $data['view revisions']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['view scheduled content'])) {
    $data['view scheduled content']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
  if (isset($data['view the administration theme'])) {
    $data['view the administration theme']['roles']['subadmin'] = 'subadmin'; /* WAS: '' */
  }
}
