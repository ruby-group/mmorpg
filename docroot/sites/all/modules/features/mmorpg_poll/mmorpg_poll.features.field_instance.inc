<?php
/**
 * @file
 * mmorpg_poll.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function mmorpg_poll_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'pollim-game_of_the_year-field_pollim_question'
  $field_instances['pollim-game_of_the_year-field_pollim_question'] = array(
    'bundle' => 'game_of_the_year',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'choices',
        'settings' => array(),
        'type' => 'choices_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'pollim',
    'field_name' => 'field_pollim_question',
    'label' => 'Options',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'choices',
      'settings' => array(),
      'type' => 'choices_default',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Options');

  return $field_instances;
}
