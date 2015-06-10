<?php

/**
 * @file Callback file for incident storages POSTs
 */

include "radioactivity-bootstrap.inc";

$incidents = isset($_POST['incidents']) ? $_POST['incidents'] : FALSE;

try {

  if (!$incidents || !is_array($incidents)) {
    throw new Exception('Invalid post data.');
  }

  include "includes/RadioactivityIncident.inc";
  include "includes/RadioactivityIncidentStorage.inc";

  $cache = array();

  foreach ($incidents as $incident) {

    if (!_radioactivity_validate_incident($incident)) {
      throw new Exception('Could not validate an incident.');
    }

    $class = "Radioactivity" . ucfirst($incident['storage']) . "IncidentStorage";

    if (!isset($cache[$class])) {
      require_once "includes/" . $class . ".inc";
      if (!class_exists($class)) {
        throw new Exception('Class ' . $class . ' was not found.');
      }

      $cache[$class] = new $class();

      if ($cache[$class]->requiresBootstrap()) {
        _radioactivity_require_bootstrapping(); 
      }

    }

    $energy = $incident['energy'];
    $energy = $energy / $incident['accuracy'] * 100;
<<<<<<< HEAD
    $cid = 'field:' . $incident['entity_type'] . ':' . $incident['entity_id'];
=======
>>>>>>> 1b6c95ba06d0876d7fd67f319e9af63a7de3b0fa

    $incident = new RadioactivityIncident(
      $incident['entity_type'],
      $incident['bundle'],
      $incident['field_name'],
      $incident['language'],
      $incident['entity_id'],
      $energy,
<<<<<<< HEAD
      time(),
      TRUE
    );

    $cache[$class]->addIncident($incident);

    if (defined('DRUPAL_ROOT')) {
      // Clear field cache to reflect changes
      db_delete("cache_field")
        ->condition('cid', $cid)
        ->execute();
    }
  }

=======
      time()
    );

    $cache[$class]->addIncident($incident);
  }

  if (defined('DRUPAL_ROOT')) {
    // Clear field cache to reflect changes
    db_delete("cache_field")->execute();
  }


>>>>>>> 1b6c95ba06d0876d7fd67f319e9af63a7de3b0fa
} catch (Exception $e) {

  header('HTTP/1.1 400 Bad Request');
  print $e->getMessage();

}
