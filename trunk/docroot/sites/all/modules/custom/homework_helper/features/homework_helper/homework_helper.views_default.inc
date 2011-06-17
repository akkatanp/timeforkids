<?php
/**
 * @file
 * homework_helper.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function homework_helper_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'a_papers';
  $view->description = 'The landing page for A+ Papers, listing all A+ Paper types';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'A+ Papers';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'A+ Papers';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_checklist_file' => 'field_checklist_file',
    'field_graphic_organizer' => 'field_graphic_organizer',
    'field_sample_paper' => 'field_sample_paper',
    'field_step_instructions' => 'field_step_instructions',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<p>Pellentesque cursus, velit sed dapibus auctor, eros massa feugiat dolor, at luctus nisi nisl quis lectus. Praesent at volutpat tortor. Etiam diam mi, rhoncus sit amet porttitor vel, dapibus a lacus! Proin ultricies vestibulum sollicitudin. Suspendisse lacinia tempus justo, eget convallis lacus amet.</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No A+ Papers have been created yet.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_paper_image']['id'] = 'field_paper_image';
  $handler->display->display_options['fields']['field_paper_image']['table'] = 'field_data_field_paper_image';
  $handler->display->display_options['fields']['field_paper_image']['field'] = 'field_paper_image';
  $handler->display->display_options['fields']['field_paper_image']['label'] = '';
  $handler->display->display_options['fields']['field_paper_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_paper_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_paper_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_paper_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_paper_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_paper_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_paper_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_paper_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_paper_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_paper_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_paper_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_paper_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_paper_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_paper_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_paper_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_paper_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_paper_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_paper_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_paper_image']['settings'] = array(
    'image_style' => '115x115',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_paper_image']['field_api_classes'] = 0;
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body_1']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['preserve_tags'] = '<p><br>';
  $handler->display->display_options['fields']['body_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body_1']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body_1] <a href="/node/[nid]">Get Started!</a>';
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<p><br>';
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Checklist PDF */
  $handler->display->display_options['fields']['field_checklist_file']['id'] = 'field_checklist_file';
  $handler->display->display_options['fields']['field_checklist_file']['table'] = 'field_data_field_checklist_file';
  $handler->display->display_options['fields']['field_checklist_file']['field'] = 'field_checklist_file';
  $handler->display->display_options['fields']['field_checklist_file']['label'] = '';
  $handler->display->display_options['fields']['field_checklist_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_checklist_file']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_checklist_file']['alter']['text'] = 'Checklist';
  $handler->display->display_options['fields']['field_checklist_file']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_checklist_file']['alter']['path'] = '[field_checklist_file]';
  $handler->display->display_options['fields']['field_checklist_file']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_checklist_file']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_checklist_file']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_checklist_file']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_checklist_file']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_checklist_file']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_checklist_file']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_checklist_file']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_checklist_file']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_checklist_file']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_checklist_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_checklist_file']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_checklist_file']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_checklist_file']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_checklist_file']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_checklist_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_checklist_file']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_checklist_file']['field_api_classes'] = 0;
  /* Field: Content: Graphic Organizer */
  $handler->display->display_options['fields']['field_graphic_organizer']['id'] = 'field_graphic_organizer';
  $handler->display->display_options['fields']['field_graphic_organizer']['table'] = 'field_data_field_graphic_organizer';
  $handler->display->display_options['fields']['field_graphic_organizer']['field'] = 'field_graphic_organizer';
  $handler->display->display_options['fields']['field_graphic_organizer']['label'] = '';
  $handler->display->display_options['fields']['field_graphic_organizer']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_graphic_organizer']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_graphic_organizer']['alter']['text'] = 'Graphic Organizer';
  $handler->display->display_options['fields']['field_graphic_organizer']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_graphic_organizer']['alter']['path'] = '[field_graphic_organizer]';
  $handler->display->display_options['fields']['field_graphic_organizer']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_graphic_organizer']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_graphic_organizer']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_graphic_organizer']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_graphic_organizer']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_graphic_organizer']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_graphic_organizer']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_graphic_organizer']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_graphic_organizer']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_graphic_organizer']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_graphic_organizer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_graphic_organizer']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_graphic_organizer']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_graphic_organizer']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_graphic_organizer']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_graphic_organizer']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_graphic_organizer']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_graphic_organizer']['field_api_classes'] = 0;
  /* Field: Content: Sample Paper */
  $handler->display->display_options['fields']['field_sample_paper']['id'] = 'field_sample_paper';
  $handler->display->display_options['fields']['field_sample_paper']['table'] = 'field_data_field_sample_paper';
  $handler->display->display_options['fields']['field_sample_paper']['field'] = 'field_sample_paper';
  $handler->display->display_options['fields']['field_sample_paper']['label'] = '';
  $handler->display->display_options['fields']['field_sample_paper']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sample_paper']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_sample_paper']['alter']['text'] = 'Model Paper';
  $handler->display->display_options['fields']['field_sample_paper']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_sample_paper']['alter']['path'] = '[field_sample_paper]';
  $handler->display->display_options['fields']['field_sample_paper']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sample_paper']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sample_paper']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sample_paper']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_sample_paper']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sample_paper']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sample_paper']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sample_paper']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sample_paper']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sample_paper']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sample_paper']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sample_paper']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sample_paper']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_sample_paper']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sample_paper']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_sample_paper']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sample_paper']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_sample_paper']['field_api_classes'] = 0;
  /* Field: Content: Step-by-Step Instructions */
  $handler->display->display_options['fields']['field_step_instructions']['id'] = 'field_step_instructions';
  $handler->display->display_options['fields']['field_step_instructions']['table'] = 'field_data_field_step_instructions';
  $handler->display->display_options['fields']['field_step_instructions']['field'] = 'field_step_instructions';
  $handler->display->display_options['fields']['field_step_instructions']['label'] = '';
  $handler->display->display_options['fields']['field_step_instructions']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_step_instructions']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_step_instructions']['alter']['text'] = 'Step-by-Step Instructions';
  $handler->display->display_options['fields']['field_step_instructions']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_step_instructions']['alter']['path'] = '[field_step_instructions]';
  $handler->display->display_options['fields']['field_step_instructions']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_step_instructions']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_step_instructions']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_step_instructions']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_step_instructions']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_step_instructions']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_step_instructions']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_step_instructions']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_step_instructions']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_step_instructions']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_step_instructions']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_step_instructions']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_step_instructions']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_step_instructions']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_step_instructions']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_step_instructions']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_step_instructions']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_step_instructions']['field_api_classes'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div>Additional Content</div>
RELATED PDFS: [field_checklist_file] [field_checklist_file] [field_sample_paper] [field_step_instructions]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
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
    'a_paper' => 'a_paper',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'homework-helper/writing-center/a-plus-papers';
  $handler->display->display_options['menu']['title'] = 'A+ Papers';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['a_papers'] = $view;

  $view = new view;
  $view->name = 'admin_section';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Homework Helper Admin';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Admin Section';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer content types';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<p><a href="/node/add/a-paper">+ Add new A+ paper</a> | <a href="/node/add/paper-step">+ Add new A+ paper step</a></p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No Study Helpers have been created.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Field: Content: Bulk operations */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Update';
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['selected_operations'] = array(
    'views_bulk_operations_delete_item' => 'views_bulk_operations_delete_item',
    'node_publish_action' => 'node_publish_action',
    'node_unpublish_action' => 'node_unpublish_action',
  );
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['execution_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['skip_confirmation'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Published Status';
  $handler->display->display_options['fields']['status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['status']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_tips_category']['id'] = 'field_tips_category';
  $handler->display->display_options['fields']['field_tips_category']['table'] = 'field_data_field_tips_category';
  $handler->display->display_options['fields']['field_tips_category']['field'] = 'field_tips_category';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'a_paper' => 'a_paper',
  );

  /* Display: A+ Papers */
  $handler = $view->new_display('page', 'A+ Papers', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'A+ Papers';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No A+ Papers have been created.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['path'] = 'admin/content/homework-helper/a-plus-papers';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'A+ Papers';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Homework Helper';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'management';

  /* Display: A+ Steps */
  $handler = $view->new_display('page', 'A+ Steps', 'page_1');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No steps have been added to this paper.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Bulk operations */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Update';
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['selected_operations'] = array(
    'views_bulk_operations_delete_item' => 'views_bulk_operations_delete_item',
    'node_publish_action' => 'node_publish_action',
    'node_unpublish_action' => 'node_unpublish_action',
  );
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['execution_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['skip_confirmation'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Published Status';
  $handler->display->display_options['fields']['status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['status']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Weight */
  $handler->display->display_options['fields']['field_step_weight']['id'] = 'field_step_weight';
  $handler->display->display_options['fields']['field_step_weight']['table'] = 'field_data_field_step_weight';
  $handler->display->display_options['fields']['field_step_weight']['field'] = 'field_step_weight';
  $handler->display->display_options['fields']['field_step_weight']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_step_weight']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_step_weight']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_step_weight']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_step_weight']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_step_weight']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_step_weight']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_step_weight']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_step_weight']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_step_weight']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_step_weight']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_step_weight']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_step_weight']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_step_weight']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_step_weight']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_step_weight']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_step_weight']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_step_weight']['field_api_classes'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Weight (field_step_weight) */
  $handler->display->display_options['sorts']['field_step_weight_value']['id'] = 'field_step_weight_value';
  $handler->display->display_options['sorts']['field_step_weight_value']['table'] = 'field_data_field_step_weight';
  $handler->display->display_options['sorts']['field_step_weight_value']['field'] = 'field_step_weight_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Parent paper (field_step_parent) */
  $handler->display->display_options['arguments']['field_step_parent_nid']['id'] = 'field_step_parent_nid';
  $handler->display->display_options['arguments']['field_step_parent_nid']['table'] = 'field_data_field_step_parent';
  $handler->display->display_options['arguments']['field_step_parent_nid']['field'] = 'field_step_parent_nid';
  $handler->display->display_options['arguments']['field_step_parent_nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_step_parent_nid']['title_enable'] = 1;
  $handler->display->display_options['arguments']['field_step_parent_nid']['title'] = '%1 steps';
  $handler->display->display_options['arguments']['field_step_parent_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_step_parent_nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_step_parent_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_step_parent_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_step_parent_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_step_parent_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_step_parent_nid']['not'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'paper_step' => 'paper_step',
  );
  $handler->display->display_options['path'] = 'admin/content/homework-helper/a-plus-papers/steps/%';

  /* Display: Study Helpers */
  $handler = $view->new_display('page', 'Study Helpers', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Study Helpers';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p><a href="/node/add/flashcard">+ Add new Flashcard Deck</a></p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No Study Helpers have been created.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Bulk operations */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Update';
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['selected_operations'] = array(
    'views_bulk_operations_delete_item' => 'views_bulk_operations_delete_item',
    'node_publish_action' => 'node_publish_action',
    'node_unpublish_action' => 'node_unpublish_action',
  );
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['execution_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['skip_confirmation'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Published Status';
  $handler->display->display_options['fields']['status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['status']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'flashcard' => 'flashcard',
  );
  $handler->display->display_options['path'] = 'admin/content/homework-helper/study-helper';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Study Helper';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Writing Tips */
  $handler = $view->new_display('page', 'Writing Tips', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Writing Tips';
  $handler->display->display_options['display_description'] = 'Writing Tips admin page';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p><a href="/node/add/writing-tips">+ Add new Writing Tip</a></p><p><a href="/node/144/webform-results/table">+ User Submitted Questions</a></p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Bulk operations */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Update';
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['selected_operations'] = array(
    'views_bulk_operations_delete_item' => 'views_bulk_operations_delete_item',
    'node_publish_action' => 'node_publish_action',
    'node_unpublish_action' => 'node_unpublish_action',
  );
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['execution_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['skip_confirmation'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Published Status';
  $handler->display->display_options['fields']['status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['status']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_tips_category']['id'] = 'field_tips_category';
  $handler->display->display_options['fields']['field_tips_category']['table'] = 'field_data_field_tips_category';
  $handler->display->display_options['fields']['field_tips_category']['field'] = 'field_tips_category';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'writing_tips' => 'writing_tips',
  );
  $handler->display->display_options['path'] = 'admin/content/homework-helper/writing-tips';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Writing Tips';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-homework-help';
  $export['admin_section'] = $view;

  $view = new view;
  $view->name = 'flashcard_expirations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Flashcard Expirations';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'flashcard' => 'flashcard',
  );
  /* Filter criterion: Date is older than 2 weeks ago */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['ui_name'] = 'Date is older than 2 weeks ago';
  $handler->display->display_options['filters']['created']['operator'] = '<=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-14 days';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  /* Filter criterion: Author is anonymous */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['ui_name'] = 'Author is anonymous';
  $export['flashcard_expirations'] = $view;

  $view = new view;
  $view->name = 'writing_tips';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Writing Tips';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Writing Tips';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['grouping'] = 'field_tips_category';
  $handler->display->display_options['style_options']['use-grouping-header'] = 1;
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = 'none';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Question';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Answer';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_tips_category']['id'] = 'field_tips_category';
  $handler->display->display_options['fields']['field_tips_category']['table'] = 'field_data_field_tips_category';
  $handler->display->display_options['fields']['field_tips_category']['field'] = 'field_tips_category';
  $handler->display->display_options['fields']['field_tips_category']['label'] = '';
  $handler->display->display_options['fields']['field_tips_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tips_category']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tips_category']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tips_category']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tips_category']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tips_category']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tips_category']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tips_category']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tips_category']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tips_category']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tips_category']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tips_category']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tips_category']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tips_category']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_tips_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tips_category']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tips_category']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tips_category']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tips_category']['field_api_classes'] = 0;
  /* Field: Content: Thumbnail Image */
  $handler->display->display_options['fields']['field_thumbnail_image']['id'] = 'field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['table'] = 'field_data_field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['field'] = 'field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['label'] = '';
  $handler->display->display_options['fields']['field_thumbnail_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_thumbnail_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_thumbnail_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_thumbnail_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_thumbnail_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_thumbnail_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_thumbnail_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_thumbnail_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_thumbnail_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_thumbnail_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_thumbnail_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_thumbnail_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_thumbnail_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_thumbnail_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_thumbnail_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_thumbnail_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_thumbnail_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_thumbnail_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_thumbnail_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_thumbnail_image']['field_api_classes'] = 0;
  /* Sort criterion: Content: Category (field_tips_category) */
  $handler->display->display_options['sorts']['field_tips_category_tid']['id'] = 'field_tips_category_tid';
  $handler->display->display_options['sorts']['field_tips_category_tid']['table'] = 'field_data_field_tips_category';
  $handler->display->display_options['sorts']['field_tips_category_tid']['field'] = 'field_tips_category_tid';
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
    'writing_tips' => 'writing_tips',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'homework-helper/writing-tips';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Expert Writing Tips';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-homework-help';
  $export['writing_tips'] = $view;

  return $export;
}
