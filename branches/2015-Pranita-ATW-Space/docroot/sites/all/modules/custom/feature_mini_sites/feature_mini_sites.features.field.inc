<?php
/**
 * @file
 * feature_mini_sites.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function feature_mini_sites_field_default_fields() {
  $fields = array();

  // Exported field: 'node-mini_site_home-body'.
  $fields['node-mini_site_home-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '',
        'maxlength_body_js' => 0,
        'maxlength_body_text' => 'Content limited to !limit characters, remaining: <strong>!remaining</strong>',
      ),
      'translatable' => '1',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'mini_site_home',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Description',
      'required' => 1,
      'settings' => array(
        'display_summary' => 0,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => -4,
      ),
      'widget_type' => 'text_textarea_with_summary',
    ),
  );

  // Exported field: 'node-minisite-body'.
  $fields['node-minisite-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '',
        'maxlength_body_js' => 0,
        'maxlength_body_text' => 'Content limited to !limit characters, remaining: <strong>!remaining</strong>',
      ),
      'translatable' => '1',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'minisite',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Deck',
      'required' => 1,
      'settings' => array(
        'display_summary' => 1,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '20',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '1',
      ),
      'widget_type' => 'text_textarea_with_summary',
    ),
  );

  // Exported field: 'node-minisite-field_article_category'.
  $fields['node-minisite-field_article_category'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_article_category',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'article_categories',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '1',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'minisite',
      'default_value' => array(
        0 => array(
          'tid' => '1321',
          'vid' => '3',
          'name' => 'Mini-Site',
          'description' => '',
          'format' => 'full_html',
          'weight' => '0',
          'vocabulary_machine_name' => 'article_categories',
          'rdf_mapping' => array(
            'description' => array(
              'predicates' => array(
                0 => 'skos:definition',
              ),
            ),
            'name' => array(
              'predicates' => array(
                0 => 'rdfs:label',
                1 => 'skos:prefLabel',
              ),
            ),
            'parent' => array(
              'predicates' => array(
                0 => 'skos:broader',
              ),
              'type' => 'rel',
            ),
            'rdftype' => array(
              0 => 'skos:Concept',
            ),
            'vid' => array(
              'predicates' => array(
                0 => 'skos:inScheme',
              ),
              'type' => 'rel',
            ),
          ),
        ),
      ),
      'deleted' => '0',
      'description' => 'Field required in order to promote mini-site to primary and secondary tout positions.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '8',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_article_category',
      'label' => 'Internal Use Only',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '32',
      ),
    ),
  );

  // Exported field: 'node-minisite-field_articles'.
  $fields['node-minisite-field_articles'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_articles',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'locked' => '0',
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'a_paper' => 0,
          'article' => 'article',
          'atw_day_in_life' => 0,
          'atw_destination' => 0,
          'atw_homepage_nodeblock' => 0,
          'atw_native_lingo' => 0,
          'atw_sightseeing' => 0,
          'atw_timeline' => 0,
          'board_member' => 0,
          'book' => 0,
          'flashcard' => 0,
          'global_right_sidebar_promo' => 0,
          'grammar_practice' => 0,
          'grammar_practice_question' => 0,
          'grammar_practice_reward_image' => 0,
          'grammar_practice_rule' => 0,
          'homepage_news_for_teachers' => 0,
          'image' => 0,
          'kid_reporter' => 0,
          'kid_reporter_bottom_nodeblock' => 0,
          'kid_reporter_listing_nodeblock' => 0,
          'magazine_issue' => 0,
          'mini_lesson' => 0,
          'mini_site_home' => 0,
          'minisite' => 0,
          'news_channel_nodeblock' => 0,
          'page' => 0,
          'paper_step' => 0,
          'pdf_quiz' => 0,
          'poll' => 0,
          'slideshow' => 'slideshow',
          'store' => 0,
          'teacher_board_nodeblock' => 0,
          'teacher_community_question' => 0,
          'tfk_extra' => 0,
          'tfk_extras_bottom_nodeblock' => 0,
          'tfk_extras_top_nodeblock' => 0,
          'tfk_notification' => 0,
          'tfk_staff' => 0,
          'video' => 'video',
          'webform' => 0,
          'webform_generic' => 0,
          'worksheet' => 0,
          'writing_tips' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'references_1',
          'view_name' => 'reference_artslidevid',
        ),
      ),
      'translatable' => '1',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'minisite',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_articles',
      'label' => 'Articles',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'node_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'node_reference/autocomplete',
          'size' => '60',
        ),
        'type' => 'node_reference_autocomplete',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-minisite-field_header_image'.
  $fields['node-minisite-field_header_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_header_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '1',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'minisite',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_header_image',
      'label' => 'Banner Image',
      'required' => 1,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'filefield_paths' => array(
          'active_updating' => 0,
          'file_name' => array(
            'options' => array(
              'pathauto' => 0,
              'transliterate' => 1,
            ),
            'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
          ),
          'file_path' => array(
            'options' => array(
              'pathauto' => 0,
              'transliterate' => 0,
            ),
            'value' => '[node:created:custom:Y-m]',
          ),
          'retroactive_update' => 0,
        ),
        'filefield_paths_enabled' => 1,
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'insert' => 0,
          'insert_absolute' => 0,
          'insert_class' => '',
          'insert_default' => 'auto',
          'insert_styles' => array(
            'auto' => 'auto',
            'icon_link' => 0,
            'image' => 0,
            'image_115x115' => 0,
            'image_large' => 0,
            'image_medium' => 0,
            'image_slideshow_small_square' => 0,
            'image_tfk_140x187' => 0,
            'image_tfk_270x270' => 0,
            'image_tfk_50px_50px' => 0,
            'image_tfk_60x60' => 0,
            'image_tfk_71x95' => 0,
            'image_tfk_book' => 0,
            'image_tfk_book_thumb' => 0,
            'image_tfk_rect_large' => 0,
            'image_tfk_rect_medium' => 0,
            'image_tfk_rect_small' => 0,
            'image_tfk_square_large' => 0,
            'image_tfk_square_medium' => 0,
            'image_tfk_square_small' => 0,
            'image_thumbnail' => 0,
            'link' => 0,
          ),
          'insert_width' => '',
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-minisite-field_minisite_day_in_life'.
  $fields['node-minisite-field_minisite_day_in_life'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_minisite_day_in_life',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'locked' => '0',
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'a_paper' => 0,
          'article' => 0,
          'atw_day_in_life' => 'atw_day_in_life',
          'atw_destination' => 0,
          'atw_homepage_nodeblock' => 0,
          'atw_native_lingo' => 0,
          'atw_sightseeing' => 0,
          'atw_timeline' => 0,
          'board_member' => 0,
          'book' => 0,
          'common_core_standards' => 0,
          'flashcard' => 0,
          'global_right_sidebar_promo' => 0,
          'grammar_practice' => 0,
          'grammar_practice_question' => 0,
          'grammar_practice_reward_image' => 0,
          'grammar_practice_rule' => 0,
          'homepage_news_for_teachers' => 0,
          'image' => 0,
          'kid_reporter' => 0,
          'kid_reporter_bottom_nodeblock' => 0,
          'kid_reporter_listing_nodeblock' => 0,
          'magazine_issue' => 0,
          'mini_lesson' => 0,
          'mini_site_home' => 0,
          'minisite' => 0,
          'news_brief' => 0,
          'news_channel_nodeblock' => 0,
          'page' => 0,
          'paper_step' => 0,
          'pdf_quiz' => 0,
          'poll' => 0,
          'slideshow' => 0,
          'store' => 0,
          'store_product' => 0,
          'teacher_board_nodeblock' => 0,
          'teacher_community_question' => 0,
          'tfk_extra' => 0,
          'tfk_extras_bottom_nodeblock' => 0,
          'tfk_extras_top_nodeblock' => 0,
          'tfk_lesson_for_tablets' => 0,
          'tfk_notification' => 0,
          'tfk_polldaddy' => 0,
          'tfk_staff' => 0,
          'video' => 0,
          'webform' => 0,
          'webform_generic' => 0,
          'worksheet' => 0,
          'writing_tips' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => '',
          'view_name' => '',
        ),
      ),
      'translatable' => '0',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'minisite',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_minisite_day_in_life',
      'label' => 'Day In Life',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'node_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'node_reference/autocomplete',
          'size' => '60',
        ),
        'type' => 'node_reference_autocomplete',
        'weight' => '34',
      ),
    ),
  );

  // Exported field: 'node-minisite-field_minisite_quiz'.
  $fields['node-minisite-field_minisite_quiz'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_minisite_quiz',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'locked' => '0',
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'a_paper' => 0,
          'article' => 0,
          'atw_day_in_life' => 0,
          'atw_destination' => 0,
          'atw_homepage_nodeblock' => 0,
          'atw_native_lingo' => 0,
          'atw_sightseeing' => 0,
          'atw_timeline' => 0,
          'board_member' => 0,
          'book' => 0,
          'common_core_standards' => 0,
          'flashcard' => 0,
          'global_right_sidebar_promo' => 0,
          'grammar_practice' => 0,
          'grammar_practice_question' => 0,
          'grammar_practice_reward_image' => 0,
          'grammar_practice_rule' => 0,
          'homepage_news_for_teachers' => 0,
          'image' => 0,
          'kid_reporter' => 0,
          'kid_reporter_bottom_nodeblock' => 0,
          'kid_reporter_listing_nodeblock' => 0,
          'magazine_issue' => 0,
          'mini_lesson' => 0,
          'mini_site_home' => 0,
          'minisite' => 0,
          'news_brief' => 0,
          'news_channel_nodeblock' => 0,
          'page' => 0,
          'paper_step' => 0,
          'pdf_quiz' => 'pdf_quiz',
          'poll' => 0,
          'slideshow' => 0,
          'store' => 0,
          'store_product' => 0,
          'teacher_board_nodeblock' => 0,
          'teacher_community_question' => 0,
          'tfk_extra' => 0,
          'tfk_extras_bottom_nodeblock' => 0,
          'tfk_extras_top_nodeblock' => 0,
          'tfk_lesson_for_tablets' => 0,
          'tfk_notification' => 0,
          'tfk_polldaddy' => 0,
          'tfk_staff' => 0,
          'video' => 0,
          'webform' => 0,
          'webform_generic' => 0,
          'worksheet' => 0,
          'writing_tips' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => '',
          'view_name' => '',
        ),
      ),
      'translatable' => '0',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'minisite',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_minisite_quiz',
      'label' => 'Quiz',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'node_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'node_reference/autocomplete',
          'size' => '60',
        ),
        'type' => 'node_reference_autocomplete',
        'weight' => '35',
      ),
    ),
  );

  // Exported field: 'node-minisite-field_minisite_related_content'.
  $fields['node-minisite-field_minisite_related_content'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_minisite_related_content',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'locked' => '0',
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'a_paper' => 0,
          'article' => 0,
          'atw_day_in_life' => 0,
          'atw_destination' => 0,
          'atw_homepage_nodeblock' => 0,
          'atw_native_lingo' => 0,
          'atw_sightseeing' => 0,
          'atw_timeline' => 0,
          'board_member' => 0,
          'book' => 0,
          'flashcard' => 0,
          'global_right_sidebar_promo' => 0,
          'grammar_practice' => 0,
          'grammar_practice_question' => 0,
          'grammar_practice_reward_image' => 0,
          'grammar_practice_rule' => 0,
          'homepage_news_for_teachers' => 0,
          'image' => 0,
          'kid_reporter' => 0,
          'kid_reporter_bottom_nodeblock' => 0,
          'kid_reporter_listing_nodeblock' => 0,
          'magazine_issue' => 0,
          'mini_lesson' => 0,
          'mini_site_home' => 0,
          'minisite' => 0,
          'news_channel_nodeblock' => 0,
          'page' => 0,
          'paper_step' => 0,
          'pdf_quiz' => 0,
          'poll' => 0,
          'slideshow' => 0,
          'store' => 0,
          'teacher_board_nodeblock' => 0,
          'teacher_community_question' => 0,
          'tfk_extra' => 0,
          'tfk_extras_bottom_nodeblock' => 0,
          'tfk_extras_top_nodeblock' => 0,
          'tfk_notification' => 0,
          'tfk_staff' => 0,
          'video' => 0,
          'webform' => 0,
          'webform_generic' => 0,
          'worksheet' => 'worksheet',
          'writing_tips' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'references_1',
          'view_name' => 'reference_worksheets',
        ),
      ),
      'translatable' => '1',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'minisite',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '7',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_minisite_related_content',
      'label' => 'Additional Content',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'node_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'node_reference/autocomplete',
          'size' => '60',
        ),
        'type' => 'node_reference_autocomplete',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-minisite-field_minisite_resources'.
  $fields['node-minisite-field_minisite_resources'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_minisite_resources',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'locked' => '0',
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'a_paper' => 0,
          'article' => 0,
          'atw_day_in_life' => 0,
          'atw_destination' => 0,
          'atw_homepage_nodeblock' => 0,
          'atw_native_lingo' => 0,
          'atw_sightseeing' => 0,
          'atw_timeline' => 0,
          'board_member' => 0,
          'book' => 0,
          'flashcard' => 0,
          'global_right_sidebar_promo' => 0,
          'grammar_practice' => 0,
          'grammar_practice_question' => 0,
          'grammar_practice_reward_image' => 0,
          'grammar_practice_rule' => 0,
          'homepage_news_for_teachers' => 0,
          'image' => 0,
          'kid_reporter' => 0,
          'kid_reporter_bottom_nodeblock' => 0,
          'kid_reporter_listing_nodeblock' => 0,
          'magazine_issue' => 0,
          'mini_lesson' => 0,
          'mini_site_home' => 0,
          'minisite' => 0,
          'news_channel_nodeblock' => 0,
          'page' => 0,
          'paper_step' => 0,
          'pdf_quiz' => 0,
          'poll' => 0,
          'slideshow' => 0,
          'store' => 0,
          'teacher_board_nodeblock' => 0,
          'teacher_community_question' => 0,
          'tfk_extra' => 0,
          'tfk_extras_bottom_nodeblock' => 0,
          'tfk_extras_top_nodeblock' => 0,
          'tfk_notification' => 0,
          'tfk_staff' => 0,
          'video' => 0,
          'webform' => 0,
          'webform_generic' => 0,
          'worksheet' => 'worksheet',
          'writing_tips' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'references_1',
          'view_name' => 'reference_worksheets',
        ),
      ),
      'translatable' => '1',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'minisite',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '6',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_minisite_resources',
      'label' => 'Resources',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'node_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'node_reference/autocomplete',
          'size' => '60',
        ),
        'type' => 'node_reference_autocomplete',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-minisite-field_minisite_resources_label'.
  $fields['node-minisite-field_minisite_resources_label'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_minisite_resources_label',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'minisite',
      'default_value' => array(
        0 => array(
          'value' => 'Teacher Resources',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_minisite_resources_label',
      'label' => 'Resources Label',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'node-minisite-field_minisite_thumbnail_image'.
  $fields['node-minisite-field_minisite_thumbnail_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_minisite_thumbnail_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '1',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'minisite',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_minisite_thumbnail_image',
      'label' => 'Thumbnail Image',
      'required' => 1,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'filefield_paths' => array(
          'active_updating' => 0,
          'file_name' => array(
            'options' => array(
              'pathauto' => 0,
              'transliterate' => 1,
            ),
            'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
          ),
          'file_path' => array(
            'options' => array(
              'pathauto' => 0,
              'transliterate' => 0,
            ),
            'value' => '[node:created:custom:Y-m]',
          ),
          'retroactive_update' => 0,
        ),
        'filefield_paths_enabled' => 1,
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'insert' => 0,
          'insert_absolute' => 0,
          'insert_class' => '',
          'insert_default' => 'auto',
          'insert_styles' => array(
            'auto' => 'auto',
            'icon_link' => 0,
            'image' => 0,
            'image_115x115' => 0,
            'image_large' => 0,
            'image_medium' => 0,
            'image_slideshow_small_square' => 0,
            'image_tfk_140x187' => 0,
            'image_tfk_270x270' => 0,
            'image_tfk_50px_50px' => 0,
            'image_tfk_60x60' => 0,
            'image_tfk_71x95' => 0,
            'image_tfk_book' => 0,
            'image_tfk_book_thumb' => 0,
            'image_tfk_rect_large' => 0,
            'image_tfk_rect_medium' => 0,
            'image_tfk_rect_small' => 0,
            'image_tfk_square_large' => 0,
            'image_tfk_square_medium' => 0,
            'image_tfk_square_small' => 0,
            'image_thumbnail' => 0,
            'link' => 0,
          ),
          'insert_width' => '',
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-minisite-field_minisite_timeline'.
  $fields['node-minisite-field_minisite_timeline'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_minisite_timeline',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'locked' => '0',
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'a_paper' => 0,
          'article' => 0,
          'atw_day_in_life' => 0,
          'atw_destination' => 0,
          'atw_homepage_nodeblock' => 0,
          'atw_native_lingo' => 0,
          'atw_sightseeing' => 0,
          'atw_timeline' => 'atw_timeline',
          'board_member' => 0,
          'book' => 0,
          'common_core_standards' => 0,
          'flashcard' => 0,
          'global_right_sidebar_promo' => 0,
          'grammar_practice' => 0,
          'grammar_practice_question' => 0,
          'grammar_practice_reward_image' => 0,
          'grammar_practice_rule' => 0,
          'homepage_news_for_teachers' => 0,
          'image' => 0,
          'kid_reporter' => 0,
          'kid_reporter_bottom_nodeblock' => 0,
          'kid_reporter_listing_nodeblock' => 0,
          'magazine_issue' => 0,
          'mini_lesson' => 0,
          'mini_site_home' => 0,
          'minisite' => 0,
          'news_brief' => 0,
          'news_channel_nodeblock' => 0,
          'page' => 0,
          'paper_step' => 0,
          'pdf_quiz' => 0,
          'poll' => 0,
          'slideshow' => 0,
          'store' => 0,
          'store_product' => 0,
          'teacher_board_nodeblock' => 0,
          'teacher_community_question' => 0,
          'tfk_extra' => 0,
          'tfk_extras_bottom_nodeblock' => 0,
          'tfk_extras_top_nodeblock' => 0,
          'tfk_lesson_for_tablets' => 0,
          'tfk_notification' => 0,
          'tfk_polldaddy' => 0,
          'tfk_staff' => 0,
          'video' => 0,
          'webform' => 0,
          'webform_generic' => 0,
          'worksheet' => 0,
          'writing_tips' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => '',
          'view_name' => '',
        ),
      ),
      'translatable' => '0',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'minisite',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_minisite_timeline',
      'label' => 'Timeline',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'node_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'node_reference/autocomplete',
          'size' => '60',
        ),
        'type' => 'node_reference_autocomplete',
        'weight' => '33',
      ),
    ),
  );

  // Exported field: 'node-minisite-field_minisite_tout_credit'.
  $fields['node-minisite-field_minisite_tout_credit'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_minisite_tout_credit',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
        'maxlength_field_minisite_tout_credit_js' => 0,
        'maxlength_field_minisite_tout_credit_text' => 'Content limited to !limit characters, remaining: <strong>!remaining</strong>',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'minisite',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '7',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_minisite_tout_credit',
      'label' => 'Tout Image Credit',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-minisite-field_minisite_tout_image'.
  $fields['node-minisite-field_minisite_tout_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_minisite_tout_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '1',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'minisite',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_minisite_tout_image',
      'label' => 'Tout Image',
      'required' => 1,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'filefield_paths' => array(
          'active_updating' => 0,
          'file_name' => array(
            'options' => array(
              'pathauto' => 0,
              'transliterate' => 1,
            ),
            'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
          ),
          'file_path' => array(
            'options' => array(
              'pathauto' => 0,
              'transliterate' => 0,
            ),
            'value' => '[node:created:custom:Y-m]',
          ),
          'retroactive_update' => 0,
        ),
        'filefield_paths_enabled' => 1,
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'insert' => 0,
          'insert_absolute' => 0,
          'insert_class' => '',
          'insert_default' => 'auto',
          'insert_styles' => array(
            'auto' => 'auto',
            'icon_link' => 0,
            'image' => 0,
            'image_115x115' => 0,
            'image_large' => 0,
            'image_medium' => 0,
            'image_slideshow_small_square' => 0,
            'image_tfk_140x187' => 0,
            'image_tfk_270x270' => 0,
            'image_tfk_50px_50px' => 0,
            'image_tfk_60x60' => 0,
            'image_tfk_71x95' => 0,
            'image_tfk_book' => 0,
            'image_tfk_book_thumb' => 0,
            'image_tfk_rect_large' => 0,
            'image_tfk_rect_medium' => 0,
            'image_tfk_rect_small' => 0,
            'image_tfk_square_large' => 0,
            'image_tfk_square_medium' => 0,
            'image_tfk_square_small' => 0,
            'image_thumbnail' => 0,
            'link' => 0,
          ),
          'insert_width' => '',
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '3',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional Content');
  t('Articles');
  t('Banner Image');
  t('Day In Life');
  t('Deck');
  t('Description');
  t('Field required in order to promote mini-site to primary and secondary tout positions.');
  t('Internal Use Only');
  t('Quiz');
  t('Resources');
  t('Resources Label');
  t('Thumbnail Image');
  t('Timeline');
  t('Tout Image');
  t('Tout Image Credit');

  return $fields;
}
