<?php
/**
 * @file
 * mmorpg_customer.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mmorpg_customer_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cust_phone|node|customer|form';
  $field_group->group_name = 'group_cust_phone';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'customer';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Phone',
    'weight' => '3',
    'children' => array(
      0 => 'field_cust_phone_no',
      1 => 'field_cust_phone_ext',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cust-phone field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_cust_phone|node|customer|form'] = $field_group;

  return $export;
}
