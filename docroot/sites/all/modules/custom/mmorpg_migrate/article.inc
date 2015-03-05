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

    $query = "SELECT FeatureID, F.Title , F.Overview, F.ColumnId, TypeID, F.ShowID, Enabled, FeatureDate, N.BodyParsed as NewsPost  from dbo.Features AS F LEFT OUTER JOIN dbo.News AS N ON F.NewsId = N.NewsID";
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
      ->arguments(array('source_type' => 'tid'));

    $this->addFieldMapping('field_article_overview','Overview')
      ->callBacks(array($this,'update_links'));

    $this->addFieldMapping('field_article_column','ColumnId')
      ->sourceMigration('MMORPGColumnMigration')
      ->arguments(array('source_type' => 'tid'));

    $this->addFieldMapping('field_article_subcategory','TypeID')
      ->sourceMigration('MMORPGArticleSubCategories')
      ->arguments(array('source_type' => 'tid'));
      
    $this->addFieldMapping('field_article_show_event','ShowID')
      ->sourceMigration('MMORPGTblShows')
      ->arguments(array('source_type' => 'tid'));
    // $this->addFieldMapping('field_article_related_games');
    $this->addFieldMapping('field_article_news_post','NewsPost');
    $this->addFieldMapping('status','Enabled');
    $this->addFieldMapping('publication_date','FeatureDate');
    $this->addFieldMapping('uid','1');


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
    var_dump($row);  
  }

  public function update_links($value) {
    return $value;
  }

  public function prepare($row) {
    //Update pages here 
    ini_set('xdebug.var_display_max_depth', '10');
    $news_tid = taxonomy_get_term_by_name('news','article_types');
    $column_tid = taxonomy_get_term_by_name('feature','article_types');
    $feature_tid = taxonomy_get_term_by_name('column','article_types');
    if (isset($row->field_article_news_post)) {
      $field_article_type = $news_tid;
    }
    else if (isset($row->field_article_column)) {
      $field_article_type = $column_tid;
    }
    else {
      $field_article_type = $feature_tid;
    }
    $row->field_article_type['und'][0]['tid'] = $field_article_type;
    var_dump($row);
    die();
  }
}