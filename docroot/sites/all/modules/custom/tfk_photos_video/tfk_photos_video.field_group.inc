<?php
/**
 * @file
 * tfk_photos_video.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tfk_photos_video_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_brightcove|node|video|form';
  $field_group->group_name = 'group_brightcove';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Brightcove',
    'weight' => '2',
    'children' => array(
      0 => 'field_brightcove_player_id',
      1 => 'field_brightcove_video_id',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_brightcove|node|video|form'] = $field_group;

  return $export;
}
