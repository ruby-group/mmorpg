<?php
/**
 * @file
 * mmorpg_vocabularies.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function mmorpg_vocabularies_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'taxonomy_term-tiers_games_to_play_-field_tiers_max_links_to_display'
  $field_instances['taxonomy_term-tiers_games_to_play_-field_tiers_max_links_to_display'] = array(
    'bundle' => 'tiers_games_to_play_',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_tiers_max_links_to_display',
    'label' => 'Max links to display',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Max links to display');

  return $field_instances;
}
