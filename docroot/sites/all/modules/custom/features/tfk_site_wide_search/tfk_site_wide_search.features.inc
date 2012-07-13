<?php
/**
 * @file
 * tfk_site_wide_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tfk_site_wide_search_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
