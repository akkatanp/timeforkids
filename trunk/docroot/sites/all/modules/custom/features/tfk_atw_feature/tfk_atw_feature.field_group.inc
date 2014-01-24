<?php
/**
 * @file
 * tfk_atw_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tfk_atw_feature_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_destination_facts|node|atw_destination|default';
  $field_group->group_name = 'group_destination_facts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'atw_destination';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Destination Facts',
    'weight' => '2',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Destination Facts',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_destination_facts|node|atw_destination|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_destination_images|node|atw_destination|default';
  $field_group->group_name = 'group_destination_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'atw_destination';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Destination Images',
    'weight' => '3',
    'children' => array(
      0 => 'field_country_code',
      1 => 'field_country_map',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Destination Images',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_destination_images|node|atw_destination|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resources|node|atw_destination|form';
  $field_group->group_name = 'group_resources';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'atw_destination';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resources',
    'weight' => '7',
    'children' => array(
      0 => 'field_resources_label',
      1 => 'field_resources_list',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_resources|node|atw_destination|form'] = $field_group;

  return $export;
}
