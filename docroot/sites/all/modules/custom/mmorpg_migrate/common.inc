<?php
/**
 * @file
 * Common classes for migration support.
 */

/**
 * Common support class for all MMORPG migrations
 */
abstract class MMORPGCommon extends Migration {
  protected $db;

  /**
   * Constructor.
   */
  public function __construct($arguments) {
    // Always call the parent constructor first for basic setup.
    parent::__construct($arguments);
    if (empty($arguments['source_database'])) {
      $this->db = array(
        'servername' => '54.82.10.36:1433',
        'username' => 'mmorpg',
        'password' => 'mmorpg',
        'database' => 'mmorpg',
      );
    }
    else {
      $this->db = $arguments['source_database'];
    }
  }
}
