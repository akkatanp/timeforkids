<?php
/**
 * @file
 * tfk_favorites_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tfk_favorites_feature_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'user_favorites';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'User Favorites';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Favorites';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'search-result';
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['style_options']['class'] = 'tfk-search-results-photos-video';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
    'field_grade_level' => 'field_grade_level',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'You have no favorites';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = '<p>You have no favorites. Mark content as favorite for it to appear on this page.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Relationship: Flags: favorites */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'favorites';
  /* Relationship: Content: Related Article (field_related_articles) */
  $handler->display->display_options['relationships']['field_related_articles_nid']['id'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['relationships']['field_related_articles_nid']['field'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_related_articles_nid']['delta'] = '0';
  /* Relationship: Content: Images (field_slideshow_images) */
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['id'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['table'] = 'field_data_field_slideshow_images';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['field'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['delta'] = '0';
  /* Field: Content: Deck */
  $handler->display->display_options['fields']['field_deck']['id'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['table'] = 'field_data_field_deck';
  $handler->display->display_options['fields']['field_deck']['field'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['label'] = '';
  $handler->display->display_options['fields']['field_deck']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_deck']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['max_length'] = '160';
  $handler->display->display_options['fields']['field_deck']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_deck']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_deck']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_deck']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_deck']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_deck']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_deck']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_deck']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_deck']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_deck']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_deck']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_deck']['field_api_classes'] = 0;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_slideshow_description']['id'] = 'field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['table'] = 'field_data_field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['field'] = 'field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['max_length'] = '160';
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slideshow_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slideshow_description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slideshow_description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slideshow_description']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_slideshow_description']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_slideshow_description']['field_api_classes'] = 0;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ops']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['external'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['ops']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['ops']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['html'] = 0;
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ops']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['ops']['hide_empty'] = 0;
  $handler->display->display_options['fields']['ops']['empty_zero'] = 0;
  $handler->display->display_options['fields']['ops']['hide_alter_empty'] = 0;
  /* Field: Content: Worksheet PDF */
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['id'] = 'field_worksheet_pdf_private';
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['table'] = 'field_data_field_worksheet_pdf_private';
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['field'] = 'field_worksheet_pdf_private';
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['label'] = '';
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['alter']['text'] = '<a href="[field_worksheet_pdf_private]">Download this Printable</a>';
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['empty_zero'] = 1;
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['field_api_classes'] = 0;
  /* Field: Content: PDF file private */
  $handler->display->display_options['fields']['field_pdf_file_private']['id'] = 'field_pdf_file_private';
  $handler->display->display_options['fields']['field_pdf_file_private']['table'] = 'field_data_field_pdf_file_private';
  $handler->display->display_options['fields']['field_pdf_file_private']['field'] = 'field_pdf_file_private';
  $handler->display->display_options['fields']['field_pdf_file_private']['label'] = '';
  $handler->display->display_options['fields']['field_pdf_file_private']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pdf_file_private']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_pdf_file_private']['alter']['text'] = '<a href="[field_pdf_file_private]">Download this Quiz</a>';
  $handler->display->display_options['fields']['field_pdf_file_private']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_pdf_file_private']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_pdf_file_private']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_pdf_file_private']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_pdf_file_private']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_pdf_file_private']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_pdf_file_private']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_pdf_file_private']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_pdf_file_private']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_pdf_file_private']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_pdf_file_private']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_pdf_file_private']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pdf_file_private']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_pdf_file_private']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_pdf_file_private']['empty_zero'] = 1;
  $handler->display->display_options['fields']['field_pdf_file_private']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_pdf_file_private']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pdf_file_private']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_pdf_file_private']['field_api_classes'] = 0;
  /* Field: Content: Skills */
  $handler->display->display_options['fields']['field_skills']['id'] = 'field_skills';
  $handler->display->display_options['fields']['field_skills']['table'] = 'field_data_field_skills';
  $handler->display->display_options['fields']['field_skills']['field'] = 'field_skills';
  $handler->display->display_options['fields']['field_skills']['label'] = '';
  $handler->display->display_options['fields']['field_skills']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_skills']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_skills']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_skills']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_skills']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_skills']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_skills']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_skills']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_skills']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_skills']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_skills']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_skills']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_skills']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_skills']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_skills']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_skills']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_skills']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_skills']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_skills']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_skills']['field_api_classes'] = 0;
  /* Field: Fields: Grade Level */
  $handler->display->display_options['fields']['field_grade_level']['id'] = 'field_grade_level';
  $handler->display->display_options['fields']['field_grade_level']['table'] = 'field_data_field_grade_level';
  $handler->display->display_options['fields']['field_grade_level']['field'] = 'field_grade_level';
  $handler->display->display_options['fields']['field_grade_level']['label'] = '';
  $handler->display->display_options['fields']['field_grade_level']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_grade_level']['alter']['text'] = '<span class="ctype">[field_skills]</span>
<span class="ctype-suffix"> [field_grade_level]</span>';
  $handler->display->display_options['fields']['field_grade_level']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_grade_level']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_grade_level']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_grade_level']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_grade_level']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_grade_level']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_grade_level']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_grade_level']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_grade_level']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_grade_level']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_grade_level']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_grade_level']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_grade_level']['element_class'] = 'content-type';
  $handler->display->display_options['fields']['field_grade_level']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_grade_level']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_grade_level']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_grade_level']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_grade_level']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_grade_level']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_grade_level']['field_api_classes'] = 0;
  /* Field: Content: Thumbnail Image */
  $handler->display->display_options['fields']['field_worksheet_thumbnail_image']['id'] = 'field_worksheet_thumbnail_image';
  $handler->display->display_options['fields']['field_worksheet_thumbnail_image']['table'] = 'field_data_field_worksheet_thumbnail_image';
  $handler->display->display_options['fields']['field_worksheet_thumbnail_image']['field'] = 'field_worksheet_thumbnail_image';
  $handler->display->display_options['fields']['field_worksheet_thumbnail_image']['label'] = '';
  $handler->display->display_options['fields']['field_worksheet_thumbnail_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_worksheet_thumbnail_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_worksheet_thumbnail_image']['alter']['text'] = '[field_worksheet_thumbnail_image]
[field_worksheet_thumbnail_image-fid]
[field_worksheet_thumbnail_image-alt]
[field_worksheet_thumbnail_image-title] ';
  $handler->display->display_options['fields']['field_worksheet_thumbnail_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_worksheet_thumbnail_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_worksheet_thumbnail_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_worksheet_thumbnail_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_worksheet_thumbnail_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_worksheet_thumbnail_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_worksheet_thumbnail_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_worksheet_thumbnail_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_worksheet_thumbnail_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_worksheet_thumbnail_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_worksheet_thumbnail_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_worksheet_thumbnail_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_worksheet_thumbnail_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_worksheet_thumbnail_image']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_worksheet_thumbnail_image']['empty_zero'] = 1;
  $handler->display->display_options['fields']['field_worksheet_thumbnail_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_worksheet_thumbnail_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_worksheet_thumbnail_image']['settings'] = array(
    'image_style' => '115x115',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_worksheet_thumbnail_image']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '115';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_related_articles_nid';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['path']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['path']['alter']['external'] = 0;
  $handler->display->display_options['fields']['path']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['path']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['path']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['path']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['path']['alter']['html'] = 0;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['path']['hide_empty'] = 0;
  $handler->display->display_options['fields']['path']['empty_zero'] = 0;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['path']['absolute'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="col1">
[field_worksheet_thumbnail_image]
</div>

<div class="col2">

<h3 class="title">
[title]
</h3>

<div class="view-full-article"><a href="[path]">See Related Article</a></div>

  <div class="search-snippet-info">
   <div class="search-snippet-body">
     [field_deck]
     [field_slideshow_description]
     [body]
   </div>

   <div class="search-result-links">
      <span class="search-result-download-link"> [field_worksheet_pdf_private] </span>
       [ops] 
   </div>

  </div>

</div>';
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
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'row2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Additional Content */
  $handler->display->display_options['fields']['field_additional_content']['id'] = 'field_additional_content';
  $handler->display->display_options['fields']['field_additional_content']['table'] = 'field_data_field_additional_content';
  $handler->display->display_options['fields']['field_additional_content']['field'] = 'field_additional_content';
  $handler->display->display_options['fields']['field_additional_content']['label'] = '';
  $handler->display->display_options['fields']['field_additional_content']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_additional_content']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_additional_content']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_additional_content']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_additional_content']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_additional_content']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_additional_content']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_additional_content']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_additional_content']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_additional_content']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_additional_content']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_additional_content']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_additional_content']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_additional_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_additional_content']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_additional_content']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_additional_content']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_additional_content']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_additional_content']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_additional_content']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_additional_content']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_additional_content']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_additional_content']['field_api_classes'] = 0;
  /* Field: Content: Large Square Image */
  $handler->display->display_options['fields']['field_video_thumbnail']['id'] = 'field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['table'] = 'field_data_field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['field'] = 'field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_video_thumbnail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_video_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_thumbnail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_video_thumbnail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_video_thumbnail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_video_thumbnail']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_video_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video_thumbnail']['settings'] = array(
    'image_style' => '115x115',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_video_thumbnail']['field_api_classes'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_slideshow_images_nid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '115x115',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Field: Content: Thumbnail Image */
  $handler->display->display_options['fields']['field_common_core_thumbnail']['id'] = 'field_common_core_thumbnail';
  $handler->display->display_options['fields']['field_common_core_thumbnail']['table'] = 'field_data_field_common_core_thumbnail';
  $handler->display->display_options['fields']['field_common_core_thumbnail']['field'] = 'field_common_core_thumbnail';
  $handler->display->display_options['fields']['field_common_core_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_common_core_thumbnail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_common_core_thumbnail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_common_core_thumbnail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_common_core_thumbnail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_common_core_thumbnail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_common_core_thumbnail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_common_core_thumbnail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_common_core_thumbnail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_common_core_thumbnail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_common_core_thumbnail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_common_core_thumbnail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_common_core_thumbnail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_common_core_thumbnail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_common_core_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_common_core_thumbnail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_common_core_thumbnail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_common_core_thumbnail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_common_core_thumbnail']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_common_core_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_common_core_thumbnail']['settings'] = array(
    'image_style' => '115x115',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_common_core_thumbnail']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flag_content';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'my-favorites';
  $export['user_favorites'] = $view;

  return $export;
}
