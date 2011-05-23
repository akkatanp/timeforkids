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
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'global_right_sidebar_ad';
  $fe_block_boxes->body = 'TFK AD BLOCK';

  $export['global_right_sidebar_ad'] = $fe_block_boxes;

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
  $fe_block_boxes->body = '<a href="/user/logout">Log Out</a> | <a href="">My Account</a>';

  $export['tfk_login_message_logged_in'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'TFK Login Message - Not Logged In';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'tfk_login_message_not_logged_in';
  $fe_block_boxes->body = 'Teacher and Parents! <a href="/user">Log In</a> or <a href="">Subscribe</a>';

  $export['tfk_login_message_not_logged_in'] = $fe_block_boxes;

  return $export;
}
