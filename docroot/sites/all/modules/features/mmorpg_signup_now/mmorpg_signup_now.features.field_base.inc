<?php
/**
 * @file
 * mmorpg_signup_now.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function mmorpg_signup_now_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_gtp_customer'
  $field_bases['field_gtp_customer'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_gtp_customer',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-autocomplete' => array(
            'status' => 1,
          ),
          'views-select-list' => array(
            'status' => 1,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'customer' => 'customer',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
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
