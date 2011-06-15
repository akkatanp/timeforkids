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
  $context->name = 'Global Editor Navigation';
  $context->description = '';
  $context->tag = 'global navigation';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-global_right_sidebar-block' => array(
          'module' => 'views',
          'delta' => 'global_right_sidebar-block',
          'region' => 'sidebar_second',
          'weight' => '-56',
        ),
        'block-19' => array(
          'module' => 'block',
          'delta' => 19,
          'region' => 'sidebar_second',
          'weight' => '-55',
        ),
        'views-global_right_sidebar-block_1' => array(
          'module' => 'views',
          'delta' => 'global_right_sidebar-block_1',
          'region' => 'sidebar_second',
          'weight' => '-54',
        ),
        'views-global_right_sidebar-block_3' => array(
          'module' => 'views',
          'delta' => 'global_right_sidebar-block_3',
          'region' => 'sidebar_second',
          'weight' => '-53',
        ),
        'views-global_right_sidebar-block_2' => array(
          'module' => 'views',
          'delta' => 'global_right_sidebar-block_2',
          'region' => 'sidebar_second',
          'weight' => '-52',
        ),
        'block-18' => array(
          'module' => 'block',
          'delta' => 18,
          'region' => 'sidebar_second',
          'weight' => '-51',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => 1,
          'region' => 'sidebar_second',
          'weight' => '-50',
        ),
        'menu-menu-tfk-global-navigation' => array(
          'module' => 'menu',
          'delta' => 'menu-tfk-global-navigation',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views-homepage_username-block' => array(
          'module' => 'views',
          'delta' => 'homepage_username-block',
          'region' => 'header',
          'weight' => '-9',
        ),
        'block-11' => array(
          'module' => 'block',
          'delta' => 11,
          'region' => 'header',
          'weight' => '-8',
        ),
        'menu-menu-tfk-teachers-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-tfk-teachers-menu',
          'region' => 'header',
          'weight' => '-6',
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
        'block-6' => array(
          'module' => 'block',
          'delta' => 6,
          'region' => 'bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('global navigation');
  $export['Global Editor Navigation'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'Global Public Navigation';
  $context->description = '';
  $context->tag = 'global navigation';
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
        'views-1ea0d8b2d55a5c36ff9aeecb766072b0' => array(
          'module' => 'views',
          'delta' => '1ea0d8b2d55a5c36ff9aeecb766072b0',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => 1,
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'menu-menu-tfk-global-navigation' => array(
          'module' => 'menu',
          'delta' => 'menu-tfk-global-navigation',
          'region' => 'header',
          'weight' => '-16',
        ),
        'block-16' => array(
          'module' => 'block',
          'delta' => 16,
          'region' => 'header',
          'weight' => '-10',
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
        'block-6' => array(
          'module' => 'block',
          'delta' => 6,
          'region' => 'bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('global navigation');
  $export['Global Public Navigation'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'Global Teacher Navigation';
  $context->description = '';
  $context->tag = 'global navigation';
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
        'views-global_right_sidebar-block' => array(
          'module' => 'views',
          'delta' => 'global_right_sidebar-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-global_right_sidebar-block_1' => array(
          'module' => 'views',
          'delta' => 'global_right_sidebar-block_1',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'views-global_right_sidebar-block_3' => array(
          'module' => 'views',
          'delta' => 'global_right_sidebar-block_3',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'views-global_right_sidebar-block_2' => array(
          'module' => 'views',
          'delta' => 'global_right_sidebar-block_2',
          'region' => 'sidebar_second',
          'weight' => '-5',
        ),
        'block-18' => array(
          'module' => 'block',
          'delta' => 18,
          'region' => 'sidebar_second',
          'weight' => '-4',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => 1,
          'region' => 'sidebar_second',
          'weight' => '-3',
        ),
        'menu-menu-tfk-global-navigation' => array(
          'module' => 'menu',
          'delta' => 'menu-tfk-global-navigation',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views-homepage_username-block' => array(
          'module' => 'views',
          'delta' => 'homepage_username-block',
          'region' => 'header',
          'weight' => '-9',
        ),
        'block-11' => array(
          'module' => 'block',
          'delta' => 11,
          'region' => 'header',
          'weight' => '-8',
        ),
        'menu-menu-tfk-teachers-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-tfk-teachers-menu',
          'region' => 'header',
          'weight' => '-6',
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
        'block-6' => array(
          'module' => 'block',
          'delta' => 6,
          'region' => 'bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('global navigation');
  $export['Global Teacher Navigation'] = $context;

  return $export;
}
