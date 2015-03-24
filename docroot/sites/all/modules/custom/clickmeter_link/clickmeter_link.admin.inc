<?php

/**
 * Implement hook_form().
 */
function clickmeter_config_form($form, &$form_state) {
  $form = array();

  $form['api_key'] = array(
    '#type' => 'textfield',
    '#title' => t('API Key'),
    '#maxlength' => 60,
    '#default_value' => variable_get('CLICKMETER_KEY'),
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save')
  );

  return $form;
}

/**
 * Implement hook_form().
 */
function clickmeter_group_config_form($form, &$form_state) {
  $form = array();

  $form['group'] = array(
    '#title' => 'Group',
    '#type' => 'select',
    '#options' => ClickmeterService::get_groups() + array('other' => 'NEW GROUP'),
    '#description' => t('Create new group by selecting NEW GROUP.'),
  );
  $form['new_group'] = array(
    '#title' => t('Group name'),
    '#type'  => 'textfield',
    '#size' => 30,
    '#states' => array(
      'visible' => array(
        ':input[name="group"]' => array('value' => 'other'),
      ),
      'required' => array(
        ':input[name="group"]' => array('value' => 'other'),
      ),
    ),
  );

  $form['create'] = array(
    '#type' => 'submit',
    '#value' => t('Create'),
    '#states' => array(
      'visible' => array(
        ':input[name="group"]' => array('value' => 'other'),
      ),
    ),
  );

  return $form;
}

/**
 * Implement hook_form_submit().
 */
function clickmeter_config_form_submit($form_id, &$form_state) {
  $api_key = $form_state['values']['api_key'];
  variable_set('CLICKMETER_KEY', $api_key);
}

/**
 * Implement hook_form_submit().
 */
function clickmeter_group_config_form_submit($form_id, &$form_state) {
  if ($form_state['values']['group'] === 'other') {
    $group_name = $form_state['values']['new_group'];
    ClickmeterService::new_group($group_name);
  }
}
