<?php
/**
 * @file
 * features_misc.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function features_misc_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'Info Pages';
  $context->description = '';
  $context->tag = 'info pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'info/about' => 'info/about',
        'info/customer-service' => 'info/customer-service',
        'info/subscribe' => 'info/subscribe',
        'info/contact' => 'info/contact',
        'info/advertising' => 'info/advertising',
        'info/privacy-policy' => 'info/privacy-policy',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-info-pages-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-info-pages-menu',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('info pages');
  $export['Info Pages'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global_editor_navigation';
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
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-88',
        ),
        'views-global_right_sidebar-block' => array(
          'module' => 'views',
          'delta' => 'global_right_sidebar-block',
          'region' => 'sidebar_second',
          'weight' => '-87',
        ),
        'block-19' => array(
          'module' => 'block',
          'delta' => 19,
          'region' => 'sidebar_second',
          'weight' => '-86',
        ),
        'views-global_right_sidebar-block_1' => array(
          'module' => 'views',
          'delta' => 'global_right_sidebar-block_1',
          'region' => 'sidebar_second',
          'weight' => '-85',
        ),
        'views-global_right_sidebar-block_2' => array(
          'module' => 'views',
          'delta' => 'global_right_sidebar-block_2',
          'region' => 'sidebar_second',
          'weight' => '-84',
        ),
        'views-global_right_sidebar-block_3' => array(
          'module' => 'views',
          'delta' => 'global_right_sidebar-block_3',
          'region' => 'sidebar_second',
          'weight' => '-83',
        ),
        'views-global_right_sidebar-block_4' => array(
          'module' => 'views',
          'delta' => 'global_right_sidebar-block_4',
          'region' => 'sidebar_second',
          'weight' => '-82',
        ),
        'block-18' => array(
          'module' => 'block',
          'delta' => 18,
          'region' => 'sidebar_second',
          'weight' => '-81',
        ),
        'views-6b3cdbf51f6a41d742e65dbcf2d85234' => array(
          'module' => 'views',
          'delta' => '6b3cdbf51f6a41d742e65dbcf2d85234',
          'region' => 'sidebar_second',
          'weight' => '-80',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => 1,
          'region' => 'sidebar_second',
          'weight' => '-79',
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
          'weight' => '-7',
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
        'menu-menu-tfk-footer-tertiary' => array(
          'module' => 'menu',
          'delta' => 'menu-tfk-footer-tertiary',
          'region' => 'footer',
          'weight' => '-8',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => 6,
          'region' => 'footer',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('global navigation');
  $export['global_editor_navigation'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global_public_navigation';
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
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-e1fd7ec0792e427785c60f04deef22cf' => array(
          'module' => 'views',
          'delta' => 'e1fd7ec0792e427785c60f04deef22cf',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => 1,
          'region' => 'sidebar_second',
          'weight' => '-8',
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
        'menu-menu-tfk-footer-tertiary' => array(
          'module' => 'menu',
          'delta' => 'menu-tfk-footer-tertiary',
          'region' => 'footer',
          'weight' => '-8',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => 6,
          'region' => 'footer',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('global navigation');
  $export['global_public_navigation'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global_teacher_navigation3';
  $context->description = '';
  $context->tag = 'global navigation';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'teacher' => 'teacher',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-global_right_sidebar-block' => array(
          'module' => 'views',
          'delta' => 'global_right_sidebar-block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'block-19' => array(
          'module' => 'block',
          'delta' => '19',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'views-global_right_sidebar-block_1' => array(
          'module' => 'views',
          'delta' => 'global_right_sidebar-block_1',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'views-global_right_sidebar-block_2' => array(
          'module' => 'views',
          'delta' => 'global_right_sidebar-block_2',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'views-global_right_sidebar-block_4' => array(
          'module' => 'views',
          'delta' => 'global_right_sidebar-block_4',
          'region' => 'sidebar_second',
          'weight' => '-4',
        ),
        'views-global_right_sidebar-block_3' => array(
          'module' => 'views',
          'delta' => 'global_right_sidebar-block_3',
          'region' => 'sidebar_second',
          'weight' => '-5',
        ),
        'block-18' => array(
          'module' => 'block',
          'delta' => '18',
          'region' => 'sidebar_second',
          'weight' => '-3',
        ),
        'views-6b3cdbf51f6a41d742e65dbcf2d85234' => array(
          'module' => 'views',
          'delta' => '6b3cdbf51f6a41d742e65dbcf2d85234',
          'region' => 'sidebar_second',
          'weight' => '-2',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'sidebar_second',
          'weight' => '-1',
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
          'delta' => '11',
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
          'weight' => '-10',
        ),
        'menu-menu-tfk-footer-secondary' => array(
          'module' => 'menu',
          'delta' => 'menu-tfk-footer-secondary',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'menu-menu-tfk-footer-tertiary' => array(
          'module' => 'menu',
          'delta' => 'menu-tfk-footer-tertiary',
          'region' => 'footer',
          'weight' => '-8',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'footer',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('global navigation');
  $export['global_teacher_navigation3'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'what_you_get';
  $context->description = '';
  $context->tag = 'info pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'info/what-you-get' => 'info/what-you-get',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-info-pages-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-info-pages-menu',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('info pages');
  $export['what_you_get'] = $context;

  return $export;
}
