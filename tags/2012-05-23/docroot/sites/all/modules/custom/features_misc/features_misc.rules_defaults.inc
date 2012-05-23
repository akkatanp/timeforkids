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
        },
        { "advanced_purge_page_clear" : { "page" : "\\u003cfront\\u003e" } }
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
        },
        { "advanced_purge_page_clear" : { "page" : "kid-reporters" } }
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
        },
        { "advanced_purge_page_clear" : { "page" : "news" } }
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
                "\\/\\/ The \\"flag\\", \\"views\\", and \\"displays\\" parameters are mandatory for each relationship.\\r",
                "{\\"flag\\":\\"FLAG_NAME\\", \\"views\\": [{\\"view_name\\": \\"VIEW_NAME\\", \\"displays\\": [\\"DISPLAY_1\\", \\"DISPLAY_2\\"]}]}\\r",
                "\\r",
                "\\/\\/ Primary touts. All primary tout displays live inside the same \\"homepage_top_story\\" View.\\r",
                "{\\"flag\\":\\"homepage_top_story\\", \\"views\\": {\\"homepage_top_story\\": [\\"block_1\\", \\"attachment_1\\", \\"block_1\\"]}}\\r",
                "{\\"flag\\":\\"news_top_story\\", \\"views\\": {\\"homepage_top_story\\": [\\"block_3\\" , \\"block_4\\", \\"attachment_2\\"]}}\\r",
                "{\\"flag\\":\\"kid_reporter_top_story\\", \\"views\\": {\\"homepage_top_story\\": [\\"block_5\\" , \\"block_6\\", \\"attachment_3\\"]}}\\r",
                "\\r",
                "\\/\\/ Secondary touts. All secondary tout displays live inside the same \\"homepage_news_block\\" View called.\\r",
                "{\\"flag\\":\\"homepage_news_block\\", \\"views\\": {\\"homepage_news_block\\": [\\"block_1\\", \\"block_1_anon\\"]}}\\r",
                "{\\"flag\\":\\"news_news_block\\", \\"views\\": {\\"homepage_news_block\\": [\\"block_3\\" , \\"block_3_anon\\"]}}\\r",
                "{\\"flag\\":\\"kid_reporter_news_block\\", \\"views\\": {\\"homepage_news_block\\": [\\"block_5\\" , \\"block_5_anon\\"]}}"
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
