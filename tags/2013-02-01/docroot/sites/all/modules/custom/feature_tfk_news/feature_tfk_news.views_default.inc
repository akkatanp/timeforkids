<?php
/**
 * @file
 * feature_tfk_news.views_default.inc
 */

/**
 * Implements hook_views_default_views().
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
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Tout Image (field_tout_image) */
  $handler->display->display_options['relationships']['field_tout_image_nid']['id'] = 'field_tout_image_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['table'] = 'field_data_field_tout_image';
  $handler->display->display_options['relationships']['field_tout_image_nid']['field'] = 'field_tout_image_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_tout_image_nid']['delta'] = '-1';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Field: Content: Large Rectangle Image */
  $handler->display->display_options['fields']['field_lrg_rect_image']['id'] = 'field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['table'] = 'field_data_field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['field'] = 'field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['label'] = '';
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lrg_rect_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lrg_rect_image']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_lrg_rect_image']['empty_zero'] = 1;
  $handler->display->display_options['fields']['field_lrg_rect_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lrg_rect_image']['settings'] = array(
    'image_style' => 'tfk_rect_small',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lrg_rect_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['field_deck']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_deck']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_deck']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'View Full Article';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 0;
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
  $handler->display->display_options['fields']['field_related_articles']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_related_articles']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_related_articles']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_related_articles']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_related_articles']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_related_articles']['empty_zero'] = 1;
  $handler->display->display_options['fields']['field_related_articles']['hide_alter_empty'] = 0;
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
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_mini_lessons']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_mini_lessons']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_mini_lessons']['empty_zero'] = 1;
  $handler->display->display_options['fields']['field_mini_lessons']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['type'] = 'tfk_news_grade_title';
  $handler->display->display_options['fields']['field_mini_lessons']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_mini_lessons']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_mini_lessons']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['separator'] = ' | ';
  $handler->display->display_options['fields']['field_mini_lessons']['field_api_classes'] = 0;
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
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
  /* Filter criterion: Content: Poll (field_article_poll) */
  $handler->display->display_options['filters']['field_article_poll_nid']['id'] = 'field_article_poll_nid';
  $handler->display->display_options['filters']['field_article_poll_nid']['table'] = 'field_data_field_article_poll';
  $handler->display->display_options['filters']['field_article_poll_nid']['field'] = 'field_article_poll_nid';
  $handler->display->display_options['filters']['field_article_poll_nid']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['path'] = 'news-archive';

  /* Display: Polls Page */
  $handler = $view->new_display('page', 'Polls Page', 'page_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_2']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title_2']['link_to_node'] = 0;
  /* Field: Content: Large Rectangle Image */
  $handler->display->display_options['fields']['field_lrg_rect_image']['id'] = 'field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['table'] = 'field_data_field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['field'] = 'field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['label'] = '';
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lrg_rect_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lrg_rect_image']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_lrg_rect_image']['empty_zero'] = 1;
  $handler->display->display_options['fields']['field_lrg_rect_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lrg_rect_image']['settings'] = array(
    'image_style' => 'tfk_rect_small',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lrg_rect_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="mytitleart">[title_2]</div> <div class="pollimg"></div>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
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
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['field_deck']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_deck']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_deck']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'View Full Article';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 0;
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
  $handler->display->display_options['fields']['field_related_articles']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_related_articles']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_related_articles']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_related_articles']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_related_articles']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_related_articles']['empty_zero'] = 1;
  $handler->display->display_options['fields']['field_related_articles']['hide_alter_empty'] = 0;
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
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_mini_lessons']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_mini_lessons']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_mini_lessons']['empty_zero'] = 1;
  $handler->display->display_options['fields']['field_mini_lessons']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['type'] = 'tfk_news_grade_title';
  $handler->display->display_options['fields']['field_mini_lessons']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_mini_lessons']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_mini_lessons']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['field_api_classes'] = 0;
  $handler->display->display_options['path'] = 'news-archive/polls';

  /* Display: News Archive Logged In */
  $handler = $view->new_display('block', 'News Archive Logged In', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['name']['default_argument_options']['code'] = '$args = arg();
if(isset($args[1]) && !is_numeric($args[1])){
return $args[1];
}elseif(isset($args[1]) && is_numeric($args[1])){
    return $args[1];
}else{
    return \'all\';
}';
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
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['block_description'] = 'News Archive Logged In Display';

  /* Display: News Archive Polls Logged In */
  $handler = $view->new_display('block', 'News Archive Polls Logged In', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Large Rectangle Image */
  $handler->display->display_options['fields']['field_lrg_rect_image']['id'] = 'field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['table'] = 'field_data_field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['field'] = 'field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['label'] = '';
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lrg_rect_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lrg_rect_image']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_lrg_rect_image']['empty_zero'] = 1;
  $handler->display->display_options['fields']['field_lrg_rect_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lrg_rect_image']['settings'] = array(
    'image_style' => 'tfk_rect_small',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lrg_rect_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="mytitleart">[title]</div> <div class="pollimg"></div>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
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
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['field_deck']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_deck']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_deck']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'View Full Article';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 0;
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
  $handler->display->display_options['fields']['field_related_articles']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_related_articles']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_related_articles']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_related_articles']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_related_articles']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_related_articles']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_related_articles']['empty_zero'] = 1;
  $handler->display->display_options['fields']['field_related_articles']['hide_alter_empty'] = 0;
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
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_mini_lessons']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_mini_lessons']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_mini_lessons']['empty_zero'] = 1;
  $handler->display->display_options['fields']['field_mini_lessons']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['type'] = 'tfk_news_grade_title';
  $handler->display->display_options['fields']['field_mini_lessons']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_mini_lessons']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_mini_lessons']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_mini_lessons']['separator'] = ' | ';
  $handler->display->display_options['fields']['field_mini_lessons']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Filter criterion: Content: Poll (field_article_poll) */
  $handler->display->display_options['filters']['field_article_poll_nid']['id'] = 'field_article_poll_nid';
  $handler->display->display_options['filters']['field_article_poll_nid']['table'] = 'field_data_field_article_poll';
  $handler->display->display_options['filters']['field_article_poll_nid']['field'] = 'field_article_poll_nid';
  $handler->display->display_options['filters']['field_article_poll_nid']['operator'] = 'not empty';
  $handler->display->display_options['block_description'] = 'News Archive Polls Logged In';

  /* Display: News Archive Logged Out */
  $handler = $view->new_display('block', 'News Archive Logged Out', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Tout Image (field_tout_image) */
  $handler->display->display_options['relationships']['field_tout_image_nid']['id'] = 'field_tout_image_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['table'] = 'field_data_field_tout_image';
  $handler->display->display_options['relationships']['field_tout_image_nid']['field'] = 'field_tout_image_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_tout_image_nid']['delta'] = '-1';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Relationship: Flags: magazine_cover_story */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'magazine_cover_story';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Large Rectangle Image */
  $handler->display->display_options['fields']['field_lrg_rect_image']['id'] = 'field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['table'] = 'field_data_field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['field'] = 'field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['label'] = '';
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lrg_rect_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lrg_rect_image']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_lrg_rect_image']['empty_zero'] = 1;
  $handler->display->display_options['fields']['field_lrg_rect_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lrg_rect_image']['settings'] = array(
    'image_style' => 'tfk_rect_small',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lrg_rect_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['field_deck']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_deck']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_deck']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'View Full Article';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['name']['default_argument_options']['code'] = '$args = arg();
if(isset($args[1]) && !is_numeric($args[1])){
return $args[1];
}elseif(isset($args[1]) && is_numeric($args[1])){
    return $args[1];
}else{
    return \'all\';
}';
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
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['flagged']['value'] = '0';

  /* Display: News Archive Polls Logged Out */
  $handler = $view->new_display('block', 'News Archive Polls Logged Out', 'block_4');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Tout Image (field_tout_image) */
  $handler->display->display_options['relationships']['field_tout_image_nid']['id'] = 'field_tout_image_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['table'] = 'field_data_field_tout_image';
  $handler->display->display_options['relationships']['field_tout_image_nid']['field'] = 'field_tout_image_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_tout_image_nid']['delta'] = '-1';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Relationship: Flags: magazine_cover_story */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'magazine_cover_story';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Large Rectangle Image */
  $handler->display->display_options['fields']['field_lrg_rect_image']['id'] = 'field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['table'] = 'field_data_field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['field'] = 'field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['label'] = '';
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lrg_rect_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lrg_rect_image']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_lrg_rect_image']['empty_zero'] = 1;
  $handler->display->display_options['fields']['field_lrg_rect_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lrg_rect_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lrg_rect_image']['settings'] = array(
    'image_style' => 'tfk_rect_small',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lrg_rect_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="mytitleart">[title]</div> <div class="pollimg"></div>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
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
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['field_deck']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_deck']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_deck']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'View Full Article';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Filter criterion: Content: Poll (field_article_poll) */
  $handler->display->display_options['filters']['field_article_poll_nid']['id'] = 'field_article_poll_nid';
  $handler->display->display_options['filters']['field_article_poll_nid']['table'] = 'field_data_field_article_poll';
  $handler->display->display_options['filters']['field_article_poll_nid']['field'] = 'field_article_poll_nid';
  $handler->display->display_options['filters']['field_article_poll_nid']['operator'] = 'not empty';
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flag_content';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '0';
  $export['news_archive'] = $view;

  return $export;
}
