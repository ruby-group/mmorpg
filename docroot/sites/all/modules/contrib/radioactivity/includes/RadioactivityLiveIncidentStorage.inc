<?php

/**
 * @file Live Incident storage class
 */

class RadioactivityLiveIncidentStorage extends RadioactivityIncidentStorage {

  /**
   * Constructor
   */
  public function __construct() {
    parent::__construct();
  }

  /**
   * Add incident directly to the db
   */
  public function addIncident(RadioactivityIncident $incident) {
<<<<<<< HEAD
    if ($incident && $incident->floodCheck()) {
      $incident->updateEnergy();
    }
=======
    $incident->updateEnergy();
>>>>>>> 1b6c95ba06d0876d7fd67f319e9af63a7de3b0fa
  }
}
