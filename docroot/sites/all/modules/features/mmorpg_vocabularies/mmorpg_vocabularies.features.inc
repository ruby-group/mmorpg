<?php
/**
 * @file
 * mmorpg_vocabularies.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mmorpg_vocabularies_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
