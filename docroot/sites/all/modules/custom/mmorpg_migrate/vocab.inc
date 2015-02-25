<?php
/**
 * @file
 * Vocabulary migration support for MMORPG.
 */

/**
 * Mappings for FAQCategories -> Term
 */
class MMORPGMigrateFaqMigration extends MMORPGCommon {
  /**
   * Constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'admin_group_name' => t('Administrator Group Name'),
    );

    $query = "SELECT a.* from dbo.FaqCategories AS a";
    $count_query = "SELECT COUNT(*) FROM dbo.FaqCategories";
    $this->source = new MMORPGSourceMSSQL($this->db, $query, $count_query, $fields);
    $this->destination = new MigrateDestinationTerm('faq_category');
    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'CategoryID' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'alias' => 'e',
        ),
      ),
      MigrateDestinationTerm::getKeySchema()
    );

    $this->addFieldMapping('name', 'Description');
    // DNM.
    $this->addUnmigratedDestinations(array(
      'description',
      'format',
      'weight',
      'parent',
      'parent_name',
      'path',
    ), t('DNM'));
  }
}
