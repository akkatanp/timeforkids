<?php
/**
 * @file
 * feature_user_settings.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function feature_user_settings_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
}
