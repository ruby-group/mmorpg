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
      'FeatureDate' => t('Feature Date'),
      'RelatedGames' => t('Related Games')
      );

    $query = 'SELECT FeatureID, F.Title , F.Overview, F.ColumnId, TypeID, F.ShowID, Enabled, FeatureDate, N.BodyParsed as NewsPost, RelatedGames = STUFF((SELECT \', \' + CAST(G.GameId AS VARCHAR) FROM mmorpg.dbo.FeatureXGames  G WHERE F.FeatureID = G.FeatureId FOR XML PATH(\'\')), 1, 2, \'\') FROM mmorpg.dbo.Features AS F LEFT OUTER JOIN mmorpg.dbo.News AS N ON F.NewsId = N.NewsID';
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
    $this->addFieldMapping('field_article_type:tid');

    $this->addFieldMapping('field_article_overview','Overview')
    ->callBacks(array($this,'update_links'));

    $this->addFieldMapping('field_article_column:tid','ColumnId')
    ->sourceMigration('MMORPGColumn');

    $this->addFieldMapping('field_article_subcategory:tid','TypeID')
    ->sourceMigration('MMORPGArticleSubCategories');

    $this->addFieldMapping('field_article_show_event:tid','ShowID')
    ->sourceMigration('MMORPGTblShows');
    // $this->addFieldMapping('field_article_related_games:tid','RelatedGames');
    $this->addFieldMapping('field_article_news_post','NewsPost');
    $this->addFieldMapping('field_article_news_post:value_format')
      ->defaultValue('full_html');
    $this->addFieldMapping('field_article_news_post:format')
      ->defaultValue('full_html');
    $this->addFieldMapping('created','FeatureDate');
    $this->addFieldMapping('published_at','FeatureDate');
    $this->addFieldMapping('uid')
      ->defaultValue('1');


    $this->addUnmigratedSources(array(
      'RelatedGames'
      ));
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
      'field_article_related_games'
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
    $news = taxonomy_get_term_by_name('news','article_types');
    $feature = taxonomy_get_term_by_name('feature','article_types');
    $column = taxonomy_get_term_by_name('column','article_types');
    if (isset($row->field_article_news_post)) {
      $field_article_type = current($news)->tid;
    }
    else if (isset($row->field_article_column)) {
      $field_article_type = current($column)->tid;
    }
    else {
      $field_article_type = current($feature)->tid;
    }
    $row->field_article_type['und'][0]['tid'] = $field_article_type;
  }
}