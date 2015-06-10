<?php
/**
 * @file
 * mmorpg_vocabularies.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function mmorpg_vocabularies_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Sitewide',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '1fe1f3a2-8ca0-4536-908a-2e8071f6efe6',
    'vocabulary_machine_name' => 'area_games_to_play_',
  );
  $terms[] = array(
    'name' => 'Feature',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '33ffefb3-3dcf-47da-8815-e85d12aab28f',
    'vocabulary_machine_name' => 'article_types',
  );
  $terms[] = array(
    'name' => 'EC (Early Childhood)',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '41c97497-0210-459a-9a8c-9c639bc1be3b',
    'vocabulary_machine_name' => 'esrb',
  );
  $terms[] = array(
    'name' => 'T (Teen)',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '491ed08e-5e94-4a81-a2e7-08951c521dce',
    'vocabulary_machine_name' => 'esrb',
  );
  $terms[] = array(
    'name' => 'Column',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5d385ca2-9f41-46a0-bf94-eecf7d153d7d',
    'vocabulary_machine_name' => 'article_types',
  );
  $terms[] = array(
    'name' => 'AO (Adults Only)',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '761bfc74-5c79-45cc-bdbe-41ce9a2359ee',
    'vocabulary_machine_name' => 'esrb',
  );
  $terms[] = array(
    'name' => 'Sold',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '7cbad6ef-e196-4b7b-adeb-54a04087eb99',
    'vocabulary_machine_name' => 'card_types',
  );
  $terms[] = array(
    'name' => 'Home Page',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9935d1d0-c610-48b3-abb0-726229c7f9b3',
    'vocabulary_machine_name' => 'area_games_to_play_',
  );
  $terms[] = array(
    'name' => 'M (Mature)',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9a4220e5-fe70-4a58-8a0f-125dd0edd544',
    'vocabulary_machine_name' => 'esrb',
  );
  $terms[] = array(
    'name' => 'Tier 1',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a542cc39-4fd9-4fab-ad6c-f9783436779f',
    'vocabulary_machine_name' => 'tiers_games_to_play_',
    'field_tiers_max_links_to_display' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'RP (Rating Pending)',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'aa295825-5dba-4404-bcef-1c1c95a26ea5',
    'vocabulary_machine_name' => 'esrb',
  );
  $terms[] = array(
    'name' => 'House',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ab6d2a14-5778-4d58-861e-b152231fa86e',
    'vocabulary_machine_name' => 'card_types',
  );
  $terms[] = array(
    'name' => 'All at beginning of the day',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd1b45986-e440-49e6-8ff2-225b7c136044',
    'vocabulary_machine_name' => 'keys_per_day_spread',
  );
  $terms[] = array(
    'name' => 'E10+ (Everyone 10 and older)',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e783f96d-fc5e-4ad9-9dd3-3582a2473962',
    'vocabulary_machine_name' => 'esrb',
  );
  $terms[] = array(
    'name' => 'Even spread by hour',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ea7f802f-f543-46d6-9904-7ef18ce1ec9f',
    'vocabulary_machine_name' => 'keys_per_day_spread',
  );
  $terms[] = array(
    'name' => 'News',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f260c3b3-2dcf-45f0-a6cc-699ac14ed333',
    'vocabulary_machine_name' => 'article_types',
  );
  $terms[] = array(
    'name' => 'E (Everyone)',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f2b9db4d-30f7-4b89-8f85-2bba1e9565c9',
    'vocabulary_machine_name' => 'esrb',
  );
  $terms[] = array(
    'name' => 'Tier 2',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f71190b6-bc8d-4bee-b40a-21b18cb60dc1',
    'vocabulary_machine_name' => 'tiers_games_to_play_',
    'field_tiers_max_links_to_display' => array(
      'und' => array(
        0 => array(
          'value' => 7,
        ),
      ),
    ),
  );
  return $terms;
}
