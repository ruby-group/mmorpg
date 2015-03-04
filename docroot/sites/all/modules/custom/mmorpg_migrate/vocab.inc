<?php
/**
 * @file
 * Vocabulary migration support for MMORPG.
 */

class MMORPGVocabCommon extends MMORPGCommon {
  /**
   * Constructor.
   */
  public function createMapping($fields, $table_name, $vocab, $source_id, $map_key, $where_clause = "") {

    if ($where_clause == "") {
      $query = "SELECT a.* from dbo.$table_name AS a";
      $count_query = "SELECT COUNT(*) FROM dbo.$table_name";
    } else {
      $query = "SELECT a.* from dbo.$table_name AS a WHERE " . $where_clause;
      $count_query = "SELECT COUNT(*) FROM dbo.$table_name WHERE " . $where_clause;
    }
    $this->source = new MMORPGSourceMSSQL($this->db, $query, $count_query, $fields);
    $this->destination = new MigrateDestinationTerm($vocab);
    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        $source_id => array(
          'type' => 'int', 
          'unsigned' => TRUE,
          'not null' => TRUE,
          'alias' => 'e',
          ),
        ),
      MigrateDestinationTerm::getKeySchema()
      );

    $this->addFieldMapping('name',$map_key);
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



/**
 * Mappings for FAQCategories -> Term
 */
class MMORPGMigrateFaqMigration extends MMORPGVocabCommon {
  /**
   * Constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'CategoryID' => t('Category ID'),
      'Description' => t('description'),
      );

    $this->createMapping($fields,'FaqCategories','faq_category','CategoryID','Description');

  }
}

class MMORPGMigrateExpansionMigration extends MMORPGVocabCommon {
  /**
   * Constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'ExpansionTypeId' => t('Expansion Type Id'),
      'Description' => t('description'),
      );

    $this->createMapping($fields,'TblGameExpansionTypes','expansion_types','ExpansionTypeId','Description');
  }
}

class MMORPGMigrateOriginMigration extends MMORPGVocabCommon {
  /**
   * Constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'CountryID' => t('Country Id'),
      'CountryName' => t('Country Name'),
      'CountryCode' => t('Country Code')
      );

    $this->createMapping($fields,'Countries','origin','CountryID','CountryName');
  }
}

class MMORPGMigrateDistributionTypesMigration extends MMORPGVocabCommon {
  /**
   * Constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'DistributionTypeId' => t('Destribution Id'),
      'Name' => t('Name'),
      'Description' => t('Description')
      );

    $this->createMapping($fields,'TblGameDistributionTypes','distribution_types','DistributionTypeId','Name');
  }
}

class MMORPGMigrateLanguageMigration extends MMORPGVocabCommon {
  /**
   * Constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'LanguageId' => t('Language Id'),
      'Description' => t('Description')
      );

    $this->createMapping($fields,'TblGameLanguages','languages','LanguageId','Description');
  }
}

class MMORPGMigrateMMOGenresMigration extends MMORPGVocabCommon {
  /**
   * Constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'Genre2Id' => t('Genre Id'),
      'Description' => t('Description')
      );

    $this->createMapping($fields,'TblGameGenres2','mmo_genre','Genre2Id','Description');
  }
}

class MMORPGMigrateGenresMigration extends MMORPGVocabCommon {
  /**
   * Constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'GenreID' => t('Genre Id'),
      'Description' => t('Description')
      );

    $this->createMapping($fields,'Genres','genres','GenreID','Description');
  }
}

class MMORPGMigrateGameClassificationMigration extends MMORPGVocabCommon {
  /**
   * Constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);
    
    $fields = array(
      'ClassificationId' => t('Classification Id'),
      'Description' => t('Description')
      );
    
    $this->createMapping($fields,'TblGameClassifications','classification','ClassificationId','Description');
  }
}

class MMORPGMigrateGameStylesMigration extends MMORPGVocabCommon {
  /**
   * Constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'StyleId' => t('Style Id'),
      'Style' => t('Style'),
      'Description' => t('Description')
      );

    $this->createMapping($fields,'TblGameStyles','style','StyleId','Style');
  }
}

class MMORPGMigrateGameEngineMigration extends MMORPGVocabCommon {
  /**
   * Constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'EngineId' => t('Engine Id'),
      'Name' => t('Name'),
      'Url' => t('Url'),
      );

    $this->createMapping($fields,'TblGameEngines','engine','EngineId','Name');
  }
}

class MMORPGMigratePlatformMigration extends MMORPGVocabCommon {
  /**
   * Constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'PlatformID' => t('Platform Id'),
      'PlatformName' => t('Name'),
      'Logo' => t('Logo'),
      );
    $this->createMapping($fields,'platforms','platforms','PlatformID','PlatformName');
  }
}

class MMORPGGameStatusMigration extends MMORPGVocabCommon {
  /**
   * Constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'GameStatusID' => t('Game Status Id'),
      'Description' => t('Description'),
      );
    //createMapping($fields, $table_name, $vocab, $source_id, $map_key)
    $this->createMapping($fields,'GameStatus','game_development_status','GameStatusID','Description');
  }
}

class MMORPGCancelReasonMigration extends MMORPGVocabCommon {
  /**
   * Constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'ReasonId' => t('Reason Id'),
      'Description' => t('Description'),
      );
    //createMapping($fields, $table_name, $vocab, $source_id, $map_key)
    $this->createMapping($fields,'TblGameCancellationReasons','cancel_reason','ReasonId','Description');
  }
}

class MMORPGScreenShotTypeMigration extends MMORPGVocabCommon {
  /**
   * Constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'TypeId' => t('Type Id'),
      'Description' => t('Description'),
      );
    //createMapping($fields, $table_name, $vocab, $source_id, $map_key)
    $this->createMapping($fields,'ScreenShotTypes','screenshot_type','TypeId','Description');
  }
}

class MMORPGColumnMigration extends MMORPGVocabCommon {
  /**
   * Constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'ColumnId' => t('Coulmn Id'),
      'Name' => t('Name'),
      'isActive' => t('Is Active'),
      'isDefault' => t('Is Default'),
      );
    //createMapping($fields, $table_name, $vocab, $source_id, $map_key)
    $this->createMapping($fields,'TblGameListColumns','column','ColumnId','Name');
  }
}

class MMORPGArticleSubCategoriesMigration extends MMORPGVocabCommon {
  /**
   * Constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'TypeID' => t('Category Id'),
      'FeatureType' => t('Feature Type'),
      'SortVal' => t('Sort Val'),
      'Enabled' => t('Enabled')
      );
    //createMapping($fields, $table_name, $vocab, $source_id, $map_key)
    $this->createMapping($fields,'FeatureTypes','article_subcategory','TypeID','FeatureType');
  }
}

class MMORPGTblShowsMigration extends MMORPGVocabCommon {
  /**
   * Constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'ShowId' => t('Category Id'),
      'Description' => t('Description'),
      'Enabled' => t('Enabled')
      );
    //createMapping($fields, $table_name, $vocab, $source_id, $map_key)
    $this->createMapping($fields,'TblShows','shows_events','ShowId','Description');
  }
}

class MMORPGTblVideoCategoriesMigration extends MMORPGVocabCommon {
  /**
   * Constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'CategoryId' => t('Category Id'),
      'Description' => t('Description')
      );
    //createMapping($fields, $table_name, $vocab, $source_id, $map_key)
    $this->createMapping($fields,'TblVideoCategories','video_category','CategoryId','Description');
  }
}

class MMORPGTblOfferTypesMigration extends MMORPGVocabCommon {
  /**
   * Constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'TypeId' => t('Type Id'),
      'Description' => t('Description')
      );
    //createMapping($fields, $table_name, $vocab, $source_id, $map_key)
    $this->createMapping($fields,'SpecialOfferTypes','offer_types','TypeId','Description');
  }
}

class MMORPGTblRenderingEnginesMigration extends MMORPGVocabCommon {
  /**
   * Constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'EngineId' => t('Engine Id'),
      'Name' => t('Description'),
      'Url' => t('Url')
      );
    //createMapping($fields, $table_name, $vocab, $source_id, $map_key)
    $this->createMapping($fields,'TblGameEngines','engine','EngineId','Name');
  }
}

class MMORPGGamePayTypesMigration extends MMORPGVocabCommon {
  /**
   * Constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'PaymentMethodId' => t('Payment Method Id'),
      'Description' => t('Description')
      );
    //createMapping($fields, $table_name, $vocab, $source_id, $map_key)
    $this->createMapping($fields,'TblGamePaymentMethods','payment_methods','PaymentMethodId','Description');
  }
}

class MMORPGBusinessModelMigration extends MMORPGVocabCommon {
  /**
   * Constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'PayTypeId' => t('Pay Type Id'),
      'Name' => t('Name'),
      'Description' => t('Description')
      );
    //createMapping($fields, $table_name, $vocab, $source_id, $map_key)
    $this->createMapping($fields,'TblGamePayTypes','business_model','PayTypeId','Name');
  }
}


class MMORPGVideoModeMigration extends MMORPGVocabCommon {
  /**
   * Constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'GameTypeId' => t('Pay Type Id'),
      'Description' => t('Description')
      );
    //createMapping($fields, $table_name, $vocab, $source_id, $map_key)
    $this->createMapping($fields,'TblGameTypes','video_mode','GameTypeId','Description');
  }
}

class MMORPGProsMigration extends MMORPGVocabCommon {
  /**
   * Constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'ProConId' => t('Pro Con Id'),
      'Title' => t('Title'),
      'Description' => t('Description'),
      'IsPro' => t('Is Pro'),
      'IsCon' => t('Is Con')
      );
    //createMapping($fields, $table_name, $vocab, $source_id, $map_key)
    $this->createMapping($fields,'TblReviewProsandCons','pros_highlights','ProConId','Title', " IsPro = '1' ");
  }
}

class MMORPGConsMigration extends MMORPGVocabCommon {
  /**
   * Constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'ProConId' => t('Pro Con Id'),
      'Title' => t('Title'),
      'Description' => t('Description'),
      'IsPro' => t('Is Pro'),
      'IsCon' => t('Is Con')
      );
    //createMapping($fields, $table_name, $vocab, $source_id, $map_key)
    $this->createMapping($fields,'TblReviewProsandCons','cons_highlights','ProConId','Title', " IsCon = '1' ");
  }
}

class MMORPGBlogTagsMigration extends MMORPGVocabCommon {
  /**
   * Constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'TagId' => t('Tag Id'),
      'Tag' => t('Tag')
      );

    $query = "SELECT min(TagId) AS TagId,Tag from dbo.TblContentTags WHERE TypeId = '1' AND Tag != '' GROUP BY Tag";
    $count_query = "SELECT COUNT(*) FROM (SELECT Tag from dbo.TblContentTags WHERE TypeId = '1' AND Tag != '' GROUP BY Tag) AS a";

    $this->source = new MMORPGSourceMSSQL($this->db, $query, $count_query, $fields);
    $this->destination = new MigrateDestinationTerm('blog_tags');
    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'TagId' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'alias' => 'e',
          ),
        ),
      MigrateDestinationTerm::getKeySchema()
      );

    $this->addFieldMapping('name','Tag');
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
  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
    $enc = mb_detect_encoding($row->Tag, 'UTF-8', TRUE);
    if (!$enc) {
      $row->Tag = mb_convert_encoding($row->Tag, 'UTF-8', 'WINDOWS-1252');
    }
  }
}
