<?php
/**
 * @file
 * feature_tfk_news.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function feature_tfk_news_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'news_archive';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News Archive';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News Archive';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Fields: Tout Image (field_tout_image) - nid */
  $handler->display->display_options['relationships']['field_tout_image_nid']['id'] = 'field_tout_image_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['table'] = 'field_data_field_tout_image';
  $handler->display->display_options['relationships']['field_tout_image_nid']['field'] = 'field_tout_image_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_tout_image_nid']['delta'] = '-1';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_tout_image_nid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_date']['field_api_classes'] = 0;
  /* Field: Content: Deck */
  $handler->display->display_options['fields']['field_deck']['id'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['table'] = 'field_data_field_deck';
  $handler->display->display_options['fields']['field_deck']['field'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['label'] = '';
  $handler->display->display_options['fields']['field_deck']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_deck']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_deck']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_deck']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_deck']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_deck']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_deck']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_deck']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'Read Full Article';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
  /* Field: Content: Related Article */
  $handler->display->display_options['fields']['field_related_articles']['id'] = 'field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['field'] = 'field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_related_articles']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_related_articles']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_related_articles']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_related_articles']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['click_sort_column'] = 'nid';
  $handler->display->display_options['fields']['field_related_articles']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_related_articles']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_related_articles']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['field_api_classes'] = 0;
  /* Field: Content: Mini-Lessons */
  $handler->display->display_options['fields']['field_mini_lessons']['id'] = 'field_mini_lessons';
  $handler->display->display_options['fields']['field_mini_lessons']['table'] = 'field_data_field_mini_lessons';
  $handler->display->display_options['fields']['field_mini_lessons']['field'] = 'field_mini_lessons';
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_mini_lessons']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_mini_lessons']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['click_sort_column'] = 'nid';
  $handler->display->display_options['fields']['field_mini_lessons']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_mini_lessons']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_mini_lessons']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Taxonomy: Term */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['glossary'] = 0;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['name']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['name']['add_table'] = 0;
  $handler->display->display_options['arguments']['name']['require_value'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'news-archive';
  $translatables['news_archive'] = array(
    t('Master'),
    t('News Archive'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('field_tout_image'),
    t('Read Full Article'),
    t('Related Article'),
    t('Mini-Lessons'),
    t('All'),
    t('Page'),
  );
  $export['news_archive'] = $view;

  $view = new view;
  $view->name = 'teacher_news_news_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'teacher_news_news_block';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Flags: news_news_block */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'teacher_news_newsblock';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'news_news_block';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Fields: Tout Image (field_tout_image) - nid */
  $handler->display->display_options['relationships']['field_tout_image_nid']['id'] = 'field_tout_image_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['table'] = 'field_data_field_tout_image';
  $handler->display->display_options['relationships']['field_tout_image_nid']['field'] = 'field_tout_image_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['required'] = 1;
  $handler->display->display_options['relationships']['field_tout_image_nid']['delta'] = '-1';
  /* Relationship: Fields: Related Article (field_related_articles) - nid */
  $handler->display->display_options['relationships']['field_related_articles_nid']['id'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['relationships']['field_related_articles_nid']['field'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_related_articles_nid']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Deck */
  $handler->display->display_options['fields']['field_deck']['id'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['table'] = 'field_data_field_deck';
  $handler->display->display_options['fields']['field_deck']['field'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['label'] = '';
  $handler->display->display_options['fields']['field_deck']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_deck']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_deck']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_deck']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_deck']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_deck']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_deck']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_deck']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_deck']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['fields']['field_deck']['field_api_classes'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_date']['field_api_classes'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_tout_image_nid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Field: Content: Related Article */
  $handler->display->display_options['fields']['field_related_articles']['id'] = 'field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['field'] = 'field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['label'] = '';
  $handler->display->display_options['fields']['field_related_articles']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_related_articles']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_related_articles']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_related_articles']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['click_sort_column'] = 'nid';
  $handler->display->display_options['fields']['field_related_articles']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_related_articles']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_related_articles']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['field_api_classes'] = 0;
  /* Field: Content: Mini-Lessons */
  $handler->display->display_options['fields']['field_mini_lessons']['id'] = 'field_mini_lessons';
  $handler->display->display_options['fields']['field_mini_lessons']['table'] = 'field_data_field_mini_lessons';
  $handler->display->display_options['fields']['field_mini_lessons']['field'] = 'field_mini_lessons';
  $handler->display->display_options['fields']['field_mini_lessons']['label'] = '';
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_mini_lessons']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['click_sort_column'] = 'nid';
  $handler->display->display_options['fields']['field_mini_lessons']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_mini_lessons']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_mini_lessons']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['field_api_classes'] = 0;
  /* Sort criterion: Flags: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'flag_content';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'flag_content_rel';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flag_content';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';

  /* Display: Teacher News News Block */
  $handler = $view->new_display('block', 'Teacher News News Block', 'block_1');
  $handler->display->display_options['display_description'] = 'Teacher News News Block';
  $translatables['teacher_news_news_block'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('teacher_news_newsblock'),
    t('field_tout_image'),
    t('field_related_articles'),
    t('Teacher News News Block'),
  );
  $export['teacher_news_news_block'] = $view;

  $view = new view;
  $view->name = 'teacher_news_news_block_order';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'teacher_news_news_block_order';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Homepage News Block Order';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'draggabletable';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'weight' => 'weight',
  );
  $handler->display->display_options['style_options']['default'] = -1;
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'weight' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['style_options']['tabledrag_order'] = array(
    'field' => 'weight',
    'handler' => 'flag_weights',
  );
  $handler->display->display_options['style_options']['tabledrag_order_visible'] = array(
    'visible' => 0,
  );
  $handler->display->display_options['style_options']['tabledrag_hierarchy'] = array(
    'field' => 'none',
    'handler' => 'native',
  );
  $handler->display->display_options['style_options']['tabledrag_hierarchy_visible'] = array(
    'visible' => 0,
  );
  $handler->display->display_options['style_options']['draggableviews_depth_limit'] = '0';
  $handler->display->display_options['style_options']['draggableviews_repair'] = array(
    0 => 'repair',
    'repair' => 'repair',
  );
  $handler->display->display_options['style_options']['tabledrag_expand'] = array(
    'expand_links' => 0,
    'collapsed' => 0,
    'by_uid' => 0,
  );
  $handler->display->display_options['style_options']['draggableviews_extensions'] = array(
    'extension_top' => '3',
    'extension_bottom' => '3',
  );
  $handler->display->display_options['style_options']['tabledrag_lock'] = array(
    'lock' => 0,
  );
  $handler->display->display_options['style_options']['draggableviews_default_on_top'] = '1';
  $handler->display->display_options['style_options']['draggableviews_arguments'] = array(
    'use_args' => 0,
  );
  /* Relationship: Flags: news_news_block */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'news_news_block';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_date']['field_api_classes'] = 0;
  /* Field: Flags: Weight */
  $handler->display->display_options['fields']['weight']['id'] = 'weight';
  $handler->display->display_options['fields']['weight']['table'] = 'flag_content';
  $handler->display->display_options['fields']['weight']['field'] = 'weight';
  $handler->display->display_options['fields']['weight']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['weight']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['external'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['weight']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['weight']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['html'] = 0;
  $handler->display->display_options['fields']['weight']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['weight']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['weight']['hide_empty'] = 0;
  $handler->display->display_options['fields']['weight']['empty_zero'] = 0;
  $handler->display->display_options['fields']['weight']['format_plural'] = 0;
  /* Sort criterion: Flags: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'flag_content';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'flag_content_rel';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Teacher News Channel News Block Node Weights */
  $handler = $view->new_display('block', 'Teacher News Channel News Block Node Weights', 'block_1');
  $handler->display->display_options['display_description'] = 'Teacher News Channel News Block Node Weights';
  $translatables['teacher_news_news_block_order'] = array(
    t('Master'),
    t('Homepage News Block Order'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('flag'),
    t('Date'),
    t('Weight'),
    t('.'),
    t(','),
    t('Teacher News Channel News Block Node Weights'),
  );
  $export['teacher_news_news_block_order'] = $view;

  $view = new view;
  $view->name = 'teacher_news_top_story';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'teacher_news_top_story';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Flags: news_top_story */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'teacher_news_top_story';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'news_top_story';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Fields: Tout Image (field_tout_image) - nid */
  $handler->display->display_options['relationships']['field_tout_image_nid']['id'] = 'field_tout_image_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['table'] = 'field_data_field_tout_image';
  $handler->display->display_options['relationships']['field_tout_image_nid']['field'] = 'field_tout_image_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['required'] = 1;
  $handler->display->display_options['relationships']['field_tout_image_nid']['delta'] = '-1';
  /* Relationship: Fields: Related Article (field_related_articles) - nid */
  $handler->display->display_options['relationships']['field_related_articles_nid']['id'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['relationships']['field_related_articles_nid']['field'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_related_articles_nid']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_tout_image_nid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Field: Content: Deck */
  $handler->display->display_options['fields']['field_deck']['id'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['table'] = 'field_data_field_deck';
  $handler->display->display_options['fields']['field_deck']['field'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['label'] = '';
  $handler->display->display_options['fields']['field_deck']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_deck']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_deck']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_deck']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_deck']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_deck']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_deck']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_deck']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_deck']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['fields']['field_deck']['field_api_classes'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_date']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_related_articles_nid';
  $handler->display->display_options['fields']['title_1']['label'] = 'Related Article';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
  /* Sort criterion: Flags: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'flag_content';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'flag_content_rel';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flag_content';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';
  $handler->display->display_options['filters']['flagged']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['flagged']['expose']['label'] = 'Flagged';
  $handler->display->display_options['filters']['flagged']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['flagged']['expose']['operator'] = 'flagged_op';
  $handler->display->display_options['filters']['flagged']['expose']['identifier'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['flagged']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['flagged']['expose']['multiple'] = FALSE;

  /* Display: Teacher News Top Story Block */
  $handler = $view->new_display('block', 'Teacher News Top Story Block', 'block_1');
  $handler->display->display_options['display_description'] = 'Teacher News Top Story Block';
  $handler->display->display_options['block_description'] = 'Teacher News Top Story Block';
  $translatables['teacher_news_top_story'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('teacher_news_top_story'),
    t('field_tout_image'),
    t('field_related_articles'),
    t('Related Article'),
    t('Flagged'),
    t('Teacher News Top Story Block'),
  );
  $export['teacher_news_top_story'] = $view;

  return $export;
}
