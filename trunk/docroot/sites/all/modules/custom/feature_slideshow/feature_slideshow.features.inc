<?php
/**
 * @file
 * tfk_slideshow.features.inc
 */

/**
 * Implementation of hook_views_api().
 */
function tfk_slideshow_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}
