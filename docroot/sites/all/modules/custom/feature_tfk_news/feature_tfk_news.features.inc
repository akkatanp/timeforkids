<?php
/**
 * @file
 * feature_tfk_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_tfk_news_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_tfk_news_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_tfk_news_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Headline'),
      'help' => '',
    ),
    'news_brief' => array(
      'name' => t('News Brief'),
      'base' => 'node_content',
      'description' => t('TFK news summaries.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'tfk_polldaddy' => array(
      'name' => t('TFK Polldaddy'),
      'base' => 'node_content',
      'description' => t('Content type for polldaddy polls. Referenced by articles.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
