<?php
/**
 * @file
 * feature_mini_sites.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_mini_sites_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'homepage_minisite';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Homepage Minisite';
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
  /* Relationship: Flags: homepage_minisite */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'homepage_minisite';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'homepage_minisite';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Field: Content: Tout Image */
  $handler->display->display_options['fields']['field_minisite_tout_image']['id'] = 'field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['table'] = 'field_data_field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['field'] = 'field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['label'] = '';
  $handler->display->display_options['fields']['field_minisite_tout_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_tout_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_tout_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_minisite_tout_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_minisite_related_content_nid';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['type']['empty_zero'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'View Mini Site';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'See More Minisites >>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'mini-sites';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'minisites-link';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  );
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flag_content';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';

  /* Display: Home Page Mini-site Block */
  $handler = $view->new_display('block', 'Home Page Mini-site Block', 'block_1');
  $handler->display->display_options['display_description'] = 'Home Page Mini-site Block';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = '[type_1] ';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: homepage_minisite */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'homepage_minisite';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'homepage_minisite';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Content: Articles (field_articles) */
  $handler->display->display_options['relationships']['field_articles_nid']['id'] = 'field_articles_nid';
  $handler->display->display_options['relationships']['field_articles_nid']['table'] = 'field_data_field_articles';
  $handler->display->display_options['relationships']['field_articles_nid']['field'] = 'field_articles_nid';
  $handler->display->display_options['relationships']['field_articles_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type_1']['id'] = 'type_1';
  $handler->display->display_options['fields']['type_1']['table'] = 'node';
  $handler->display->display_options['fields']['type_1']['field'] = 'type';
  $handler->display->display_options['fields']['type_1']['label'] = '';
  $handler->display->display_options['fields']['type_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type_1']['machine_name'] = TRUE;
  /* Field: Content: Tout Image */
  $handler->display->display_options['fields']['field_minisite_tout_image']['id'] = 'field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['table'] = 'field_data_field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['field'] = 'field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['label'] = '';
  $handler->display->display_options['fields']['field_minisite_tout_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_tout_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_minisite_tout_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_tout_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_minisite_tout_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Large Rectangle Image */
  $handler->display->display_options['fields']['field_lrg_rect_image']['id'] = 'field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['table'] = 'field_data_field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['field'] = 'field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['label'] = '';
  $handler->display->display_options['fields']['field_lrg_rect_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lrg_rect_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_rect_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lrg_rect_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Tout Image Credit */
  $handler->display->display_options['fields']['field_minisite_tout_credit']['id'] = 'field_minisite_tout_credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['table'] = 'field_data_field_minisite_tout_credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['field'] = 'field_minisite_tout_credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['label'] = '';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_tout_credit']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_minisite_tout_credit']['hide_alter_empty'] = FALSE;
  /* Field: Content: Image Credit 1 */
  $handler->display->display_options['fields']['field_news_brief_image_credit_1']['id'] = 'field_news_brief_image_credit_1';
  $handler->display->display_options['fields']['field_news_brief_image_credit_1']['table'] = 'field_data_field_news_brief_image_credit_1';
  $handler->display->display_options['fields']['field_news_brief_image_credit_1']['field'] = 'field_news_brief_image_credit_1';
  $handler->display->display_options['fields']['field_news_brief_image_credit_1']['label'] = '';
  $handler->display->display_options['fields']['field_news_brief_image_credit_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_brief_image_credit_1']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Content: Deck */
  $handler->display->display_options['fields']['field_deck']['id'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['table'] = 'field_data_field_deck';
  $handler->display->display_options['fields']['field_deck']['field'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['label'] = '';
  $handler->display->display_options['fields']['field_deck']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_deck']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'View Mini-Site';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['type']['empty_zero'] = TRUE;
  /* Field: Content: Related Article */
  $handler->display->display_options['fields']['field_related_articles']['id'] = 'field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['field'] = 'field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['field_related_articles']['label'] = '';
  $handler->display->display_options['fields']['field_related_articles']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles']['alter']['text'] = 'Additional Content';
  $handler->display->display_options['fields']['field_related_articles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_articles']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles']['type'] = 'node_reference_plain';
  /* Field: Content: Related Article */
  $handler->display->display_options['fields']['field_related_articles_1']['id'] = 'field_related_articles_1';
  $handler->display->display_options['fields']['field_related_articles_1']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['fields']['field_related_articles_1']['field'] = 'field_related_articles';
  $handler->display->display_options['fields']['field_related_articles_1']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['field_related_articles_1']['label'] = '';
  $handler->display->display_options['fields']['field_related_articles_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles_1']['alter']['text'] = '[type]: [field_related_articles_1]';
  $handler->display->display_options['fields']['field_related_articles_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_articles_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles_1']['empty_zero'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'See More Mini-Sites >>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'mini-sites';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'minisites-link';
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
    'minisite' => 'minisite',
    'news_brief' => 'news_brief',
  );
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flag_content';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';
  $handler->display->display_options['block_caching'] = '1';

  /* Display: Home page Mini-site for Anon */
  $handler = $view->new_display('block', 'Home page Mini-site for Anon', 'block_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = '[type] ';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: Content: Tout Image */
  $handler->display->display_options['fields']['field_minisite_tout_image']['id'] = 'field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['table'] = 'field_data_field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['field'] = 'field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['label'] = '';
  $handler->display->display_options['fields']['field_minisite_tout_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_tout_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_minisite_tout_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_minisite_tout_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Large Rectangle Image */
  $handler->display->display_options['fields']['field_lrg_rect_image']['id'] = 'field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['table'] = 'field_data_field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['field'] = 'field_lrg_rect_image';
  $handler->display->display_options['fields']['field_lrg_rect_image']['label'] = '';
  $handler->display->display_options['fields']['field_lrg_rect_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lrg_rect_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_rect_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lrg_rect_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Tout Image Credit */
  $handler->display->display_options['fields']['field_minisite_tout_credit']['id'] = 'field_minisite_tout_credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['table'] = 'field_data_field_minisite_tout_credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['field'] = 'field_minisite_tout_credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['label'] = '';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_tout_credit']['hide_empty'] = TRUE;
  /* Field: Content: Image Credit 1 */
  $handler->display->display_options['fields']['field_news_brief_image_credit_1']['id'] = 'field_news_brief_image_credit_1';
  $handler->display->display_options['fields']['field_news_brief_image_credit_1']['table'] = 'field_data_field_news_brief_image_credit_1';
  $handler->display->display_options['fields']['field_news_brief_image_credit_1']['field'] = 'field_news_brief_image_credit_1';
  $handler->display->display_options['fields']['field_news_brief_image_credit_1']['label'] = '';
  $handler->display->display_options['fields']['field_news_brief_image_credit_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_brief_image_credit_1']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Content: Deck */
  $handler->display->display_options['fields']['field_deck']['id'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['table'] = 'field_data_field_deck';
  $handler->display->display_options['fields']['field_deck']['field'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['label'] = '';
  $handler->display->display_options['fields']['field_deck']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_deck']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'View Mini-Site';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'See More Mini-Sites >>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'mini-sites';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'minisites-link';
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
    'minisite' => 'minisite',
    'news_brief' => 'news_brief',
  );
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flag_content';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';
  $handler->display->display_options['block_caching'] = '1';
  $translatables['homepage_minisite'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('homepage_minisite'),
    t('View Mini Site'),
    t('See More Minisites >>'),
    t('Home Page Mini-site Block'),
    t('field_articles'),
    t('View Mini-Site'),
    t('Additional Content'),
    t('[type]: [field_related_articles_1]'),
    t('See More Mini-Sites >>'),
    t('Home page Mini-site for Anon'),
  );
  $export['homepage_minisite'] = $view;

  $view = new view();
  $view->name = 'mini_site_home';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mini-site Home';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    1 => '1',
    2 => '2',
    6 => '6',
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  /* Field: Content: Tout Image */
  $handler->display->display_options['fields']['field_minisite_tout_image']['id'] = 'field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['table'] = 'field_data_field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['field'] = 'field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['label'] = '';
  $handler->display->display_options['fields']['field_minisite_tout_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_tout_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_tout_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_minisite_tout_image']['settings'] = array(
    'image_style' => 'tfk_square_small',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'Check It Out!';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = FALSE;
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
    'minisite' => 'minisite',
  );

  /* Display: Mini-site Home Items */
  $handler = $view->new_display('block', 'Mini-site Home Items', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: remove_minisite_landing */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'remove_minisite_landing';
  $handler->display->display_options['relationships']['flag_content_rel_1']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Thumbnail Image */
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['id'] = 'field_minisite_thumbnail_image';
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['table'] = 'field_data_field_minisite_thumbnail_image';
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['field'] = 'field_minisite_thumbnail_image';
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['label'] = '';
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['settings'] = array(
    'image_style' => 'tfk_square_small',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'Check It Out!';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'secondary_touts_block_order:block_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 0;
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
    'minisite' => 'minisite',
  );
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flag_content';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['filters']['flagged']['value'] = '0';

  /* Display: Mini-site Home Featured */
  $handler = $view->new_display('block', 'Mini-site Home Featured', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Mini-Site';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: minisite_featured */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'minisite_featured';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Tout Image */
  $handler->display->display_options['fields']['field_minisite_tout_image']['id'] = 'field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['table'] = 'field_data_field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['field'] = 'field_minisite_tout_image';
  $handler->display->display_options['fields']['field_minisite_tout_image']['label'] = '';
  $handler->display->display_options['fields']['field_minisite_tout_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_tout_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_tout_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_minisite_tout_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Tout Image Credit */
  $handler->display->display_options['fields']['field_minisite_tout_credit']['id'] = 'field_minisite_tout_credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['table'] = 'field_data_field_minisite_tout_credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['field'] = 'field_minisite_tout_credit';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['label'] = '';
  $handler->display->display_options['fields']['field_minisite_tout_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_tout_credit']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'View Mini-Site';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Flags: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'flag_content';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['sorts']['weight']['order'] = 'DESC';
  /* Sort criterion: Flags: Flagged time */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'flag_content';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
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
    'minisite' => 'minisite',
  );
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flag_content';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';

  /* Display: Mini-site Home Top Block */
  $handler = $view->new_display('block', 'Mini-site Home Top Block', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
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
    'mini_site_home' => 'mini_site_home',
  );

  /* Display: Mini-site Home Top Block Edit */
  $handler = $view->new_display('block', 'Mini-site Home Top Block Edit', 'block_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = 'EDIT TITLE/DESCRIPTION';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = FALSE;
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
    'mini_site_home' => 'mini_site_home',
  );
  $translatables['mini_site_home'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Check It Out!'),
    t('Mini-site Home Items'),
    t('flag'),
    t('Mini-site Home Featured'),
    t('Featured Mini-Site'),
    t('View Mini-Site'),
    t('Mini-site Home Top Block'),
    t('Mini-site Home Top Block Edit'),
    t('EDIT TITLE/DESCRIPTION'),
  );
  $export['mini_site_home'] = $view;

  $view = new view();
  $view->name = 'minisite_articles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Minisite Articles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    1 => '1',
    2 => '2',
    6 => '6',
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Relationship: Content: Articles (field_articles) */
  $handler->display->display_options['relationships']['field_articles_nid']['id'] = 'field_articles_nid';
  $handler->display->display_options['relationships']['field_articles_nid']['table'] = 'field_data_field_articles';
  $handler->display->display_options['relationships']['field_articles_nid']['field'] = 'field_articles_nid';
  $handler->display->display_options['relationships']['field_articles_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_articles_nid']['delta'] = '-1';
  /* Relationship: Content: Related Article (field_related_articles) */
  $handler->display->display_options['relationships']['field_related_articles_nid']['id'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['relationships']['field_related_articles_nid']['field'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['delta'] = '-1';
  /* Relationship: Content: Tout Image (field_tout_image) */
  $handler->display->display_options['relationships']['field_tout_image_nid']['id'] = 'field_tout_image_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['table'] = 'field_data_field_tout_image';
  $handler->display->display_options['relationships']['field_tout_image_nid']['field'] = 'field_tout_image_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['delta'] = '-1';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'field_articles_nid';
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
  /* Field: Content: Deck */
  $handler->display->display_options['fields']['field_deck']['id'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['table'] = 'field_data_field_deck';
  $handler->display->display_options['fields']['field_deck']['field'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['field_deck']['label'] = '';
  $handler->display->display_options['fields']['field_deck']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'Check It Out!';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = FALSE;
  /* Field: Content: Related Article */
  $handler->display->display_options['fields']['field_related_articles_1']['id'] = 'field_related_articles_1';
  $handler->display->display_options['fields']['field_related_articles_1']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['fields']['field_related_articles_1']['field'] = 'field_related_articles';
  $handler->display->display_options['fields']['field_related_articles_1']['relationship'] = 'field_related_articles_nid';
  $handler->display->display_options['fields']['field_related_articles_1']['label'] = '';
  $handler->display->display_options['fields']['field_related_articles_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles_1']['alter']['text'] = 'Additional Content';
  $handler->display->display_options['fields']['field_related_articles_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_articles_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles_1']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_related_articles_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_related_articles_1']['delta_offset'] = '0';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_related_articles_nid';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Related Article */
  $handler->display->display_options['fields']['field_related_articles']['id'] = 'field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['field'] = 'field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['relationship'] = 'field_related_articles_nid';
  $handler->display->display_options['fields']['field_related_articles']['label'] = '';
  $handler->display->display_options['fields']['field_related_articles']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles']['alter']['text'] = '[type]: [field_related_articles]';
  $handler->display->display_options['fields']['field_related_articles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_articles']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles']['empty_zero'] = TRUE;
  /* Field: Content: Large Square Image */
  $handler->display->display_options['fields']['field_lrg_sq_image']['id'] = 'field_lrg_sq_image';
  $handler->display->display_options['fields']['field_lrg_sq_image']['table'] = 'field_data_field_lrg_sq_image';
  $handler->display->display_options['fields']['field_lrg_sq_image']['field'] = 'field_lrg_sq_image';
  $handler->display->display_options['fields']['field_lrg_sq_image']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['field_lrg_sq_image']['label'] = '';
  $handler->display->display_options['fields']['field_lrg_sq_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['alter']['text'] = '[field_lrg_sq_image]';
  $handler->display->display_options['fields']['field_lrg_sq_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_lrg_sq_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lrg_sq_image']['settings'] = array(
    'image_style' => 'tfk_square_small',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = 'return arg(1);';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
  );

  /* Display: Minisite Articles Teacher Block */
  $handler = $view->new_display('block', 'Minisite Articles Teacher Block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Articles (field_articles) */
  $handler->display->display_options['relationships']['field_articles_nid']['id'] = 'field_articles_nid';
  $handler->display->display_options['relationships']['field_articles_nid']['table'] = 'field_data_field_articles';
  $handler->display->display_options['relationships']['field_articles_nid']['field'] = 'field_articles_nid';
  $handler->display->display_options['relationships']['field_articles_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_articles_nid']['delta'] = '-1';
  /* Relationship: Content: Related Article (field_related_articles) */
  $handler->display->display_options['relationships']['field_related_articles_nid']['id'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['relationships']['field_related_articles_nid']['field'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Large Square Image */
  $handler->display->display_options['fields']['field_lrg_sq_image']['id'] = 'field_lrg_sq_image';
  $handler->display->display_options['fields']['field_lrg_sq_image']['table'] = 'field_data_field_lrg_sq_image';
  $handler->display->display_options['fields']['field_lrg_sq_image']['field'] = 'field_lrg_sq_image';
  $handler->display->display_options['fields']['field_lrg_sq_image']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['field_lrg_sq_image']['label'] = '';
  $handler->display->display_options['fields']['field_lrg_sq_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['alter']['text'] = '[field_lrg_sq_image]';
  $handler->display->display_options['fields']['field_lrg_sq_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_lrg_sq_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lrg_sq_image']['settings'] = array(
    'image_style' => 'tfk_square_small',
    'image_link' => '',
  );
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_slideshow_images']['id'] = 'field_slideshow_images';
  $handler->display->display_options['fields']['field_slideshow_images']['table'] = 'field_data_field_slideshow_images';
  $handler->display->display_options['fields']['field_slideshow_images']['field'] = 'field_slideshow_images';
  $handler->display->display_options['fields']['field_slideshow_images']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['field_slideshow_images']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['text'] = '[field_slideshow_images-nid]';
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_slideshow_images']['element_type'] = '0';
  $handler->display->display_options['fields']['field_slideshow_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_images']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_images']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_images']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_slideshow_images']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['empty_zero'] = TRUE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_date']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Deck */
  $handler->display->display_options['fields']['field_deck']['id'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['table'] = 'field_data_field_deck';
  $handler->display->display_options['fields']['field_deck']['field'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['field_deck']['label'] = '';
  $handler->display->display_options['fields']['field_deck']['element_label_colon'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_slideshow_description']['id'] = 'field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['table'] = 'field_data_field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['field'] = 'field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['field_slideshow_description']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_description']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_description']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_description']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'Check It Out!';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = TRUE;
  /* Field: Content: Related Article */
  $handler->display->display_options['fields']['field_related_articles']['id'] = 'field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['field'] = 'field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['field_related_articles']['label'] = '';
  $handler->display->display_options['fields']['field_related_articles']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles']['alter']['text'] = 'Additional Content';
  $handler->display->display_options['fields']['field_related_articles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_articles']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_related_articles']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_related_articles']['delta_offset'] = '0';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['type']['empty_zero'] = TRUE;
  /* Field: Content: Related Article */
  $handler->display->display_options['fields']['field_related_articles_1']['id'] = 'field_related_articles_1';
  $handler->display->display_options['fields']['field_related_articles_1']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['fields']['field_related_articles_1']['field'] = 'field_related_articles';
  $handler->display->display_options['fields']['field_related_articles_1']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['field_related_articles_1']['label'] = '';
  $handler->display->display_options['fields']['field_related_articles_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles_1']['alter']['text'] = '[type] : [field_related_articles_1]';
  $handler->display->display_options['fields']['field_related_articles_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_articles_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_related_articles_1']['delta_offset'] = '0';

  /* Display: Minisite Articles Block */
  $handler = $view->new_display('block', 'Minisite Articles Block', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Articles (field_articles) */
  $handler->display->display_options['relationships']['field_articles_nid']['id'] = 'field_articles_nid';
  $handler->display->display_options['relationships']['field_articles_nid']['table'] = 'field_data_field_articles';
  $handler->display->display_options['relationships']['field_articles_nid']['field'] = 'field_articles_nid';
  $handler->display->display_options['relationships']['field_articles_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_articles_nid']['delta'] = '-1';
  /* Relationship: Content: Tout Image (field_tout_image) */
  $handler->display->display_options['relationships']['field_tout_image_nid']['id'] = 'field_tout_image_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['table'] = 'field_data_field_tout_image';
  $handler->display->display_options['relationships']['field_tout_image_nid']['field'] = 'field_tout_image_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['relationships']['field_tout_image_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Large Square Image */
  $handler->display->display_options['fields']['field_lrg_sq_image']['id'] = 'field_lrg_sq_image';
  $handler->display->display_options['fields']['field_lrg_sq_image']['table'] = 'field_data_field_lrg_sq_image';
  $handler->display->display_options['fields']['field_lrg_sq_image']['field'] = 'field_lrg_sq_image';
  $handler->display->display_options['fields']['field_lrg_sq_image']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['field_lrg_sq_image']['label'] = '';
  $handler->display->display_options['fields']['field_lrg_sq_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['alter']['text'] = '[field_lrg_sq_image]';
  $handler->display->display_options['fields']['field_lrg_sq_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_lrg_sq_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lrg_sq_image']['settings'] = array(
    'image_style' => 'tfk_square_small',
    'image_link' => '',
  );
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_slideshow_images']['id'] = 'field_slideshow_images';
  $handler->display->display_options['fields']['field_slideshow_images']['table'] = 'field_data_field_slideshow_images';
  $handler->display->display_options['fields']['field_slideshow_images']['field'] = 'field_slideshow_images';
  $handler->display->display_options['fields']['field_slideshow_images']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['field_slideshow_images']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['text'] = '[field_slideshow_images-nid]';
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_slideshow_images']['element_type'] = '0';
  $handler->display->display_options['fields']['field_slideshow_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_images']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_images']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_images']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_images']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_slideshow_images']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'field_articles_nid';
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
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_slideshow_description']['id'] = 'field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['table'] = 'field_data_field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['field'] = 'field_slideshow_description';
  $handler->display->display_options['fields']['field_slideshow_description']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['field_slideshow_description']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_description']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_description']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_description']['hide_alter_empty'] = FALSE;
  /* Field: Content: Deck */
  $handler->display->display_options['fields']['field_deck']['id'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['table'] = 'field_data_field_deck';
  $handler->display->display_options['fields']['field_deck']['field'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['field_deck']['label'] = '';
  $handler->display->display_options['fields']['field_deck']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'Check It Out!';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = FALSE;

  /* Display: Minisite Featured Teacher Block */
  $handler = $view->new_display('block', 'Minisite Featured Teacher Block', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Articles (field_articles) */
  $handler->display->display_options['relationships']['field_articles_nid']['id'] = 'field_articles_nid';
  $handler->display->display_options['relationships']['field_articles_nid']['table'] = 'field_data_field_articles';
  $handler->display->display_options['relationships']['field_articles_nid']['field'] = 'field_articles_nid';
  $handler->display->display_options['relationships']['field_articles_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_articles_nid']['delta'] = '-1';
  /* Relationship: Content: Related Article (field_related_articles) */
  $handler->display->display_options['relationships']['field_related_articles_nid']['id'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['relationships']['field_related_articles_nid']['field'] = 'field_related_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['relationships']['field_related_articles_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="top-story-right-square"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Large Square Image */
  $handler->display->display_options['fields']['field_lrg_sq_image']['id'] = 'field_lrg_sq_image';
  $handler->display->display_options['fields']['field_lrg_sq_image']['table'] = 'field_data_field_lrg_sq_image';
  $handler->display->display_options['fields']['field_lrg_sq_image']['field'] = 'field_lrg_sq_image';
  $handler->display->display_options['fields']['field_lrg_sq_image']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['field_lrg_sq_image']['label'] = '';
  $handler->display->display_options['fields']['field_lrg_sq_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['alter']['text'] = '[field_lrg_sq_image]';
  $handler->display->display_options['fields']['field_lrg_sq_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_lrg_sq_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lrg_sq_image']['settings'] = array(
    'image_style' => 'tfk_square_large',
    'image_link' => '',
  );
  /* Field: Content: Image Credit */
  $handler->display->display_options['fields']['field_image_credit']['id'] = 'field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['table'] = 'field_data_field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['field'] = 'field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['field_image_credit']['label'] = '';
  $handler->display->display_options['fields']['field_image_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_credit']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['text'] = 'Featured';
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'field_articles_nid';
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
  /* Field: Content: Deck */
  $handler->display->display_options['fields']['field_deck']['id'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['table'] = 'field_data_field_deck';
  $handler->display->display_options['fields']['field_deck']['field'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['field_deck']['label'] = '';
  $handler->display->display_options['fields']['field_deck']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'Check It Out!';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = FALSE;
  /* Field: Content: Related Article */
  $handler->display->display_options['fields']['field_related_articles_1']['id'] = 'field_related_articles_1';
  $handler->display->display_options['fields']['field_related_articles_1']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['fields']['field_related_articles_1']['field'] = 'field_related_articles';
  $handler->display->display_options['fields']['field_related_articles_1']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['field_related_articles_1']['label'] = '';
  $handler->display->display_options['fields']['field_related_articles_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles_1']['alter']['text'] = 'Additional Content';
  $handler->display->display_options['fields']['field_related_articles_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_articles_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles_1']['type'] = 'node_reference_plain';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['type']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = FALSE;
  /* Field: Content: Related Article */
  $handler->display->display_options['fields']['field_related_articles']['id'] = 'field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['table'] = 'field_data_field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['field'] = 'field_related_articles';
  $handler->display->display_options['fields']['field_related_articles']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['field_related_articles']['label'] = '';
  $handler->display->display_options['fields']['field_related_articles']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles']['alter']['text'] = '[type]: [field_related_articles]';
  $handler->display->display_options['fields']['field_related_articles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_articles']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_related_articles']['empty_zero'] = TRUE;

  /* Display: Minisite Featured Block */
  $handler = $view->new_display('block', 'Minisite Featured Block', 'block_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Articles (field_articles) */
  $handler->display->display_options['relationships']['field_articles_nid']['id'] = 'field_articles_nid';
  $handler->display->display_options['relationships']['field_articles_nid']['table'] = 'field_data_field_articles';
  $handler->display->display_options['relationships']['field_articles_nid']['field'] = 'field_articles_nid';
  $handler->display->display_options['relationships']['field_articles_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_articles_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="top-story-right-square"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '[image]';
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Large Square Image */
  $handler->display->display_options['fields']['field_lrg_sq_image']['id'] = 'field_lrg_sq_image';
  $handler->display->display_options['fields']['field_lrg_sq_image']['table'] = 'field_data_field_lrg_sq_image';
  $handler->display->display_options['fields']['field_lrg_sq_image']['field'] = 'field_lrg_sq_image';
  $handler->display->display_options['fields']['field_lrg_sq_image']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['field_lrg_sq_image']['label'] = '';
  $handler->display->display_options['fields']['field_lrg_sq_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['alter']['text'] = '[field_lrg_sq_image]';
  $handler->display->display_options['fields']['field_lrg_sq_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_lrg_sq_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_lrg_sq_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lrg_sq_image']['settings'] = array(
    'image_style' => 'tfk_square_large',
    'image_link' => '',
  );
  /* Field: Content: Image Credit */
  $handler->display->display_options['fields']['field_image_credit']['id'] = 'field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['table'] = 'field_data_field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['field'] = 'field_image_credit';
  $handler->display->display_options['fields']['field_image_credit']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['field_image_credit']['label'] = '';
  $handler->display->display_options['fields']['field_image_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_credit']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['text'] = 'Featured';
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'field_articles_nid';
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
  /* Field: Content: Deck */
  $handler->display->display_options['fields']['field_deck']['id'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['table'] = 'field_data_field_deck';
  $handler->display->display_options['fields']['field_deck']['field'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['field_deck']['label'] = '';
  $handler->display->display_options['fields']['field_deck']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'Check It Out!';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['type']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = FALSE;

  /* Display: Minisite Navigation Block */
  $handler = $view->new_display('block', 'Minisite Navigation Block', 'block_4');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['wrapper_class'] = 'menu';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>[title_1]</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Articles (field_articles) */
  $handler->display->display_options['relationships']['field_articles_nid']['id'] = 'field_articles_nid';
  $handler->display->display_options['relationships']['field_articles_nid']['table'] = 'field_data_field_articles';
  $handler->display->display_options['relationships']['field_articles_nid']['field'] = 'field_articles_nid';
  $handler->display->display_options['relationships']['field_articles_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_articles_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;

  /* Display: Minisite Teacher Resources Block */
  $handler = $view->new_display('block', 'Minisite Teacher Resources Block', 'block_5');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '[field_minisite_resources_label]';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Resources (field_minisite_resources) */
  $handler->display->display_options['relationships']['field_minisite_resources_nid']['id'] = 'field_minisite_resources_nid';
  $handler->display->display_options['relationships']['field_minisite_resources_nid']['table'] = 'field_data_field_minisite_resources';
  $handler->display->display_options['relationships']['field_minisite_resources_nid']['field'] = 'field_minisite_resources_nid';
  $handler->display->display_options['relationships']['field_minisite_resources_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Resources Label */
  $handler->display->display_options['fields']['field_minisite_resources_label']['id'] = 'field_minisite_resources_label';
  $handler->display->display_options['fields']['field_minisite_resources_label']['table'] = 'field_data_field_minisite_resources_label';
  $handler->display->display_options['fields']['field_minisite_resources_label']['field'] = 'field_minisite_resources_label';
  $handler->display->display_options['fields']['field_minisite_resources_label']['label'] = '';
  $handler->display->display_options['fields']['field_minisite_resources_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_minisite_resources_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_resources_label']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_minisite_resources_label']['empty_zero'] = TRUE;
  /* Field: Content: Worksheet PDF */
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['id'] = 'field_worksheet_pdf_private';
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['table'] = 'field_data_field_worksheet_pdf_private';
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['field'] = 'field_worksheet_pdf_private';
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['relationship'] = 'field_minisite_resources_nid';
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['label'] = '';
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_worksheet_pdf_private']['type'] = 'file_url_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_minisite_resources_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_worksheet_pdf_private]">[title]</a>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['empty_zero'] = TRUE;

  /* Display: Minisite More Block */
  $handler = $view->new_display('block', 'Minisite More Block', 'block_6');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'More TFK Mini-Sites';
  $handler->display->display_options['header']['area']['content'] = 'More TFK Mini-Sites';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'See More Mini-Sites';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/mini-sites">See More Mini-Sites</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Thumbnail Image */
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['id'] = 'field_minisite_thumbnail_image';
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['table'] = 'field_data_field_minisite_thumbnail_image';
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['field'] = 'field_minisite_thumbnail_image';
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['label'] = '';
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['alter']['text'] = '[field_minisite_thumbnail_image]';
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_minisite_thumbnail_image']['settings'] = array(
    'image_style' => 'tfk_square_small',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = 'return arg(1);';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
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
    'minisite' => 'minisite',
  );

  /* Display: Minisite Article Header */
  $handler = $view->new_display('block', 'Minisite Article Header', 'block_7');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Banner Image */
  $handler->display->display_options['fields']['field_header_image']['id'] = 'field_header_image';
  $handler->display->display_options['fields']['field_header_image']['table'] = 'field_data_field_header_image';
  $handler->display->display_options['fields']['field_header_image']['field'] = 'field_header_image';
  $handler->display->display_options['fields']['field_header_image']['label'] = '';
  $handler->display->display_options['fields']['field_header_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_header_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_header_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );

  /* Display: Minisite Space */
  $handler = $view->new_display('block', 'Minisite Space', 'block_8');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Day In Life (field_minisite_day_in_life) */
  $handler->display->display_options['relationships']['field_minisite_day_in_life_nid']['id'] = 'field_minisite_day_in_life_nid';
  $handler->display->display_options['relationships']['field_minisite_day_in_life_nid']['table'] = 'field_data_field_minisite_day_in_life';
  $handler->display->display_options['relationships']['field_minisite_day_in_life_nid']['field'] = 'field_minisite_day_in_life_nid';
  $handler->display->display_options['relationships']['field_minisite_day_in_life_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_minisite_day_in_life_nid']['delta'] = '-1';
  /* Relationship: Content: Timeline (field_minisite_timeline) */
  $handler->display->display_options['relationships']['field_minisite_timeline_nid']['id'] = 'field_minisite_timeline_nid';
  $handler->display->display_options['relationships']['field_minisite_timeline_nid']['table'] = 'field_data_field_minisite_timeline';
  $handler->display->display_options['relationships']['field_minisite_timeline_nid']['field'] = 'field_minisite_timeline_nid';
  $handler->display->display_options['relationships']['field_minisite_timeline_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_minisite_timeline_nid']['delta'] = '-1';
  /* Relationship: Content: Quiz (field_minisite_atw_quiz) */
  $handler->display->display_options['relationships']['field_minisite_atw_quiz_nid']['id'] = 'field_minisite_atw_quiz_nid';
  $handler->display->display_options['relationships']['field_minisite_atw_quiz_nid']['table'] = 'field_data_field_minisite_atw_quiz';
  $handler->display->display_options['relationships']['field_minisite_atw_quiz_nid']['field'] = 'field_minisite_atw_quiz_nid';
  $handler->display->display_options['relationships']['field_minisite_atw_quiz_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_minisite_atw_quiz_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_minisite_day_in_life_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_minisite_day_in_life_nid';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_3']['id'] = 'title_3';
  $handler->display->display_options['fields']['title_3']['table'] = 'node';
  $handler->display->display_options['fields']['title_3']['field'] = 'title';
  $handler->display->display_options['fields']['title_3']['relationship'] = 'field_minisite_day_in_life_nid';
  $handler->display->display_options['fields']['title_3']['label'] = '';
  $handler->display->display_options['fields']['title_3']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_3']['alter']['text'] = 'Check It Out!';
  $handler->display->display_options['fields']['title_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title_3']['empty_zero'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_minisite_timeline_nid';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['relationship'] = 'field_minisite_timeline_nid';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_1']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_4']['id'] = 'title_4';
  $handler->display->display_options['fields']['title_4']['table'] = 'node';
  $handler->display->display_options['fields']['title_4']['field'] = 'title';
  $handler->display->display_options['fields']['title_4']['relationship'] = 'field_minisite_timeline_nid';
  $handler->display->display_options['fields']['title_4']['label'] = '';
  $handler->display->display_options['fields']['title_4']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_4']['alter']['text'] = 'Check It Out!';
  $handler->display->display_options['fields']['title_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_4']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title_4']['empty_zero'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'field_minisite_atw_quiz_nid';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['hide_empty'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_2']['id'] = 'body_2';
  $handler->display->display_options['fields']['body_2']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_2']['field'] = 'body';
  $handler->display->display_options['fields']['body_2']['relationship'] = 'field_minisite_atw_quiz_nid';
  $handler->display->display_options['fields']['body_2']['label'] = '';
  $handler->display->display_options['fields']['body_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_2']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_5']['id'] = 'title_5';
  $handler->display->display_options['fields']['title_5']['table'] = 'node';
  $handler->display->display_options['fields']['title_5']['field'] = 'title';
  $handler->display->display_options['fields']['title_5']['relationship'] = 'field_minisite_atw_quiz_nid';
  $handler->display->display_options['fields']['title_5']['label'] = '';
  $handler->display->display_options['fields']['title_5']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_5']['alter']['text'] = 'Check It Out!';
  $handler->display->display_options['fields']['title_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_5']['hide_empty'] = TRUE;
  $translatables['minisite_articles'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field_articles'),
    t('field_related_articles'),
    t('field_tout_image'),
    t('Check It Out!'),
    t('Additional Content'),
    t('[type]: [field_related_articles]'),
    t('[field_lrg_sq_image]'),
    t('All'),
    t('Minisite Articles Teacher Block'),
    t('[field_slideshow_images-nid]'),
    t('[type] : [field_related_articles_1]'),
    t('Minisite Articles Block'),
    t('Minisite Featured Teacher Block'),
    t('<div class="top-story-right-square"></div>'),
    t('Featured'),
    t('Minisite Featured Block'),
    t('[image]'),
    t('Minisite Navigation Block'),
    t('<p>[title_1]</p>'),
    t('Minisite Teacher Resources Block'),
    t('[field_minisite_resources_label]'),
    t('field_minisite_resources'),
    t('<a href="[field_worksheet_pdf_private]">[title]</a>'),
    t('Minisite More Block'),
    t('More TFK Mini-Sites'),
    t('See More Mini-Sites'),
    t('<a href="/mini-sites">See More Mini-Sites</a>'),
    t('[field_minisite_thumbnail_image]'),
    t('Minisite Article Header'),
    t('Minisite Space'),
    t('field_minisite_day_in_life'),
    t('field_minisite_timeline'),
    t('field_minisite_atw_quiz'),
  );
  $export['minisite_articles'] = $view;

  return $export;
}
