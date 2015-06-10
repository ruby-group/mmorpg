<?php

function mmorpg_article_settings_page() {
  return ' ';
}

function mmorpg_article_settings($form, &$form_state) {
  $form['mmorpg_trending_max'] = array(
    '#type' => 'select',
    '#options' => array_combine(range(1, 10), range(1, 10)),
    '#title' => t('Trending content - Total Items'),
    '#default_value' => variable_get('mmorpg_trending_max', 5),
    '#description' => t('Total number of trending items to be shown'),
    '#required' => TRUE,
  );

  $form['mmorpg_trending_ad_space'] = array(
    '#type' => 'select',
    '#options' => array_combine(range(1, 7), range(1, 7)),
    '#title' => t('Trending content - Max ad spacing'),
    '#default_value' => variable_get('mmorpg_trending_ad_space', 5),
    '#description' => t('Max spacing for sponsored content in trending articles'),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}

function mmorpg_article_settings_validate($form, &$form_state) {
  if ($form_state['values']['mmorpg_trending_ad_space'] > $form_state['values']['mmorpg_trending_max']) {
    form_error($form['mmorpg_trending_ad_space'], 'The max ad spacing should be less than the total items');
  }
}