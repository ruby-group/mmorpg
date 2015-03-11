<?php
/**
 * @file
 * mmorpg_vocabularies.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function mmorpg_vocabularies_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_tiers_max_links_to_display'
  $field_bases['field_tiers_max_links_to_display'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tiers_max_links_to_display',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  return $field_bases;
}
