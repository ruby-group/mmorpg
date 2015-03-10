<?php

/**
 * @file
 * Devel Generate support for Link module.
 */

/**
 * Implements hook_devel_generate().
 */
function clickmeter_link_devel_generate($object, $field, $instance, $bundle) {
  if (field_behaviors_widget('multiple values', $instance) == FIELD_BEHAVIOR_CUSTOM) {
    return devel_generate_multiple('_clickmeter_link_devel_generate', $object, $field, $instance, $bundle);
  }
  else {
    return _clickmeter_link_devel_generate($object, $field, $instance, $bundle);
  }
}

/**
 * Callback for hook_devel_generate().
 */
function _clickmeter_link_devel_generate($object, $field, $instance, $bundle) {
  $clickmeter_link = array(
    'url' => url('<front>', array('absolute' => TRUE)),
    'attributes' => _clickmeter_link_default_attributes(),
  );
  if ($instance['settings']['title'] != 'none') {
    $clickmeter_link['title'] = devel_create_greeking(mt_rand(1, 3), TRUE);
  }
  return $clickmeter_link;
}
