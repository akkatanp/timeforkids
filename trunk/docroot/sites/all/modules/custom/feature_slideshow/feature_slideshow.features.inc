<?php
/**
 * @file
 * feature_slideshow.features.inc
 */

/**
 * Implementation of hook_views_api().
 */
function feature_slideshow_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}

/**
 * Implementation of hook_image_default_styles().
 */
function feature_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: tfk_square_large
  $styles['tfk_square_large'] = array(
    'name' => 'tfk_square_large',
    'effects' => array(
      7 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => '270',
          'height' => '270',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: tfk_square_medium
  $styles['tfk_square_medium'] = array(
    'name' => 'tfk_square_medium',
    'effects' => array(
      8 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => '115',
          'height' => '115',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: tfk_square_small
  $styles['tfk_square_small'] = array(
    'name' => 'tfk_square_small',
    'effects' => array(
      9 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => '60',
          'height' => '60',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
