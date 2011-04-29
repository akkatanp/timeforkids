<?php
/**
 * @file
 * time_for_kids.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function time_for_kids_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'articles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Articles';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Articles';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'name' => 'name',
    'created' => 'created',
    'field_external_link' => 'field_external_link',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_external_link' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
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
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
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
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Content: External Link */
  $handler->display->display_options['fields']['field_external_link']['id'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link']['table'] = 'field_data_field_external_link';
  $handler->display->display_options['fields']['field_external_link']['field'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_external_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_external_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_external_link']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_external_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_external_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_external_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_external_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_external_link']['type'] = 'url';
  $handler->display->display_options['fields']['field_external_link']['field_api_classes'] = 0;
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'articles';
  $translatables['articles'] = array(
    t('Master'),
    t('Articles'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Image'),
    t('Name'),
    t('Post date'),
    t('External Link'),
    t('Page'),
  );
  $export['articles'] = $view;

  $view = new view;
  $view->name = 'destinations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Destinations';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Destinations';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2> [title] </h2>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Population */
  $handler->display->display_options['fields']['field_population']['id'] = 'field_population';
  $handler->display->display_options['fields']['field_population']['table'] = 'field_data_field_population';
  $handler->display->display_options['fields']['field_population']['field'] = 'field_population';
  $handler->display->display_options['fields']['field_population']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_population']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_population']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_population']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_population']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_population']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_population']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_population']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_population']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_population']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_population']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_population']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_population']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_population']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_population']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_population']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_population']['field_api_classes'] = 0;
  /* Field: Content: Flag */
  $handler->display->display_options['fields']['field_flag']['id'] = 'field_flag';
  $handler->display->display_options['fields']['field_flag']['table'] = 'field_data_field_flag';
  $handler->display->display_options['fields']['field_flag']['field'] = 'field_flag';
  $handler->display->display_options['fields']['field_flag']['label'] = '';
  $handler->display->display_options['fields']['field_flag']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_flag']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_flag']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_flag']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_flag']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_flag']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_flag']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_flag']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_flag']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_flag']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_flag']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_flag']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_flag']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_flag']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_flag']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_flag']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_flag']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_flag']['field_api_classes'] = 0;
  /* Field: Content: Internal link */
  $handler->display->display_options['fields']['field_internal_links']['id'] = 'field_internal_links';
  $handler->display->display_options['fields']['field_internal_links']['table'] = 'field_data_field_internal_links';
  $handler->display->display_options['fields']['field_internal_links']['field'] = 'field_internal_links';
  $handler->display->display_options['fields']['field_internal_links']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_internal_links']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_internal_links']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_internal_links']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_internal_links']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_internal_links']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_internal_links']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_internal_links']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_internal_links']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_internal_links']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_internal_links']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_internal_links']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_internal_links']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_internal_links']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_internal_links']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_internal_links']['click_sort_column'] = 'nid';
  $handler->display->display_options['fields']['field_internal_links']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Fields: continent (field_continent) */
  $handler->display->display_options['arguments']['field_continent_value']['id'] = 'field_continent_value';
  $handler->display->display_options['arguments']['field_continent_value']['table'] = 'field_data_field_continent';
  $handler->display->display_options['arguments']['field_continent_value']['field'] = 'field_continent_value';
  $handler->display->display_options['arguments']['field_continent_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_continent_value']['summary']['format'] = 'default_summary';
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
    'destination' => 'destination',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'destinations';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Destinations';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-kids';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2> [title] </h2>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Population */
  $handler->display->display_options['fields']['field_population']['id'] = 'field_population';
  $handler->display->display_options['fields']['field_population']['table'] = 'field_data_field_population';
  $handler->display->display_options['fields']['field_population']['field'] = 'field_population';
  $handler->display->display_options['fields']['field_population']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_population']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_population']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_population']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_population']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_population']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_population']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_population']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_population']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_population']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_population']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_population']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_population']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_population']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_population']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_population']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_population']['field_api_classes'] = 0;
  /* Field: Content: Flag */
  $handler->display->display_options['fields']['field_flag']['id'] = 'field_flag';
  $handler->display->display_options['fields']['field_flag']['table'] = 'field_data_field_flag';
  $handler->display->display_options['fields']['field_flag']['field'] = 'field_flag';
  $handler->display->display_options['fields']['field_flag']['label'] = '';
  $handler->display->display_options['fields']['field_flag']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_flag']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_flag']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_flag']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_flag']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_flag']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_flag']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_flag']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_flag']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_flag']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_flag']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_flag']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_flag']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_flag']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_flag']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_flag']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_flag']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_flag']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Fields: continent (field_continent) */
  $handler->display->display_options['arguments']['field_continent_value']['id'] = 'field_continent_value';
  $handler->display->display_options['arguments']['field_continent_value']['table'] = 'field_data_field_continent';
  $handler->display->display_options['arguments']['field_continent_value']['field'] = 'field_continent_value';
  $handler->display->display_options['arguments']['field_continent_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_continent_value']['summary']['format'] = 'default_summary';
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
    'destination' => 'destination',
  );

  /* Display: Page Beijing */
  $handler = $view->new_display('page', 'Page Beijing', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Articles about nice places';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2> [title] </h2>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Population */
  $handler->display->display_options['fields']['field_population']['id'] = 'field_population';
  $handler->display->display_options['fields']['field_population']['table'] = 'field_data_field_population';
  $handler->display->display_options['fields']['field_population']['field'] = 'field_population';
  $handler->display->display_options['fields']['field_population']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_population']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_population']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_population']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_population']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_population']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_population']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_population']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_population']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_population']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_population']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_population']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_population']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_population']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_population']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_population']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_population']['field_api_classes'] = 0;
  /* Field: Content: Flag */
  $handler->display->display_options['fields']['field_flag']['id'] = 'field_flag';
  $handler->display->display_options['fields']['field_flag']['table'] = 'field_data_field_flag';
  $handler->display->display_options['fields']['field_flag']['field'] = 'field_flag';
  $handler->display->display_options['fields']['field_flag']['label'] = '';
  $handler->display->display_options['fields']['field_flag']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_flag']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_flag']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_flag']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_flag']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_flag']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_flag']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_flag']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_flag']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_flag']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_flag']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_flag']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_flag']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_flag']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_flag']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_flag']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_flag']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_flag']['field_api_classes'] = 0;
  /* Field: Content: Internal link */
  $handler->display->display_options['fields']['field_internal_links']['id'] = 'field_internal_links';
  $handler->display->display_options['fields']['field_internal_links']['table'] = 'field_data_field_internal_links';
  $handler->display->display_options['fields']['field_internal_links']['field'] = 'field_internal_links';
  $handler->display->display_options['fields']['field_internal_links']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_internal_links']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_internal_links']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_internal_links']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_internal_links']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_internal_links']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_internal_links']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_internal_links']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_internal_links']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_internal_links']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_internal_links']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_internal_links']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_internal_links']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_internal_links']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_internal_links']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_internal_links']['click_sort_column'] = 'nid';
  $handler->display->display_options['fields']['field_internal_links']['field_api_classes'] = 0;
  /* Field: Content: Capital */
  $handler->display->display_options['fields']['field_capital']['id'] = 'field_capital';
  $handler->display->display_options['fields']['field_capital']['table'] = 'field_data_field_capital';
  $handler->display->display_options['fields']['field_capital']['field'] = 'field_capital';
  $handler->display->display_options['fields']['field_capital']['relationship'] = 'field_internal_links_nid';
  $handler->display->display_options['fields']['field_capital']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_capital']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_capital']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_capital']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_capital']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_capital']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_capital']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_capital']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_capital']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_capital']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_capital']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_capital']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_capital']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_capital']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_capital']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_capital']['field_api_classes'] = 0;
  $handler->display->display_options['path'] = 'china_related';
  $translatables['destinations'] = array(
    t('Master'),
    t('Destinations'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('<h2> [title] </h2>'),
    t('Population'),
    t('Internal link'),
    t('All'),
    t('Page'),
    t('Block'),
    t('Page Beijing'),
    t('Articles about nice places'),
    t('Capital'),
  );
  $export['destinations'] = $view;

  return $export;
}
