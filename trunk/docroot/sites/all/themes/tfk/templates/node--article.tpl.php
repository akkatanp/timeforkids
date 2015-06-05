<?php
/**
 * @file
 * Zen theme's implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type, i.e., "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   - view-mode-[mode]: The view mode, e.g. 'full', 'teaser'...
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 *   The following applies only to viewers who are registered users:
 *   - node-by-viewer: Node is authored by the user currently viewing the page.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content. Currently broken; see http://drupal.org/node/823380
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined, e.g. $node->body becomes $body. When needing to access
 * a field's raw values, developers/themers are strongly encouraged to use these
 * variables. Otherwise they will have to explicitly specify the desired field
 * language, e.g. $node->body['en'], thus overriding any language negotiation
 * rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see zen_preprocess_node()
 * @see template_process()
 */

if($is_anon == 1){
  unset($content['group_additional_content']);
}else{
    if(isset($content['group_additional_content'])){
        $addit_content = $content['group_additional_content'];
        $content['group_additional_content']['#prefix'] = '<b>Additional Content:</b><br/>'.$content['group_additional_content']['#prefix'];
    }
}

$visible=1;
if(!isset($content['group_additional_content']['field_mini_lessons'])&& !isset($content['group_additional_content']['field_related_articles']))
{
  unset($content['group_additional_content']);
  $visible=0;
 }
 
if(count(arg()) == 4) {
 $magazine = menu_get_object('node', 3);
 if($magazine && $magazine->type == 'magazine_issue') {
   $magazine_article = TRUE;
 } else {
   $magazine_article = FALSE;
 }
}
//flog_it("title_prefix=");
//flog_it($title_prefix);
//flog_it("title_suffix:");
//flog_it($title_suffix);
//flog_it("title=".$title);
//flog_it("display_submitted=".$display_submitted);
//flog_it("field_article_category:");
//flog_it(render($content['field_article_category']));
//flog_it("field_news_brief_category:");
//flog_it($content['field_news_brief_category']);
//flog_it("content:");
//flog_it($content);

//flog_it("classes=".$classes.", attributes=".$attributes);

flog_it($content['field_article_category']);
?>
<?php if($is_kid_reporter_article == 1){
        //unset($content['group_date_and_author']['field_article_byline']);
}?>

<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>  <?php if($is_kid_reporter_article == 1){print 'is-kid-reporter-article';}?> clearfix"<?php print $attributes; ?>>

  <?php print $user_picture; ?>

  <?php print render($title_prefix); ?>
  <?php if (!$page && !isset($magazine_article) && $title): ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if ($unpublished): ?>
    <div class="unpublished"><?php print t('Unpublished'); ?></div>
  <?php endif; ?>

  <?php if ($display_submitted): ?>
    <div class="submitted">
      <?php print $submitted; ?>
    </div>
  <?php endif; ?>
  
  <div class="content"<?php print $content_attributes; ?>>
      <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content['field_article_category']);
      ?>
      <h1><?php print $title; ?></h1>
      <?php print render($content);?><br/>

      <?php if($is_anon == 0 && $visible == 1  ):?>
            <br/><b>Additional Content:</b><br/>
            <?php  print render($addit_content); ?>
      <?php endif;?>
            
      <?php if(isset($rendered_poll)):?>
            <?php print $rendered_poll; ?>
      <?php endif;?>
            
  </div>
  
  <?php print render($content['links']); ?>
  <?php print render($content['comments']); ?>

</div><!-- /.node -->