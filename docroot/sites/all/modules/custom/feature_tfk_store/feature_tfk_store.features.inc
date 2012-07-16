<?php
/**
 * @file
 * feature_tfk_store.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_tfk_store_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_tfk_store_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function feature_tfk_store_image_default_styles() {
  $styles = array();

  // Exported image style: tfk_book
  $styles['tfk_book'] = array(
    'name' => 'tfk_book',
    'effects' => array(
      44 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '190',
          'height' => '190',
          'upscale' => 0,
        ),
        'weight' => '2',
      ),
    ),
  );

  // Exported image style: tfk_book_thumb
  $styles['tfk_book_thumb'] = array(
    'name' => 'tfk_book_thumb',
    'effects' => array(
      45 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '105',
          'height' => '105',
          'upscale' => 0,
        ),
        'weight' => '2',
      ),
    ),
  );

  return $styles;
}
