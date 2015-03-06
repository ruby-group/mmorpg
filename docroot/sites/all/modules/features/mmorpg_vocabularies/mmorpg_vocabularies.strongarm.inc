<?php
/**
 * @file
 * mmorpg_vocabularies.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mmorpg_vocabularies_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_entity_taxonomy_term';
  $strongarm->value = array(
    'article_types' => 'article_types',
    'card_types' => 'card_types',
    'esrb' => 'esrb',
    'keys_per_day_spread' => 'keys_per_day_spread',
    'tags' => 0,
    'ai_systems' => 0,
    'article_subcategory' => 0,
    'blog_tags' => 0,
    'business_model' => 0,
    'camera_types' => 0,
    'cancel_reason' => 0,
    'classification' => 0,
    'collision_and_physics' => 0,
    'column' => 0,
    'cons_highlights' => 0,
    'distribution_types' => 0,
    'engine' => 0,
    'expansion_types' => 0,
    'faq_category' => 0,
    'game_development_status' => 0,
    'genres' => 0,
    'languages' => 0,
    'mmo_genre' => 0,
    'offer_types' => 0,
    'origin' => 0,
    'payment_methods' => 0,
    'platforms' => 0,
    'player_controls' => 0,
    'pros_highlights' => 0,
    'rendering_engines' => 0,
    'screenshot_type' => 0,
    'shows_events' => 0,
    'sound_engines' => 0,
    'style' => 0,
    'video_category' => 0,
    'video_mode' => 0,
    'migrate_example_beer_styles' => 0,
    'migrate_example_wine_varieties' => 0,
    'migrate_example_wine_regions' => 0,
    'migrate_example_wine_best_with' => 0,
  );
  $export['uuid_features_entity_taxonomy_term'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_vocabulary_terms';
  $strongarm->value = 0;
  $export['uuid_features_vocabulary_terms'] = $strongarm;

  return $export;
}
