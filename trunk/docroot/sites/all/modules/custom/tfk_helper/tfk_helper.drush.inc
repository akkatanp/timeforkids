<?php
/**
 * @file Houses a collection of Drush helper commands.
 */

/**
 * Implementation of hook_drush_command().
 */
function tfk_helper_drush_command() {
  $items = array();

  $items['tfk-download-images'] = array(
    'description' => 'Downloads all images in local file table from remote server.',
    'callback' => 'tfk_helper_download_images',
    //'options' => array(
    //  '--limit' => 'The number of images to download at once.',
    //  '--rpath' => 'Remote file system path. Should be an publicly accessible URL.',
    //),
    'aliases' => array('di'),
  );
  
  $items['tfk-solr-dis'] = array(
    'description' => 'Set Solr indexing to read-only.',
    'callback' => 'tfk_helper_solr_dis',
  );
  
  $items['tfk-set-file-paths'] = array(
    'description' => 'Sets public and temporary file paths.',
    'callback' => 'tfk_helper_set_file_paths',
    'aliases' => array('sfp'),
    'arguments' => array(
      'public file path' => dt('Public file path.'),
      'temporary file path' => dt('Temporary file path.'),
    ),
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

/**
 * Set Solr indexing to read-only.
 */
function tfk_helper_solr_dis() {
 variable_set('apachesolr_read_only', APACHESOLR_READ_ONLY);
 drush_log("Set Solr indexing to read only.", 'success');
}

/**
 * Set public and temporary file paths.
 */
function tfk_helper_set_file_paths() {
 $args = func_get_args();
 variable_set('file_public_path', $args[0]);
 drush_log("file_public_path set to {$args[0]}", 'success');
 variable_set('file_temporary_path', $args[1]);
 drush_log("file_temporary_path set to {$args[1]}", 'success');
}
