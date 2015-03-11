<?php

class mmorpg_siteskins_handler_filter_current_url extends views_handler_filter_string {

  function can_expose() {
    return FALSE;
  }

  function query() {
  }

  function post_execute(&$values) {
    foreach ($values as $id => $value) {
      $pages = drupal_strtolower($value->field_field_siteskin_location[0]['raw']['value']);
      $path = drupal_strtolower(drupal_get_path_alias(current_path()));
      $page_match = drupal_match_path($path, $pages);
      if ($path != $_GET['q']) {
        $page_match = $page_match || drupal_match_path($_GET['q'], $pages);
      }
      if (!$page_match) {
        unset($values[$id]);
      }
    }
  }
}