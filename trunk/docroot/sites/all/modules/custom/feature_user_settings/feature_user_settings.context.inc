<?php
/**
 * @file
 * feature_user_settings.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function feature_user_settings_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'User Settings';
  $context->description = 'User Settings';
  $context->tag = 'user';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'user/*' => 'user/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-1' => array(
          'module' => 'block',
          'delta' => 1,
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('User Settings');
  t('user');
  $export['User Settings'] = $context;

  return $export;
}
