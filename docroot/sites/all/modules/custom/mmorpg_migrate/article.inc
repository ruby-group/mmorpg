<?php
/**
 * @file
 * Vocabulary migration support for MMORPG.
 */

class MMORPGArticleMigrate extends MMORPGCommon {

  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'FeatureID' => t('Category ID'),
      'Title' => t('description'),
      'Overview' => t('overview'),
      'ColumnId' => t('Column Id'),
      'TypeID' => t('Type ID'),
      'ShowID' => t('Show ID'),
      'Overview' => t('overview'),
      'Enabled' => t('Enabled'),
      'FeatureDate' => t('Feature Date')
      );

    $query = "SELECT FeatureID, Title , Overview, ColumnId, TypeID, ShowID, Overview, Enabled, FeatureDate  from dbo.Features";
    $count_query = "SELECT COUNT(*) FROM dbo.Features";
    $this->source = new MMORPGSourceMSSQL($this->db, $query, $count_query, $fields);
    $this->destination = new MigrateDestinationNode('mmorpg_article');
    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
         'FeatureID'=> array(
          'type' => 'int', 
          'unsigned' => TRUE,
          'not null' => TRUE,
          'alias' => 'e',
          ),
        ),
      MigrateDestinationTerm::getKeySchema()
      );

    $this->addFieldMapping('title','Title');
    $this->addFieldMapping('field_article_type')
      ->defaultValue('1');
    $this->addFieldMapping('field_article_overview','Overview')
      ->callBacks(array($this,'update_links'));
    $this->addFieldMapping('field_article_column','ColumnId');
    $this->addFieldMapping('field_article_subcategory','TypeID')
       ->sourceMigration('MMORPGArticleSubCategories');
    $this->addFieldMapping('field_article_show_event','ShowID')
      ->sourceMigration('MMORPGTblShows');
    // $this->addFieldMapping('field_article_related_games');
    // $this->addFieldMapping('field_article_news_post','');
    $this->addFieldMapping('status','Enabled');
    $this->addFieldMapping('publication_date','FeatureDate');


    // DNM.
    $this->addUnmigratedDestinations(array(
      'changed',
      'comment',
      'is_new',
      'language',
      'log',
      'revision',
      'revision_uid',
      'tnid',
      'sticky',
      'translate',
      'path',
      'uid',
      'field_article_related_games',
      'field_article_news_post'
      ), t('DNM'));
  }

  public function prepareRow($row) {
    //Encoding
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
    foreach ($row as $key=>$value) {
      $enc = mb_detect_encoding($value, 'UTF-8', TRUE);
      if (!$enc) {
        $row->$key = mb_convert_encoding($value, 'UTF-8', 'WINDOWS-1252');
      }
    }   
  }

  public function update_links($value) {
    return $value;
  }

  public function prepare($row) {
    //Update pages here 
  }
}