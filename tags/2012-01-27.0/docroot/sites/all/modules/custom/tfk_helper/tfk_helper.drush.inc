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
  
  $items['tfk-clear'] = array(
    'description' => 'Clear all tables including general cache.',
    'callback' => '_tfk_helper_clear_cache',
    'aliases' => array('tfk-cc'),
    'arguments' => array(
      'cache' => dt('Cache bin to clear.'),
    ),
    'options' => array(
      'cid' => 'Cache id of the cache entry to clear.',
    ),
  );
  
  $items['rallen-revert'] = array(
    'description' => 'Revert Features through code.',
    'callback' => '_tfk_helper_features_revert',
    'aliases' => array('rr'),
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
 *
 * Example: drush sfp sites/default/files /Users/rallen8440/tmp
 */
function tfk_helper_set_file_paths() {
 $args = func_get_args();
 if(empty($args)) {
   drush_log('Public and temporary path arguments not specified.', 'warning');
 } else {
   variable_set('file_public_path', $args[0]);
   drush_log("file_public_path set to {$args[0]}", 'success');
   variable_set('file_temporary_path', $args[1]);
   drush_log("file_temporary_path set to {$args[1]}", 'success');
 }
}

function _tfk_helper_clear_cache() {
  $args = func_get_args();
  if(empty($args)) {
    // Do what 'drush cc all' already does, clear the cache_page and cache_block bins.
    cache_clear_all();
    drush_log('"cache_page" and "cache_block" bins cleared', 'success');
    
    // Then delete the general cache table as well, which currently can only be done by the admin UI cache clear.
    cache_clear_all(NULL, 'cache');
    drush_log('"cache" bin was cleared', 'success');
  }
    
  // This is for clearing a cid within a specific bin, if you happen to know it.
  if(drush_get_option('cid')) {
    if(!array_key_exists(0, $args)) {
      print('You must specify a cache bin when using the cid option');
    } else {
      cache_clear_all(drush_get_option('cid'), $args[0]);
    }
  }
  if(array_key_exists(0, $args)) {
    cache_clear_all(NULL, $args[0]);
  }
  
}

function _tfk_helper_features_revert() {
  $args = func_get_args();
  if(!empty($args)) {
    
    module_load_include('inc', 'features', 'features.export');
    features_include();
    
    foreach($args as $module) {
      if(($feature = feature_load($module, TRUE)) && module_exists($module)) {
        
        $components = array();
        foreach (array_keys($feature->info['features']) as $component) {
          if (features_hook($component, 'features_revert')) {
            $components[] = $component;
          }
        }
        if(!empty($components)) {
          foreach($components as $component) {
            features_revert(array($module => array($component)));
            watchdog('tfk_schema_updates', 'Reverted !component.', array('!component' => $component));
            print 'Reverted '. $component. ' for '. $module. '.'. PHP_EOL;
          }
        }
        
      } elseif($feature) {
        watchdog('tfk_schema_updates', 'The feature !feature is not enabled.', array('!feature' => $module));
      } else {
        watchdog('tfk_schema_updates', 'The feature !feature could not be found.', array('!feature' => $module));
      }
    }
  }
}
