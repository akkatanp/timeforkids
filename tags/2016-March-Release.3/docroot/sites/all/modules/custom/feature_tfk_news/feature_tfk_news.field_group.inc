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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_brief_1|node|news_brief|form';
  $field_group->group_name = 'group_news_brief_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_brief';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'News Brief Group 1',
    'weight' => '4',
    'children' => array(
      0 => 'field_news_brief_headline_1',
      1 => 'field_news_brief_image_credit_1',
      2 => 'field_lrg_rect_image',
      3 => 'field_news_brief_deck_1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'News Brief Group 1',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_news_brief_1|node|news_brief|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_brief_2|node|news_brief|form';
  $field_group->group_name = 'group_news_brief_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_brief';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'News Brief Group 2',
    'weight' => '5',
    'children' => array(
      0 => 'field_news_brief_headline_2',
      1 => 'field_news_brief_deck_2',
      2 => 'field_news_brief_image_credit_2',
      3 => 'field_news_brief_lrg_rect_image2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'News Brief Group 2',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_news_brief_2|node|news_brief|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_brief_3|node|news_brief|form';
  $field_group->group_name = 'group_news_brief_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_brief';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'News Brief Group 3',
    'weight' => '6',
    'children' => array(
      0 => 'field_news_brief_headline_3',
      1 => 'field_news_brief_deck_3',
      2 => 'field_news_brief_image_credit_3',
      3 => 'field_news_brief_lrg_rect_image3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'News Brief Group 3',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_news_brief_3|node|news_brief|form'] = $field_group;

  return $export;
}
