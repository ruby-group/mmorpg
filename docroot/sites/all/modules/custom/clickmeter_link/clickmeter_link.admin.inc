<?php

function clickmeter_config_form() {
  return system_settings_form(array(
    'clickmeter_api_key' => array(
      '#type' => 'textfield',
      '#title' => t('API Key'),
      '#maxlength' => 60,
      '#default_value' => variable_get('clickmeter_api_key'),
    )
  ));
}

function clickmeter_group_config() {
  $groups = ClickmeterService::get_groups('all');
  $display = array();
  foreach ($groups as $id => $name) {
    $display[] = array(
      $id,
      $name,
    );
  }
  $form = drupal_get_form('clickmeter_new_group_form');

  return
    render($form) .
    '<br/><br/>' .
    theme('table', array(
      'header' => array('Id', 'Name'),
      'rows' => $display
    ));
}

function clickmeter_new_group_form() {
  return array(
    'new_group' => array(
      '#title' => t('Create Group'),
      '#type' => 'textfield',
      '#size' => 30,
    ),
    'submit' => array(
      '#type' => 'submit',
      '#value' => t('Save')
    ),
    '#submit' => array('clickmeter_new_group_form_submit'),
  );
}

function clickmeter_new_group_form_submit($form_id, &$form_state) {
  ClickmeterService::new_group($form_state['values']['new_group']);
}
