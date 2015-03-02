<?php
/**
 * @file
 * mmorpg_poll.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function mmorpg_poll_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_pollim_question'
  $field_bases['field_pollim_question'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pollim_question',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'choices',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'choices',
  );

  return $field_bases;
}
