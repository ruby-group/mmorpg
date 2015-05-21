<?php
/**
 * @file
 * sweepstakes.data_default.inc
 */

/**
 * Implements hook_data_default().
 */
function sweepstakes_data_default() {
  $export = array();

  $data_table = new stdClass();
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'Sweepstakes entries';
  $data_table->name = 'sweepstakes_entries';
  $data_table->table_schema = array(
    'description' => 'Stores sweepstakes entries',
    'fields' => array(
      'seid' => array(
        'type' => 'serial',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'description' => 'The sweepstakes node id',
      ),
      'nid' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'default' => 0,
        'description' => 'The sweepstakes node id',
      ),
      'uid' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'default' => 0,
        'description' => 'The user id',
      ),
      'ip_address' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'default' => 0,
        'description' => 'The ip address of the request',
      ),
      'timestamp' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'default' => 0,
        'description' => 'The time of the request',
      ),
      'source' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => 'The source of the entry system/user',
      ),
      'valid' => array(
        'type' => 'int',
        'size' => 'tiny',
        'not null' => TRUE,
        'default' => 1,
        'description' => 'whether the entry is valid',
      ),
      'prize_id' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'description' => 'The prize node id (if the uid has won the prize)',
      ),
      'confirmed' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'description' => 'whether the user has confirmed acceptance of the prize',
      ),
    ),
    'name' => 'sweepstakes_entries',
    'primary key' => array(
      0 => 'seid',
    ),
  );
  $data_table->meta = array(
    'fields' => array(
      'seid' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'date' => array(
          'sql_type' => '',
          'granularity' => '',
        ),
        'label' => '',
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'nid' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'date' => array(
          'sql_type' => '',
          'granularity' => '',
        ),
        'label' => '',
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'uid' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'date' => array(
          'sql_type' => '',
          'granularity' => '',
        ),
        'label' => '',
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'ip_address' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'date' => array(
          'sql_type' => '',
          'granularity' => '',
        ),
        'label' => '',
        'views_field_handler' => 'sweepstakes_handler_field_ip_address',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'timestamp' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'date' => array(
          'sql_type' => 'datestamp',
          'granularity' => '',
        ),
        'label' => '',
        'views_field_handler' => 'views_handler_field_date',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'prize_id' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'date' => array(
          'sql_type' => '',
          'granularity' => '',
        ),
        'label' => '',
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'source' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'date' => array(
          'sql_type' => '',
          'granularity' => '',
        ),
        'label' => '',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument_string',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'valid' => array(
        'locked' => FALSE,
        'required' => FALSE,
        'date' => array(
          'sql_type' => '',
          'granularity' => '',
        ),
        'label' => '',
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'confirmed' => array(
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
        'label' => '',
      ),
    ),
    'label_field' => '',
    'is_entity_type' => 1,
    'entity_id' => 'seid',
    'join' => array(
      'node' => array(
        'left_field' => 'nid',
        'field' => 'nid',
        'inner_join' => '1',
      ),
      'users' => array(
        'left_field' => 'uid',
        'field' => 'uid',
        'inner_join' => '1',
      ),
      'field_collection_item' => array(
        'left_field' => 'item_id',
        'field' => 'prize_id',
        'inner_join' => '0',
      ),
    ),
  );
  $export['sweepstakes_entries'] = $data_table;

  return $export;
}
