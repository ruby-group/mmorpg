<?php
/**
 * @file
 * demo.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function demo_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'subadmin_admin_theme';
  $strongarm->value = '1';
  $export['subadmin_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'subadmin_node_admin_theme';
  $strongarm->value = 1;
  $export['subadmin_node_admin_theme'] = $strongarm;

  return $export;
}
