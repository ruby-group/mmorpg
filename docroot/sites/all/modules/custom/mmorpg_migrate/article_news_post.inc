<?php

/**
 * @file
 * Article news post migration support for MMORPG.
 */
class MMORPGArticleNewsPostMigrate extends MMORPGCommon {

  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'PageId' => t('Category ID'),
      'FeatureId' => t('description'),
      'CreateDate' => t('overview'),
      'Content' => t('Column Id')
    );

    $query = 'SELECT PageId, Page, FeatureId, CreateDate, Content FROM dbo.FeaturePages ORDER BY Page';
    $count_query = "SELECT COUNT(*) FROM dbo.FeaturePages";
    $this->source = new MMORPGSourceMSSQL($this->db, $query, $count_query, $fields);
    $this->destination = new MigrateDestinationNode('article_news_post');
    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'PageId' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'alias' => 'e',
        ),
      ),
      MigrateDestinationTerm::getKeySchema()
    );

    $this->addFieldMapping('title', 'Page');
    $this->addFieldMapping('field_article_type:tid');
    $this->addFieldMapping('created', 'CreateDate')
      ->callBacks(array($this, 'formatDate'));
    $this->addFieldMapping('body', 'Content');
    $this->addFieldMapping('body:value_format')
      ->defaultValue('full_html');
    $this->addFieldMapping('body:format')
      ->defaultValue('full_html');
    $this->addFieldMapping('uid')
      ->defaultValue('1');
    $this->addFieldMapping('status')
      ->defaultValue('1');
    $this->addFieldMapping('published_at', 'CreateDate')
      ->callBacks(array($this, 'formatDate'));

    $this->addUnmigratedSources(array(
      'FeatureId'
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
      'path'
    ), t('DNM'));
  }

   public function getArticleSourceNid($parent_source_nid) {
    $articleInstance = self::getInstance('MMORPGArticle');
    $row = $articleInstance->map->getRowBySource($parent_source_nid);
    return $row->destination1;
  }

  public function complete($entity, $row) {
    $parent_source_nid = $row->FeatureId;
    $parent_nid = $this->getArticleSourceNid($parent_source_nid);
    $parent = node_load($parent_nid);
    node_collection_api_add_relationship_instance($parent, $entity);
  }
}