<?php
/**
 * @file
 * tfk_magazine.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tfk_magazine_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function tfk_magazine_flag_default_flags() {
  $flags = array();
  // Exported flag: "Magazine article".
  $flags['magazine_cover_story'] = array(
    'content_type' => 'node',
    'title' => 'Magazine article',
    'global' => '1',
    'types' => array(
      0 => 'article',
      1 => 'minisite',
      2 => 'slideshow',
      3 => 'video',
    ),
    'flag_short' => 'Magazine article',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Magazine',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '3',
        1 => '4',
      ),
      'unflag' => array(
        0 => '3',
        1 => '4',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'tfk_magazine',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Magazine Issue Spanish".
  $flags['magazine_issue_spanish'] = array(
    'content_type' => 'node',
    'title' => 'Magazine Issue Spanish',
    'global' => '1',
    'types' => array(
      0 => 'magazine_issue',
    ),
    'flag_short' => 'Magazine Issue Spanish',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Magazine Issue Spanish',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '3',
      ),
      'unflag' => array(
        0 => '3',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'tfk_magazine',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function tfk_magazine_image_default_styles() {
  $styles = array();

  // Exported image style: tfk_140x187.
  $styles['tfk_140x187'] = array(
    'name' => 'tfk_140x187',
    'effects' => array(
      31 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '140',
          'height' => '187',
        ),
        'weight' => '1',
      ),
    ),
    'label' => 'tfk_140x187',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function tfk_magazine_node_info() {
  $items = array(
    'magazine_issue' => array(
      'name' => t('Magazine Issue'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
