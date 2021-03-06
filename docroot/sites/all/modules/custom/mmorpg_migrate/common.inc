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
        'password' => 'mynnAshOf7',
        'database' => 'mmorpg',
      );
    }
    else {
      $this->db = $arguments['source_database'];
    }
  }

  public function formatDate($value) {
    substr_replace($value, '', strlen($value) - 6, 4);
    $dateObj = DateTime::createFromFormat('M  d Y h:i:sA', $value);
    $requiredFormat = $dateObj->format('Ymd\Th:i:s');
    return $requiredFormat;
  }

  public function prepareRow($row) {
    //Encoding
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
    foreach ($row as $key => $value) {
      $enc = mb_detect_encoding($value, 'UTF-8', TRUE);
      if (!$enc) {
        $row->$key = mb_convert_encoding($value, 'UTF-8', 'WINDOWS-1252');
      }
    }
  }
}
