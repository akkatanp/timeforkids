<?php
/**
 * @file
 * tfk_magazine.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function tfk_magazine_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_image_default_styles().
 */
function tfk_magazine_image_default_styles() {
  $styles = array();

  // Exported image style: tfk_140x187
  $styles['tfk_140x187'] = array(
    'name' => 'tfk_140x187',
    'effects' => array(
      31 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
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
  );

  return $styles;
}

/**
 * Implementation of hook_node_info().
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
