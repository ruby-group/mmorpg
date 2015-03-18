<?php
/**
 * @file
 * mmorpg_article.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mmorpg_article_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_article_sponsored_content|node|mmorpg_article|form';
  $field_group->group_name = 'group_article_sponsored_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mmorpg_article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sponsored Content',
    'weight' => '10',
    'children' => array(
      0 => 'field_article_sponsored',
      1 => 'field_article_sponsored_untill',
      2 => 'field_customer',
      3 => 'field_target_url',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-article-sponsored-content field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_article_sponsored_content|node|mmorpg_article|form'] = $field_group;

  return $export;
}
