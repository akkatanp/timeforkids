<?php
/**
 * @file
 * tfk_teacher_profile.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function tfk_teacher_profile_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'teacher_profile_settings';
  $context->description = 'teacher_profile_settings';
  $context->tag = 'user_profile';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'user' => 'user',
        'users/*' => 'users/*',
      ),
    ),
    'user' => array(
      'values' => array(
        'teacher' => 'teacher',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'tfk_user_profile-tfk-profile-settings' => array(
          'module' => 'tfk_user_profile',
          'delta' => 'tfk-profile-settings',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('teacher_profile_settings');
  t('user_profile');
  $export['teacher_profile_settings'] = $context;

  return $export;
}
