<?php
/**
 * @file
 * mmorpg_customer.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mmorpg_customer_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_customer';
  $strongarm->value = array();
  $export['menu_options_customer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_customer';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_customer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_customer';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_customer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_customer';
  $strongarm->value = '0';
  $export['node_preview_customer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_customer';
  $strongarm->value = 0;
  $export['node_submitted_customer'] = $strongarm;

  return $export;
}
