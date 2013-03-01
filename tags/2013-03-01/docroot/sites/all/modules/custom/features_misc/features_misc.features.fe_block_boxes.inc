<?php
/**
 * @file
 * features_misc.features.fe_block_boxes.inc
 */

/**
 * Implementation of hook_default_fe_block_boxes().
 */
function features_misc_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Global Right Sidebar Ad';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'global_right_sidebar_ad';
  $fe_block_boxes->body = '<p><img src="http://s0.2mdn.net/viewad/1447902/CM_TK_160x600greenstatic.jpg" /></p>';

  $export['global_right_sidebar_ad'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Global Sidebar All Teacher Resources Label';
  $fe_block_boxes->format = 'plain_text';
  $fe_block_boxes->machine_name = 'global_sidebar_all_resources';
  $fe_block_boxes->body = 'All Teacher Resources';

  $export['global_sidebar_all_resources'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Global Sidebar Teacher Resources Label';
  $fe_block_boxes->format = 'plain_text';
  $fe_block_boxes->machine_name = 'global_sidebar_teacher_resources';
  $fe_block_boxes->body = 'Teacher Resources';

  $export['global_sidebar_teacher_resources'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'TFK Copyright';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'tfk_copyright';
  $fe_block_boxes->body = '&#169; 2011 Time Inc. All Rights Reserved.';

  $export['tfk_copyright'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'TFK Login Message - Logged In';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'tfk_login_message_logged_in';
  $fe_block_boxes->body = '<a href="/user/logout">Log Out</a> | <a href="/user">My Account</a>';

  $export['tfk_login_message_logged_in'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'TFK Login Message - Not Logged In';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'tfk_login_message_not_logged_in';
  $fe_block_boxes->body = 'Teacher and Parents! <a href="/user">Log In</a> or <a href="">Subscribe</a>';

  $export['tfk_login_message_not_logged_in'] = $fe_block_boxes;

  return $export;
}
