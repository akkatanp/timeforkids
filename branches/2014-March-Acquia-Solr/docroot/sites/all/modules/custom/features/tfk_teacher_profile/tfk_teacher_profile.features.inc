<?php
/**
 * @file
 * tfk_teacher_profile.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function tfk_teacher_profile_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
}
