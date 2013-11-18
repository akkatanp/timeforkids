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
      "REQUIRES" : [ "advanced_purge", "expire", "draggableviews" ],
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
        },
        { "advanced_purge_page_clear" : { "page" : "\\u003Cfront\\u003E" } },
        { "expire_flush_url" : { "urls" : "\\u003Cfront\\u003E" } }
      ]
    }
  }');
  $items['rules_sort_secondary_touts_kids'] = entity_import('rules_config', '{ "rules_sort_secondary_touts_kids" : {
      "LABEL" : "Sort Secondary Touts Kids",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "advanced_purge", "expire", "draggableviews" ],
      "ON" : [ "draggableviews_rules_event_sorted" ],
      "IF" : [
        { "advanced_purge_viewname" : { "view_name" : "secondary_touts_block_order", "display_name" : "kids" } }
      ],
      "DO" : [
        { "advanced_purge_cache_clear" : {
            "target_view" : "homepage_news_block",
            "target_displays" : { "value" : [ "block_5\\r", "block_5_anon" ] }
          }
        },
        { "advanced_purge_page_clear" : { "page" : "kid-reporters" } },
        { "expire_flush_url" : { "urls" : "kid-reporters" } }
      ]
    }
  }');
  $items['rules_sort_secondary_touts_news'] = entity_import('rules_config', '{ "rules_sort_secondary_touts_news" : {
      "LABEL" : "Sort Secondary Touts News",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "advanced_purge", "expire", "draggableviews" ],
      "ON" : [ "draggableviews_rules_event_sorted" ],
      "IF" : [
        { "advanced_purge_viewname" : { "view_name" : "secondary_touts_block_order", "display_name" : "news" } }
      ],
      "DO" : [
        { "advanced_purge_cache_clear" : {
            "target_view" : "homepage_news_block",
            "target_displays" : { "value" : [ "block_3\\r", "block_3_anon" ] }
          }
        },
        { "advanced_purge_page_clear" : { "page" : "news" } },
        { "expire_flush_url" : { "urls" : "news" } }
      ]
    }
  }');
  $items['rules_update_touted_node'] = entity_import('rules_config', '{ "rules_update_touted_node" : {
      "LABEL" : "Update Touted Node",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "10",
      "REQUIRES" : [ "rules", "advanced_purge" ],
      "ON" : [ "node_update", "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : {
                "atw_destination" : "atw_destination",
                "article" : "article",
                "minisite" : "minisite",
                "slideshow" : "slideshow",
                "video" : "video"
              }
            }
          }
        },
        { "advanced_purge_rules_condition_flag_views" : {
            "node" : [ "node" ],
            "flag_name" : { "value" : [
                "\\/\\/ Each line gets parsed into JSON independently. Comments and the example relationship are ignored out by the parser. You can validate lines separately at http:\\/\\/jsonlint.com\\/.\\r",
                "\\/\\/ Example: If the content being updated is flagged with FLAG_NAME, then DISPLAY_1 and DISPLAY_2 will be cleared for VIEW_NAME.\\r",
                "\\/\\/ The \\u0022flag\\u0022, \\u0022views\\u0022, and \\u0022displays\\u0022 parameters are mandatory for each relationship.\\r",
                "{\\u0022flag\\u0022:\\u0022FLAG_NAME\\u0022, \\u0022views\\u0022: [{\\u0022view_name\\u0022: \\u0022VIEW_NAME\\u0022, \\u0022displays\\u0022: [\\u0022DISPLAY_1\\u0022, \\u0022DISPLAY_2\\u0022]}]}\\r",
                "\\r",
                "\\/\\/ Primary touts. All primary tout displays live inside the same \\u0022homepage_top_story\\u0022 View.\\r",
                "{\\u0022flag\\u0022:\\u0022homepage_top_story\\u0022, \\u0022views\\u0022: {\\u0022homepage_top_story\\u0022: [\\u0022block_1\\u0022, \\u0022attachment_1\\u0022, \\u0022block_1\\u0022]}}\\r",
                "{\\u0022flag\\u0022:\\u0022news_top_story\\u0022, \\u0022views\\u0022: {\\u0022homepage_top_story\\u0022: [\\u0022block_3\\u0022 , \\u0022block_4\\u0022, \\u0022attachment_2\\u0022]}}\\r",
                "{\\u0022flag\\u0022:\\u0022kid_reporter_top_story\\u0022, \\u0022views\\u0022: {\\u0022homepage_top_story\\u0022: [\\u0022block_5\\u0022 , \\u0022block_6\\u0022, \\u0022attachment_3\\u0022]}}\\r",
                "\\r",
                "\\/\\/ Secondary touts. All secondary tout displays live inside the same \\u0022homepage_news_block\\u0022 View called.\\r",
                "{\\u0022flag\\u0022:\\u0022homepage_news_block\\u0022, \\u0022views\\u0022: {\\u0022homepage_news_block\\u0022: [\\u0022block_1\\u0022, \\u0022block_1_anon\\u0022]}}\\r",
                "{\\u0022flag\\u0022:\\u0022news_news_block\\u0022, \\u0022views\\u0022: {\\u0022homepage_news_block\\u0022: [\\u0022block_3\\u0022 , \\u0022block_3_anon\\u0022]}}\\r",
                "{\\u0022flag\\u0022:\\u0022kid_reporter_news_block\\u0022, \\u0022views\\u0022: {\\u0022homepage_news_block\\u0022: [\\u0022block_5\\u0022 , \\u0022block_5_anon\\u0022]}}"
              ]
            }
          }
        }
      ],
      "DO" : [ { "advanced_purge_cache_clear_relational" : [] } ]
    }
  }');
  return $items;
}
