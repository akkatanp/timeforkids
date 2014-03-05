<?php
/**
 * @file
 * feature_user_settings.features.fe_block_boxes.inc
 */

/**
 * Implementation of hook_default_fe_block_boxes().
 */
function feature_user_settings_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'User Settings';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'user_settings';
  $fe_block_boxes->body = '<div id="user-settings">
  <ul>
     <li>Profile</li>
     <li><a href="">Change Password</a></li>
    <li><a href="">Subscription</a></li> 
 </ul>
</div>';

  $export['user_settings'] = $fe_block_boxes;

  return $export;
}
