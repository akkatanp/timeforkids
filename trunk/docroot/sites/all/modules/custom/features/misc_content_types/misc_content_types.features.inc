<?php
/**
 * @file
 * misc_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function misc_content_types_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function misc_content_types_node_info() {
  $items = array(
    'book' => array(
      'name' => t('TFK Book'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'homepage_news_for_teachers' => array(
      'name' => t('Homepage News For Teachers'),
      'base' => 'node_content',
      'description' => t('Homepage News For Teachers block - appears on the front page '),
      'has_title' => '1',
      'title_label' => t('Headline'),
      'help' => '',
    ),
    'kid_reporter_bottom_nodeblock' => array(
      'name' => t('Kid Reporter Bottom Nodeblock'),
      'base' => 'node_content',
      'description' => t('Kid Reporter Bottom Nodeblock'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'kid_reporter_listing_nodeblock' => array(
      'name' => t('Kid Reporter Heading'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'mini_lesson' => array(
      'name' => t('Mini-Lesson'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Headline'),
      'help' => '',
    ),
    'news_channel_nodeblock' => array(
      'name' => t('News Channel Nodeblock'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'store' => array(
      'name' => t('Store'),
      'base' => 'node_content',
      'description' => t('This type is used to manage the Teacher and Kid stores items.  Only two should exist, one for teachers and one for kids.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'store_product' => array(
      'name' => t('TFK Product'),
      'base' => 'node_content',
      'description' => t('Non-Book products sold in the TFK Store'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'teacher_board_nodeblock' => array(
      'name' => t('Teacher Board Nodeblock'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'tfk_extra' => array(
      'name' => t('TFK Extra'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Headline'),
      'help' => '',
    ),
    'tfk_extras_bottom_nodeblock' => array(
      'name' => t('TFK Extras Bottom Nodeblock'),
      'base' => 'node_content',
      'description' => t('TFK Extras Bottom Nodeblock'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'tfk_extras_top_nodeblock' => array(
      'name' => t('TFK Extras Top Nodeblock'),
      'base' => 'node_content',
      'description' => t('TFK Extras Top Nodeblock'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'tfk_notification' => array(
      'name' => t('TFK Notification'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'tfk_staff' => array(
      'name' => t('TFK Staff'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
