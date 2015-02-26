<?php

function mmorpg_article_settings_page() {
  return ' ';
}

function mmorpg_article_settings($form, &$form_state) {
  $form['mmorpg_trending_max'] = array(
    '#type' => 'select',
    '#options' => array_combine(range(1,7), range(1,7)),
    '#title' => t('Trending content - Max ad spacing'),
    '#default_value' => variable_get('mmorpg_trending_max', 5),
    '#description' => t('Max spacing for sponsored content in trending articles'),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}