<?php
/**
 * @file
 * facetapi_home.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function facetapi_home_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}
