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

  return $export;
}
