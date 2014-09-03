<?php
/**
 * @file
 * tfk_atw_feature.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function tfk_atw_feature_field_default_fields() {
  $fields = array();

  // Exported field: 'field_collection_item-field_day_in_life_time-field_day_in_life_time_activity'.
  $fields['field_collection_item-field_day_in_life_time-field_day_in_life_time_activity'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_day_in_life_time_activity',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'field_day_in_life_time',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_day_in_life_time_activity',
      'label' => 'Time Activity',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_day_in_life_time-field_day_in_life_time_item'.
  $fields['field_collection_item-field_day_in_life_time-field_day_in_life_time_item'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_day_in_life_time_item',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_day_in_life_time',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_day_in_life_time_item',
      'label' => 'Time',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_native_lingo_phrase-field_lingo_phrase_audio'.
  $fields['field_collection_item-field_native_lingo_phrase-field_lingo_phrase_audio'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_lingo_phrase_audio',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'file',
      'settings' => array(
        'display_default' => 0,
        'display_field' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '1',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'field_native_lingo_phrase',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => 3,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_lingo_phrase_audio',
      'label' => 'Audio',
      'required' => 0,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => '',
        'file_extensions' => 'mp3 mp4',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'file',
        'settings' => array(
          'insert' => 0,
          'insert_absolute' => FALSE,
          'insert_class' => '',
          'insert_default' => array(
            0 => 'auto',
          ),
          'insert_styles' => array(
            0 => 'auto',
          ),
          'insert_width' => '',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_generic',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_native_lingo_phrase-field_lingo_phrase_next_level'.
  $fields['field_collection_item-field_native_lingo_phrase-field_lingo_phrase_next_level'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '2',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_lingo_phrase_next_level',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'yes' => 'Next Level',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '1',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'field_native_lingo_phrase',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_lingo_phrase_next_level',
      'label' => 'Next Level ',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_native_lingo_phrase-field_lingo_phrase_text'.
  $fields['field_collection_item-field_native_lingo_phrase-field_lingo_phrase_text'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_lingo_phrase_text',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_native_lingo_phrase',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_lingo_phrase_text',
      'label' => 'Text',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_native_lingo_phrase-field_lingo_phrase_translation'.
  $fields['field_collection_item-field_native_lingo_phrase-field_lingo_phrase_translation'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_lingo_phrase_translation',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_native_lingo_phrase',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 2,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_lingo_phrase_translation',
      'label' => 'Translation',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_timeline_event-field_photo_credit'.
  $fields['field_collection_item-field_timeline_event-field_photo_credit'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_photo_credit',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_timeline_event',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_photo_credit',
      'label' => 'Photo Credit',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_timeline_event-field_timeline_event_copy'.
  $fields['field_collection_item-field_timeline_event-field_timeline_event_copy'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_timeline_event_copy',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'field_timeline_event',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_timeline_event_copy',
      'label' => 'Timeline Event',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_timeline_event-field_timeline_event_photo'.
  $fields['field_collection_item-field_timeline_event-field_timeline_event_photo'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_timeline_event_photo',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '1',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'field_timeline_event',
      'deleted' => '0',
      'description' => '<b>Max height: 240 & Max width: 240</b>',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_timeline_event_photo',
      'label' => 'Photo',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'insert' => 0,
          'insert_absolute' => FALSE,
          'insert_class' => '',
          'insert_default' => 'auto',
          'insert_styles' => array(
            'auto' => 'auto',
            'image' => 0,
            'image_115x115' => 0,
            'image_large' => 0,
            'image_medium' => 0,
            'image_square_thumbnail' => 0,
            'image_tfk_140x187' => 0,
            'image_tfk_270x270' => 0,
            'image_tfk_50px_50px' => 0,
            'image_tfk_60x60' => 0,
            'image_tfk_71x95' => 0,
            'image_tfk_rect_large' => 0,
            'image_tfk_rect_medium' => 0,
            'image_tfk_rect_small' => 0,
            'image_tfk_square_large' => 0,
            'image_tfk_square_medium' => 0,
            'image_tfk_square_small' => 0,
            'image_thumbnail' => 0,
            'link' => 0,
          ),
          'insert_width' => '',
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_timeline_event-field_timeline_event_text'.
  $fields['field_collection_item-field_timeline_event-field_timeline_event_text'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_timeline_event_text',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_timeline_event',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_timeline_event_text',
      'label' => 'Date',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-atw_day_in_life-body'.
  $fields['node-atw_day_in_life-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '',
        'maxlength_body_js' => 0,
        'maxlength_body_text' => 'Content limited to !limit characters, remaining: <strong>!remaining</strong>',
      ),
      'translatable' => '1',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'atw_day_in_life',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Deck',
      'required' => 1,
      'settings' => array(
        'display_summary' => 0,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '1',
      ),
      'widget_type' => 'text_textarea_with_summary',
    ),
  );

  // Exported field: 'node-atw_day_in_life-field_day_in_life_time'.
  $fields['node-atw_day_in_life-field_day_in_life_time'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_day_in_life_time',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'field_collection',
      'settings' => array(
        'hide_blank_items' => TRUE,
        'path' => '',
      ),
      'translatable' => '1',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'atw_day_in_life',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_day_in_life_time',
      'label' => 'Time',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_hidden',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-atw_day_in_life-field_person_headline'.
  $fields['node-atw_day_in_life-field_person_headline'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_person_headline',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'atw_day_in_life',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_person_headline',
      'label' => 'Person Name',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-atw_day_in_life-field_person_intro'.
  $fields['node-atw_day_in_life-field_person_intro'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_person_intro',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'atw_day_in_life',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_person_intro',
      'label' => 'Person Intro',
      'required' => 1,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-atw_day_in_life-field_person_photo'.
  $fields['node-atw_day_in_life-field_person_photo'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_person_photo',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '1',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'atw_day_in_life',
      'deleted' => '0',
      'description' => 'photo size = 180x240',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_person_photo',
      'label' => 'Person Photo',
      'required' => 1,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'insert' => 0,
          'insert_absolute' => FALSE,
          'insert_class' => '',
          'insert_default' => 'auto',
          'insert_styles' => array(
            'auto' => 'auto',
            'image' => 0,
            'image_115x115' => 0,
            'image_large' => 0,
            'image_medium' => 0,
            'image_square_thumbnail' => 0,
            'image_tfk_140x187' => 0,
            'image_tfk_270x270' => 0,
            'image_tfk_50px_50px' => 0,
            'image_tfk_60x60' => 0,
            'image_tfk_71x95' => 0,
            'image_tfk_rect_large' => 0,
            'image_tfk_rect_medium' => 0,
            'image_tfk_rect_small' => 0,
            'image_tfk_square_large' => 0,
            'image_tfk_square_medium' => 0,
            'image_tfk_square_small' => 0,
            'image_thumbnail' => 0,
            'link' => 0,
          ),
          'insert_width' => '',
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-atw_day_in_life-field_person_photo_credit'.
  $fields['node-atw_day_in_life-field_person_photo_credit'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_person_photo_credit',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'atw_day_in_life',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_person_photo_credit',
      'label' => 'Person Photo Credit',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-atw_destination-body'.
  $fields['node-atw_destination-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '',
        'maxlength_body_js' => 0,
        'maxlength_body_text' => 'Content limited to !limit characters, remaining: <strong>!remaining</strong>',
      ),
      'translatable' => '1',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'atw_destination',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Fact File',
      'required' => 1,
      'settings' => array(
        'display_summary' => 0,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '20',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '6',
      ),
      'widget_type' => 'text_textarea_with_summary',
    ),
  );

  // Exported field: 'node-atw_destination-field_article_category'.
  $fields['node-atw_destination-field_article_category'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_article_category',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'article_categories',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '1',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'atw_destination',
      'default_value' => array(
        0 => array(
          'tid' => '10',
        ),
      ),
      'deleted' => '0',
      'description' => 'This taxonomy field is present here because the article_category vocabulary is required by the secondary touts View for all other secondary tout content types except this one.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_article_category',
      'label' => 'Internal Use Only',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '16',
      ),
    ),
  );

  // Exported field: 'node-atw_destination-field_country_code'.
  $fields['node-atw_destination-field_country_code'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_country_code',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'Please Select',
          'GB' => 'United Kingdom',
          'US' => 'United States',
          'AF' => 'Afghanistan',
          'AL' => 'Albania',
          'DZ' => 'Algeria',
          'AS' => 'American Samoa',
          'AD' => 'Andorra',
          'AO' => 'Angola',
          'AI' => 'Anguilla',
          'AQ' => 'Antarctica',
          'AG' => 'Antigua And Barbuda',
          'AR' => 'Argentina',
          'AM' => 'Armenia',
          'AW' => 'Aruba',
          'AU' => 'Australia',
          'AT' => 'Austria',
          'AZ' => 'Azerbaijan',
          'BS' => 'Bahamas',
          'BH' => 'Bahrain',
          'BD' => 'Bangladesh',
          'BB' => 'Barbados',
          'BY' => 'Belarus',
          'BE' => 'Belgium',
          'BZ' => 'Belize',
          'BJ' => 'Benin',
          'BM' => 'Bermuda',
          'BT' => 'Bhutan',
          'BO' => 'Bolivia',
          'BA' => 'Bosnia And Herzegowina',
          'BW' => 'Botswana',
          'BV' => 'Bouvet Island',
          'BR' => 'Brazil',
          'IO' => 'British Indian Ocean Territory',
          'BN' => 'Brunei Darussalam',
          'BG' => 'Bulgaria',
          'BF' => 'Burkina Faso',
          'BI' => 'Burundi',
          'KH' => 'Cambodia',
          'CM' => 'Cameroon',
          'CA' => 'Canada',
          'CV' => 'Cape Verde',
          'KY' => 'Cayman Islands',
          'CF' => 'Central African Republic',
          'TD' => 'Chad',
          'CL' => 'Chile',
          'CN' => 'China',
          'CX' => 'Christmas Island',
          'CC' => 'Cocos (Keeling) Islands',
          'CO' => 'Colombia',
          'KM' => 'Comoros',
          'CG' => 'Congo',
          'CD' => 'Congo, The Democratic Republic Of The',
          'CK' => 'Cook Islands',
          'CR' => 'Costa Rica',
          'CI' => 'Cote D\'Ivoire',
          'HR' => 'Croatia (Local Name: Hrvatska)',
          'CU' => 'Cuba',
          'CY' => 'Cyprus',
          'CZ' => 'Czech Republic',
          'DK' => 'Denmark',
          'DJ' => 'Djibouti',
          'DM' => 'Dominica',
          'DO' => 'Dominican Republic',
          'TP' => 'East Timor',
          'EC' => 'Ecuador',
          'EG' => 'Egypt',
          'SV' => 'El Salvador',
          'GQ' => 'Equatorial Guinea',
          'ER' => 'Eritrea',
          'EE' => 'Estonia',
          'ET' => 'Ethiopia',
          'FK' => 'Falkland Islands (Malvinas)',
          'FO' => 'Faroe Islands',
          'FJ' => 'Fiji',
          'FI' => 'Finland',
          'FR' => 'France',
          'FX' => 'France, Metropolitan',
          'GF' => 'French Guiana',
          'PF' => 'French Polynesia',
          'TF' => 'French Southern Territories',
          'GA' => 'Gabon',
          'GM' => 'Gambia',
          'GE' => 'Georgia',
          'DE' => 'Germany',
          'GH' => 'Ghana',
          'GI' => 'Gibraltar',
          'GR' => 'Greece',
          'GL' => 'Greenland',
          'GD' => 'Grenada',
          'GP' => 'Guadeloupe',
          'GU' => 'Guam',
          'GT' => 'Guatemala',
          'GN' => 'Guinea',
          'GW' => 'Guinea-Bissau',
          'GY' => 'Guyana',
          'HT' => 'Haiti',
          'HM' => 'Heard And Mc Donald Islands',
          'VA' => 'Holy See (Vatican City State)',
          'HN' => 'Honduras',
          'HK' => 'Hong Kong',
          'HU' => 'Hungary',
          'IS' => 'Iceland',
          'IN' => 'India',
          'ID' => 'Indonesia',
          'IR' => 'Iran (Islamic Republic Of)',
          'IQ' => 'Iraq',
          'IE' => 'Ireland',
          'IL' => 'Israel',
          'IT' => 'Italy',
          'JM' => 'Jamaica',
          'JP' => 'Japan',
          'JO' => 'Jordan',
          'KZ' => 'Kazakhstan',
          'KE' => 'Kenya',
          'KI' => 'Kiribati',
          'KP' => 'Korea, Democratic People\'s Republic Of',
          'KR' => 'Korea, Republic Of',
          'KW' => 'Kuwait',
          'KG' => 'Kyrgyzstan',
          'LA' => 'Lao People\'s Democratic Republic',
          'LV' => 'Latvia',
          'LB' => 'Lebanon',
          'LS' => 'Lesotho',
          'LR' => 'Liberia',
          'LY' => 'Libyan Arab Jamahiriya',
          'LI' => 'Liechtenstein',
          'LT' => 'Lithuania',
          'LU' => 'Luxembourg',
          'MO' => 'Macau',
          'MK' => 'Macedonia, Former Yugoslav Republic Of',
          'MG' => 'Madagascar',
          'MW' => 'Malawi',
          'MY' => 'Malaysia',
          'MV' => 'Maldives',
          'ML' => 'Mali',
          'MT' => 'Malta',
          'MH' => 'Marshall Islands',
          'MQ' => 'Martinique',
          'MR' => 'Mauritania',
          'MU' => 'Mauritius',
          'YT' => 'Mayotte',
          'MX' => 'Mexico',
          'FM' => 'Micronesia, Federated States Of',
          'MD' => 'Moldova, Republic Of',
          'MC' => 'Monaco',
          'MN' => 'Mongolia',
          'MS' => 'Montserrat',
          'MA' => 'Morocco',
          'MZ' => 'Mozambique',
          'MM' => 'Myanmar',
          'NA' => 'Namibia',
          'NR' => 'Nauru',
          'NP' => 'Nepal',
          'NL' => 'Netherlands',
          'AN' => 'Netherlands Antilles',
          'NC' => 'New Caledonia',
          'NZ' => 'New Zealand',
          'NI' => 'Nicaragua',
          'NE' => 'Niger',
          'NG' => 'Nigeria',
          'NU' => 'Niue',
          'NF' => 'Norfolk Island',
          'MP' => 'Northern Mariana Islands',
          'NO' => 'Norway',
          'OM' => 'Oman',
          'PK' => 'Pakistan',
          'PW' => 'Palau',
          'PA' => 'Panama',
          'PG' => 'Papua New Guinea',
          'PY' => 'Paraguay',
          'PE' => 'Peru',
          'PH' => 'Philippines',
          'PN' => 'Pitcairn',
          'PL' => 'Poland',
          'PT' => 'Portugal',
          'PR' => 'Puerto Rico',
          'QA' => 'Qatar',
          'RE' => 'Reunion',
          'RO' => 'Romania',
          'RU' => 'Russian Federation',
          'RW' => 'Rwanda',
          'KN' => 'Saint Kitts And Nevis',
          'LC' => 'Saint Lucia',
          'VC' => 'Saint Vincent And The Grenadines',
          'WS' => 'Samoa',
          'SM' => 'San Marino',
          'ST' => 'Sao Tome And Principe',
          'SA' => 'Saudi Arabia',
          'SN' => 'Senegal',
          'SC' => 'Seychelles',
          'SL' => 'Sierra Leone',
          'SG' => 'Singapore',
          'SK' => 'Slovakia (Slovak Republic)',
          'SI' => 'Slovenia',
          'SB' => 'Solomon Islands',
          'SO' => 'Somalia',
          'ZA' => 'South Africa',
          'GS' => 'South Georgia, South Sandwich Islands',
          'ES' => 'Spain',
          'LK' => 'Sri Lanka',
          'SH' => 'St. Helena',
          'PM' => 'St. Pierre And Miquelon',
          'SD' => 'Sudan',
          'SR' => 'Suriname',
          'SJ' => 'Svalbard And Jan Mayen Islands',
          'SZ' => 'Swaziland',
          'SE' => 'Sweden',
          'CH' => 'Switzerland',
          'SY' => 'Syrian Arab Republic',
          'TW' => 'Taiwan',
          'TJ' => 'Tajikistan',
          'TZ' => 'Tanzania, United Republic Of',
          'TH' => 'Thailand',
          'TG' => 'Togo',
          'TK' => 'Tokelau',
          'TO' => 'Tonga',
          'TT' => 'Trinidad And Tobago',
          'TN' => 'Tunisia',
          'TR' => 'Turkey',
          'TM' => 'Turkmenistan',
          'TC' => 'Turks And Caicos Islands',
          'TV' => 'Tuvalu',
          'UG' => 'Uganda',
          'UA' => 'Ukraine',
          'AE' => 'United Arab Emirates',
          'UM' => 'United States Minor Outlying Islands',
          'UY' => 'Uruguay',
          'UZ' => 'Uzbekistan',
          'VU' => 'Vanuatu',
          'VE' => 'Venezuela',
          'VN' => 'Viet Nam',
          'VG' => 'Virgin Islands (British)',
          'VI' => 'Virgin Islands (U.S.)',
          'WF' => 'Wallis And Futuna Islands',
          'EH' => 'Western Sahara',
          'YE' => 'Yemen',
          'YU' => 'Yugoslavia',
          'ZM' => 'Zambia',
          'ZW' => 'Zimbabwe',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '1',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'atw_destination',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_key',
          'weight' => '4',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_country_code',
      'label' => 'Official Flag',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-atw_destination-field_country_map'.
  $fields['node-atw_destination-field_country_map'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_country_map',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '1',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'atw_destination',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => 'thumbnail',
          ),
          'type' => 'image',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_country_map',
      'label' => 'Map Icon',
      'required' => 1,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'insert' => 0,
          'insert_absolute' => FALSE,
          'insert_class' => '',
          'insert_default' => 'auto',
          'insert_styles' => array(
            'auto' => 'auto',
            'image' => 0,
            'image_115x115' => 0,
            'image_large' => 0,
            'image_medium' => 0,
            'image_square_thumbnail' => 0,
            'image_tfk_140x187' => 0,
            'image_tfk_270x270' => 0,
            'image_tfk_50px_50px' => 0,
            'image_tfk_60x60' => 0,
            'image_tfk_71x95' => 0,
            'image_tfk_rect_large' => 0,
            'image_tfk_rect_medium' => 0,
            'image_tfk_rect_small' => 0,
            'image_tfk_square_large' => 0,
            'image_tfk_square_medium' => 0,
            'image_tfk_square_small' => 0,
            'image_thumbnail' => 0,
            'link' => 0,
          ),
          'insert_width' => '',
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-atw_destination-field_country_region'.
  $fields['node-atw_destination-field_country_region'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_country_region',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'regions',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '1',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'atw_destination',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '6',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_country_region',
      'label' => 'Region',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'node-atw_destination-field_country_slideshow'.
  $fields['node-atw_destination-field_country_slideshow'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_country_slideshow',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'locked' => '0',
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'a_paper' => 0,
          'article' => 0,
          'atw_day_in_life' => 0,
          'atw_destination' => 0,
          'atw_homepage_nodeblock' => 0,
          'atw_native_lingo' => 0,
          'atw_sightseeing' => 0,
          'atw_timeline' => 0,
          'board_member' => 0,
          'book' => 0,
          'flashcard' => 0,
          'global_right_sidebar_promo' => 0,
          'grammar_practice' => 0,
          'grammar_practice_question' => 0,
          'grammar_practice_reward_image' => 0,
          'grammar_practice_rule' => 0,
          'homepage_news_for_teachers' => 0,
          'image' => 0,
          'kid_reporter' => 0,
          'kid_reporter_bottom_nodeblock' => 0,
          'kid_reporter_listing_nodeblock' => 0,
          'magazine_issue' => 0,
          'mini_lesson' => 0,
          'mini_site_home' => 0,
          'minisite' => 0,
          'news_channel_nodeblock' => 0,
          'page' => 0,
          'paper_step' => 0,
          'pdf_quiz' => 0,
          'poll' => 0,
          'slideshow' => 'slideshow',
          'store' => 0,
          'teacher_board_nodeblock' => 0,
          'teacher_community_question' => 0,
          'tfk_extra' => 0,
          'tfk_extras_bottom_nodeblock' => 0,
          'tfk_extras_top_nodeblock' => 0,
          'tfk_notification' => 0,
          'tfk_staff' => 0,
          'video' => 0,
          'webform' => 0,
          'webform_generic' => 0,
          'worksheet' => 0,
          'writing_tips' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'references_1',
          'view_name' => 'reference_slideshows',
        ),
      ),
      'translatable' => '1',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'atw_destination',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'node_reference',
          'settings' => array(
            'node_reference_view_mode' => 'full',
          ),
          'type' => 'node_reference_node',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_country_slideshow',
      'label' => 'Slideshow',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'node_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'node_reference/autocomplete',
          'size' => '60',
        ),
        'type' => 'node_reference_autocomplete',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-atw_destination-field_day_in_life'.
  $fields['node-atw_destination-field_day_in_life'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_day_in_life',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'locked' => '0',
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'a_paper' => 0,
          'article' => 0,
          'atw_day_in_life' => 'atw_day_in_life',
          'atw_destination' => 0,
          'atw_homepage_nodeblock' => 0,
          'atw_native_lingo' => 0,
          'atw_sightseeing' => 0,
          'atw_timeline' => 0,
          'board_member' => 0,
          'book' => 0,
          'flashcard' => 0,
          'global_right_sidebar_promo' => 0,
          'grammar_practice' => 0,
          'grammar_practice_question' => 0,
          'grammar_practice_reward_image' => 0,
          'grammar_practice_rule' => 0,
          'homepage_news_for_teachers' => 0,
          'image' => 0,
          'kid_reporter' => 0,
          'kid_reporter_bottom_nodeblock' => 0,
          'kid_reporter_listing_nodeblock' => 0,
          'magazine_issue' => 0,
          'mini_lesson' => 0,
          'mini_site_home' => 0,
          'minisite' => 0,
          'news_channel_nodeblock' => 0,
          'page' => 0,
          'paper_step' => 0,
          'pdf_quiz' => 0,
          'poll' => 0,
          'slideshow' => 0,
          'store' => 0,
          'teacher_board_nodeblock' => 0,
          'teacher_community_question' => 0,
          'tfk_extra' => 0,
          'tfk_extras_bottom_nodeblock' => 0,
          'tfk_extras_top_nodeblock' => 0,
          'tfk_notification' => 0,
          'tfk_staff' => 0,
          'video' => 0,
          'webform' => 0,
          'webform_generic' => 0,
          'worksheet' => 0,
          'writing_tips' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'references_1',
          'view_name' => 'reference_daysinlife',
        ),
      ),
      'translatable' => '1',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'atw_destination',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_day_in_life',
      'label' => 'Day in the Life',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'node_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'node_reference/autocomplete',
          'size' => '60',
        ),
        'type' => 'node_reference_autocomplete',
        'weight' => '15',
      ),
    ),
  );

  // Exported field: 'node-atw_destination-field_description'.
  $fields['node-atw_destination-field_description'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_description',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'atw_destination',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_description',
      'label' => 'Introduction',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-atw_destination-field_destination_deck'.
  $fields['node-atw_destination-field_destination_deck'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_destination_deck',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'atw_destination',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_destination_deck',
      'label' => 'Deck',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-atw_destination-field_destination_quiz'.
  $fields['node-atw_destination-field_destination_quiz'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_destination_quiz',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'locked' => '0',
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'a_paper' => 0,
          'article' => 0,
          'atw_day_in_life' => 0,
          'atw_destination' => 0,
          'atw_homepage_nodeblock' => 0,
          'atw_native_lingo' => 0,
          'atw_sightseeing' => 0,
          'atw_timeline' => 0,
          'board_member' => 0,
          'book' => 0,
          'flashcard' => 0,
          'global_right_sidebar_promo' => 0,
          'grammar_practice' => 0,
          'grammar_practice_question' => 0,
          'grammar_practice_reward_image' => 0,
          'grammar_practice_rule' => 0,
          'homepage_news_for_teachers' => 0,
          'image' => 0,
          'kid_reporter' => 0,
          'kid_reporter_bottom_nodeblock' => 0,
          'kid_reporter_listing_nodeblock' => 0,
          'magazine_issue' => 0,
          'mini_lesson' => 0,
          'mini_site_home' => 0,
          'minisite' => 0,
          'news_channel_nodeblock' => 0,
          'page' => 0,
          'paper_step' => 0,
          'pdf_quiz' => 0,
          'poll' => 0,
          'slideshow' => 0,
          'store' => 0,
          'teacher_board_nodeblock' => 0,
          'teacher_community_question' => 0,
          'tfk_extra' => 0,
          'tfk_extras_bottom_nodeblock' => 0,
          'tfk_extras_top_nodeblock' => 0,
          'tfk_notification' => 0,
          'tfk_staff' => 0,
          'video' => 0,
          'webform' => 'webform',
          'webform_generic' => 0,
          'worksheet' => 0,
          'writing_tips' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'references_1',
          'view_name' => 'reference_challenges',
        ),
      ),
      'translatable' => '1',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'atw_destination',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_destination_quiz',
      'label' => 'Challenge',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'node_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'node_reference/autocomplete',
          'size' => '60',
        ),
        'type' => 'node_reference_autocomplete',
        'weight' => '14',
      ),
    ),
  );

  // Exported field: 'node-atw_destination-field_native_lingo'.
  $fields['node-atw_destination-field_native_lingo'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_native_lingo',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'locked' => '0',
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'a_paper' => 0,
          'article' => 0,
          'atw_day_in_life' => 0,
          'atw_destination' => 0,
          'atw_homepage_nodeblock' => 0,
          'atw_native_lingo' => 'atw_native_lingo',
          'atw_sightseeing' => 0,
          'atw_timeline' => 0,
          'board_member' => 0,
          'book' => 0,
          'flashcard' => 0,
          'global_right_sidebar_promo' => 0,
          'grammar_practice' => 0,
          'grammar_practice_question' => 0,
          'grammar_practice_reward_image' => 0,
          'grammar_practice_rule' => 0,
          'homepage_news_for_teachers' => 0,
          'image' => 0,
          'kid_reporter' => 0,
          'kid_reporter_bottom_nodeblock' => 0,
          'kid_reporter_listing_nodeblock' => 0,
          'magazine_issue' => 0,
          'mini_lesson' => 0,
          'mini_site_home' => 0,
          'minisite' => 0,
          'news_channel_nodeblock' => 0,
          'page' => 0,
          'paper_step' => 0,
          'pdf_quiz' => 0,
          'poll' => 0,
          'slideshow' => 0,
          'store' => 0,
          'teacher_board_nodeblock' => 0,
          'teacher_community_question' => 0,
          'tfk_extra' => 0,
          'tfk_extras_bottom_nodeblock' => 0,
          'tfk_extras_top_nodeblock' => 0,
          'tfk_notification' => 0,
          'tfk_staff' => 0,
          'video' => 0,
          'webform' => 0,
          'webform_generic' => 0,
          'worksheet' => 0,
          'writing_tips' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'references_1',
          'view_name' => 'reference_atwlingos',
        ),
      ),
      'translatable' => '1',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'atw_destination',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_native_lingo',
      'label' => 'Native Lingo',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'node_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'node_reference/autocomplete',
          'size' => '60',
        ),
        'type' => 'node_reference_autocomplete',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'node-atw_destination-field_related_articles'.
  $fields['node-atw_destination-field_related_articles'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_related_articles',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'locked' => '0',
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'a_paper' => 0,
          'article' => 'article',
          'atw_day_in_life' => 0,
          'atw_destination' => 0,
          'atw_homepage_nodeblock' => 0,
          'atw_native_lingo' => 0,
          'atw_sightseeing' => 0,
          'atw_timeline' => 0,
          'board_member' => 0,
          'book' => 0,
          'flashcard' => 0,
          'global_right_sidebar_promo' => 0,
          'grammar_practice' => 0,
          'grammar_practice_question' => 0,
          'grammar_practice_reward_image' => 0,
          'grammar_practice_rule' => 0,
          'homepage_news_for_teachers' => 0,
          'image' => 0,
          'kid_reporter' => 0,
          'kid_reporter_bottom_nodeblock' => 0,
          'kid_reporter_listing_nodeblock' => 0,
          'magazine_issue' => 0,
          'mini_lesson' => 0,
          'mini_site_home' => 0,
          'minisite' => 0,
          'news_channel_nodeblock' => 0,
          'page' => 0,
          'paper_step' => 0,
          'pdf_quiz' => 0,
          'poll' => 0,
          'slideshow' => 0,
          'store' => 0,
          'teacher_board_nodeblock' => 0,
          'teacher_community_question' => 0,
          'tfk_extra' => 0,
          'tfk_extras_bottom_nodeblock' => 0,
          'tfk_extras_top_nodeblock' => 0,
          'tfk_notification' => 0,
          'tfk_staff' => 0,
          'video' => 0,
          'webform' => 0,
          'webform_generic' => 0,
          'worksheet' => 0,
          'writing_tips' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'references_1',
          'view_name' => 'reference_articles',
        ),
      ),
      'translatable' => '1',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'atw_destination',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_related_articles',
      'label' => 'Related Articles',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'node_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'node_reference/autocomplete',
          'size' => '60',
        ),
        'type' => 'node_reference_autocomplete',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'node-atw_destination-field_resources_label'.
  $fields['node-atw_destination-field_resources_label'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resources_label',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'atw_destination',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '7',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_resources_label',
      'label' => 'Resources Label',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-atw_destination-field_resources_list'.
  $fields['node-atw_destination-field_resources_list'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_resources_list',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'locked' => '0',
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'a_paper' => 0,
          'article' => 0,
          'atw_day_in_life' => 0,
          'atw_destination' => 0,
          'atw_homepage_nodeblock' => 0,
          'atw_native_lingo' => 0,
          'atw_sightseeing' => 0,
          'atw_timeline' => 0,
          'board_member' => 0,
          'book' => 0,
          'flashcard' => 0,
          'global_right_sidebar_promo' => 0,
          'grammar_practice' => 0,
          'grammar_practice_question' => 0,
          'grammar_practice_reward_image' => 0,
          'grammar_practice_rule' => 0,
          'homepage_news_for_teachers' => 0,
          'image' => 0,
          'kid_reporter' => 0,
          'kid_reporter_bottom_nodeblock' => 0,
          'kid_reporter_listing_nodeblock' => 0,
          'magazine_issue' => 0,
          'mini_lesson' => 0,
          'mini_site_home' => 0,
          'minisite' => 0,
          'news_channel_nodeblock' => 0,
          'page' => 0,
          'paper_step' => 0,
          'pdf_quiz' => 0,
          'poll' => 0,
          'slideshow' => 0,
          'store' => 0,
          'teacher_board_nodeblock' => 0,
          'teacher_community_question' => 0,
          'tfk_extra' => 0,
          'tfk_extras_bottom_nodeblock' => 0,
          'tfk_extras_top_nodeblock' => 0,
          'tfk_notification' => 0,
          'tfk_staff' => 0,
          'video' => 0,
          'webform' => 0,
          'webform_generic' => 0,
          'worksheet' => 'worksheet',
          'writing_tips' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'references_1',
          'view_name' => 'reference_worksheets',
        ),
      ),
      'translatable' => '1',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'atw_destination',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '8',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_resources_list',
      'label' => 'Resources List',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'node_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'node_reference/autocomplete',
          'size' => '60',
        ),
        'type' => 'node_reference_autocomplete',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-atw_destination-field_sightseeing'.
  $fields['node-atw_destination-field_sightseeing'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_sightseeing',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'locked' => '0',
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'a_paper' => 0,
          'article' => 0,
          'atw_day_in_life' => 0,
          'atw_destination' => 0,
          'atw_homepage_nodeblock' => 0,
          'atw_native_lingo' => 0,
          'atw_sightseeing' => 'atw_sightseeing',
          'atw_timeline' => 0,
          'board_member' => 0,
          'book' => 0,
          'flashcard' => 0,
          'global_right_sidebar_promo' => 0,
          'grammar_practice' => 0,
          'grammar_practice_question' => 0,
          'grammar_practice_reward_image' => 0,
          'grammar_practice_rule' => 0,
          'homepage_news_for_teachers' => 0,
          'image' => 0,
          'kid_reporter' => 0,
          'kid_reporter_bottom_nodeblock' => 0,
          'kid_reporter_listing_nodeblock' => 0,
          'magazine_issue' => 0,
          'mini_lesson' => 0,
          'mini_site_home' => 0,
          'minisite' => 0,
          'news_channel_nodeblock' => 0,
          'page' => 0,
          'paper_step' => 0,
          'pdf_quiz' => 0,
          'poll' => 0,
          'slideshow' => 0,
          'store' => 0,
          'teacher_board_nodeblock' => 0,
          'teacher_community_question' => 0,
          'tfk_extra' => 0,
          'tfk_extras_bottom_nodeblock' => 0,
          'tfk_extras_top_nodeblock' => 0,
          'tfk_notification' => 0,
          'tfk_staff' => 0,
          'video' => 0,
          'webform' => 0,
          'webform_generic' => 0,
          'worksheet' => 0,
          'writing_tips' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'references_1',
          'view_name' => 'reference_atwsightseeings',
        ),
      ),
      'translatable' => '1',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'atw_destination',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_sightseeing',
      'label' => 'Sightseeing',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'node_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'node_reference/autocomplete',
          'size' => '60',
        ),
        'type' => 'node_reference_autocomplete',
        'weight' => '13',
      ),
    ),
  );

  // Exported field: 'node-atw_destination-field_timeline'.
  $fields['node-atw_destination-field_timeline'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_timeline',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'locked' => '0',
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'a_paper' => 0,
          'article' => 0,
          'atw_day_in_life' => 0,
          'atw_destination' => 0,
          'atw_homepage_nodeblock' => 0,
          'atw_native_lingo' => 0,
          'atw_sightseeing' => 0,
          'atw_timeline' => 'atw_timeline',
          'board_member' => 0,
          'book' => 0,
          'flashcard' => 0,
          'global_right_sidebar_promo' => 0,
          'grammar_practice' => 0,
          'grammar_practice_question' => 0,
          'grammar_practice_reward_image' => 0,
          'grammar_practice_rule' => 0,
          'homepage_news_for_teachers' => 0,
          'image' => 0,
          'kid_reporter' => 0,
          'kid_reporter_bottom_nodeblock' => 0,
          'kid_reporter_listing_nodeblock' => 0,
          'magazine_issue' => 0,
          'mini_lesson' => 0,
          'mini_site_home' => 0,
          'minisite' => 0,
          'news_channel_nodeblock' => 0,
          'page' => 0,
          'paper_step' => 0,
          'pdf_quiz' => 0,
          'poll' => 0,
          'slideshow' => 0,
          'store' => 0,
          'teacher_board_nodeblock' => 0,
          'teacher_community_question' => 0,
          'tfk_extra' => 0,
          'tfk_extras_bottom_nodeblock' => 0,
          'tfk_extras_top_nodeblock' => 0,
          'tfk_notification' => 0,
          'tfk_staff' => 0,
          'video' => 0,
          'webform' => 0,
          'webform_generic' => 0,
          'worksheet' => 0,
          'writing_tips' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'references_1',
          'view_name' => 'reference_atwtimelines',
        ),
      ),
      'translatable' => '1',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'atw_destination',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_timeline',
      'label' => 'Timeline',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'node_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'node_reference/autocomplete',
          'size' => '60',
        ),
        'type' => 'node_reference_autocomplete',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'node-atw_destination-field_tout_image'.
  $fields['node-atw_destination-field_tout_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_tout_image',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'locked' => '0',
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'a_paper' => 0,
          'article' => 0,
          'atw_day_in_life' => 0,
          'atw_destination' => 0,
          'atw_homepage_nodeblock' => 0,
          'atw_native_lingo' => 0,
          'atw_sightseeing' => 0,
          'atw_timeline' => 0,
          'board_member' => 0,
          'book' => 0,
          'flashcard' => 0,
          'global_right_sidebar_promo' => 0,
          'grammar_practice' => 0,
          'grammar_practice_question' => 0,
          'grammar_practice_reward_image' => 0,
          'grammar_practice_rule' => 0,
          'homepage_news_for_teachers' => 0,
          'image' => 'image',
          'kid_reporter' => 0,
          'kid_reporter_bottom_nodeblock' => 0,
          'kid_reporter_listing_nodeblock' => 0,
          'magazine_issue' => 0,
          'mini_lesson' => 0,
          'mini_site_home' => 0,
          'minisite' => 0,
          'news_channel_nodeblock' => 0,
          'page' => 0,
          'paper_step' => 0,
          'pdf_quiz' => 0,
          'poll' => 0,
          'slideshow' => 0,
          'store' => 0,
          'teacher_board_nodeblock' => 0,
          'teacher_community_question' => 0,
          'tfk_extra' => 0,
          'tfk_extras_bottom_nodeblock' => 0,
          'tfk_extras_top_nodeblock' => 0,
          'tfk_notification' => 0,
          'tfk_staff' => 0,
          'video' => 0,
          'webform' => 0,
          'webform_generic' => 0,
          'worksheet' => 0,
          'writing_tips' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'references_1',
          'view_name' => 'reference_images',
        ),
      ),
      'translatable' => '1',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'atw_destination',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_tout_image',
      'label' => 'Tout Image',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'node_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'node_reference/autocomplete',
          'size' => '60',
        ),
        'type' => 'node_reference_autocomplete',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'node-atw_homepage_nodeblock-body'.
  $fields['node-atw_homepage_nodeblock-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '',
        'maxlength_body_js' => 0,
        'maxlength_body_text' => 'Content limited to !limit characters, remaining: <strong>!remaining</strong>',
      ),
      'translatable' => '1',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'atw_homepage_nodeblock',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => FALSE,
      'settings' => array(
        'display_summary' => TRUE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '-4',
      ),
      'widget_type' => 'text_textarea_with_summary',
    ),
  );

  // Exported field: 'node-atw_native_lingo-body'.
  $fields['node-atw_native_lingo-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '',
        'maxlength_body_js' => 0,
        'maxlength_body_text' => 'Content limited to !limit characters, remaining: <strong>!remaining</strong>',
      ),
      'translatable' => '1',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'atw_native_lingo',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Deck',
      'required' => 1,
      'settings' => array(
        'display_summary' => 0,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '1',
      ),
      'widget_type' => 'text_textarea_with_summary',
    ),
  );

  // Exported field: 'node-atw_native_lingo-field_native_lingo_phrase'.
  $fields['node-atw_native_lingo-field_native_lingo_phrase'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_native_lingo_phrase',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'field_collection',
      'settings' => array(
        'hide_blank_items' => TRUE,
        'path' => '',
      ),
      'translatable' => '1',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'atw_native_lingo',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
          ),
          'type' => 'field_collection_list',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_native_lingo_phrase',
      'label' => 'Phrase',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_hidden',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-atw_native_lingo-field_person_photo_credit'.
  $fields['node-atw_native_lingo-field_person_photo_credit'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_person_photo_credit',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'atw_native_lingo',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_person_photo_credit',
      'label' => 'Speaker Photo Credit',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-atw_native_lingo-field_speaker_photo'.
  $fields['node-atw_native_lingo-field_speaker_photo'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_speaker_photo',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '1',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'atw_native_lingo',
      'deleted' => '0',
      'description' => 'photo size = 488x268',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_speaker_photo',
      'label' => 'Speaker Photo',
      'required' => 1,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'insert' => 0,
          'insert_absolute' => FALSE,
          'insert_class' => '',
          'insert_default' => 'auto',
          'insert_styles' => array(
            'auto' => 'auto',
            'image' => 0,
            'image_115x115' => 0,
            'image_large' => 0,
            'image_medium' => 0,
            'image_square_thumbnail' => 0,
            'image_tfk_140x187' => 0,
            'image_tfk_270x270' => 0,
            'image_tfk_50px_50px' => 0,
            'image_tfk_60x60' => 0,
            'image_tfk_71x95' => 0,
            'image_tfk_rect_large' => 0,
            'image_tfk_rect_medium' => 0,
            'image_tfk_rect_small' => 0,
            'image_tfk_square_large' => 0,
            'image_tfk_square_medium' => 0,
            'image_tfk_square_small' => 0,
            'image_thumbnail' => 0,
            'link' => 0,
          ),
          'insert_width' => '',
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-atw_sightseeing-field_place_description'.
  $fields['node-atw_sightseeing-field_place_description'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_place_description',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'atw_sightseeing',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 1,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_place_description',
      'label' => 'Deck and Image Map',
      'required' => 1,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '-3',
      ),
    ),
  );

  // Exported field: 'node-atw_sightseeing-field_place_name'.
  $fields['node-atw_sightseeing-field_place_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_place_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'atw_sightseeing',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_place_name',
      'label' => 'Location Name',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '-4',
      ),
    ),
  );

  // Exported field: 'node-atw_timeline-body'.
  $fields['node-atw_timeline-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '',
        'maxlength_body_js' => 0,
        'maxlength_body_text' => 'Content limited to !limit characters, remaining: <strong>!remaining</strong>',
      ),
      'translatable' => '1',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'atw_timeline',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Deck',
      'required' => 1,
      'settings' => array(
        'display_summary' => 0,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '1',
      ),
      'widget_type' => 'text_textarea_with_summary',
    ),
  );

  // Exported field: 'node-atw_timeline-field_additional_content'.
  $fields['node-atw_timeline-field_additional_content'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_additional_content',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'locked' => '0',
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'a_paper' => 0,
          'article' => 'article',
          'atw_day_in_life' => 0,
          'atw_destination' => 'atw_destination',
          'atw_homepage_nodeblock' => 0,
          'atw_native_lingo' => 0,
          'atw_sightseeing' => 0,
          'atw_timeline' => 0,
          'board_member' => 0,
          'book' => 0,
          'common_core_standards' => 0,
          'flashcard' => 0,
          'global_right_sidebar_promo' => 0,
          'grammar_practice' => 0,
          'grammar_practice_question' => 0,
          'grammar_practice_reward_image' => 0,
          'grammar_practice_rule' => 0,
          'homepage_news_for_teachers' => 0,
          'image' => 0,
          'kid_reporter' => 0,
          'kid_reporter_bottom_nodeblock' => 0,
          'kid_reporter_listing_nodeblock' => 0,
          'magazine_issue' => 0,
          'mini_lesson' => 0,
          'mini_site_home' => 0,
          'minisite' => 0,
          'news_channel_nodeblock' => 0,
          'page' => 0,
          'paper_step' => 0,
          'pdf_quiz' => 0,
          'poll' => 0,
          'slideshow' => 'slideshow',
          'store' => 0,
          'store_product' => 0,
          'teacher_board_nodeblock' => 0,
          'teacher_community_question' => 0,
          'tfk_extra' => 0,
          'tfk_extras_bottom_nodeblock' => 0,
          'tfk_extras_top_nodeblock' => 0,
          'tfk_notification' => 0,
          'tfk_polldaddy' => 0,
          'tfk_staff' => 0,
          'video' => 'video',
          'webform' => 0,
          'webform_generic' => 0,
          'worksheet' => 0,
          'writing_tips' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'references_1',
          'view_name' => 'reference_photosvidaddcontent',
        ),
      ),
      'translatable' => '1',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'atw_timeline',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_additional_content',
      'label' => 'Additional Content',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'node_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'node_reference/autocomplete',
          'size' => '60',
        ),
        'type' => 'node_reference_autocomplete',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-atw_timeline-field_timeline_event'.
  $fields['node-atw_timeline-field_timeline_event'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_timeline_event',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'field_collection',
      'settings' => array(
        'hide_blank_items' => TRUE,
        'path' => '',
      ),
      'translatable' => '1',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'atw_timeline',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_timeline_event',
      'label' => 'Date',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_hidden',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-webform-body'.
  $fields['node-webform-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '',
        'maxlength_body_js' => 0,
        'maxlength_body_text' => 'Content limited to !limit characters, remaining: <strong>!remaining</strong>',
      ),
      'translatable' => '1',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'webform',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Deck',
      'required' => 0,
      'settings' => array(
        'display_summary' => 0,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '20',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => -4,
      ),
      'widget_type' => 'text_textarea_with_summary',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<b>Max height: 240 & Max width: 240</b>');
  t('Additional Content');
  t('Audio');
  t('Body');
  t('Challenge');
  t('Date');
  t('Day in the Life');
  t('Deck');
  t('Deck and Image Map');
  t('Fact File');
  t('Internal Use Only');
  t('Introduction');
  t('Location Name');
  t('Map Icon');
  t('Native Lingo');
  t('Next Level ');
  t('Official Flag');
  t('Person Intro');
  t('Person Name');
  t('Person Photo');
  t('Person Photo Credit');
  t('Photo');
  t('Photo Credit');
  t('Phrase');
  t('Region');
  t('Related Articles');
  t('Resources Label');
  t('Resources List');
  t('Sightseeing');
  t('Slideshow');
  t('Speaker Photo');
  t('Speaker Photo Credit');
  t('Text');
  t('This taxonomy field is present here because the article_category vocabulary is required by the secondary touts View for all other secondary tout content types except this one.');
  t('Time');
  t('Time Activity');
  t('Timeline');
  t('Timeline Event');
  t('Tout Image');
  t('Translation');
  t('photo size = 180x240');
  t('photo size = 488x268');

  return $fields;
}
