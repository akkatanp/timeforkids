<?php
/**
 * @file
 * feature_kid_reporter_all_2015.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_kid_reporter_all_2015_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_kid_reporter_all_2015_views_api() {
  return array("version" => "3.0");
}
