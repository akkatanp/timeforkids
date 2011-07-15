<?php
/**
 * @file
 * feature_tfk_kid_reporters.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function feature_tfk_kid_reporters_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_views_api().
 */
function feature_tfk_kid_reporters_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}

/**
 * Implementation of hook_flag_default_flags().
 */
function feature_tfk_kid_reporters_flag_default_flags() {
  $flags = array();
  // Exported flag: "Featured Kid Reporter".
  $flags['kid_reporter_featured'] = array(
    'content_type' => 'node',
    'title' => 'Featured Kid Reporter',
    'global' => '1',
    'types' => array(
      0 => 'kid_reporter',
    ),
    'flag_short' => 'make this kid reporter featured',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'remove kid reporter from featured',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(
        0 => '2',
      ),
    ),
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'feature_tfk_kid_reporters',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Kid Reporter News Block".
  $flags['kid_reporter_news_block'] = array(
    'content_type' => 'node',
    'title' => 'Kid Reporter News Block',
    'global' => '1',
    'types' => array(
      0 => 'article',
    ),
    'flag_short' => 'make article  appear in kid reporter news block',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'remove article from kid reporter from news block',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(
        0 => '2',
      ),
    ),
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'feature_tfk_kid_reporters',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Kid Reporter Top Story".
  $flags['kid_reporter_top_story'] = array(
    'content_type' => 'node',
    'title' => 'Kid Reporter Top Story',
    'global' => '1',
    'types' => array(
      0 => 'article',
    ),
    'flag_short' => 'make this a top story in kid reporter section',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'remove this from kid reporter channel top story',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(
        0 => '2',
      ),
    ),
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'feature_tfk_kid_reporters',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;
}

/**
 * Implementation of hook_node_info().
 */
function feature_tfk_kid_reporters_node_info() {
  $items = array(
    'kid_reporter' => array(
      'name' => t('Kid Reporter'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
