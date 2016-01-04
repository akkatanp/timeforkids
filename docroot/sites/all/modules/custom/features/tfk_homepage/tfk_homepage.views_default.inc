<?php
/**
 * @file
 * tfk_homepage.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tfk_homepage_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'homepage_destination';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Homepage Destination';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Flags: homepage_destination */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'homepage_destination';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Content: Tout Image (field_tout_image) */
  $handler->display->display_options['relationships']['field_tout_image_nid']['id'] = 'field_tout_image_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['table'] = 'field_data_field_tout_image';
  $handler->display->display_options['relationships']['field_tout_image_nid']['field'] = 'field_tout_image_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['delta'] = '-1';
  /* Relationship: Content: Related Article (field_related_articles) */
  $handler->display->display_options['relationships']['field_related_articles_nid']['id'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['relationships']['field_related_articles_nid']['field'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['delta'] = '-1';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'AROUND THE WORLD';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'around-the-world';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_tout_image_nid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'tfk_rect_medium',
    'image_link' => '',
  );
  /* Field: Content: Credit */
  $handler->display->display_options['fields']['field_credit']['id'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['relationship'] = 'field_tout_image_nid';
  $handler->display->display_options['fields']['field_credit']['label'] = '';
  $handler->display->display_options['fields']['field_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Introduction */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '85';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'View Full Article';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_related_articles_nid';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['type']['empty_zero'] = TRUE;
  /* Field: Content: Related Article */
  $handler->display->display_options['fields']['field_related_articles']['id'] = 'field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['field'] = 'field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['label'] = 'ARTICLE';
  $handler->display->display_options['fields']['field_related_articles']['alter']['text'] = '[field_related_articles] ';
  $handler->display->display_options['fields']['field_related_articles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_articles']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_related_articles']['delta_offset'] = '0';
  /* Sort criterion: Flags: Flagged time */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'flag_content';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
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
    'atw_destination' => 'atw_destination',
  );
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flag_content';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';

  /* Display: Homepage Destination Block */
  $handler = $view->new_display('block', 'Homepage Destination Block', 'block_1');
  $handler->display->display_options['display_description'] = 'Homepage Destination Block';
  $handler->display->display_options['block_caching'] = '1';

  /* Display: Homepage Destination Anon */
  $handler = $view->new_display('block', 'Homepage Destination Anon', 'block_2');
  $handler->display->display_options['display_description'] = 'Homepage Destination Anon';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'AROUND THE WORLD';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'around-the-world';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_tout_image_nid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'tfk_rect_medium',
    'image_link' => '',
  );
  /* Field: Content: Credit */
  $handler->display->display_options['fields']['field_credit']['id'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['relationship'] = 'field_tout_image_nid';
  $handler->display->display_options['fields']['field_credit']['label'] = '';
  $handler->display->display_options['fields']['field_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '25';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Introduction */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '85';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'View Full Article';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['block_caching'] = '1';
  $export['homepage_destination'] = $view;

  $view = new view();
  $view->name = 'homepage_news_block';
  $view->description = 'Provides Views for Secondary Touts in various channels.';
  $view->tag = 'touts';
  $view->base_table = 'node';
  $view->human_name = 'homepage_news_block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'secondary-touts-view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan'] = '-1';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'row %has_addit';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Flags: news_news_block */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'homepage_newsblock';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'news_news_block';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Content: Related Article (field_related_articles) */
  $handler->display->display_options['relationships']['field_related_articles_nid']['id'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['relationships']['field_related_articles_nid']['field'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['delta'] = '-1';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Relationship: Slideshow image */
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['id'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['table'] = 'field_data_field_slideshow_images';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['field'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['ui_name'] = 'Slideshow image';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['delta'] = '0';
  /* Relationship: Content: Tout Image (field_tout_image) */
  $handler->display->display_options['relationships']['field_tout_image_nid']['id'] = 'field_tout_image_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['table'] = 'field_data_field_tout_image';
  $handler->display->display_options['relationships']['field_tout_image_nid']['field'] = 'field_tout_image_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['delta'] = '0';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'news-archive/[name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Field: Content: Large Rectangle Image */
  $handler->display->display_options['fields']['field_lrg_rect_image']['id'] = 'field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['table'] = 'field_data_field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['field'] = 'field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['label'] = '';
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['text'] = '[field_lrg_rect_image]
<div class="icon"></div>';
  $handler->display->display_options['fields']['field_lrg_rect_image']['element_class'] = '[type]';
  $handler->display->display_options['fields']['field_lrg_rect_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lrg_rect_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_rect_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lrg_rect_image']['settings'] = array(
    'image_style' => 'tfk_rect_medium',
    'image_link' => '',
  );
  /* Field: Content: Tout Image (minisite) */
  $handler->display->display_options['fields']['field_minisite_tout_image']['id'] = 'field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['table'] = 'field_data_field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['field'] = 'field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['ui_name'] = 'Content: Tout Image (minisite)';
  $handler->display->display_options['fields']['field_minisite_tout_image']['label'] = '';
  $handler->display->display_options['fields']['field_minisite_tout_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_tout_image']['element_wrapper_class'] = 'views-field-field-lrg-rect-image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_minisite_tout_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_tout_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_minisite_tout_image']['settings'] = array(
    'image_style' => 'tfk_rect_medium',
    'image_link' => 'content',
  );
  /* Field: Content: Image (ATW Dest) */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_tout_image_nid';
  $handler->display->display_options['fields']['field_image']['ui_name'] = 'Content: Image (ATW Dest)';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'views-field-field-lrg-rect-image';
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'tfk_rect_medium',
    'image_link' => 'content',
  );
  /* Field: Content: Credit (ATW Dest) */
  $handler->display->display_options['fields']['field_credit_2']['id'] = 'field_credit_2';
  $handler->display->display_options['fields']['field_credit_2']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit_2']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit_2']['relationship'] = 'field_tout_image_nid';
  $handler->display->display_options['fields']['field_credit_2']['ui_name'] = 'Content: Credit (ATW Dest)';
  $handler->display->display_options['fields']['field_credit_2']['label'] = '';
  $handler->display->display_options['fields']['field_credit_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit_2']['element_wrapper_class'] = 'views-field-field-image-credit';
  $handler->display->display_options['fields']['field_credit_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_credit_2']['empty_zero'] = TRUE;
  /* Field: Credit (Video) */
  $handler->display->display_options['fields']['field_credit_1']['id'] = 'field_credit_1';
  $handler->display->display_options['fields']['field_credit_1']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit_1']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit_1']['ui_name'] = 'Credit (Video)';
  $handler->display->display_options['fields']['field_credit_1']['label'] = '';
  $handler->display->display_options['fields']['field_credit_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_credit_1']['empty_zero'] = TRUE;
  /* Field: Credit (Minisite) */
  $handler->display->display_options['fields']['field_minisite_tout_credit']['id'] = 'field_minisite_tout_credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['table'] = 'field_data_field_minisite_tout_credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['field'] = 'field_minisite_tout_credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['ui_name'] = 'Credit (Minisite)';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['label'] = '';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_tout_credit']['element_wrapper_class'] = 'views-field-field-image-credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_minisite_tout_credit']['empty_zero'] = TRUE;
  /* Field: Content: Credit */
  $handler->display->display_options['fields']['field_credit']['id'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['relationship'] = 'field_slideshow_images_nid';
  $handler->display->display_options['fields']['field_credit']['label'] = '';
  $handler->display->display_options['fields']['field_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_credit']['empty_zero'] = TRUE;
  /* Field: Content: Image Credit (Article) */
  $handler->display->display_options['fields']['field_image_credit']['id'] = 'field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['table'] = 'field_data_field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['field'] = 'field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['ui_name'] = 'Content: Image Credit (Article)';
  $handler->display->display_options['fields']['field_image_credit']['label'] = '';
  $handler->display->display_options['fields']['field_image_credit']['alter']['text'] = '[field_image_credit]
[field_credit_2]';
  $handler->display->display_options['fields']['field_image_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_credit']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image_credit']['empty_zero'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '32';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Deck (Article and Video) */
  $handler->display->display_options['fields']['field_deck']['id'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['table'] = 'field_data_field_deck';
  $handler->display->display_options['fields']['field_deck']['field'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['ui_name'] = 'Content: Deck (Article and Video)';
  $handler->display->display_options['fields']['field_deck']['label'] = '';
  $handler->display->display_options['fields']['field_deck']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_deck']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_deck']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_deck']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_deck']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_deck']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_deck']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Content: Deck (Slideshow) */
  $handler->display->display_options['fields']['field_slideshow_description']['id'] = 'field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['table'] = 'field_data_field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['field'] = 'field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['ui_name'] = 'Content: Deck (Slideshow)';
  $handler->display->display_options['fields']['field_slideshow_description']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_description']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_slideshow_description']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Content: Deck (ATW) */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['ui_name'] = 'Content: Deck (ATW)';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_description']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Content: Deck */
  $handler->display->display_options['fields']['field_destination_deck']['id'] = 'field_destination_deck';
  $handler->display->display_options['fields']['field_destination_deck']['table'] = 'field_data_field_destination_deck';
  $handler->display->display_options['fields']['field_destination_deck']['field'] = 'field_destination_deck';
  $handler->display->display_options['fields']['field_destination_deck']['label'] = '';
  $handler->display->display_options['fields']['field_destination_deck']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_destination_deck']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_destination_deck']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_destination_deck']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_destination_deck']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_destination_deck']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_destination_deck']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Content: Deck (Mini-site), points to body field. */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['ui_name'] = 'Content: Deck (Mini-site), points to body field.';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '65';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '85',
  );
  /* Field: View Full Article */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'View Full Article';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'View Full Article';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = TRUE;
  /* Field: Content: Related Article */
  $handler->display->display_options['fields']['field_related_articles']['id'] = 'field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['field'] = 'field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['label'] = 'ARTICLE';
  $handler->display->display_options['fields']['field_related_articles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_articles']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_related_articles']['delta_offset'] = '0';
  /* Field: Content: Additional Content (Slideshow and Video) */
  $handler->display->display_options['fields']['field_additional_content']['id'] = 'field_additional_content';
  $handler->display->display_options['fields']['field_additional_content']['table'] = 'field_data_field_additional_content';
  $handler->display->display_options['fields']['field_additional_content']['field'] = 'field_additional_content';
  $handler->display->display_options['fields']['field_additional_content']['ui_name'] = 'Content: Additional Content (Slideshow and Video)';
  $handler->display->display_options['fields']['field_additional_content']['label'] = 'LABEL';
  $handler->display->display_options['fields']['field_additional_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_additional_content']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_additional_content']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_additional_content']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_additional_content']['delta_offset'] = '0';
  /* Field: Content: Credit */
  $handler->display->display_options['fields']['field_slideshow_credit']['id'] = 'field_slideshow_credit';
  $handler->display->display_options['fields']['field_slideshow_credit']['table'] = 'field_data_field_slideshow_credit';
  $handler->display->display_options['fields']['field_slideshow_credit']['field'] = 'field_slideshow_credit';
  $handler->display->display_options['fields']['field_slideshow_credit']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_credit']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_credit']['element_label_colon'] = FALSE;
  /* Sort criterion: Flags: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'flag_content';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'flag_content_rel';
  /* Sort criterion: Flags: Flagged time */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'flag_content';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
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
    'minisite' => 'minisite',
    'article' => 'article',
    'atw_destination' => 'atw_destination',
    'slideshow' => 'slideshow',
    'video' => 'video',
  );
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flag_content';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    3 => '3',
  );

  /* Display: Homepage Secondary Touts */
  $handler = $view->new_display('block', 'Homepage Secondary Touts', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: homepage_news_block */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'homepage_newsblock';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'homepage_news_block';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Content: Related Article (field_related_articles) */
  $handler->display->display_options['relationships']['field_related_articles_nid']['id'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['relationships']['field_related_articles_nid']['field'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['delta'] = '-1';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Relationship: Slideshow image */
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['id'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['table'] = 'field_data_field_slideshow_images';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['field'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['ui_name'] = 'Slideshow image';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['delta'] = '0';
  /* Relationship: Content: Tout Image (field_tout_image) */
  $handler->display->display_options['relationships']['field_tout_image_nid']['id'] = 'field_tout_image_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['table'] = 'field_data_field_tout_image';
  $handler->display->display_options['relationships']['field_tout_image_nid']['field'] = 'field_tout_image_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['delta'] = '0';
  $handler->display->display_options['block_description'] = 'Homepage Secondary Touts';
  $handler->display->display_options['block_caching'] = '1';

  /* Display: News Secondary Touts */
  $handler = $view->new_display('block', 'News Secondary Touts', 'block_3');
  $handler->display->display_options['display_description'] = 'News Secondary Touts';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: news_news_block */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = '';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'news_news_block';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Content: Related Article (field_related_articles) */
  $handler->display->display_options['relationships']['field_related_articles_nid']['id'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['relationships']['field_related_articles_nid']['field'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['delta'] = '-1';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Relationship: Slideshow image */
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['id'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['table'] = 'field_data_field_slideshow_images';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['field'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['ui_name'] = 'Slideshow image';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['delta'] = '0';
  /* Relationship: Content: Tout Image (field_tout_image) */
  $handler->display->display_options['relationships']['field_tout_image_nid']['id'] = 'field_tout_image_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['table'] = 'field_data_field_tout_image';
  $handler->display->display_options['relationships']['field_tout_image_nid']['field'] = 'field_tout_image_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['delta'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'news-archive/[name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = '[type]';
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Field: Content: Large Rectangle Image */
  $handler->display->display_options['fields']['field_lrg_rect_image']['id'] = 'field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['table'] = 'field_data_field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['field'] = 'field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['label'] = '';
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['text'] = '[field_lrg_rect_image]
<div class="icon"></div>';
  $handler->display->display_options['fields']['field_lrg_rect_image']['element_class'] = '[type]';
  $handler->display->display_options['fields']['field_lrg_rect_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lrg_rect_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_rect_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lrg_rect_image']['settings'] = array(
    'image_style' => 'tfk_rect_medium',
    'image_link' => '',
  );
  /* Field: Content: Tout Image (minisite) */
  $handler->display->display_options['fields']['field_minisite_tout_image']['id'] = 'field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['table'] = 'field_data_field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['field'] = 'field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['ui_name'] = 'Content: Tout Image (minisite)';
  $handler->display->display_options['fields']['field_minisite_tout_image']['label'] = '';
  $handler->display->display_options['fields']['field_minisite_tout_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_tout_image']['element_wrapper_class'] = 'views-field-field-lrg-rect-image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_minisite_tout_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_tout_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_minisite_tout_image']['settings'] = array(
    'image_style' => 'tfk_rect_medium',
    'image_link' => 'content',
  );
  /* Field: Content: Image (ATW Dest) */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_tout_image_nid';
  $handler->display->display_options['fields']['field_image']['ui_name'] = 'Content: Image (ATW Dest)';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'views-field-field-lrg-rect-image';
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'tfk_rect_medium',
    'image_link' => '',
  );
  /* Field: Content: Credit (ATW Dest) */
  $handler->display->display_options['fields']['field_credit_2']['id'] = 'field_credit_2';
  $handler->display->display_options['fields']['field_credit_2']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit_2']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit_2']['relationship'] = 'field_tout_image_nid';
  $handler->display->display_options['fields']['field_credit_2']['ui_name'] = 'Content: Credit (ATW Dest)';
  $handler->display->display_options['fields']['field_credit_2']['label'] = '';
  $handler->display->display_options['fields']['field_credit_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit_2']['element_wrapper_class'] = 'views-field-field-image-credit';
  $handler->display->display_options['fields']['field_credit_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_credit_2']['empty_zero'] = TRUE;
  /* Field: Credit (Video) */
  $handler->display->display_options['fields']['field_credit_1']['id'] = 'field_credit_1';
  $handler->display->display_options['fields']['field_credit_1']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit_1']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit_1']['ui_name'] = 'Credit (Video)';
  $handler->display->display_options['fields']['field_credit_1']['label'] = '';
  $handler->display->display_options['fields']['field_credit_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_credit_1']['empty_zero'] = TRUE;
  /* Field: Credit (Minisite) */
  $handler->display->display_options['fields']['field_minisite_tout_credit']['id'] = 'field_minisite_tout_credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['table'] = 'field_data_field_minisite_tout_credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['field'] = 'field_minisite_tout_credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['ui_name'] = 'Credit (Minisite)';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['label'] = '';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_tout_credit']['element_wrapper_class'] = 'views-field-field-image-credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_minisite_tout_credit']['empty_zero'] = TRUE;
  /* Field: Content: Credit */
  $handler->display->display_options['fields']['field_credit']['id'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['relationship'] = 'field_slideshow_images_nid';
  $handler->display->display_options['fields']['field_credit']['label'] = '';
  $handler->display->display_options['fields']['field_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_credit']['empty_zero'] = TRUE;
  /* Field: Content: Image Credit (Article) */
  $handler->display->display_options['fields']['field_image_credit']['id'] = 'field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['table'] = 'field_data_field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['field'] = 'field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['ui_name'] = 'Content: Image Credit (Article)';
  $handler->display->display_options['fields']['field_image_credit']['label'] = '';
  $handler->display->display_options['fields']['field_image_credit']['alter']['text'] = '[field_image_credit]
[field_credit_2]';
  $handler->display->display_options['fields']['field_image_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_credit']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image_credit']['empty_zero'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '32';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Deck (Article and Video) */
  $handler->display->display_options['fields']['field_deck']['id'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['table'] = 'field_data_field_deck';
  $handler->display->display_options['fields']['field_deck']['field'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['ui_name'] = 'Content: Deck (Article and Video)';
  $handler->display->display_options['fields']['field_deck']['label'] = '';
  $handler->display->display_options['fields']['field_deck']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_deck']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_deck']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_deck']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_deck']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_deck']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_deck']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Content: Deck (Slideshow) */
  $handler->display->display_options['fields']['field_slideshow_description']['id'] = 'field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['table'] = 'field_data_field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['field'] = 'field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['ui_name'] = 'Content: Deck (Slideshow)';
  $handler->display->display_options['fields']['field_slideshow_description']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_description']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_slideshow_description']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Content: Deck (ATW) */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['ui_name'] = 'Content: Deck (ATW)';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_description']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Content: Deck */
  $handler->display->display_options['fields']['field_destination_deck']['id'] = 'field_destination_deck';
  $handler->display->display_options['fields']['field_destination_deck']['table'] = 'field_data_field_destination_deck';
  $handler->display->display_options['fields']['field_destination_deck']['field'] = 'field_destination_deck';
  $handler->display->display_options['fields']['field_destination_deck']['label'] = '';
  $handler->display->display_options['fields']['field_destination_deck']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_destination_deck']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_destination_deck']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_destination_deck']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_destination_deck']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_destination_deck']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_destination_deck']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Content: Deck (Mini-site), points to body field. */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['ui_name'] = 'Content: Deck (Mini-site), points to body field.';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '65';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '85',
  );
  /* Field: View Full Article */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'View Full Article';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'View Full Article';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = TRUE;
  /* Field: Content: Related Article */
  $handler->display->display_options['fields']['field_related_articles']['id'] = 'field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['field'] = 'field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['label'] = 'ARTICLE';
  $handler->display->display_options['fields']['field_related_articles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_articles']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_related_articles']['delta_offset'] = '0';
  /* Field: Content: Additional Content (Slideshow and Video) */
  $handler->display->display_options['fields']['field_additional_content']['id'] = 'field_additional_content';
  $handler->display->display_options['fields']['field_additional_content']['table'] = 'field_data_field_additional_content';
  $handler->display->display_options['fields']['field_additional_content']['field'] = 'field_additional_content';
  $handler->display->display_options['fields']['field_additional_content']['ui_name'] = 'Content: Additional Content (Slideshow and Video)';
  $handler->display->display_options['fields']['field_additional_content']['label'] = 'LABEL';
  $handler->display->display_options['fields']['field_additional_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_additional_content']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_additional_content']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_additional_content']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_additional_content']['delta_offset'] = '0';
  /* Field: Content: Additional Content (Minisite) */
  $handler->display->display_options['fields']['field_minisite_related_content']['id'] = 'field_minisite_related_content';
  $handler->display->display_options['fields']['field_minisite_related_content']['table'] = 'field_data_field_minisite_related_content';
  $handler->display->display_options['fields']['field_minisite_related_content']['field'] = 'field_minisite_related_content';
  $handler->display->display_options['fields']['field_minisite_related_content']['ui_name'] = 'Content: Additional Content (Minisite)';
  $handler->display->display_options['fields']['field_minisite_related_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_related_content']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_minisite_related_content']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_minisite_related_content']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_minisite_related_content']['delta_offset'] = '0';
  $handler->display->display_options['block_description'] = 'News Secondary Touts';
  $handler->display->display_options['block_caching'] = '1';

  /* Display: kid_rep */
  $handler = $view->new_display('block', 'kid_rep', 'block_5');
  $handler->display->display_options['display_description'] = 'kid_rep';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: kid_reporter_news_block */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = '';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'kid_reporter_news_block';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Content: Related Article (field_related_articles) */
  $handler->display->display_options['relationships']['field_related_articles_nid']['id'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['relationships']['field_related_articles_nid']['field'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['delta'] = '-1';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Relationship: Slideshow image */
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['id'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['table'] = 'field_data_field_slideshow_images';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['field'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['ui_name'] = 'Slideshow image';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['delta'] = '0';
  /* Relationship: Content: Tout Image (field_tout_image) */
  $handler->display->display_options['relationships']['field_tout_image_nid']['id'] = 'field_tout_image_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['table'] = 'field_data_field_tout_image';
  $handler->display->display_options['relationships']['field_tout_image_nid']['field'] = 'field_tout_image_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['delta'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'news-archive/[name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = '[type]';
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Field: Content: Large Rectangle Image */
  $handler->display->display_options['fields']['field_lrg_rect_image']['id'] = 'field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['table'] = 'field_data_field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['field'] = 'field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['label'] = '';
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['text'] = '[field_lrg_rect_image]
<div class="icon"></div>';
  $handler->display->display_options['fields']['field_lrg_rect_image']['element_class'] = '[type]';
  $handler->display->display_options['fields']['field_lrg_rect_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lrg_rect_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_rect_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lrg_rect_image']['settings'] = array(
    'image_style' => 'tfk_rect_medium',
    'image_link' => '',
  );
  /* Field: Content: Tout Image (minisite) */
  $handler->display->display_options['fields']['field_minisite_tout_image']['id'] = 'field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['table'] = 'field_data_field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['field'] = 'field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['ui_name'] = 'Content: Tout Image (minisite)';
  $handler->display->display_options['fields']['field_minisite_tout_image']['label'] = '';
  $handler->display->display_options['fields']['field_minisite_tout_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_tout_image']['element_wrapper_class'] = 'views-field-field-lrg-rect-image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_minisite_tout_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_tout_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_minisite_tout_image']['settings'] = array(
    'image_style' => 'tfk_rect_medium',
    'image_link' => 'content',
  );
  /* Field: Content: Image (ATW Dest) */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_tout_image_nid';
  $handler->display->display_options['fields']['field_image']['ui_name'] = 'Content: Image (ATW Dest)';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'views-field-field-lrg-rect-image';
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'tfk_rect_medium',
    'image_link' => '',
  );
  /* Field: Content: Credit (ATW Dest) */
  $handler->display->display_options['fields']['field_credit_2']['id'] = 'field_credit_2';
  $handler->display->display_options['fields']['field_credit_2']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit_2']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit_2']['relationship'] = 'field_tout_image_nid';
  $handler->display->display_options['fields']['field_credit_2']['ui_name'] = 'Content: Credit (ATW Dest)';
  $handler->display->display_options['fields']['field_credit_2']['label'] = '';
  $handler->display->display_options['fields']['field_credit_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit_2']['element_wrapper_class'] = 'views-field-field-image-credit';
  $handler->display->display_options['fields']['field_credit_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_credit_2']['empty_zero'] = TRUE;
  /* Field: Credit (Video) */
  $handler->display->display_options['fields']['field_credit_1']['id'] = 'field_credit_1';
  $handler->display->display_options['fields']['field_credit_1']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit_1']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit_1']['ui_name'] = 'Credit (Video)';
  $handler->display->display_options['fields']['field_credit_1']['label'] = '';
  $handler->display->display_options['fields']['field_credit_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_credit_1']['empty_zero'] = TRUE;
  /* Field: Credit (Minisite) */
  $handler->display->display_options['fields']['field_minisite_tout_credit']['id'] = 'field_minisite_tout_credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['table'] = 'field_data_field_minisite_tout_credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['field'] = 'field_minisite_tout_credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['ui_name'] = 'Credit (Minisite)';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['label'] = '';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_tout_credit']['element_wrapper_class'] = 'views-field-field-image-credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_minisite_tout_credit']['empty_zero'] = TRUE;
  /* Field: Content: Credit */
  $handler->display->display_options['fields']['field_credit']['id'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['relationship'] = 'field_slideshow_images_nid';
  $handler->display->display_options['fields']['field_credit']['label'] = '';
  $handler->display->display_options['fields']['field_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_credit']['empty_zero'] = TRUE;
  /* Field: Content: Image Credit (Article) */
  $handler->display->display_options['fields']['field_image_credit']['id'] = 'field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['table'] = 'field_data_field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['field'] = 'field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['ui_name'] = 'Content: Image Credit (Article)';
  $handler->display->display_options['fields']['field_image_credit']['label'] = '';
  $handler->display->display_options['fields']['field_image_credit']['alter']['text'] = '[field_image_credit]
[field_credit_2]';
  $handler->display->display_options['fields']['field_image_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_credit']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image_credit']['empty_zero'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '32';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Deck (Article and Video) */
  $handler->display->display_options['fields']['field_deck']['id'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['table'] = 'field_data_field_deck';
  $handler->display->display_options['fields']['field_deck']['field'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['ui_name'] = 'Content: Deck (Article and Video)';
  $handler->display->display_options['fields']['field_deck']['label'] = '';
  $handler->display->display_options['fields']['field_deck']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_deck']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_deck']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_deck']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_deck']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_deck']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_deck']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Content: Deck (Slideshow) */
  $handler->display->display_options['fields']['field_slideshow_description']['id'] = 'field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['table'] = 'field_data_field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['field'] = 'field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['ui_name'] = 'Content: Deck (Slideshow)';
  $handler->display->display_options['fields']['field_slideshow_description']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_description']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_slideshow_description']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Content: Deck (ATW) */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['ui_name'] = 'Content: Deck (ATW)';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_description']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Content: Deck */
  $handler->display->display_options['fields']['field_destination_deck']['id'] = 'field_destination_deck';
  $handler->display->display_options['fields']['field_destination_deck']['table'] = 'field_data_field_destination_deck';
  $handler->display->display_options['fields']['field_destination_deck']['field'] = 'field_destination_deck';
  $handler->display->display_options['fields']['field_destination_deck']['label'] = '';
  $handler->display->display_options['fields']['field_destination_deck']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_destination_deck']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_destination_deck']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_destination_deck']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_destination_deck']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_destination_deck']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_destination_deck']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Content: Deck (Mini-site), points to body field. */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['ui_name'] = 'Content: Deck (Mini-site), points to body field.';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '65';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '85',
  );
  /* Field: View Full Article */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'View Full Article';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'View Full Article';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = TRUE;
  /* Field: Content: Related Article */
  $handler->display->display_options['fields']['field_related_articles']['id'] = 'field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['field'] = 'field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['label'] = 'ARTICLE';
  $handler->display->display_options['fields']['field_related_articles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_articles']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_related_articles']['delta_offset'] = '0';
  /* Field: Content: Additional Content (Slideshow and Video) */
  $handler->display->display_options['fields']['field_additional_content']['id'] = 'field_additional_content';
  $handler->display->display_options['fields']['field_additional_content']['table'] = 'field_data_field_additional_content';
  $handler->display->display_options['fields']['field_additional_content']['field'] = 'field_additional_content';
  $handler->display->display_options['fields']['field_additional_content']['ui_name'] = 'Content: Additional Content (Slideshow and Video)';
  $handler->display->display_options['fields']['field_additional_content']['label'] = 'LABEL';
  $handler->display->display_options['fields']['field_additional_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_additional_content']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_additional_content']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_additional_content']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_additional_content']['delta_offset'] = '0';
  /* Field: Content: Additional Content (Minisite) */
  $handler->display->display_options['fields']['field_minisite_related_content']['id'] = 'field_minisite_related_content';
  $handler->display->display_options['fields']['field_minisite_related_content']['table'] = 'field_data_field_minisite_related_content';
  $handler->display->display_options['fields']['field_minisite_related_content']['field'] = 'field_minisite_related_content';
  $handler->display->display_options['fields']['field_minisite_related_content']['ui_name'] = 'Content: Additional Content (Minisite)';
  $handler->display->display_options['fields']['field_minisite_related_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_related_content']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_minisite_related_content']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_minisite_related_content']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_minisite_related_content']['delta_offset'] = '0';
  $handler->display->display_options['block_description'] = 'Kid Reporter Secondary Touts';
  $handler->display->display_options['block_caching'] = '1';

  /* Display: Homepage Secondary Touts Anon */
  $handler = $view->new_display('block', 'Homepage Secondary Touts Anon', 'block_1_anon');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: homepage_news_block */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'homepage_newsblock';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'homepage_news_block';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Content: Related Article (field_related_articles) */
  $handler->display->display_options['relationships']['field_related_articles_nid']['id'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['relationships']['field_related_articles_nid']['field'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['delta'] = '-1';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Relationship: Slideshow image */
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['id'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['table'] = 'field_data_field_slideshow_images';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['field'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['ui_name'] = 'Slideshow image';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['delta'] = '0';
  /* Relationship: Content: Tout Image (field_tout_image) */
  $handler->display->display_options['relationships']['field_tout_image_nid']['id'] = 'field_tout_image_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['table'] = 'field_data_field_tout_image';
  $handler->display->display_options['relationships']['field_tout_image_nid']['field'] = 'field_tout_image_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['delta'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'news-archive/[name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Field: Content: Large Rectangle Image */
  $handler->display->display_options['fields']['field_lrg_rect_image']['id'] = 'field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['table'] = 'field_data_field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['field'] = 'field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['label'] = '';
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['text'] = '[field_lrg_rect_image]
<div class="icon"></div>';
  $handler->display->display_options['fields']['field_lrg_rect_image']['element_class'] = '[type]';
  $handler->display->display_options['fields']['field_lrg_rect_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lrg_rect_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_rect_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lrg_rect_image']['settings'] = array(
    'image_style' => 'tfk_rect_medium',
    'image_link' => '',
  );
  /* Field: Content: Tout Image (minisite) */
  $handler->display->display_options['fields']['field_minisite_tout_image']['id'] = 'field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['table'] = 'field_data_field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['field'] = 'field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['ui_name'] = 'Content: Tout Image (minisite)';
  $handler->display->display_options['fields']['field_minisite_tout_image']['label'] = '';
  $handler->display->display_options['fields']['field_minisite_tout_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_tout_image']['element_wrapper_class'] = 'views-field-field-lrg-rect-image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_minisite_tout_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_tout_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_minisite_tout_image']['settings'] = array(
    'image_style' => 'tfk_rect_medium',
    'image_link' => 'content',
  );
  /* Field: Content: Image (ATW Dest) */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_tout_image_nid';
  $handler->display->display_options['fields']['field_image']['ui_name'] = 'Content: Image (ATW Dest)';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'views-field-field-lrg-rect-image';
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'tfk_rect_medium',
    'image_link' => '',
  );
  /* Field: Content: Credit (ATW Dest) */
  $handler->display->display_options['fields']['field_credit_2']['id'] = 'field_credit_2';
  $handler->display->display_options['fields']['field_credit_2']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit_2']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit_2']['relationship'] = 'field_tout_image_nid';
  $handler->display->display_options['fields']['field_credit_2']['ui_name'] = 'Content: Credit (ATW Dest)';
  $handler->display->display_options['fields']['field_credit_2']['label'] = '';
  $handler->display->display_options['fields']['field_credit_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit_2']['element_wrapper_class'] = 'views-field-field-image-credit';
  $handler->display->display_options['fields']['field_credit_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_credit_2']['empty_zero'] = TRUE;
  /* Field: Credit (Video) */
  $handler->display->display_options['fields']['field_credit_1']['id'] = 'field_credit_1';
  $handler->display->display_options['fields']['field_credit_1']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit_1']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit_1']['ui_name'] = 'Credit (Video)';
  $handler->display->display_options['fields']['field_credit_1']['label'] = '';
  $handler->display->display_options['fields']['field_credit_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_credit_1']['empty_zero'] = TRUE;
  /* Field: Credit (Minisite) */
  $handler->display->display_options['fields']['field_minisite_tout_credit']['id'] = 'field_minisite_tout_credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['table'] = 'field_data_field_minisite_tout_credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['field'] = 'field_minisite_tout_credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['ui_name'] = 'Credit (Minisite)';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['label'] = '';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_tout_credit']['element_wrapper_class'] = 'views-field-field-image-credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_minisite_tout_credit']['empty_zero'] = TRUE;
  /* Field: Content: Credit */
  $handler->display->display_options['fields']['field_credit']['id'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['relationship'] = 'field_slideshow_images_nid';
  $handler->display->display_options['fields']['field_credit']['label'] = '';
  $handler->display->display_options['fields']['field_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_credit']['empty_zero'] = TRUE;
  /* Field: Content: Image Credit (Article) */
  $handler->display->display_options['fields']['field_image_credit']['id'] = 'field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['table'] = 'field_data_field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['field'] = 'field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['ui_name'] = 'Content: Image Credit (Article)';
  $handler->display->display_options['fields']['field_image_credit']['label'] = '';
  $handler->display->display_options['fields']['field_image_credit']['alter']['text'] = '[field_image_credit]
[field_credit_2]';
  $handler->display->display_options['fields']['field_image_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_credit']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image_credit']['empty_zero'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '32';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Deck (Article and Video) */
  $handler->display->display_options['fields']['field_deck']['id'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['table'] = 'field_data_field_deck';
  $handler->display->display_options['fields']['field_deck']['field'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['ui_name'] = 'Content: Deck (Article and Video)';
  $handler->display->display_options['fields']['field_deck']['label'] = '';
  $handler->display->display_options['fields']['field_deck']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_deck']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_deck']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_deck']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_deck']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_deck']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_deck']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Content: Deck (Slideshow) */
  $handler->display->display_options['fields']['field_slideshow_description']['id'] = 'field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['table'] = 'field_data_field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['field'] = 'field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['ui_name'] = 'Content: Deck (Slideshow)';
  $handler->display->display_options['fields']['field_slideshow_description']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_description']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_slideshow_description']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Content: Deck (ATW) */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['ui_name'] = 'Content: Deck (ATW)';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_description']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Content: Deck */
  $handler->display->display_options['fields']['field_destination_deck']['id'] = 'field_destination_deck';
  $handler->display->display_options['fields']['field_destination_deck']['table'] = 'field_data_field_destination_deck';
  $handler->display->display_options['fields']['field_destination_deck']['field'] = 'field_destination_deck';
  $handler->display->display_options['fields']['field_destination_deck']['label'] = '';
  $handler->display->display_options['fields']['field_destination_deck']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_destination_deck']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_destination_deck']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_destination_deck']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_destination_deck']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_destination_deck']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_destination_deck']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Content: Deck (Mini-site), points to body field. */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['ui_name'] = 'Content: Deck (Mini-site), points to body field.';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '85',
  );
  /* Field: View Full Article */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'View Full Article';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'View Full Article';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = TRUE;
  $handler->display->display_options['block_description'] = 'Homepage Secondary Touts';
  $handler->display->display_options['block_caching'] = '1';

  /* Display: News Secondary Touts Anon */
  $handler = $view->new_display('block', 'News Secondary Touts Anon', 'block_3_anon');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: news_news_block */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = '';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'news_news_block';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Content: Related Article (field_related_articles) */
  $handler->display->display_options['relationships']['field_related_articles_nid']['id'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['relationships']['field_related_articles_nid']['field'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['delta'] = '-1';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Relationship: Slideshow image */
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['id'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['table'] = 'field_data_field_slideshow_images';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['field'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['ui_name'] = 'Slideshow image';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['delta'] = '0';
  /* Relationship: Content: Tout Image (field_tout_image) */
  $handler->display->display_options['relationships']['field_tout_image_nid']['id'] = 'field_tout_image_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['table'] = 'field_data_field_tout_image';
  $handler->display->display_options['relationships']['field_tout_image_nid']['field'] = 'field_tout_image_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['delta'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'news-archive/[name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Field: Content: Large Rectangle Image */
  $handler->display->display_options['fields']['field_lrg_rect_image']['id'] = 'field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['table'] = 'field_data_field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['field'] = 'field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['label'] = '';
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['text'] = '[field_lrg_rect_image]
<div class="icon"></div>';
  $handler->display->display_options['fields']['field_lrg_rect_image']['element_class'] = '[type]';
  $handler->display->display_options['fields']['field_lrg_rect_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lrg_rect_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_rect_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lrg_rect_image']['settings'] = array(
    'image_style' => 'tfk_rect_medium',
    'image_link' => '',
  );
  /* Field: Content: Tout Image (minisite) */
  $handler->display->display_options['fields']['field_minisite_tout_image']['id'] = 'field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['table'] = 'field_data_field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['field'] = 'field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['ui_name'] = 'Content: Tout Image (minisite)';
  $handler->display->display_options['fields']['field_minisite_tout_image']['label'] = '';
  $handler->display->display_options['fields']['field_minisite_tout_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_tout_image']['element_wrapper_class'] = 'views-field-field-lrg-rect-image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_minisite_tout_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_tout_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_minisite_tout_image']['settings'] = array(
    'image_style' => 'tfk_rect_medium',
    'image_link' => 'content',
  );
  /* Field: Content: Image (ATW Dest) */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_tout_image_nid';
  $handler->display->display_options['fields']['field_image']['ui_name'] = 'Content: Image (ATW Dest)';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'views-field-field-lrg-rect-image';
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'tfk_rect_medium',
    'image_link' => '',
  );
  /* Field: Content: Credit (ATW Dest) */
  $handler->display->display_options['fields']['field_credit_2']['id'] = 'field_credit_2';
  $handler->display->display_options['fields']['field_credit_2']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit_2']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit_2']['relationship'] = 'field_tout_image_nid';
  $handler->display->display_options['fields']['field_credit_2']['ui_name'] = 'Content: Credit (ATW Dest)';
  $handler->display->display_options['fields']['field_credit_2']['label'] = '';
  $handler->display->display_options['fields']['field_credit_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit_2']['element_wrapper_class'] = 'views-field-field-image-credit';
  $handler->display->display_options['fields']['field_credit_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_credit_2']['empty_zero'] = TRUE;
  /* Field: Credit (Video) */
  $handler->display->display_options['fields']['field_credit_1']['id'] = 'field_credit_1';
  $handler->display->display_options['fields']['field_credit_1']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit_1']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit_1']['ui_name'] = 'Credit (Video)';
  $handler->display->display_options['fields']['field_credit_1']['label'] = '';
  $handler->display->display_options['fields']['field_credit_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_credit_1']['empty_zero'] = TRUE;
  /* Field: Credit (Minisite) */
  $handler->display->display_options['fields']['field_minisite_tout_credit']['id'] = 'field_minisite_tout_credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['table'] = 'field_data_field_minisite_tout_credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['field'] = 'field_minisite_tout_credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['ui_name'] = 'Credit (Minisite)';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['label'] = '';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_tout_credit']['element_wrapper_class'] = 'views-field-field-image-credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_minisite_tout_credit']['empty_zero'] = TRUE;
  /* Field: Content: Credit */
  $handler->display->display_options['fields']['field_credit']['id'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['relationship'] = 'field_slideshow_images_nid';
  $handler->display->display_options['fields']['field_credit']['label'] = '';
  $handler->display->display_options['fields']['field_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_credit']['empty_zero'] = TRUE;
  /* Field: Content: Image Credit (Article) */
  $handler->display->display_options['fields']['field_image_credit']['id'] = 'field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['table'] = 'field_data_field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['field'] = 'field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['ui_name'] = 'Content: Image Credit (Article)';
  $handler->display->display_options['fields']['field_image_credit']['label'] = '';
  $handler->display->display_options['fields']['field_image_credit']['alter']['text'] = '[field_image_credit]
[field_credit_2]';
  $handler->display->display_options['fields']['field_image_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_credit']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image_credit']['empty_zero'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '32';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Deck (Article and Video) */
  $handler->display->display_options['fields']['field_deck']['id'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['table'] = 'field_data_field_deck';
  $handler->display->display_options['fields']['field_deck']['field'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['ui_name'] = 'Content: Deck (Article and Video)';
  $handler->display->display_options['fields']['field_deck']['label'] = '';
  $handler->display->display_options['fields']['field_deck']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_deck']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_deck']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_deck']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_deck']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_deck']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_deck']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Content: Deck (Slideshow) */
  $handler->display->display_options['fields']['field_slideshow_description']['id'] = 'field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['table'] = 'field_data_field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['field'] = 'field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['ui_name'] = 'Content: Deck (Slideshow)';
  $handler->display->display_options['fields']['field_slideshow_description']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_description']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_slideshow_description']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Content: Deck (ATW) */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['ui_name'] = 'Content: Deck (ATW)';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_description']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Content: Deck */
  $handler->display->display_options['fields']['field_destination_deck']['id'] = 'field_destination_deck';
  $handler->display->display_options['fields']['field_destination_deck']['table'] = 'field_data_field_destination_deck';
  $handler->display->display_options['fields']['field_destination_deck']['field'] = 'field_destination_deck';
  $handler->display->display_options['fields']['field_destination_deck']['label'] = '';
  $handler->display->display_options['fields']['field_destination_deck']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_destination_deck']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_destination_deck']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_destination_deck']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_destination_deck']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_destination_deck']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_destination_deck']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Content: Deck (Mini-site), points to body field. */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['ui_name'] = 'Content: Deck (Mini-site), points to body field.';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '85',
  );
  /* Field: View Full Article */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'View Full Article';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'View Full Article';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = TRUE;
  $handler->display->display_options['block_description'] = 'News Secondary Touts';
  $handler->display->display_options['block_caching'] = '1';

  /* Display: kid_rep_anon */
  $handler = $view->new_display('block', 'kid_rep_anon', 'block_5_anon');
  $handler->display->display_options['display_description'] = 'kid_rep_anon';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: kid_reporter_news_block */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = '';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'kid_reporter_news_block';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Content: Related Article (field_related_articles) */
  $handler->display->display_options['relationships']['field_related_articles_nid']['id'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['relationships']['field_related_articles_nid']['field'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['delta'] = '-1';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Relationship: Slideshow image */
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['id'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['table'] = 'field_data_field_slideshow_images';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['field'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['ui_name'] = 'Slideshow image';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['delta'] = '0';
  /* Relationship: Content: Tout Image (field_tout_image) */
  $handler->display->display_options['relationships']['field_tout_image_nid']['id'] = 'field_tout_image_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['table'] = 'field_data_field_tout_image';
  $handler->display->display_options['relationships']['field_tout_image_nid']['field'] = 'field_tout_image_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['delta'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'news-archive/[name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Field: Content: Large Rectangle Image */
  $handler->display->display_options['fields']['field_lrg_rect_image']['id'] = 'field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['table'] = 'field_data_field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['field'] = 'field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['label'] = '';
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_rect_image']['alter']['text'] = '[field_lrg_rect_image]
<div class="icon"></div>';
  $handler->display->display_options['fields']['field_lrg_rect_image']['element_class'] = '[type]';
  $handler->display->display_options['fields']['field_lrg_rect_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lrg_rect_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_rect_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lrg_rect_image']['settings'] = array(
    'image_style' => 'tfk_rect_medium',
    'image_link' => '',
  );
  /* Field: Content: Tout Image (minisite) */
  $handler->display->display_options['fields']['field_minisite_tout_image']['id'] = 'field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['table'] = 'field_data_field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['field'] = 'field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['ui_name'] = 'Content: Tout Image (minisite)';
  $handler->display->display_options['fields']['field_minisite_tout_image']['label'] = '';
  $handler->display->display_options['fields']['field_minisite_tout_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_tout_image']['element_wrapper_class'] = 'views-field-field-lrg-rect-image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_minisite_tout_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_tout_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_minisite_tout_image']['settings'] = array(
    'image_style' => 'tfk_rect_medium',
    'image_link' => 'content',
  );
  /* Field: Content: Image (ATW Dest) */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_tout_image_nid';
  $handler->display->display_options['fields']['field_image']['ui_name'] = 'Content: Image (ATW Dest)';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'views-field-field-lrg-rect-image';
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'tfk_rect_medium',
    'image_link' => '',
  );
  /* Field: Content: Credit (ATW Dest) */
  $handler->display->display_options['fields']['field_credit_2']['id'] = 'field_credit_2';
  $handler->display->display_options['fields']['field_credit_2']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit_2']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit_2']['relationship'] = 'field_tout_image_nid';
  $handler->display->display_options['fields']['field_credit_2']['ui_name'] = 'Content: Credit (ATW Dest)';
  $handler->display->display_options['fields']['field_credit_2']['label'] = '';
  $handler->display->display_options['fields']['field_credit_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit_2']['element_wrapper_class'] = 'views-field-field-image-credit';
  $handler->display->display_options['fields']['field_credit_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_credit_2']['empty_zero'] = TRUE;
  /* Field: Credit (Video) */
  $handler->display->display_options['fields']['field_credit_1']['id'] = 'field_credit_1';
  $handler->display->display_options['fields']['field_credit_1']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit_1']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit_1']['ui_name'] = 'Credit (Video)';
  $handler->display->display_options['fields']['field_credit_1']['label'] = '';
  $handler->display->display_options['fields']['field_credit_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_credit_1']['empty_zero'] = TRUE;
  /* Field: Credit (Minisite) */
  $handler->display->display_options['fields']['field_minisite_tout_credit']['id'] = 'field_minisite_tout_credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['table'] = 'field_data_field_minisite_tout_credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['field'] = 'field_minisite_tout_credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['ui_name'] = 'Credit (Minisite)';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['label'] = '';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_tout_credit']['element_wrapper_class'] = 'views-field-field-image-credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_minisite_tout_credit']['empty_zero'] = TRUE;
  /* Field: Content: Credit */
  $handler->display->display_options['fields']['field_credit']['id'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['relationship'] = 'field_slideshow_images_nid';
  $handler->display->display_options['fields']['field_credit']['label'] = '';
  $handler->display->display_options['fields']['field_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_credit']['empty_zero'] = TRUE;
  /* Field: Content: Image Credit (Article) */
  $handler->display->display_options['fields']['field_image_credit']['id'] = 'field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['table'] = 'field_data_field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['field'] = 'field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['ui_name'] = 'Content: Image Credit (Article)';
  $handler->display->display_options['fields']['field_image_credit']['label'] = '';
  $handler->display->display_options['fields']['field_image_credit']['alter']['text'] = '[field_image_credit]
[field_credit_2]';
  $handler->display->display_options['fields']['field_image_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_credit']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image_credit']['empty_zero'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '32';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Deck (Article and Video) */
  $handler->display->display_options['fields']['field_deck']['id'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['table'] = 'field_data_field_deck';
  $handler->display->display_options['fields']['field_deck']['field'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['ui_name'] = 'Content: Deck (Article and Video)';
  $handler->display->display_options['fields']['field_deck']['label'] = '';
  $handler->display->display_options['fields']['field_deck']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_deck']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_deck']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_deck']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_deck']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_deck']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_deck']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Content: Deck (Slideshow) */
  $handler->display->display_options['fields']['field_slideshow_description']['id'] = 'field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['table'] = 'field_data_field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['field'] = 'field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['ui_name'] = 'Content: Deck (Slideshow)';
  $handler->display->display_options['fields']['field_slideshow_description']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_description']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_slideshow_description']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Content: Deck (ATW) */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['ui_name'] = 'Content: Deck (ATW)';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_description']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Content: Deck (Mini-site), points to body field. */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['ui_name'] = 'Content: Deck (Mini-site), points to body field.';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '85',
  );
  /* Field: View Full Article */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'View Full Article';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'View Full Article';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = TRUE;
  /* Field: Content: Deck */
  $handler->display->display_options['fields']['field_destination_deck']['id'] = 'field_destination_deck';
  $handler->display->display_options['fields']['field_destination_deck']['table'] = 'field_data_field_destination_deck';
  $handler->display->display_options['fields']['field_destination_deck']['field'] = 'field_destination_deck';
  $handler->display->display_options['fields']['field_destination_deck']['label'] = '';
  $handler->display->display_options['fields']['field_destination_deck']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_destination_deck']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_destination_deck']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_destination_deck']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_destination_deck']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_destination_deck']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_destination_deck']['settings'] = array(
    'trim_length' => '120',
  );
  $handler->display->display_options['block_description'] = 'Kid Reporter Secondary Touts';
  $handler->display->display_options['block_caching'] = '1';
  $export['homepage_news_block'] = $view;

  $view = new view();
  $view->name = 'homepage_news_for_teachers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Homepage News For Teachers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Homepage News For Teachers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'tfk_50px_50px',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_article_url-value]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Time Article Url */
  $handler->display->display_options['fields']['field_article_url_1']['id'] = 'field_article_url_1';
  $handler->display->display_options['fields']['field_article_url_1']['table'] = 'field_data_field_article_url';
  $handler->display->display_options['fields']['field_article_url_1']['field'] = 'field_article_url';
  $handler->display->display_options['fields']['field_article_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_article_url_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_article_url_1']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['field_article_url_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_article_url_1']['alter']['path'] = '[field_article_url_1-value]';
  $handler->display->display_options['fields']['field_article_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_url_1']['hide_alter_empty'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  /* Field: Content: Time Article Url */
  $handler->display->display_options['fields']['field_article_url']['id'] = 'field_article_url';
  $handler->display->display_options['fields']['field_article_url']['table'] = 'field_data_field_article_url';
  $handler->display->display_options['fields']['field_article_url']['field'] = 'field_article_url';
  $handler->display->display_options['fields']['field_article_url']['label'] = '';
  $handler->display->display_options['fields']['field_article_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_article_url']['alter']['text'] = 'View Article';
  $handler->display->display_options['fields']['field_article_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_article_url']['alter']['path'] = '[field_article_url-value]';
  $handler->display->display_options['fields']['field_article_url']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_article_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_url']['hide_alter_empty'] = FALSE;
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
    'homepage_news_for_teachers' => 'homepage_news_for_teachers',
  );

  /* Display: Homepage Bottom Time Article */
  $handler = $view->new_display('block', 'Homepage Bottom Time Article', 'block');
  $handler->display->display_options['block_caching'] = '1';
  $export['homepage_news_for_teachers'] = $view;

  $view = new view();
  $view->name = 'homepage_top_story';
  $view->description = 'Provides Views for Primary Touts in various channels.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'homepage_top_story';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan'] = '-1';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Flags: homepage_top_story */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = '';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'homepage_top_story';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Content: Related Article (field_related_articles) */
  $handler->display->display_options['relationships']['field_related_articles_nid']['id'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['relationships']['field_related_articles_nid']['field'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['delta'] = '-1';
  /* Relationship: Field: Grade Level (field_grade_level) */
  $handler->display->display_options['relationships']['field_grade_level_tid']['id'] = 'field_grade_level_tid';
  $handler->display->display_options['relationships']['field_grade_level_tid']['table'] = 'field_data_field_grade_level';
  $handler->display->display_options['relationships']['field_grade_level_tid']['field'] = 'field_grade_level_tid';
  /* Relationship: Content: Mini-Lessons (field_mini_lessons) */
  $handler->display->display_options['relationships']['field_mini_lessons_nid']['id'] = 'field_mini_lessons_nid';
  $handler->display->display_options['relationships']['field_mini_lessons_nid']['table'] = 'field_data_field_mini_lessons';
  $handler->display->display_options['relationships']['field_mini_lessons_nid']['field'] = 'field_mini_lessons_nid';
  $handler->display->display_options['relationships']['field_mini_lessons_nid']['delta'] = '-1';
  /* Relationship: Slideshow big image */
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['id'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['table'] = 'field_data_field_slideshow_images';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['field'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['ui_name'] = 'Slideshow big image';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['delta'] = '0';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = FALSE;
  /* Field: Content: Large Square Image (Article and Slideshow) */
  $handler->display->display_options['fields']['field_lrg_sq_image']['id'] = 'field_lrg_sq_image';
  $handler->display->display_options['fields']['field_lrg_sq_image']['table'] = 'field_data_field_lrg_sq_image';
  $handler->display->display_options['fields']['field_lrg_sq_image']['field'] = 'field_lrg_sq_image';
  $handler->display->display_options['fields']['field_lrg_sq_image']['ui_name'] = 'Content: Large Square Image (Article and Slideshow)';
  $handler->display->display_options['fields']['field_lrg_sq_image']['label'] = '';
  $handler->display->display_options['fields']['field_lrg_sq_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['alter']['text'] = '[field_lrg_sq_image]
<div class="icon"></div>';
  $handler->display->display_options['fields']['field_lrg_sq_image']['element_class'] = '[type]';
  $handler->display->display_options['fields']['field_lrg_sq_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lrg_sq_image']['settings'] = array(
    'image_style' => 'tfk_square_large',
    'image_link' => '',
  );
  /* Field: Content: Large Square Image (Video Thumbnail) */
  $handler->display->display_options['fields']['field_video_thumbnail']['id'] = 'field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['table'] = 'field_data_field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['field'] = 'field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['ui_name'] = 'Content: Large Square Image (Video Thumbnail)';
  $handler->display->display_options['fields']['field_video_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['text'] = '[field_video_thumbnail]
<div class="icon"></div>';
  $handler->display->display_options['fields']['field_video_thumbnail']['element_class'] = '[type]';
  $handler->display->display_options['fields']['field_video_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_thumbnail']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video_thumbnail']['settings'] = array(
    'image_style' => 'tfk_square_large',
    'image_link' => '',
  );
  /* Field: Article image credit */
  $handler->display->display_options['fields']['field_image_credit']['id'] = 'field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['table'] = 'field_data_field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['field'] = 'field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['ui_name'] = 'Article image credit';
  $handler->display->display_options['fields']['field_image_credit']['label'] = '';
  $handler->display->display_options['fields']['field_image_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_credit']['hide_alter_empty'] = FALSE;
  /* Field: Top Story Right Square */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Top Story Right Square';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="top-story-right-square"></div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Top Story Label */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Top Story Label';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Top Story';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'span';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'views-field-nothing';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '32';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Article and Video deck */
  $handler->display->display_options['fields']['field_deck']['id'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['table'] = 'field_data_field_deck';
  $handler->display->display_options['fields']['field_deck']['field'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['ui_name'] = 'Article and Video deck';
  $handler->display->display_options['fields']['field_deck']['label'] = '';
  $handler->display->display_options['fields']['field_deck']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_deck']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_deck']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_deck']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_deck']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_deck']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Slideshow description */
  $handler->display->display_options['fields']['field_slideshow_description']['id'] = 'field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['table'] = 'field_data_field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['field'] = 'field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['ui_name'] = 'Slideshow description';
  $handler->display->display_options['fields']['field_slideshow_description']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_description']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_slideshow_description']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Image caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['relationship'] = 'field_slideshow_images_nid';
  $handler->display->display_options['fields']['field_caption']['ui_name'] = 'Image caption';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['alter']['max_length'] = '140';
  $handler->display->display_options['fields']['field_caption']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption']['hide_alter_empty'] = FALSE;
  /* Field: Image credit */
  $handler->display->display_options['fields']['field_credit']['id'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['relationship'] = 'field_slideshow_images_nid';
  $handler->display->display_options['fields']['field_credit']['ui_name'] = 'Image credit';
  $handler->display->display_options['fields']['field_credit']['label'] = '';
  $handler->display->display_options['fields']['field_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit']['hide_alter_empty'] = FALSE;
  /* Field: Video caption */
  $handler->display->display_options['fields']['field_caption_1']['id'] = 'field_caption_1';
  $handler->display->display_options['fields']['field_caption_1']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption_1']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption_1']['ui_name'] = 'Video caption';
  $handler->display->display_options['fields']['field_caption_1']['label'] = '';
  $handler->display->display_options['fields']['field_caption_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption_1']['hide_alter_empty'] = FALSE;
  /* Field: Video credit */
  $handler->display->display_options['fields']['field_credit_1']['id'] = 'field_credit_1';
  $handler->display->display_options['fields']['field_credit_1']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit_1']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit_1']['ui_name'] = 'Video credit';
  $handler->display->display_options['fields']['field_credit_1']['label'] = '';
  $handler->display->display_options['fields']['field_credit_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit_1']['hide_alter_empty'] = FALSE;
  /* Field: Bottom Title Link */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['ui_name'] = 'Bottom Title Link';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['text'] = 'View Full Article';
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['hide_alter_empty'] = FALSE;
  /* Field: Content: Mini-Lessons */
  $handler->display->display_options['fields']['field_mini_lessons']['id'] = 'field_mini_lessons';
  $handler->display->display_options['fields']['field_mini_lessons']['table'] = 'field_data_field_mini_lessons';
  $handler->display->display_options['fields']['field_mini_lessons']['field'] = 'field_mini_lessons';
  $handler->display->display_options['fields']['field_mini_lessons']['label'] = 'Mini Lessons';
  $handler->display->display_options['fields']['field_mini_lessons']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mini_lessons']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_mini_lessons']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_mini_lessons']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_mini_lessons']['type'] = 'tfk_news_grade_title';
  $handler->display->display_options['fields']['field_mini_lessons']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_mini_lessons']['separator'] = ' | ';
  /* Field: Content: Related Article */
  $handler->display->display_options['fields']['field_related_articles']['id'] = 'field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['field'] = 'field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_related_articles']['delta_offset'] = '0';
  /* Field: Content: Additional Content (Slideshow and Video) */
  $handler->display->display_options['fields']['field_additional_content']['id'] = 'field_additional_content';
  $handler->display->display_options['fields']['field_additional_content']['table'] = 'field_data_field_additional_content';
  $handler->display->display_options['fields']['field_additional_content']['field'] = 'field_additional_content';
  $handler->display->display_options['fields']['field_additional_content']['ui_name'] = 'Content: Additional Content (Slideshow and Video)';
  $handler->display->display_options['fields']['field_additional_content']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_additional_content']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_additional_content']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_additional_content']['delta_offset'] = '0';
  /* Field: Content: Credit */
  $handler->display->display_options['fields']['field_slideshow_credit']['id'] = 'field_slideshow_credit';
  $handler->display->display_options['fields']['field_slideshow_credit']['table'] = 'field_data_field_slideshow_credit';
  $handler->display->display_options['fields']['field_slideshow_credit']['field'] = 'field_slideshow_credit';
  $handler->display->display_options['fields']['field_slideshow_credit']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_credit']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_credit']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Sort criterion: Content: Images (field_slideshow_images:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_slideshow_images';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
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
    'slideshow' => 'slideshow',
    'video' => 'video',
  );
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flag_content';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';

  /* Display: Homepage Main Tout */
  $handler = $view->new_display('block', 'Homepage Main Tout', 'block_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: homepage_top_story */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = '';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'homepage_top_story';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Content: Related Article (field_related_articles) */
  $handler->display->display_options['relationships']['field_related_articles_nid']['id'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['relationships']['field_related_articles_nid']['field'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['delta'] = '-1';
  /* Relationship: Field: Grade Level (field_grade_level) */
  $handler->display->display_options['relationships']['field_grade_level_tid']['id'] = 'field_grade_level_tid';
  $handler->display->display_options['relationships']['field_grade_level_tid']['table'] = 'field_data_field_grade_level';
  $handler->display->display_options['relationships']['field_grade_level_tid']['field'] = 'field_grade_level_tid';
  /* Relationship: Content: Mini-Lessons (field_mini_lessons) */
  $handler->display->display_options['relationships']['field_mini_lessons_nid']['id'] = 'field_mini_lessons_nid';
  $handler->display->display_options['relationships']['field_mini_lessons_nid']['table'] = 'field_data_field_mini_lessons';
  $handler->display->display_options['relationships']['field_mini_lessons_nid']['field'] = 'field_mini_lessons_nid';
  $handler->display->display_options['relationships']['field_mini_lessons_nid']['delta'] = '-1';
  /* Relationship: Slideshow big image */
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['id'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['table'] = 'field_data_field_slideshow_images';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['field'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['ui_name'] = 'Slideshow big image';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['delta'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = FALSE;
  /* Field: Content: Large Square Image (Article and Slideshow) */
  $handler->display->display_options['fields']['field_lrg_sq_image']['id'] = 'field_lrg_sq_image';
  $handler->display->display_options['fields']['field_lrg_sq_image']['table'] = 'field_data_field_lrg_sq_image';
  $handler->display->display_options['fields']['field_lrg_sq_image']['field'] = 'field_lrg_sq_image';
  $handler->display->display_options['fields']['field_lrg_sq_image']['ui_name'] = 'Content: Large Square Image (Article and Slideshow)';
  $handler->display->display_options['fields']['field_lrg_sq_image']['label'] = '';
  $handler->display->display_options['fields']['field_lrg_sq_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['alter']['text'] = '[field_lrg_sq_image]
<div class="icon"></div>';
  $handler->display->display_options['fields']['field_lrg_sq_image']['element_class'] = '[type]';
  $handler->display->display_options['fields']['field_lrg_sq_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lrg_sq_image']['settings'] = array(
    'image_style' => 'tfk_square_large',
    'image_link' => '',
  );
  /* Field: Content: Large Square Image (Video Thumbnail) */
  $handler->display->display_options['fields']['field_video_thumbnail']['id'] = 'field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['table'] = 'field_data_field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['field'] = 'field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['ui_name'] = 'Content: Large Square Image (Video Thumbnail)';
  $handler->display->display_options['fields']['field_video_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['text'] = '[field_video_thumbnail]
<div class="icon"></div>';
  $handler->display->display_options['fields']['field_video_thumbnail']['element_class'] = '[type]';
  $handler->display->display_options['fields']['field_video_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_thumbnail']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video_thumbnail']['settings'] = array(
    'image_style' => 'tfk_square_large',
    'image_link' => '',
  );
  /* Field: Thumbnail Image(Minisite) */
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['id'] = 'field_minisite_thumbnail_image';
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['table'] = 'field_data_field_minisite_thumbnail_image';
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['field'] = 'field_minisite_thumbnail_image';
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['ui_name'] = 'Thumbnail Image(Minisite)';
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['label'] = '';
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['alter']['text'] = '[field_minisite_thumbnail_image]
<div class="icon"></div>';
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['element_class'] = '[type]';
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['settings'] = array(
    'image_style' => 'tfk_square_large',
    'image_link' => '',
  );
  /* Field: Article image credit */
  $handler->display->display_options['fields']['field_image_credit']['id'] = 'field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['table'] = 'field_data_field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['field'] = 'field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['ui_name'] = 'Article image credit';
  $handler->display->display_options['fields']['field_image_credit']['label'] = '';
  $handler->display->display_options['fields']['field_image_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_credit']['hide_empty'] = TRUE;
  /* Field: Top Story Right Square */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Top Story Right Square';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="top-story-right-square"></div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Top Story Label */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Top Story Label';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Top Story';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'span';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'views-field-nothing';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '32';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_class'] = '[type]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Article and Video deck */
  $handler->display->display_options['fields']['field_deck']['id'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['table'] = 'field_data_field_deck';
  $handler->display->display_options['fields']['field_deck']['field'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['ui_name'] = 'Article and Video deck';
  $handler->display->display_options['fields']['field_deck']['label'] = '';
  $handler->display->display_options['fields']['field_deck']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_deck']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_deck']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_deck']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_deck']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_deck']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '110',
  );
  /* Field: Slideshow description */
  $handler->display->display_options['fields']['field_slideshow_description']['id'] = 'field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['table'] = 'field_data_field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['field'] = 'field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['ui_name'] = 'Slideshow description';
  $handler->display->display_options['fields']['field_slideshow_description']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_description']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_slideshow_description']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Image caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['relationship'] = 'field_slideshow_images_nid';
  $handler->display->display_options['fields']['field_caption']['ui_name'] = 'Image caption';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['alter']['max_length'] = '140';
  $handler->display->display_options['fields']['field_caption']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption']['hide_empty'] = TRUE;
  /* Field: Image credit */
  $handler->display->display_options['fields']['field_credit']['id'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['relationship'] = 'field_slideshow_images_nid';
  $handler->display->display_options['fields']['field_credit']['ui_name'] = 'Image credit';
  $handler->display->display_options['fields']['field_credit']['label'] = '';
  $handler->display->display_options['fields']['field_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit']['hide_empty'] = TRUE;
  /* Field: Video caption */
  $handler->display->display_options['fields']['field_caption_1']['id'] = 'field_caption_1';
  $handler->display->display_options['fields']['field_caption_1']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption_1']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption_1']['ui_name'] = 'Video caption';
  $handler->display->display_options['fields']['field_caption_1']['label'] = '';
  $handler->display->display_options['fields']['field_caption_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption_1']['hide_empty'] = TRUE;
  /* Field: Video credit */
  $handler->display->display_options['fields']['field_credit_1']['id'] = 'field_credit_1';
  $handler->display->display_options['fields']['field_credit_1']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit_1']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit_1']['ui_name'] = 'Video credit';
  $handler->display->display_options['fields']['field_credit_1']['label'] = '';
  $handler->display->display_options['fields']['field_credit_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit_1']['hide_empty'] = TRUE;
  /* Field: Bottom Title Link */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['ui_name'] = 'Bottom Title Link';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['text'] = 'View Full [type]';
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['hide_alter_empty'] = FALSE;
  /* Field: Content: Mini-Lessons */
  $handler->display->display_options['fields']['field_mini_lessons']['id'] = 'field_mini_lessons';
  $handler->display->display_options['fields']['field_mini_lessons']['table'] = 'field_data_field_mini_lessons';
  $handler->display->display_options['fields']['field_mini_lessons']['field'] = 'field_mini_lessons';
  $handler->display->display_options['fields']['field_mini_lessons']['label'] = 'Mini Lessons';
  $handler->display->display_options['fields']['field_mini_lessons']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mini_lessons']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_mini_lessons']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_mini_lessons']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_mini_lessons']['type'] = 'tfk_news_grade_title';
  $handler->display->display_options['fields']['field_mini_lessons']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_mini_lessons']['separator'] = ' | ';
  /* Field: Content: Related Article */
  $handler->display->display_options['fields']['field_related_articles']['id'] = 'field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['field'] = 'field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_related_articles']['delta_offset'] = '0';
  /* Field: Content: Additional Content (Slideshow and Video) */
  $handler->display->display_options['fields']['field_additional_content']['id'] = 'field_additional_content';
  $handler->display->display_options['fields']['field_additional_content']['table'] = 'field_data_field_additional_content';
  $handler->display->display_options['fields']['field_additional_content']['field'] = 'field_additional_content';
  $handler->display->display_options['fields']['field_additional_content']['ui_name'] = 'Content: Additional Content (Slideshow and Video)';
  $handler->display->display_options['fields']['field_additional_content']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_additional_content']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_additional_content']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_additional_content']['delta_offset'] = '0';
  /* Field: Content: Credit */
  $handler->display->display_options['fields']['field_slideshow_credit']['id'] = 'field_slideshow_credit';
  $handler->display->display_options['fields']['field_slideshow_credit']['table'] = 'field_data_field_slideshow_credit';
  $handler->display->display_options['fields']['field_slideshow_credit']['field'] = 'field_slideshow_credit';
  $handler->display->display_options['fields']['field_slideshow_credit']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_credit']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_credit']['element_label_colon'] = FALSE;
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
    'article' => 'article',
    'minisite' => 'minisite',
    'slideshow' => 'slideshow',
    'video' => 'video',
  );
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flag_content';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';
  $handler->display->display_options['block_description'] = 'Homepage Main Tout';
  $handler->display->display_options['block_caching'] = '1';

  /* Display: Homepage Thumbnails */
  $handler = $view->new_display('attachment', 'Homepage Thumbnails', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_image' => 'field_image',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Slideshow thumbnails */
  $handler->display->display_options['relationships']['field_slideshow_images_nid_1']['id'] = 'field_slideshow_images_nid_1';
  $handler->display->display_options['relationships']['field_slideshow_images_nid_1']['table'] = 'field_data_field_slideshow_images';
  $handler->display->display_options['relationships']['field_slideshow_images_nid_1']['field'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid_1']['ui_name'] = 'Slideshow thumbnails';
  $handler->display->display_options['relationships']['field_slideshow_images_nid_1']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_slideshow_images_nid_1']['delta'] = '-1';
  /* Relationship: Flags: homepage_top_story */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'homepage_top_story';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['counter']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['path']['empty_zero'] = TRUE;
  /* Field: Slideshow thumbnail */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_slideshow_images_nid_1';
  $handler->display->display_options['fields']['field_image']['ui_name'] = 'Slideshow thumbnail';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[path]/[counter]';
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['link_class'] = 'featured-thumbnail';
  $handler->display->display_options['fields']['field_image']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'featured-thumbnail';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'featured-thumbnail';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'tfk_60x60',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'slideshow' => 'slideshow',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flag_content';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'block_1' => 'block_1',
    'block_2' => 'block_2',
    'block_3' => 0,
    'block_4' => 0,
    'block_5' => 0,
    'block_6' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Homepage Main Tout Anon */
  $handler = $view->new_display('block', 'Homepage Main Tout Anon', 'block_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: homepage_top_story */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = '';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'homepage_top_story';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Content: Related Article (field_related_articles) */
  $handler->display->display_options['relationships']['field_related_articles_nid']['id'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['relationships']['field_related_articles_nid']['field'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['delta'] = '-1';
  /* Relationship: Field: Grade Level (field_grade_level) */
  $handler->display->display_options['relationships']['field_grade_level_tid']['id'] = 'field_grade_level_tid';
  $handler->display->display_options['relationships']['field_grade_level_tid']['table'] = 'field_data_field_grade_level';
  $handler->display->display_options['relationships']['field_grade_level_tid']['field'] = 'field_grade_level_tid';
  /* Relationship: Content: Mini-Lessons (field_mini_lessons) */
  $handler->display->display_options['relationships']['field_mini_lessons_nid']['id'] = 'field_mini_lessons_nid';
  $handler->display->display_options['relationships']['field_mini_lessons_nid']['table'] = 'field_data_field_mini_lessons';
  $handler->display->display_options['relationships']['field_mini_lessons_nid']['field'] = 'field_mini_lessons_nid';
  $handler->display->display_options['relationships']['field_mini_lessons_nid']['delta'] = '-1';
  /* Relationship: Slideshow big image */
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['id'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['table'] = 'field_data_field_slideshow_images';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['field'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['ui_name'] = 'Slideshow big image';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['delta'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = FALSE;
  /* Field: Content: Large Square Image (Article and Slideshow) */
  $handler->display->display_options['fields']['field_lrg_sq_image']['id'] = 'field_lrg_sq_image';
  $handler->display->display_options['fields']['field_lrg_sq_image']['table'] = 'field_data_field_lrg_sq_image';
  $handler->display->display_options['fields']['field_lrg_sq_image']['field'] = 'field_lrg_sq_image';
  $handler->display->display_options['fields']['field_lrg_sq_image']['ui_name'] = 'Content: Large Square Image (Article and Slideshow)';
  $handler->display->display_options['fields']['field_lrg_sq_image']['label'] = '';
  $handler->display->display_options['fields']['field_lrg_sq_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['alter']['text'] = '[field_lrg_sq_image]
<div class="icon"></div>';
  $handler->display->display_options['fields']['field_lrg_sq_image']['element_class'] = '[type]';
  $handler->display->display_options['fields']['field_lrg_sq_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lrg_sq_image']['settings'] = array(
    'image_style' => 'tfk_square_large',
    'image_link' => '',
  );
  /* Field: Content: Large Square Image (Video Thumbnail) */
  $handler->display->display_options['fields']['field_video_thumbnail']['id'] = 'field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['table'] = 'field_data_field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['field'] = 'field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['ui_name'] = 'Content: Large Square Image (Video Thumbnail)';
  $handler->display->display_options['fields']['field_video_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['text'] = '[field_video_thumbnail]
<div class="icon"></div>';
  $handler->display->display_options['fields']['field_video_thumbnail']['element_class'] = '[type]';
  $handler->display->display_options['fields']['field_video_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_thumbnail']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video_thumbnail']['settings'] = array(
    'image_style' => 'tfk_square_large',
    'image_link' => '',
  );
  /* Field: Thumbnail Image(Minisite) */
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['id'] = 'field_minisite_thumbnail_image';
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['table'] = 'field_data_field_minisite_thumbnail_image';
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['field'] = 'field_minisite_thumbnail_image';
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['ui_name'] = 'Thumbnail Image(Minisite)';
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['label'] = '';
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['alter']['text'] = '[field_minisite_thumbnail_image]
<div class="icon"></div>';
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['element_class'] = '[type]';
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['settings'] = array(
    'image_style' => 'tfk_square_large',
    'image_link' => '',
  );
  /* Field: Article image credit */
  $handler->display->display_options['fields']['field_image_credit']['id'] = 'field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['table'] = 'field_data_field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['field'] = 'field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['ui_name'] = 'Article image credit';
  $handler->display->display_options['fields']['field_image_credit']['label'] = '';
  $handler->display->display_options['fields']['field_image_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_credit']['hide_empty'] = TRUE;
  /* Field: Top Story Right Square */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Top Story Right Square';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="top-story-right-square"></div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Top Story Label */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Top Story Label';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Top Story';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'span';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'views-field-nothing';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '32';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Article and Video deck */
  $handler->display->display_options['fields']['field_deck']['id'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['table'] = 'field_data_field_deck';
  $handler->display->display_options['fields']['field_deck']['field'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['ui_name'] = 'Article and Video deck';
  $handler->display->display_options['fields']['field_deck']['label'] = '';
  $handler->display->display_options['fields']['field_deck']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_deck']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_deck']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_deck']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_deck']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_deck']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '110',
  );
  /* Field: Slideshow description */
  $handler->display->display_options['fields']['field_slideshow_description']['id'] = 'field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['table'] = 'field_data_field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['field'] = 'field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['ui_name'] = 'Slideshow description';
  $handler->display->display_options['fields']['field_slideshow_description']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_description']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_slideshow_description']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Image caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['relationship'] = 'field_slideshow_images_nid';
  $handler->display->display_options['fields']['field_caption']['ui_name'] = 'Image caption';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['alter']['max_length'] = '140';
  $handler->display->display_options['fields']['field_caption']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption']['hide_alter_empty'] = FALSE;
  /* Field: Image credit */
  $handler->display->display_options['fields']['field_credit']['id'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['relationship'] = 'field_slideshow_images_nid';
  $handler->display->display_options['fields']['field_credit']['ui_name'] = 'Image credit';
  $handler->display->display_options['fields']['field_credit']['label'] = '';
  $handler->display->display_options['fields']['field_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit']['hide_alter_empty'] = FALSE;
  /* Field: Video caption */
  $handler->display->display_options['fields']['field_caption_1']['id'] = 'field_caption_1';
  $handler->display->display_options['fields']['field_caption_1']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption_1']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption_1']['ui_name'] = 'Video caption';
  $handler->display->display_options['fields']['field_caption_1']['label'] = '';
  $handler->display->display_options['fields']['field_caption_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption_1']['hide_alter_empty'] = FALSE;
  /* Field: Video credit */
  $handler->display->display_options['fields']['field_credit_1']['id'] = 'field_credit_1';
  $handler->display->display_options['fields']['field_credit_1']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit_1']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit_1']['ui_name'] = 'Video credit';
  $handler->display->display_options['fields']['field_credit_1']['label'] = '';
  $handler->display->display_options['fields']['field_credit_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit_1']['hide_alter_empty'] = FALSE;
  /* Field: Bottom Title Link */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['ui_name'] = 'Bottom Title Link';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['text'] = 'View Full [type]';
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['hide_alter_empty'] = FALSE;
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
    'article' => 'article',
    'minisite' => 'minisite',
    'slideshow' => 'slideshow',
    'video' => 'video',
  );
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flag_content';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';
  $handler->display->display_options['block_description'] = 'Homepage Main Tout Anon';
  $handler->display->display_options['block_caching'] = '1';

  /* Display: News Main Tout */
  $handler = $view->new_display('block', 'News Main Tout', 'block_3');
  $handler->display->display_options['display_description'] = 'News Main Tout';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: news_top_story */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'Section Flag';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'news_top_story';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Content: Related Article (field_related_articles) */
  $handler->display->display_options['relationships']['field_related_articles_nid']['id'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['relationships']['field_related_articles_nid']['field'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['delta'] = '-1';
  /* Relationship: Field: Grade Level (field_grade_level) */
  $handler->display->display_options['relationships']['field_grade_level_tid']['id'] = 'field_grade_level_tid';
  $handler->display->display_options['relationships']['field_grade_level_tid']['table'] = 'field_data_field_grade_level';
  $handler->display->display_options['relationships']['field_grade_level_tid']['field'] = 'field_grade_level_tid';
  /* Relationship: Content: Mini-Lessons (field_mini_lessons) */
  $handler->display->display_options['relationships']['field_mini_lessons_nid']['id'] = 'field_mini_lessons_nid';
  $handler->display->display_options['relationships']['field_mini_lessons_nid']['table'] = 'field_data_field_mini_lessons';
  $handler->display->display_options['relationships']['field_mini_lessons_nid']['field'] = 'field_mini_lessons_nid';
  $handler->display->display_options['relationships']['field_mini_lessons_nid']['delta'] = '-1';
  /* Relationship: Slideshow big image */
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['id'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['table'] = 'field_data_field_slideshow_images';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['field'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['ui_name'] = 'Slideshow big image';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['delta'] = '0';
  $handler->display->display_options['block_description'] = 'News Main Tout';
  $handler->display->display_options['block_caching'] = '1';

  /* Display: News Main Tout Anon */
  $handler = $view->new_display('block', 'News Main Tout Anon', 'block_4');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: news_top_story */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = '';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'news_top_story';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Content: Related Article (field_related_articles) */
  $handler->display->display_options['relationships']['field_related_articles_nid']['id'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['relationships']['field_related_articles_nid']['field'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['delta'] = '-1';
  /* Relationship: Field: Grade Level (field_grade_level) */
  $handler->display->display_options['relationships']['field_grade_level_tid']['id'] = 'field_grade_level_tid';
  $handler->display->display_options['relationships']['field_grade_level_tid']['table'] = 'field_data_field_grade_level';
  $handler->display->display_options['relationships']['field_grade_level_tid']['field'] = 'field_grade_level_tid';
  /* Relationship: Content: Mini-Lessons (field_mini_lessons) */
  $handler->display->display_options['relationships']['field_mini_lessons_nid']['id'] = 'field_mini_lessons_nid';
  $handler->display->display_options['relationships']['field_mini_lessons_nid']['table'] = 'field_data_field_mini_lessons';
  $handler->display->display_options['relationships']['field_mini_lessons_nid']['field'] = 'field_mini_lessons_nid';
  $handler->display->display_options['relationships']['field_mini_lessons_nid']['delta'] = '-1';
  /* Relationship: Slideshow big image */
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['id'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['table'] = 'field_data_field_slideshow_images';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['field'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['ui_name'] = 'Slideshow big image';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['delta'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = FALSE;
  /* Field: Content: Large Square Image (Article and Slideshow) */
  $handler->display->display_options['fields']['field_lrg_sq_image']['id'] = 'field_lrg_sq_image';
  $handler->display->display_options['fields']['field_lrg_sq_image']['table'] = 'field_data_field_lrg_sq_image';
  $handler->display->display_options['fields']['field_lrg_sq_image']['field'] = 'field_lrg_sq_image';
  $handler->display->display_options['fields']['field_lrg_sq_image']['ui_name'] = 'Content: Large Square Image (Article and Slideshow)';
  $handler->display->display_options['fields']['field_lrg_sq_image']['label'] = '';
  $handler->display->display_options['fields']['field_lrg_sq_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['alter']['text'] = '[field_lrg_sq_image]
<div class="icon"></div>';
  $handler->display->display_options['fields']['field_lrg_sq_image']['element_class'] = '[type]';
  $handler->display->display_options['fields']['field_lrg_sq_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lrg_sq_image']['settings'] = array(
    'image_style' => 'tfk_square_large',
    'image_link' => '',
  );
  /* Field: Content: Large Square Image (Video Thumbnail) */
  $handler->display->display_options['fields']['field_video_thumbnail']['id'] = 'field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['table'] = 'field_data_field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['field'] = 'field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['ui_name'] = 'Content: Large Square Image (Video Thumbnail)';
  $handler->display->display_options['fields']['field_video_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['text'] = '[field_video_thumbnail]
<div class="icon"></div>';
  $handler->display->display_options['fields']['field_video_thumbnail']['element_class'] = '[type]';
  $handler->display->display_options['fields']['field_video_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_thumbnail']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video_thumbnail']['settings'] = array(
    'image_style' => 'tfk_square_large',
    'image_link' => '',
  );
  /* Field: Article image credit */
  $handler->display->display_options['fields']['field_image_credit']['id'] = 'field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['table'] = 'field_data_field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['field'] = 'field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['ui_name'] = 'Article image credit';
  $handler->display->display_options['fields']['field_image_credit']['label'] = '';
  $handler->display->display_options['fields']['field_image_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_credit']['hide_alter_empty'] = FALSE;
  /* Field: Top Story Right Square */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Top Story Right Square';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="top-story-right-square"></div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Top Story Label */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Top Story Label';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Top Story';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'span';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'views-field-nothing';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '32';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Article and Video deck */
  $handler->display->display_options['fields']['field_deck']['id'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['table'] = 'field_data_field_deck';
  $handler->display->display_options['fields']['field_deck']['field'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['ui_name'] = 'Article and Video deck';
  $handler->display->display_options['fields']['field_deck']['label'] = '';
  $handler->display->display_options['fields']['field_deck']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_deck']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_deck']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_deck']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_deck']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_deck']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Slideshow description */
  $handler->display->display_options['fields']['field_slideshow_description']['id'] = 'field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['table'] = 'field_data_field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['field'] = 'field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['ui_name'] = 'Slideshow description';
  $handler->display->display_options['fields']['field_slideshow_description']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_description']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_slideshow_description']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Image caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['relationship'] = 'field_slideshow_images_nid';
  $handler->display->display_options['fields']['field_caption']['ui_name'] = 'Image caption';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['alter']['max_length'] = '140';
  $handler->display->display_options['fields']['field_caption']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption']['hide_alter_empty'] = FALSE;
  /* Field: Image credit */
  $handler->display->display_options['fields']['field_credit']['id'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['relationship'] = 'field_slideshow_images_nid';
  $handler->display->display_options['fields']['field_credit']['ui_name'] = 'Image credit';
  $handler->display->display_options['fields']['field_credit']['label'] = '';
  $handler->display->display_options['fields']['field_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit']['hide_alter_empty'] = FALSE;
  /* Field: Video caption */
  $handler->display->display_options['fields']['field_caption_1']['id'] = 'field_caption_1';
  $handler->display->display_options['fields']['field_caption_1']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption_1']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption_1']['ui_name'] = 'Video caption';
  $handler->display->display_options['fields']['field_caption_1']['label'] = '';
  $handler->display->display_options['fields']['field_caption_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption_1']['hide_alter_empty'] = FALSE;
  /* Field: Video credit */
  $handler->display->display_options['fields']['field_credit_1']['id'] = 'field_credit_1';
  $handler->display->display_options['fields']['field_credit_1']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit_1']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit_1']['ui_name'] = 'Video credit';
  $handler->display->display_options['fields']['field_credit_1']['label'] = '';
  $handler->display->display_options['fields']['field_credit_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit_1']['hide_alter_empty'] = FALSE;
  /* Field: Bottom Title Link */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['ui_name'] = 'Bottom Title Link';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['text'] = 'View Full Article';
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['block_description'] = 'News Main Tout Anon';
  $handler->display->display_options['block_caching'] = '1';

  /* Display: Kid Rep Main Tout */
  $handler = $view->new_display('block', 'Kid Rep Main Tout', 'block_5');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: kid_reporter_top_story */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = '';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'kid_reporter_top_story';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Content: Related Article (field_related_articles) */
  $handler->display->display_options['relationships']['field_related_articles_nid']['id'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['relationships']['field_related_articles_nid']['field'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['delta'] = '-1';
  /* Relationship: Field: Grade Level (field_grade_level) */
  $handler->display->display_options['relationships']['field_grade_level_tid']['id'] = 'field_grade_level_tid';
  $handler->display->display_options['relationships']['field_grade_level_tid']['table'] = 'field_data_field_grade_level';
  $handler->display->display_options['relationships']['field_grade_level_tid']['field'] = 'field_grade_level_tid';
  /* Relationship: Content: Mini-Lessons (field_mini_lessons) */
  $handler->display->display_options['relationships']['field_mini_lessons_nid']['id'] = 'field_mini_lessons_nid';
  $handler->display->display_options['relationships']['field_mini_lessons_nid']['table'] = 'field_data_field_mini_lessons';
  $handler->display->display_options['relationships']['field_mini_lessons_nid']['field'] = 'field_mini_lessons_nid';
  $handler->display->display_options['relationships']['field_mini_lessons_nid']['delta'] = '-1';
  /* Relationship: Slideshow big image */
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['id'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['table'] = 'field_data_field_slideshow_images';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['field'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['ui_name'] = 'Slideshow big image';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['delta'] = '0';
  $handler->display->display_options['block_description'] = 'Kid Rep Main Tout';
  $handler->display->display_options['block_caching'] = '1';

  /* Display: Kid Rep Main Tout Anon */
  $handler = $view->new_display('block', 'Kid Rep Main Tout Anon', 'block_6');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: kid_reporter_top_story */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = '';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'kid_reporter_top_story';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Content: Related Article (field_related_articles) */
  $handler->display->display_options['relationships']['field_related_articles_nid']['id'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['relationships']['field_related_articles_nid']['field'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['delta'] = '-1';
  /* Relationship: Field: Grade Level (field_grade_level) */
  $handler->display->display_options['relationships']['field_grade_level_tid']['id'] = 'field_grade_level_tid';
  $handler->display->display_options['relationships']['field_grade_level_tid']['table'] = 'field_data_field_grade_level';
  $handler->display->display_options['relationships']['field_grade_level_tid']['field'] = 'field_grade_level_tid';
  /* Relationship: Content: Mini-Lessons (field_mini_lessons) */
  $handler->display->display_options['relationships']['field_mini_lessons_nid']['id'] = 'field_mini_lessons_nid';
  $handler->display->display_options['relationships']['field_mini_lessons_nid']['table'] = 'field_data_field_mini_lessons';
  $handler->display->display_options['relationships']['field_mini_lessons_nid']['field'] = 'field_mini_lessons_nid';
  $handler->display->display_options['relationships']['field_mini_lessons_nid']['delta'] = '-1';
  /* Relationship: Slideshow big image */
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['id'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['table'] = 'field_data_field_slideshow_images';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['field'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['ui_name'] = 'Slideshow big image';
  $handler->display->display_options['relationships']['field_slideshow_images_nid']['delta'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = FALSE;
  /* Field: Content: Large Square Image (Article and Slideshow) */
  $handler->display->display_options['fields']['field_lrg_sq_image']['id'] = 'field_lrg_sq_image';
  $handler->display->display_options['fields']['field_lrg_sq_image']['table'] = 'field_data_field_lrg_sq_image';
  $handler->display->display_options['fields']['field_lrg_sq_image']['field'] = 'field_lrg_sq_image';
  $handler->display->display_options['fields']['field_lrg_sq_image']['ui_name'] = 'Content: Large Square Image (Article and Slideshow)';
  $handler->display->display_options['fields']['field_lrg_sq_image']['label'] = '';
  $handler->display->display_options['fields']['field_lrg_sq_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['alter']['text'] = '[field_lrg_sq_image]
<div class="icon"></div>';
  $handler->display->display_options['fields']['field_lrg_sq_image']['element_class'] = '[type]';
  $handler->display->display_options['fields']['field_lrg_sq_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lrg_sq_image']['settings'] = array(
    'image_style' => 'tfk_square_large',
    'image_link' => '',
  );
  /* Field: Content: Large Square Image (Video Thumbnail) */
  $handler->display->display_options['fields']['field_video_thumbnail']['id'] = 'field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['table'] = 'field_data_field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['field'] = 'field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['ui_name'] = 'Content: Large Square Image (Video Thumbnail)';
  $handler->display->display_options['fields']['field_video_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['text'] = '[field_video_thumbnail]
<div class="icon"></div>';
  $handler->display->display_options['fields']['field_video_thumbnail']['element_class'] = '[type]';
  $handler->display->display_options['fields']['field_video_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_thumbnail']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video_thumbnail']['settings'] = array(
    'image_style' => 'tfk_square_large',
    'image_link' => '',
  );
  /* Field: Article image credit */
  $handler->display->display_options['fields']['field_image_credit']['id'] = 'field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['table'] = 'field_data_field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['field'] = 'field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['ui_name'] = 'Article image credit';
  $handler->display->display_options['fields']['field_image_credit']['label'] = '';
  $handler->display->display_options['fields']['field_image_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_credit']['hide_alter_empty'] = FALSE;
  /* Field: Top Story Right Square */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Top Story Right Square';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="top-story-right-square"></div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Top Story Label */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Top Story Label';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Top Story';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'span';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'views-field-nothing';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '32';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Article and Video deck */
  $handler->display->display_options['fields']['field_deck']['id'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['table'] = 'field_data_field_deck';
  $handler->display->display_options['fields']['field_deck']['field'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['ui_name'] = 'Article and Video deck';
  $handler->display->display_options['fields']['field_deck']['label'] = '';
  $handler->display->display_options['fields']['field_deck']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_deck']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_deck']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_deck']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_deck']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_deck']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Slideshow description */
  $handler->display->display_options['fields']['field_slideshow_description']['id'] = 'field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['table'] = 'field_data_field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['field'] = 'field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['ui_name'] = 'Slideshow description';
  $handler->display->display_options['fields']['field_slideshow_description']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_slideshow_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_description']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_slideshow_description']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Image caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['relationship'] = 'field_slideshow_images_nid';
  $handler->display->display_options['fields']['field_caption']['ui_name'] = 'Image caption';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['alter']['max_length'] = '140';
  $handler->display->display_options['fields']['field_caption']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption']['hide_alter_empty'] = FALSE;
  /* Field: Image credit */
  $handler->display->display_options['fields']['field_credit']['id'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['relationship'] = 'field_slideshow_images_nid';
  $handler->display->display_options['fields']['field_credit']['ui_name'] = 'Image credit';
  $handler->display->display_options['fields']['field_credit']['label'] = '';
  $handler->display->display_options['fields']['field_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit']['hide_alter_empty'] = FALSE;
  /* Field: Video caption */
  $handler->display->display_options['fields']['field_caption_1']['id'] = 'field_caption_1';
  $handler->display->display_options['fields']['field_caption_1']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption_1']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption_1']['ui_name'] = 'Video caption';
  $handler->display->display_options['fields']['field_caption_1']['label'] = '';
  $handler->display->display_options['fields']['field_caption_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption_1']['hide_alter_empty'] = FALSE;
  /* Field: Video credit */
  $handler->display->display_options['fields']['field_credit_1']['id'] = 'field_credit_1';
  $handler->display->display_options['fields']['field_credit_1']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit_1']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit_1']['ui_name'] = 'Video credit';
  $handler->display->display_options['fields']['field_credit_1']['label'] = '';
  $handler->display->display_options['fields']['field_credit_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit_1']['hide_alter_empty'] = FALSE;
  /* Field: Bottom Title Link */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['ui_name'] = 'Bottom Title Link';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['text'] = 'View Full Article';
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['block_description'] = 'Kid Rep Main Tout Anon';
  $handler->display->display_options['block_caching'] = '1';

  /* Display: News Thumbnails */
  $handler = $view->new_display('attachment', 'News Thumbnails', 'attachment_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_image' => 'field_image',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Slideshow thumbnails */
  $handler->display->display_options['relationships']['field_slideshow_images_nid_1']['id'] = 'field_slideshow_images_nid_1';
  $handler->display->display_options['relationships']['field_slideshow_images_nid_1']['table'] = 'field_data_field_slideshow_images';
  $handler->display->display_options['relationships']['field_slideshow_images_nid_1']['field'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid_1']['ui_name'] = 'Slideshow thumbnails';
  $handler->display->display_options['relationships']['field_slideshow_images_nid_1']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_slideshow_images_nid_1']['delta'] = '-1';
  /* Relationship: Flags: news_top_story */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'news_top_story';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['counter']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['path']['empty_zero'] = TRUE;
  /* Field: Slideshow thumbnail */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_slideshow_images_nid_1';
  $handler->display->display_options['fields']['field_image']['ui_name'] = 'Slideshow thumbnail';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[path]/[counter]';
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['link_class'] = 'featured-thumbnail';
  $handler->display->display_options['fields']['field_image']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'featured-thumbnail';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'featured-thumbnail';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'tfk_60x60',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'slideshow' => 'slideshow',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flag_content';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';
  $handler->display->display_options['displays'] = array(
    'block_3' => 'block_3',
    'block_4' => 'block_4',
    'default' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'block_5' => 0,
    'block_6' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Kids Thumbnails */
  $handler = $view->new_display('attachment', 'Kids Thumbnails', 'attachment_3');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_image' => 'field_image',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Slideshow thumbnails */
  $handler->display->display_options['relationships']['field_slideshow_images_nid_1']['id'] = 'field_slideshow_images_nid_1';
  $handler->display->display_options['relationships']['field_slideshow_images_nid_1']['table'] = 'field_data_field_slideshow_images';
  $handler->display->display_options['relationships']['field_slideshow_images_nid_1']['field'] = 'field_slideshow_images_nid';
  $handler->display->display_options['relationships']['field_slideshow_images_nid_1']['ui_name'] = 'Slideshow thumbnails';
  $handler->display->display_options['relationships']['field_slideshow_images_nid_1']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_slideshow_images_nid_1']['delta'] = '-1';
  /* Relationship: Flags: kid_reporter_top_story */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'kid_reporter_top_story';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['counter']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['path']['empty_zero'] = TRUE;
  /* Field: Slideshow thumbnail */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_slideshow_images_nid_1';
  $handler->display->display_options['fields']['field_image']['ui_name'] = 'Slideshow thumbnail';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[path]/[counter]';
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['link_class'] = 'featured-thumbnail';
  $handler->display->display_options['fields']['field_image']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'featured-thumbnail';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'featured-thumbnail';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'tfk_60x60',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'slideshow' => 'slideshow',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flag_content';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';
  $handler->display->display_options['displays'] = array(
    'block_5' => 'block_5',
    'block_6' => 'block_6',
    'default' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'block_3' => 0,
    'block_4' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $export['homepage_top_story'] = $view;

  return $export;
}
