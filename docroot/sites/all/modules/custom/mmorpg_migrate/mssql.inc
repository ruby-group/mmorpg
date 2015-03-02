<?php
/**
 * @file
 * Additional features for MigrateSoureceMSSQL class.
 */

/**
 * MSSQL Migration Source for MMORPG.
 *
 * This class extends the MigrateSourceMSSQL class to provide various necessary
 * features, such as retrieving the connection object.
 */
class MMORPGSourceMSSQL extends MigrateSourceMSSQL {
  /**
   * Retrieve the connection object.
   */
  public function getConnection() {
    if (empty($this->connection)) {
      $this->connect();
    }

    return $this->connection;
  }
}
