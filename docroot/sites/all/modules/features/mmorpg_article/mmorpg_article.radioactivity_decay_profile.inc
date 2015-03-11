<?php
/**
 * @file
 * mmorpg_article.radioactivity_decay_profile.inc
 */

/**
 * Implements hook_default_radioactivity_decay_profile().
 */
function mmorpg_article_default_radioactivity_decay_profile() {
  $export = array();

  $radioactivity_decay_profile = new stdClass();
  $radioactivity_decay_profile->disabled = FALSE; /* Edit this to true to make a default radioactivity_decay_profile disabled initially */
  $radioactivity_decay_profile->api_version = 1;
  $radioactivity_decay_profile->machine_name = 'trending';
  $radioactivity_decay_profile->name = 'Trending';
  $radioactivity_decay_profile->description = '';
  $radioactivity_decay_profile->enable_decay = 2;
  $radioactivity_decay_profile->granularity = '300';
  $radioactivity_decay_profile->half_life = 21600;
  $radioactivity_decay_profile->cut_off = '1';
  $radioactivity_decay_profile->storage = 'Live';
  $export['trending'] = $radioactivity_decay_profile;

  return $export;
}
