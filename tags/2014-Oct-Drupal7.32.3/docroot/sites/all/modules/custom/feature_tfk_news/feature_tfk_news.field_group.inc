<?php
/**
 * @file
 * feature_tfk_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_tfk_news_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_content|node|article|default';
  $field_group->group_name = 'group_additional_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Content',
    'weight' => '3',
    'children' => array(
      0 => 'field_related_articles',
      1 => 'field_mini_lessons',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Additional Content',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_additional_content|node|article|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_and_author|node|article|default';
  $field_group->group_name = 'group_date_and_author';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Date and Author',
    'weight' => '2',
    'children' => array(
      0 => 'field_date',
      1 => 'field_article_byline',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Date and Author',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_date_and_author|node|article|default'] = $field_group;

  return $export;
}
