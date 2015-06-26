<?php

/**
 * Implements hook_drush_command().
 */
function tfk_contest_files_drush_command() {
  $items['my-command'] = array(
    'description' => 'Copies files',
    'aliases' => array('myc'),
  );

  return $items;
}

function drush_tfk_contest_files_my_command() {
  $contest_dir = 'public://kidreporter_contest/';
  if (!file_prepare_directory($contest_dir, FILE_CREATE_DIRECTORY)) {
    drush_print('Error: Could not created folder.');
    return;
  }
  $sql = "select fm.filename, ws.sid, wsd.cid, wsd.data, fm.uri from webform_submissions as ws,
    webform_submitted_data as wsd, file_managed as fm, file_usage as fu
    where ws.sid = wsd.sid and ws.sid = fu.id and fu.fid = fm.fid and fm.fid = wsd.data
    and ws.nid = 217591 and wsd.cid IN (1,2,3,4)";
  $kid_contest_results = db_query($sql)->fetchAll();
  $num_results = count($kid_contest_results);
  drush_print('Num results: ' . $num_results);
  $created = 0;
  if (!empty($kid_contest_results) && $num_results) {
    foreach ($kid_contest_results as $val) {
      $filename = $val->filename;
      $sid = $val->sid;
      $cid = $val->cid;
      $fileuri = $val->uri;
      $fid = $val->data;
      $sql1 = "select data from webform_submitted_data where nid=217591 and sid = " . $sid . " and cid=6";
      $kid_email = db_query($sql1)->fetchField();
      $reporter_dir = $contest_dir . $kid_email;
      if (file_prepare_directory($reporter_dir, FILE_CREATE_DIRECTORY)) {
        if (FALSE === file_unmanaged_copy($fileuri, $reporter_dir, FILE_EXISTS_REPLACE)) {
          drush_print("Failed to copy " . $val->uri);
        }
        else {
          $created = $created + 1;
        }
      }
    }
  }
  drush_print("Copied " . $created . " files.");
}
