<?php
/**
 * @file
 * Contains theme override functions and preprocess functions for the theme.
 *
 * ABOUT THE TEMPLATE.PHP FILE
 *
 *   The template.php file is one of the most useful files when creating or
 *   modifying Drupal themes. You can modify or override Drupal's theme
 *   functions, intercept or make additional variables available to your theme,
 *   and create custom PHP logic. For more information, please visit the Theme
 *   Developer's Guide on Drupal.org: http://drupal.org/theme-guide
 *
 * OVERRIDING THEME FUNCTIONS
 *
 *   The Drupal theme system uses special theme functions to generate HTML
 *   output automatically. Often we wish to customize this HTML output. To do
 *   this, we have to override the theme function. You have to first find the
 *   theme function that generates the output, and then "catch" it and modify it
 *   here. The easiest way to do it is to copy the original function in its
 *   entirety and paste it here, changing the prefix from theme_ to STARTERKIT_.
 *   For example:
 *
 *     original: theme_breadcrumb()
 *     theme override: STARTERKIT_breadcrumb()
 *
 *   where STARTERKIT is the name of your sub-theme. For example, the
 *   zen_classic theme would define a zen_classic_breadcrumb() function.
 *
 *   If you would like to override either of the two theme functions used in Zen
 *   core, you should first look at how Zen core implements those functions:
 *     theme_breadcrumbs()      in zen/template.php
 *     theme_menu_local_tasks() in zen/template.php
 *
 *   For more information, please visit the Theme Developer's Guide on
 *   Drupal.org: http://drupal.org/node/173880
 *
 * CREATE OR MODIFY VARIABLES FOR YOUR THEME
 *
 *   Each tpl.php template file has several variables which hold various pieces
 *   of content. You can modify those variables (or add new ones) before they
 *   are used in the template files by using preprocess functions.
 *
 *   This makes THEME_preprocess_HOOK() functions the most powerful functions
 *   available to themers.
 *
 *   It works by having one preprocess function for each template file or its
 *   derivatives (called template suggestions). For example:
 *     THEME_preprocess_page    alters the variables for page.tpl.php
 *     THEME_preprocess_node    alters the variables for node.tpl.php or
 *                              for node-forum.tpl.php
 *     THEME_preprocess_comment alters the variables for comment.tpl.php
 *     THEME_preprocess_block   alters the variables for block.tpl.php
 *
 *   For more information on preprocess functions and template suggestions,
 *   please visit the Theme Developer's Guide on Drupal.org:
 *   http://drupal.org/node/223440
 *   and http://drupal.org/node/190815#template-suggestions
 */


/**
 * Override or insert variables into the html templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("html" in this case.)
 */

/**
 * Implementation of hook_theme().
 * This is for a custom login form that will be used by both the "user" page and the lightbox
 */
function tfk_theme($existing, $type, $theme, $path) {
	$hooks = zen_theme($existing, $type, $theme, $path);
 	$hooks['user_login'] = array(
        'template' => 'templates/tfk-user-login',
        'variables' => array('form' => NULL)
    );
  	return $hooks;
}

function tfk_preprocess_user_login(&$variables) {
  $variables['close_button'] = (arg(0) !== 'user') ? TRUE: FALSE;
}

/**
 *	Customized TFK Pager
 */
function tfk_pager($variables) {
  $tags = $variables['tags'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $quantity = $variables['quantity'];
  global $pager_page_array, $pager_total;

  // Calculate various markers within this pager piece:
  // Middle is used to "center" pages around the current page.
  $pager_middle = ceil($quantity / 2);
  // current is the page we are currently paged to
  $pager_current = (array_key_exists($element, $pager_page_array)) ? $pager_page_array[$element] + 1: 0;
  // first is the first page listed by this pager piece (re quantity)
  $pager_first = $pager_current - $pager_middle + 1;
  // last is the last page listed by this pager piece (re quantity)
  $pager_last = $pager_current + $quantity - $pager_middle;
  // max is the maximum page number
  $pager_max = $pager_total[$element];
  // End of marker calculations.

  // Prepare for generation loop.
  $i = $pager_first;
  if ($pager_last > $pager_max) {
    // Adjust "center" if at end of query.
    $i = $i + ($pager_max - $pager_last);
    $pager_last = $pager_max;
  }
  if ($i <= 0) {
    // Adjust "center" if at start of query.
    $pager_last = $pager_last + (1 - $i);
    $i = 1;
  }
  // End of generation loop preparation.

  $li_first = theme('pager_first', array('text' => (isset($tags[0]) ? $tags[0] : t('« First')), 'element' => $element, 'parameters' => $parameters));
  $li_previous = theme('pager_previous', array('text' => (isset($tags[1]) ? $tags[1] : t('‹ Previous')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_next = theme('pager_next', array('text' => (isset($tags[3]) ? $tags[3] : t('Next ›')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_last = theme('pager_last', array('text' => (isset($tags[4]) ? $tags[4] : t('Last »')), 'element' => $element, 'parameters' => $parameters));

  if ($pager_total[$element] > 1) {
    if ($li_first) {
      $items[] = array(
        'class' => array('pager-first'),
        'data' => $li_first,
      );
    }
    if ($li_previous) {
      $items[] = array(
        'class' => array('pager-previous'),
        'data' => $li_previous,
      );
    }

    // When there is more than one page, create the pager list.
    if ($i != $pager_max) {
      if ($i > 1) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => '…',
        );
      }
      // Now generate the actual pager piece.
      for (; $i <= $pager_last && $i <= $pager_max; $i++) {
        if ($i < $pager_current) {
          $items[] = array(
            'class' => array('pager-item'),
            'data' => theme('pager_previous', array('text' => $i, 'element' => $element, 'interval' => ($pager_current - $i), 'parameters' => $parameters)),
          );
        }
        if ($i == $pager_current) {
          $items[] = array(
            'class' => array('pager-current'),
            'data' => $i,
          );
        }
        if ($i > $pager_current) {
          $items[] = array(
            'class' => array('pager-item'),
            'data' => theme('pager_next', array('text' => $i, 'element' => $element, 'interval' => ($i - $pager_current), 'parameters' => $parameters)),
          );
        }
      }
      if ($i < $pager_max) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => '…',
        );
      }
    }
    // End generation.
    if ($li_next) {
      $items[] = array(
        'class' => array('pager-next'),
        'data' => $li_next,
      );
    }
    if ($li_last) {
      $items[] = array(
        'class' => array('pager-last'),
        'data' => $li_last,
      );
    }

    return '<h2 class="element-invisible">' . t('Pages') . '</h2>' . theme('item_list', array(
      'items' => $items,
      'attributes' => array('class' => array('pager')),
    ));
  }
}


//function tfk_preprocess_poll_results(&$variables) {
//  //theme the poll results block
//
//  $html = $variables['results'];
//  $pattern = "@class=\"text\"\>(.*)\</div\>@";
//  preg_match_all($pattern, $html, $choices); //extract choices
//
//  $pattern = "@style=\"width: (.*)%;\"@";
//  preg_match_all($pattern, $html, $votes); //extract percentages
//
//  $chart = array(
//    '#chart_id' => 'poll_chart',
//    '#type' => CHART_TYPE_PIE_3D,
//  );
//
//// NEED TO FILL IN DATA TO MAKE CHART
//  for ($c=0; $c < count($choices[1]); $c++) { //make labels and values
//     $chart['#data'][$choices[1][$c]] = $votes[1][$c]; //number of votes
//     $chart['#legends'][] = $choices[1][$c] . " (" . $votes[1][$c] . "%)"; // labels
//  }
//  $chart['#data_colors'][] = '00ff00';
//  $chart['#data_colors'][] = 'ff0000';
//  $chart['#data_colors'][] = '0000ff';
//
//  //print_R($chart);
//
//
// //#variables['results'] = chart_render($chart); //render graph
//  $variables['results'] = theme('chart', array('chart' => $chart));
//}

/**
 * Preprocess html template.
 */
function tfk_preprocess_html(&$variables, $hook) {
  // Extras root main column IE7 CSS.
  if(array_key_exists('menu_item', $variables) && $variables['menu_item']['path'] == 'extras') {
    $variables['classes_array'][] = 'extras-root';
  }
  // Hide benchmarking information from everyone except "rallen".
  if(array_key_exists('user', $variables) && $variables['user']->uid !== '226') {
    // Unless the admin param is present, used for benchmarking the anon user.
    if(!array_key_exists('admin', $_GET)) {
      $variables['classes_array'][] = 'non-admin';
    }
  }
}

/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
function tfk_preprocess_page(&$variables, $hook) {
  /* add encrypt js to all pages */
 
  // Debug CTools modal.
  //drupal_add_js(array('debug' => array('enabled' => TRUE)), 'setting');
  
  // Add JQuery-UI and plugins for Jump Page
  
  drupal_add_library('system', 'ui');
  drupal_add_library('system', 'ui.button');
  drupal_add_library('system', 'ui.position');
  drupal_add_library('system', 'ui.dialog');
    
  if(array_key_exists('node', $variables)) {
    $variables['theme_hook_suggestions'][] = 'page__'. $variables['node']->type;
    if ($variables['node']->type == "board_member") {
      $variables['title'] = "Teacher Board";
    }
    if ($variables['node']->type == 'grammar_practice') {
      $variables['grammar_practice_header'] = l('Try Another', 'homework-helper/grammar-wizard/punctuation-practice', array('attributes' => array('class' => array('try-another'))));
    }
    if ($variables['node']->type == 'flashcard') {
      $variables['flashcards_return'] = l('Back to Flash-card Sets', 'homework-helper/flashcards');
      unset($variables['tabs']);
    }
  }
  
  if (isset($variables['page']['content']['system_main']['#theme']) && $variables['page']['content']['system_main']['#theme'] == "user_profile") {
    if (isset($variables['page']['content']['system_main']['field_is_board_member']) && $variables['page']['content']['system_main']['field_is_board_member']['#items'][0]['value'] == "yes") {
      $variables['title'] = "Teacher Board";
    } else {
      $variables['title'] = "My Account";
    }
  }
  
  if (isset($variables['page']['content']['system_main']['#theme']) && $variables['page']['content']['system_main']['#theme'][0] == "user_login") {
        $variables['tabs'] = "";/*Hide tabs per infosec*/
  }
  
  // Red title Bar.
  if (isset($variables['node']->type) && array_key_exists('section_title', $variables) && $variables['section_title'] == t('Homework Helper')) {
    $variables['tfk_header_tag'] = tfk_header_tag($variables['node']->type);
    $variables['theme_hook_suggestions'][] = 'page__homework_helper';
    
    // Avoid duplicate header tag and title. Supress title on all 'page' nodes.
    $variables['show_title'] = TRUE;
    if($variables['node']->type == 'page') { //&& $variables['node']->nid == 98
      $variables['show_title'] = FALSE;
    }
  } else {
    $args = arg();
    // Red title bar, no node var.
    if($args[0] == 'homework-helper' && array_key_exists(1, $args)) {
      if(array_search($args[1], array('a-plus-papers', 'flashcards', 'writing-tips', 'grammar-wizard', 'punctuation-practice')) !== FALSE) {
        $variables['tfk_header_tag'] = drupal_get_title();
      }
    }
    // Add flashcard path.
    if($args[0] == 'node' && array_key_exists(1, $args) && $args[1] == 'add' && $args[2] == 'flashcard') {
      $variables['tfk_header_tag'] = drupal_get_title();
      $variables['theme_hook_suggestions'][] = 'page__homework_helper';
    }
  }
  
  $view = views_get_page_view();
  if ($view) {
    if ($view->name == 'grammar_practice') {
      if ($view->current_display == 'page') {
        $variables['grammar_practice_header'] = ' ';
      }
      else {
        $variables['grammar_practice_header'] = l('Try Another', 'homework-helper/grammar-wizard/punctuation-practice', array('attributes' => array('class' => array('try-another'))));
      }
    }
  }
  
  // Footer layout vars, default to no-clearfix.
  $variables['footer_classes'] = array('no-clearfix');
  
  // IE7 CSS exception for kid-reporters landing page (anon only).
  /*if(!$variables['logged_in']) {
    $menu_item = menu_get_item();
    if($menu_item && $menu_item['path'] == 'node/%') {
      $node = menu_get_object('node', 1);
      if($node->type == 'atw_destination') {
        $variables['footer_classes'] = array('no-clearfix');
      }
    }
    
    if($menu_item && $menu_item['path'] == 'kid-reporters') {
      $variables['footer_classes'] = array('no-clearfix');
    }
  }*/
  
  $variables['footer_classes'] = implode(' ', $variables['footer_classes']);
  
  // Check Flashcard title for profanity. (This would not work in tfk_preprocess_node() )
  if (isset($variables['node']) && $variables['node']->type == 'flashcard') {
    $variables['title'] = check_markup(decode_entities($variables['node']->title, 'bad_words'));
  }
}

/**
 * Override or insert variables into the node templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
function tfk_preprocess_node(&$variables, $hook) {
  // Filter out profanity from flashcards.
    if ($variables['type'] == 'flashcard') {
      foreach (element_children($variables['content']['field_flashcard']) as $delta) {
        $flashcard = &$variables['content']['field_flashcard'][$delta]['#items'][0];
        $flashcard['data'] = check_markup(decode_entities($flashcard['data'], 'bad_words'));
        // Flashcards with an answer of '0' do not display correctly if run through the bad_words filter.
        $flashcard['children'][0] = is_numeric($flashcard['children'][0]) ? $flashcard['children'][0] : check_markup(decode_entities($flashcard['children'][0], 'bad_words'));
      }
    }
}

/**
 * Override or insert variables into the comment templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function STARTERKIT_preprocess_comment(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
/* -- Delete this line if you want to use this function
function STARTERKIT_preprocess_block(&$variables, $hook) {
  // Add a count to all the blocks in the region.
  $variables['classes_array'][] = 'count-' . $variables['block_id'];
}
// */

function tfk_header_tag($type) {
  $output = '';
  switch ($type) {
    case 'a_paper':
      $output = t('A+ Papers');
      break;
    case 'flashcard':
      $output = t('Flash-card Maker');
      break;
    case 'grammar_practice':
      $output = t('Punctuation Practice');
      break;
    default:
      $output = drupal_get_title();
  }
  return $output;
}

function tfk_preprocess_flashcard_cycle_mark(&$variables) {
  $variables['title'] = t('Mark this card for extra practice');
}

function tfk_preprocess_flashcard_cycle(&$variables) {
  // TODO: When we know more about the help page, we can link it here.
  drupal_add_js(drupal_get_path('theme', 'tfk'). '/js/flashcard_help.js','file');
  $variables['help'] = l(t('Help'), '#', array('attributes' => array('class' => array('flashcard-help'))));
}



function tfk_html_head_alter(&$head_elements){
    
    $args = arg();
    
    
    if(count($args) == 1 && ( $args[0] == 'node')){
    
        $element = array(
            '#type' =>'html_tag',
            '#tag' => 'meta', // The #tag is the html tag - <link />
            '#attributes' => array( // Set up an array of attributes inside the tag
            'name' => 'description',
            'content' => 'TIME FOR KIDS is a news magazine geared toward students in grades K-6. Timeforkids.com offers age-appropriate news stories and features about children’s books, movies, the environment, science, world cultures and other high-interest topics. Students can find easy-to-use homework help, grammar and punctuation practice, writing tips and a flash-card maker. Educators and parents can view teaching resources, printables, interactive classroom materials and a teacher community board where they can connect with each other.'
              ),
            );
        
        $head_elements[] =$element;
    }
    
    if($args[0] == 'photos-video' || $args[0] == 'store'){
        $head_elements['metatags_quick_description']['#attributes']['content'] = 'TIME FOR KIDS is a news magazine geared toward students in grades K-6. Timeforkids.com offers age-appropriate news stories and features about children’s books, movies, the environment, science, world cultures and other high-interest topics. Students can find easy-to-use homework help, grammar and punctuation practice, writing tips and a flash-card maker. Educators and parents can view teaching resources, printables, interactive classroom materials and a teacher community board where they can connect with each other.';
    }
    
    
    if(isset($args[1])){
    
        if($args[0] == 'node' && is_numeric($args[1])){
            $node = node_load($args[1]);
            if(isset($node->type) && $node->type == 'atw_destination' && isset($node->field_description['und'][0]['safe_value'])){
                $desc = $node->field_description['und'][0]['safe_value'];
                $element = array(
                '#type' =>'html_tag',
                '#tag' => 'meta', // The #tag is the html tag - <link />
                '#attributes' => array( // Set up an array of attributes inside the tag
                'name' => 'description',
                'content' => $desc
                  ),
                );

            $head_elements[] =$element;
            }

        }
    }
    
}



/**
* Temporary substitute for Meta Tags module.
*
* @param $path
*   The path of the page, passed from html.tpl.php
*/
function manualMetaTags($path) {
    
  // determine the path of the page
  switch ($path) {
     
    case 'node':
        
        $description = "TIME FOR KIDS is a news magazine geared toward students in grades K-6. Timeforkids.com offers age-appropriate news stories and features about children’s books, movies, the environment, science, world cultures and other high-interest topics. Students can find easy-to-use homework help, grammar and punctuation practice, writing tips and a flash-card maker. Educators and parents can view teaching resources, printables, interactive classroom materials and a teacher community board where they can connect with each other.";
       // print "<meta name='description' content='".$description."' />\n";
    break;

    case 'photos-video':
      $description = "TIME FOR KIDS is a news magazine geared toward students in grades K-6. Timeforkids.com offers age-appropriate news stories and features about children’s books, movies, the environment, science, world cultures and other high-interest topics. Students can find easy-to-use homework help, grammar and punctuation practice, writing tips and a flash-card maker. Educators and parents can view teaching resources, printables, interactive classroom materials and a teacher community board where they can connect with each other.";
     // print "<meta name='description' content='".$description."' />\n";
    break;

    case 'store':
      $description = "TIME FOR KIDS is a news magazine geared toward students in grades K-6. Timeforkids.com offers age-appropriate news stories and features about children’s books, movies, the environment, science, world cultures and other high-interest topics. Students can find easy-to-use homework help, grammar and punctuation practice, writing tips and a flash-card maker. Educators and parents can view teaching resources, printables, interactive classroom materials and a teacher community board where they can connect with each other.";
     // print "<meta name='description' content='".$description."' />\n";
    break;

   

  }
}

/**
 * Implementation of hook_form_alter().
 * TFK-261
 */

function tfk_form_alter(&$form, &$form_state, $form_id) {
    if($form_id=='webform_client_form_306') {
        $form['#validate'][]='tfk_form_validate';
        return $form;
    }
}

function tfk_form_validate($form,&$form_state) {
    $ageval = $form_state['values']['submitted']['question_age'];
    if($ageval != '' && !ctype_digit($ageval)) {
        form_set_error('question_age','Age should be numerical value');
    }
}

function tfk_preprocess_image(&$variables) {
  // If the image URL starts with a protocol remove it and use a
  // relative protocol.
  $scheme = file_uri_scheme($variables['path']);
  if ($scheme == 'https') {
    flog("Images with HTTPS protocol on HTTP site.");
  }
  $protocols = array('http', 'https');
  if ($scheme && in_array($scheme, $protocols)) {
    $variables['path'] = '//' . file_uri_target($variables['path']);
  }
}