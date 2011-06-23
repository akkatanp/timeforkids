<?php
/**
 * @file Houses a collection of Drush helper commands.
 */

/**
 * Implementation of hook_drush_command().
 */
function tfk_helper_drush_command() {
  $items = array();

  $items['download-images'] = array(
    'description' => 'Downloads all images in local file table from remote server.',
    'callback' => 'tfk_helper_download_images',
    //'options' => array(
    //  '--limit' => 'The number of images to download at once.',
    //  '--rpath' => 'Remote file system path. Should be an publicly accessible URL.',
    //),
    'aliases' => array('di'),
  );

  return $items;
}

/**
 * Callback function
 */
function tfk_helper_download_images() {

  $types = array('image/gif', 'image/png', 'image/jpeg', 'video/mp4');
  $query = 'SELECT filename FROM file_managed WHERE filemime IN (:types)';
  
  $results = db_query($query, array(':types' => $types));
  $filepath = variable_get('file_public_path', 'sites/default/files'). '/';
  foreach($results as $file) {
    // Check if file exists already first.
    if(!file_exists($filepath. $file->filename)) {
      // Then copy. @todo un-hardcode the remote server.
      $r_image = 'http://timedev.prod.acquia-sites.com/files/'. $file->filename;
      $success = copy($r_image, $filepath. $file->filename);
      if($success) {
        drush_log(PHP_EOL. "Copied {$file->filename} to local.", 'success');
      } else {
        drush_log(PHP_EOL. "Could not copy {$r_image} to local.", 'warning');
      }
    } else {
      drush_log(PHP_EOL. "Skipped {$file->filename}.", 'success');
    }
  }
  
}
