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
