<?php

/**
 * Created by PhpStorm.
 * User: alan
 * Date: 13/3/15
 * Time: 2:20 PM
 */
class MMORPGCustomerMigrate extends MMORPGCommon {
  public function __construct($arguments) {
    parent::__construct($arguments);

    $query = "SELECT CustomerID, Name, Address1, Address2, City, StateID,
                     CountryCode, RecordDate, Phone , PhoneExt, Email, ZIP,
                     Discount, Company, Fax, Password, Notes
              FROM mmorpg.dbo.Customers
              JOIN mmorpg.dbo.Countries
                ON Customers.CountryID = Countries.CountryID";
    $count_query = "SELECT COUNT(*) FROM mmorpg.dbo.Customers";
    $fields = array(
      'CustomerID' => t('Customer ID'),
      'Name' => t('Name'),
      'Address1' => t('Address1'),
      'Address2' => t('Address2'),
      'City' => t('City'),
      'StateID' => t('State ID'),
      'CountryCode' => t('Country Code'),
      'RecordDate' => t('Record Date'),
      'Phone' => t('Phone'),
      'PhoneExt' => t('Phone Ext'),
      'Email' => t('Email'),
      'ZIP' => t('ZIP'),
      'Discount' => t('Discount'),
      'Company' => t('Company'),
      'Fax' => t('Fax'),
      'Password' => t('Password'),
      'Notes' => t('Notes'),
    );
    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'CustomerID' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'alias' => 'e',
        ),
      ),
      MigrateDestinationTerm::getKeySchema()
    );

    $this->source = new MMORPGSourceMSSQL($this->db, $query, $count_query, $fields);
    $this->destination = new MigrateDestinationNode('customer');

    $this->addFieldMapping('title', 'Company');
    $this->addFieldMapping('field_cust_contact_name', 'Name');
    $this->addFieldMapping('field_cust_discount', 'Discount');
    $this->addFieldMapping('field_cust_email', 'Email');
    $this->addFieldMapping('field_cust_fax', 'Fax');
    $this->addFieldMapping('field_cust_notes', 'Notes');
    $this->addFieldMapping('field_cust_password', 'Password');
    $this->addFieldMapping('field_cust_phone_ext', 'PhoneExt');
    $this->addFieldMapping('field_cust_phone_no', 'Phone');
    $this->addFieldMapping('field_cust_address:thoroughfare', 'Address1');
    $this->addFieldMapping('field_cust_address:premise', 'Address2');
    $this->addFieldMapping('field_cust_address:locality', 'City');
    $this->addFieldMapping('field_cust_address:administrative_area', 'StateID');
    $this->addFieldMapping('field_cust_address:postal_code', 'ZIP');
    $this->addFieldMapping('field_cust_address', 'CountryCode');
    $this->addFieldMapping('created', 'RecordDate');
    $this->addFieldMapping('uid')->defaultValue(1);
    $this->addFieldMapping('status')->defaultValue(0);
  }
}
