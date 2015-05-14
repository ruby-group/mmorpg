<?php
/**
 * @file
 * mmorpg_field_controller.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function mmorpg_field_controller_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_countries_cce'
  $field_bases['field_countries_cce'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_countries_cce',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(),
      'allowed_values_function' => 'mmorpg_countries_list',
      'default_widget' => 'options_select',
      'description' => 'Provides country list to be included for nodes',
      'label' => 'Countries',
      'type' => 'list_text',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_target_url'
  $field_bases['field_target_url'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_target_url',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'clickmeter_link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'clickmeter_link_field',
  );

  return $field_bases;
}
