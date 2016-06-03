<?php
/**
 * @file
 * feature_image_style.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function feature_image_style_image_default_styles() {
  $styles = array();

  // Exported image style: 115x62.
  $styles['115x62'] = array(
    'name' => '115x62',
    'label' => '115x62',
    'effects' => array(
      37 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => '115',
          'height' => '62',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
