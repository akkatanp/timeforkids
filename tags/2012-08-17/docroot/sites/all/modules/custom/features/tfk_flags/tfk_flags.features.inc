<?php
/**
 * @file
 * tfk_flags.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function tfk_flags_flag_default_flags() {
  $flags = array();
  // Exported flag: "Secondary Touts on Homepage".
  $flags['homepage_news_block'] = array(
    'content_type' => 'node',
    'title' => 'Secondary Touts on Homepage',
    'global' => '1',
    'types' => array(
      0 => 'article',
      1 => 'atw_destination',
      2 => 'slideshow',
      3 => 'video',
    ),
    'flag_short' => 'Secondary Touts on Homepage',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove Homepage News Block',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '3',
        1 => '4',
      ),
      'unflag' => array(
        0 => '3',
        1 => '4',
      ),
    ),
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'i18n' => 0,
    'module' => 'tfk_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Homepage Main Tout".
  $flags['homepage_top_story'] = array(
    'content_type' => 'node',
    'title' => 'Homepage Main Tout',
    'global' => '1',
    'types' => array(
      0 => 'article',
      1 => 'slideshow',
      2 => 'video',
    ),
    'flag_short' => 'Homepage Main Tout',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'remove from homepage top story',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '3',
        1 => '4',
      ),
      'unflag' => array(
        0 => '3',
        1 => '4',
      ),
    ),
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'i18n' => 0,
    'module' => 'tfk_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Secondary Touts in Kid Reporter".
  $flags['kid_reporter_news_block'] = array(
    'content_type' => 'node',
    'title' => 'Secondary Touts in Kid Reporter',
    'global' => '1',
    'types' => array(
      0 => 'article',
      1 => 'atw_destination',
      2 => 'slideshow',
      3 => 'video',
    ),
    'flag_short' => 'Secondary Touts in Kid Reporter',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'remove article from kid reporter from news block',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(
        0 => '2',
      ),
    ),
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'i18n' => 0,
    'module' => 'tfk_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Top Story in Kid Reporters".
  $flags['kid_reporter_top_story'] = array(
    'content_type' => 'node',
    'title' => 'Top Story in Kid Reporters',
    'global' => '1',
    'types' => array(
      0 => 'article',
      1 => 'slideshow',
      2 => 'video',
    ),
    'flag_short' => 'Top Story in Kid Reporters',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'remove this from Top Story in Kid Reporters',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(
        0 => '2',
      ),
    ),
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'i18n' => 0,
    'module' => 'tfk_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Secondary Touts under News".
  $flags['news_news_block'] = array(
    'content_type' => 'node',
    'title' => 'Secondary Touts under News',
    'global' => '1',
    'types' => array(
      0 => 'article',
      1 => 'atw_destination',
      2 => 'slideshow',
      3 => 'video',
    ),
    'flag_short' => 'Secondary Touts under News',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove from Secondary Touts under News',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '3',
        1 => '4',
      ),
      'unflag' => array(
        0 => '3',
        1 => '4',
      ),
    ),
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'i18n' => 0,
    'module' => 'tfk_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "News Main Tout".
  $flags['news_top_story'] = array(
    'content_type' => 'node',
    'title' => 'News Main Tout',
    'global' => '1',
    'types' => array(
      0 => 'article',
      1 => 'slideshow',
      2 => 'video',
    ),
    'flag_short' => 'News Main Tout',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'do not make this a top story',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '3',
        1 => '4',
      ),
      'unflag' => array(
        0 => '3',
        1 => '4',
      ),
    ),
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'i18n' => 0,
    'module' => 'tfk_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Spanish translation".
  $flags['spanish'] = array(
    'content_type' => 'node',
    'title' => 'Spanish translation',
    'global' => '1',
    'types' => array(
      0 => 'article',
      1 => 'pdf_quiz',
      2 => 'worksheet',
    ),
    'flag_short' => 'Spanish translation',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Spanish translation',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '3',
        1 => '4',
      ),
      'unflag' => array(
        0 => '3',
        1 => '4',
      ),
    ),
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'i18n' => 0,
    'module' => 'tfk_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "TFK Store Featured Book".
  $flags['store_featured_book'] = array(
    'content_type' => 'node',
    'title' => 'TFK Store Featured Book',
    'global' => '1',
    'types' => array(
      0 => 'book',
    ),
    'flag_short' => 'Store Featured Book',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Do not make this a featured book',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '3',
        1 => '4',
      ),
      'unflag' => array(
        0 => '3',
        1 => '4',
      ),
    ),
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'i18n' => 0,
    'module' => 'tfk_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "TFK Store Featured Product".
  $flags['store_featured_product'] = array(
    'content_type' => 'node',
    'title' => 'TFK Store Featured Product',
    'global' => '1',
    'types' => array(
      0 => 'store_product',
    ),
    'flag_short' => 'Store Featured Product',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Make this a product that is not featured',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '3',
        1 => '4',
      ),
      'unflag' => array(
        0 => '3',
        1 => '4',
      ),
    ),
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'i18n' => 0,
    'module' => 'tfk_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;
}
