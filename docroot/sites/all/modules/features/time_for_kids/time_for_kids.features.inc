<?php
/**
 * @file
 * time_for_kids.features.inc
 */

/**
 * Implementation of hook_views_api().
 */
function time_for_kids_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}

/**
 * Implementation of hook_flag_default_flags().
 */
function time_for_kids_flag_default_flags() {
  $flags = array();
  // Exported flag: "Homepage Featured".
  $flags['homepage_featured'] = array(
    'content_type' => 'node',
    'title' => 'Homepage Featured',
    'global' => '0',
    'types' => array(
      0 => 'article',
      1 => 'destination',
      2 => 'event',
    ),
    'flag_short' => 'Homepage Featured',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Homepage Unfeatured',
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
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'time_for_kids',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;
}

/**
 * Implementation of hook_node_info().
 */
function time_for_kids_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'destination' => array(
      'name' => t('Destination'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
