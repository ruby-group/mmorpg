<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * mmorpg theme.
 */

function mmorpg_preprocess_node(&$vars) {
  $date = $vars['date'];
  $dateObj = DateTime::createFromFormat("D, m/d/Y - H:i",$date);
  $requiredDate = $dateObj->format("F j, Y");
  $vars['submitted'] = t('Posted by !username on !datetime',
  array(
    '!username' => $vars['name'],
    '!datetime' => $requiredDate,
  ));
}