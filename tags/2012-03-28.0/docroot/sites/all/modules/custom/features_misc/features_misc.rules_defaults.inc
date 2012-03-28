<?php
/**
 * @file
 * features_misc.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function features_misc_default_rules_configuration() {
  $items = array();
  $items['rules_sort_secondary_touts_homepage'] = entity_import('rules_config', '{ "rules_sort_secondary_touts_homepage" : {
      "LABEL" : "Sort Secondary Touts Homepage",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "advanced_purge", "draggableviews" ],
      "ON" : [ "draggableviews_rules_event_sorted" ],
      "IF" : [
        { "advanced_purge_viewname" : {
            "view_name" : "secondary_touts_block_order",
            "display_name" : "homepage"
          }
        }
      ],
      "DO" : [
        { "advanced_purge_cache_clear" : {
            "target_view" : "homepage_news_block",
            "target_displays" : { "value" : [ "block_1\\r", "block_1_anon" ] }
          }
        }
      ]
    }
  }');
  $items['rules_sort_secondary_touts_kids'] = entity_import('rules_config', '{ "rules_sort_secondary_touts_kids" : {
      "LABEL" : "Sort Secondary Touts Kids",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "advanced_purge", "draggableviews" ],
      "ON" : [ "draggableviews_rules_event_sorted" ],
      "IF" : [
        { "advanced_purge_viewname" : { "view_name" : "secondary_touts_block_order", "display_name" : "kids" } }
      ],
      "DO" : [
        { "advanced_purge_cache_clear" : {
            "target_view" : "homepage_news_block",
            "target_displays" : { "value" : [ "block_5\\r", "block_5_anon" ] }
          }
        }
      ]
    }
  }');
  $items['rules_sort_secondary_touts_news'] = entity_import('rules_config', '{ "rules_sort_secondary_touts_news" : {
      "LABEL" : "Sort Secondary Touts News",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "advanced_purge", "draggableviews" ],
      "ON" : [ "draggableviews_rules_event_sorted" ],
      "IF" : [
        { "advanced_purge_viewname" : { "view_name" : "secondary_touts_block_order", "display_name" : "news" } }
      ],
      "DO" : [
        { "advanced_purge_cache_clear" : {
            "target_view" : "homepage_news_block",
            "target_displays" : { "value" : [ "block_3\\r", "block_3_anon" ] }
          }
        }
      ]
    }
  }');
  return $items;
}
