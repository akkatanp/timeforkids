<?php
/**
 * @file
 * tfk_local_solr.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function tfk_local_solr_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'Apache Solr server';
  $environment->url = 'http://localhost:8983/solr';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_direct_commit' => 0,
    'apachesolr_index_last' => array(
      'node' => array(
        'last_changed' => '1415910528',
        'last_entity_id' => '185291',
      ),
    ),
    'apachesolr_index_updated' => 1416946500,
    'apachesolr_last_optimize' => 1416946500,
    'apachesolr_read_only' => '0',
    'apachesolr_search_facet_pages' => 'search/site
photos-video
tfk-magazine
worksheets',
    'apachesolr_search_show_facets' => 1,
    'apachesolr_soft_commit' => 0,
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'article',
      1 => 'atw_day_in_life',
      2 => 'atw_destination',
      3 => 'a_paper',
      4 => 'book',
      5 => 'common_core_standards',
      6 => 'flashcard',
      7 => 'grammar_practice_rule',
      8 => 'magazine_issue',
      9 => 'minisite',
      10 => 'mini_lesson',
      11 => 'mini_site_home',
      12 => 'pdf_quiz',
      13 => 'poll',
      14 => 'slideshow',
      15 => 'store',
      16 => 'store_product',
      17 => 'teacher_community_question',
      18 => 'tfk_extra',
      19 => 'tfk_extras_bottom_nodeblock',
      20 => 'tfk_extras_top_nodeblock',
      21 => 'tfk_lesson_for_tablets',
      22 => 'tfk_polldaddy',
      23 => 'video',
      24 => 'webform',
      25 => 'webform_generic',
      26 => 'worksheet',
      27 => 'writing_tips',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
