<?php
/**
 * @file
 * features_misc.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function features_misc_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'Homepage Non-Teacher Menu';
  $context->description = '';
  $context->tag = 'homepage';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-6b3cdbf51f6a41d742e65dbcf2d85234' => array(
          'module' => 'views',
          'delta' => '6b3cdbf51f6a41d742e65dbcf2d85234',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => 6,
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'menu-menu-tfk-global-navigation' => array(
          'module' => 'menu',
          'delta' => 'menu-tfk-global-navigation',
          'region' => 'header',
          'weight' => '-16',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => 2,
          'region' => 'header',
          'weight' => '-15',
        ),
        'menu-menu-tfk-footer-primary' => array(
          'module' => 'menu',
          'delta' => 'menu-tfk-footer-primary',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'menu-menu-tfk-footer-secondary' => array(
          'module' => 'menu',
          'delta' => 'menu-tfk-footer-secondary',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => 3,
          'region' => 'bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('homepage');
  $export['Homepage Non-Teacher Menu'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'Homepage Teacher Menu';
  $context->description = '';
  $context->tag = 'homepage';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'tfk_current_issue-current-issue-page' => array(
          'module' => 'tfk_current_issue',
          'delta' => 'current-issue-page',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-3913f89243cb6afc50cd09ca76035ca1' => array(
          'module' => 'views',
          'delta' => '3913f89243cb6afc50cd09ca76035ca1',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-055e2fdcba0fe53e098723f8d12ef765' => array(
          'module' => 'views',
          'delta' => '055e2fdcba0fe53e098723f8d12ef765',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => 6,
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'menu-menu-tfk-global-navigation' => array(
          'module' => 'menu',
          'delta' => 'menu-tfk-global-navigation',
          'region' => 'header',
          'weight' => '-10',
        ),
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views-homepage_username-block' => array(
          'module' => 'views',
          'delta' => 'homepage_username-block',
          'region' => 'header',
          'weight' => '-9',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => 4,
          'region' => 'header',
          'weight' => '-8',
        ),
        'menu-menu-tfk-teachers-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-tfk-teachers-menu',
          'region' => 'header',
          'weight' => '-7',
        ),
        'menu-menu-tfk-footer-primary' => array(
          'module' => 'menu',
          'delta' => 'menu-tfk-footer-primary',
          'region' => 'footer',
          'weight' => '-16',
        ),
        'menu-menu-tfk-footer-secondary' => array(
          'module' => 'menu',
          'delta' => 'menu-tfk-footer-secondary',
          'region' => 'footer',
          'weight' => '-15',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => 3,
          'region' => 'bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('homepage');
  $export['Homepage Teacher Menu'] = $context;

  return $export;
}
