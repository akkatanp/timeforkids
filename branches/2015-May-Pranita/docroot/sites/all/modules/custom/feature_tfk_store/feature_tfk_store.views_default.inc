<?php
/**
 * @file
 * feature_tfk_store.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_tfk_store_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'books';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Books';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Books';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Buy Now ';
  $handler->display->display_options['footer']['area']['content'] = '<a href="[field_book_link]">Buy Now!</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_book_link']['id'] = 'field_book_link';
  $handler->display->display_options['fields']['field_book_link']['table'] = 'field_data_field_book_link';
  $handler->display->display_options['fields']['field_book_link']['field'] = 'field_book_link';
  $handler->display->display_options['fields']['field_book_link']['label'] = '';
  $handler->display->display_options['fields']['field_book_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_book_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_link']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_book_link]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_book_author']['id'] = 'field_book_author';
  $handler->display->display_options['fields']['field_book_author']['table'] = 'field_data_field_book_author';
  $handler->display->display_options['fields']['field_book_author']['field'] = 'field_book_author';
  $handler->display->display_options['fields']['field_book_author']['label'] = '';
  $handler->display->display_options['fields']['field_book_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_author']['hide_alter_empty'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_book_image']['id'] = 'field_book_image';
  $handler->display->display_options['fields']['field_book_image']['table'] = 'field_data_field_book_image';
  $handler->display->display_options['fields']['field_book_image']['field'] = 'field_book_image';
  $handler->display->display_options['fields']['field_book_image']['label'] = '';
  $handler->display->display_options['fields']['field_book_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_book_image']['alter']['path'] = '[field_book_link]';
  $handler->display->display_options['fields']['field_book_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_book_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_book_image']['settings'] = array(
    'image_style' => 'tfk_book',
    'image_link' => '',
  );
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_book_description']['id'] = 'field_book_description';
  $handler->display->display_options['fields']['field_book_description']['table'] = 'field_data_field_book_description';
  $handler->display->display_options['fields']['field_book_description']['field'] = 'field_book_description';
  $handler->display->display_options['fields']['field_book_description']['label'] = '';
  $handler->display->display_options['fields']['field_book_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_description']['hide_alter_empty'] = FALSE;
  /* Field: Content: Thumbnail Override Image */
  $handler->display->display_options['fields']['field_thumbnail_override_image']['id'] = 'field_thumbnail_override_image';
  $handler->display->display_options['fields']['field_thumbnail_override_image']['table'] = 'field_data_field_thumbnail_override_image';
  $handler->display->display_options['fields']['field_thumbnail_override_image']['field'] = 'field_thumbnail_override_image';
  $handler->display->display_options['fields']['field_thumbnail_override_image']['label'] = '';
  $handler->display->display_options['fields']['field_thumbnail_override_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_thumbnail_override_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_thumbnail_override_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_thumbnail_override_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_thumbnail_override_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Content: Store Order (field_store_order) */
  $handler->display->display_options['sorts']['field_store_order_value']['id'] = 'field_store_order_value';
  $handler->display->display_options['sorts']['field_store_order_value']['table'] = 'field_data_field_store_order';
  $handler->display->display_options['sorts']['field_store_order_value']['field'] = 'field_store_order_value';
  $handler->display->display_options['sorts']['field_store_order_value']['order'] = 'DESC';
  /* Sort criterion: Content: Publication Date (field_publication_date) */
  $handler->display->display_options['sorts']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['sorts']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['sorts']['field_publication_date_value']['field'] = 'field_publication_date_value';
  $handler->display->display_options['sorts']['field_publication_date_value']['order'] = 'DESC';
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
    'book' => 'book',
  );

  /* Display: Featured Books */
  $handler = $view->new_display('block', 'Featured Books', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Books';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_book_link' => 0,
    'title' => 0,
    'field_book_author' => 0,
    'field_book_description' => 0,
    'field_book_image' => 0,
    'counter' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'counter' => 'counter',
    'field_book_link' => 0,
    'title' => 0,
    'field_book_author' => 0,
    'field_book_description' => 0,
    'field_book_image' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_options'] = '{"height":"220px"}';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: store_featured_book */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'store_featured_book';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_book_link']['id'] = 'field_book_link';
  $handler->display->display_options['fields']['field_book_link']['table'] = 'field_data_field_book_link';
  $handler->display->display_options['fields']['field_book_link']['field'] = 'field_book_link';
  $handler->display->display_options['fields']['field_book_link']['label'] = '';
  $handler->display->display_options['fields']['field_book_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_book_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_link']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_book_link]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_book_author']['id'] = 'field_book_author';
  $handler->display->display_options['fields']['field_book_author']['table'] = 'field_data_field_book_author';
  $handler->display->display_options['fields']['field_book_author']['field'] = 'field_book_author';
  $handler->display->display_options['fields']['field_book_author']['label'] = '';
  $handler->display->display_options['fields']['field_book_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_book_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_author']['hide_alter_empty'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_book_description']['id'] = 'field_book_description';
  $handler->display->display_options['fields']['field_book_description']['table'] = 'field_data_field_book_description';
  $handler->display->display_options['fields']['field_book_description']['field'] = 'field_book_description';
  $handler->display->display_options['fields']['field_book_description']['label'] = '';
  $handler->display->display_options['fields']['field_book_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_book_description']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['field_book_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_book_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_description']['hide_alter_empty'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_book_image']['id'] = 'field_book_image';
  $handler->display->display_options['fields']['field_book_image']['table'] = 'field_data_field_book_image';
  $handler->display->display_options['fields']['field_book_image']['field'] = 'field_book_image';
  $handler->display->display_options['fields']['field_book_image']['label'] = '';
  $handler->display->display_options['fields']['field_book_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_book_image']['alter']['text'] = '<div class="store-featured-image">[field_book_image]</div><div class="store-featured-info"><h3>[title]</h3><p class="store-featured-author">[field_book_author]</p><div class="store-featured-description">[field_book_description]</div><p class="store-featured-buynow"><a href="[field_book_link]" target="_blank">Buy Now!</a><p></div>';
  $handler->display->display_options['fields']['field_book_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_book_image']['alter']['path'] = '[field_book_link]';
  $handler->display->display_options['fields']['field_book_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_book_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_book_image']['settings'] = array(
    'image_style' => 'tfk_book',
    'image_link' => '',
  );
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="store-featured-image">[field_book_image]</div><div class="store-featured-info"><h3>[title]</h3><p class="store-featured-author">[field_book_author]</p><div class="store-featured-description">[field_book_description]</div><p class="store-featured-buynow"><a href="[field_book_link]" target="_blank">Buy Now!</a><p></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    'book' => 'book',
  );
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flag_content';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';

  /* Display: All Books */
  $handler = $view->new_display('block', 'All Books', 'all_books');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'store-all-table';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_book_link']['id'] = 'field_book_link';
  $handler->display->display_options['fields']['field_book_link']['table'] = 'field_data_field_book_link';
  $handler->display->display_options['fields']['field_book_link']['field'] = 'field_book_link';
  $handler->display->display_options['fields']['field_book_link']['label'] = '';
  $handler->display->display_options['fields']['field_book_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_book_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_link']['hide_alter_empty'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_book_image']['id'] = 'field_book_image';
  $handler->display->display_options['fields']['field_book_image']['table'] = 'field_data_field_book_image';
  $handler->display->display_options['fields']['field_book_image']['field'] = 'field_book_image';
  $handler->display->display_options['fields']['field_book_image']['label'] = '';
  $handler->display->display_options['fields']['field_book_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_book_image']['alter']['path'] = '[field_book_link]';
  $handler->display->display_options['fields']['field_book_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_book_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_book_image']['settings'] = array(
    'image_style' => 'tfk_book_thumb',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_book_link]';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '45';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_book_author']['id'] = 'field_book_author';
  $handler->display->display_options['fields']['field_book_author']['table'] = 'field_data_field_book_author';
  $handler->display->display_options['fields']['field_book_author']['field'] = 'field_book_author';
  $handler->display->display_options['fields']['field_book_author']['label'] = '';
  $handler->display->display_options['fields']['field_book_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_author']['hide_alter_empty'] = FALSE;
  /* Field: Content: Thumbnail Override Image */
  $handler->display->display_options['fields']['field_thumbnail_override_image']['id'] = 'field_thumbnail_override_image';
  $handler->display->display_options['fields']['field_thumbnail_override_image']['table'] = 'field_data_field_thumbnail_override_image';
  $handler->display->display_options['fields']['field_thumbnail_override_image']['field'] = 'field_thumbnail_override_image';
  $handler->display->display_options['fields']['field_thumbnail_override_image']['label'] = '';
  $handler->display->display_options['fields']['field_thumbnail_override_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_thumbnail_override_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_thumbnail_override_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_thumbnail_override_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_thumbnail_override_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Store Order (field_store_order) */
  $handler->display->display_options['sorts']['field_store_order_value']['id'] = 'field_store_order_value';
  $handler->display->display_options['sorts']['field_store_order_value']['table'] = 'field_data_field_store_order';
  $handler->display->display_options['sorts']['field_store_order_value']['field'] = 'field_store_order_value';
  $handler->display->display_options['sorts']['field_store_order_value']['order'] = 'DESC';
  /* Sort criterion: Content: Publication Date (field_publication_date) */
  $handler->display->display_options['sorts']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['sorts']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['sorts']['field_publication_date_value']['field'] = 'field_publication_date_value';
  $handler->display->display_options['sorts']['field_publication_date_value']['order'] = 'DESC';
  $export['books'] = $view;

  $view = new view();
  $view->name = 'other_products';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Other Products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Other Products';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Buy Now ';
  $handler->display->display_options['footer']['area']['content'] = '<a href="[field_book_link]">Buy Now!</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_product_link']['id'] = 'field_product_link';
  $handler->display->display_options['fields']['field_product_link']['table'] = 'field_data_field_product_link';
  $handler->display->display_options['fields']['field_product_link']['field'] = 'field_product_link';
  $handler->display->display_options['fields']['field_product_link']['label'] = '';
  $handler->display->display_options['fields']['field_product_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_link']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_book_link]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_product_image']['id'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['table'] = 'field_data_field_product_image';
  $handler->display->display_options['fields']['field_product_image']['field'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_product_description']['id'] = 'field_product_description';
  $handler->display->display_options['fields']['field_product_description']['table'] = 'field_data_field_product_description';
  $handler->display->display_options['fields']['field_product_description']['field'] = 'field_product_description';
  $handler->display->display_options['fields']['field_product_description']['label'] = '';
  $handler->display->display_options['fields']['field_product_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_description']['hide_alter_empty'] = FALSE;
  /* Field: Content: Thumbnail Override Image */
  $handler->display->display_options['fields']['field_thumbnail_override_image']['id'] = 'field_thumbnail_override_image';
  $handler->display->display_options['fields']['field_thumbnail_override_image']['table'] = 'field_data_field_thumbnail_override_image';
  $handler->display->display_options['fields']['field_thumbnail_override_image']['field'] = 'field_thumbnail_override_image';
  $handler->display->display_options['fields']['field_thumbnail_override_image']['label'] = '';
  $handler->display->display_options['fields']['field_thumbnail_override_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_thumbnail_override_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_thumbnail_override_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_thumbnail_override_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_thumbnail_override_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Content: Store Order (field_store_order) */
  $handler->display->display_options['sorts']['field_store_order_value']['id'] = 'field_store_order_value';
  $handler->display->display_options['sorts']['field_store_order_value']['table'] = 'field_data_field_store_order';
  $handler->display->display_options['sorts']['field_store_order_value']['field'] = 'field_store_order_value';
  $handler->display->display_options['sorts']['field_store_order_value']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'store_product' => 'store_product',
  );

  /* Display: Featured Products */
  $handler = $view->new_display('block', 'Featured Products', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Products';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_product_link' => 0,
    'title_1' => 0,
    'field_product_description' => 0,
    'field_product_image' => 0,
    'counter' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'counter' => 'counter',
    'field_product_link' => 0,
    'title_1' => 0,
    'field_product_description' => 0,
    'field_product_image' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_options'] = '{"height":"220px"}';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: store_featured_product */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'store_featured_product';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_product_link']['id'] = 'field_product_link';
  $handler->display->display_options['fields']['field_product_link']['table'] = 'field_data_field_product_link';
  $handler->display->display_options['fields']['field_product_link']['field'] = 'field_product_link';
  $handler->display->display_options['fields']['field_product_link']['label'] = '';
  $handler->display->display_options['fields']['field_product_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_link']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['path'] = '[field_product_link]';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_product_description']['id'] = 'field_product_description';
  $handler->display->display_options['fields']['field_product_description']['table'] = 'field_data_field_product_description';
  $handler->display->display_options['fields']['field_product_description']['field'] = 'field_product_description';
  $handler->display->display_options['fields']['field_product_description']['label'] = '';
  $handler->display->display_options['fields']['field_product_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_description']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['field_product_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_product_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_description']['hide_alter_empty'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_product_image']['id'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['table'] = 'field_data_field_product_image';
  $handler->display->display_options['fields']['field_product_image']['field'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_image']['alter']['text'] = '<div class="store-featured-image">[field_product_image]</div><div class="store-featured-info"><h3>[title_1]</h3><div class="store-featured-description">[field_product_description]</div><p class="store-featured-buynow"><a href="[field_product_link]" target="_blank">Buy Now!</a><p></div>';
  $handler->display->display_options['fields']['field_product_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_product_image']['alter']['path'] = '[field_product_link]';
  $handler->display->display_options['fields']['field_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_image']['settings'] = array(
    'image_style' => 'tfk_book',
    'image_link' => '',
  );
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="store-featured-image">[field_product_image]</div><div class="store-featured-info"><h3>[title_1]</h3><div class="store-featured-description">[field_product_description]</div><p class="store-featured-buynow"><a href="[field_product_link]" target="_blank">Buy Now!</a><p></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    'store_product' => 'store_product',
  );
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flag_content';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';

  /* Display: All Products */
  $handler = $view->new_display('block', 'All Products', 'all_products');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'store-all-table';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_product_link']['id'] = 'field_product_link';
  $handler->display->display_options['fields']['field_product_link']['table'] = 'field_data_field_product_link';
  $handler->display->display_options['fields']['field_product_link']['field'] = 'field_product_link';
  $handler->display->display_options['fields']['field_product_link']['label'] = '';
  $handler->display->display_options['fields']['field_product_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_link']['hide_alter_empty'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_product_image']['id'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['table'] = 'field_data_field_product_image';
  $handler->display->display_options['fields']['field_product_image']['field'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_product_image']['alter']['path'] = '[field_product_link]';
  $handler->display->display_options['fields']['field_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_image']['settings'] = array(
    'image_style' => 'tfk_book_thumb',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_product_link]';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '45';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Thumbnail Override Image */
  $handler->display->display_options['fields']['field_thumbnail_override_image']['id'] = 'field_thumbnail_override_image';
  $handler->display->display_options['fields']['field_thumbnail_override_image']['table'] = 'field_data_field_thumbnail_override_image';
  $handler->display->display_options['fields']['field_thumbnail_override_image']['field'] = 'field_thumbnail_override_image';
  $handler->display->display_options['fields']['field_thumbnail_override_image']['label'] = '';
  $handler->display->display_options['fields']['field_thumbnail_override_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_thumbnail_override_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_thumbnail_override_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_thumbnail_override_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_thumbnail_override_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    'store_product' => 'store_product',
  );
  $export['other_products'] = $view;

  return $export;
}
