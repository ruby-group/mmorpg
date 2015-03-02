<?php
/**
 * @file
 * mmorpg_poll.features.inc
 */

/**
 * Implements hook_default_pollim_type().
 */
function mmorpg_poll_default_pollim_type() {
  $items = array();
  $items['game_of_the_year'] = entity_import('pollim_type', '{
    "type" : "game_of_the_year",
    "label" : "Game of the Year",
    "weight" : "0",
    "data" : "",
    "rdf_mapping" : []
  }');
  return $items;
}
