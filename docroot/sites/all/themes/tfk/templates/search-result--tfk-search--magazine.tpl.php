<?php
// $Id: search-result.tpl.php,v 1.9 2010/11/21 20:36:36 dries Exp $

/**
 * @file
 * Default theme implementation for displaying a single search result.
 *
 * This template renders a single search result and is collected into
 * search-results.tpl.php. This and the parent template are
 * dependent to one another sharing the markup for definition lists.
 *
 * Available variables:
 * - $url: URL of the result.
 * - $title: Title of the result.
 * - $snippet: A small preview of the result. Does not apply to user searches.
 * - $info: String of all the meta information ready for print. Does not apply
 *   to user searches.
 * - $info_split: Contains same data as $info, split into a keyed array.
 * - $module: The machine-readable name of the module (tab) being searched, such
 *   as "node" or "user".
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Default keys within $info_split:
 * - $info_split['type']: Node type (or item type string supplied by module).
 * - $info_split['user']: Author of the node linked to users profile. Depends
 *   on permission.
 * - $info_split['date']: Last update of the node. Short formatted.
 * - $info_split['comment']: Number of comments output as "% comments", %
 *   being the count. Depends on comment.module.
 * - $info_split['upload']: Number of attachments output as "% attachments", %
 *   being the count. Depends on upload.module.
 *
 * Other variables:
 * - $classes_array: Array of HTML class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $title_attributes_array: Array of HTML attributes for the title. It is
 *   flattened into a string within the variable $title_attributes.
 * - $content_attributes_array: Array of HTML attributes for the content. It is
 *   flattened into a string within the variable $content_attributes.
 *
 * Since $info_split is keyed, a direct print of the item is possible.
 * This array does not apply to user searches so it is recommended to check
 * for its existence before printing. The default keys of 'type', 'user' and
 * 'date' always exist for node searches. Modules may provide other data.
 * @code
 *   <?php if (isset($info_split['comment'])) : ?>
 *     <span class="info-comment">
 *       <?php print $info_split['comment']; ?>
 *     </span>
 *   <?php endif; ?>
 * @endcode
 *
 * To check for all available data within $info_split, use the code below.
 * @code
 *   <?php print '<pre>'. check_plain(print_r($info_split, 1)) .'</pre>'; ?>
 * @endcode
 *
 * @see template_preprocess()
 * @see template_preprocess_search_result()
 * @see template_process()
 */
?>
<?php if($render): ?>
<li class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php// if($tfk_search_cont_type):?>
   <!-- Content type:<?php print $tfk_search_cont_type;?> -->
  <?php// endif;?>
  

  <?php print render($title_prefix); ?>
  <h3 class="title"<?php print $title_attributes; ?>>
    <a href="<?php print $url; ?>"><?php print $title; ?></a>
    <span style="text-align:right;align:right;">
    <?php if($magazine_issue_grade_level):?>
    Grade Level:<?php print $magazine_issue_grade_level;?>
    <?php endif;?>
    </span>
  </h3>
  
  <?php print render($title_suffix); ?>
  
  <?php if($tfk_search_res_image):?>
    <img src="<?php print $tfk_search_res_image;?>">
  <?php endif;?>

  <div class="in-this-issue">
    <?php if(isset($magazine_cover_stories) && count($magazine_cover_stories) > 0): ?>
      <h3>Cover Story</h3>
	  <ul>
      <?php foreach($magazine_cover_stories as $item):?>
        <li>&bull; <a href="<?php echo url($item['url']);?>"><?php echo $item['title'];?></a></li>
      <?php endforeach;?>
	  </ul>
    <?php endif; ?>


    <?php if(isset($magazine_in_the_news) && count($magazine_in_the_news) > 0): ?>
    <h3>In The News</h3>
	<ul>
	  <?php foreach($magazine_in_the_news as $item):?>
        <li>&bull; <a href="<?php echo url($item['url']);?>"><?php echo $item['title'];?></a></li>
      <?php endforeach;?>
	</ul>
    <?php endif; ?>


    <?php if(isset($magazine_topfive) && count($magazine_topfive) > 0): ?>
      <h3>Top 5</h3>
	  <ul>
      <?php foreach($magazine_topfive as $item):?>
        <li>&bull; <a href="<?php echo url($item['url']);?>"><?php echo $item['title'];?></a></li>
      <?php endforeach;?>
	  </ul>
    <?php endif; ?>


    <?php if(isset($magazine_whosnews) && count($magazine_whosnews) > 0): ?>
      <h3>Who's News</h3>
	  <ul>
      <?php foreach($magazine_whosnews as $item):?>
        <li>&bull; <a href="<?php echo url($item['url']);?>"><?php echo $item['title'];?></a></li>
      <?php endforeach;?>
	  </ul>
    <?php endif; ?>

    <?php if(isset($magazine_morenews) && count($magazine_morenews) > 0): ?>
      <h3>More News</h3>
	  <ul>
      <?php foreach($magazine_morenews as $item):?>
        <li>&bull; <a href="<?php echo url($item['url']);?>"><?php echo $item['title'];?></a></li>
      <?php endforeach;?>
	  </ul>
    <?php endif; ?>
  </div>

  <div class="related-content-wrap">
    <?php if(count($magazine_materials) >0 || count($magazine_related) > 0 ):?>
       <h2 class="addit-content">Additional Content</h2>
    <?php endif;?>

    <?php if(isset($magazine_materials) && count($magazine_materials) > 0): ?>
      <h3>Materials</h3>
      <?php foreach($magazine_materials as $item):?>
        <a href="<?php echo url($item['url']);?>"><?php echo $item['title'];?></a><br/>
      <?php endforeach;?>
    <?php endif; ?>

    <?php if(isset($magazine_related) && count($magazine_related) > 0): ?>
      <h3>Related Resources</h3>
      <?php foreach($magazine_related as $item):?>
        <a href="<?php echo url($item['url']);?>"><?php echo $item['title'];?></a><br/>
      <?php endforeach;?>
    <?php endif; ?>
  </div>
  
  <div class="clearfix"></div>

  <div class="search-snippet-info">
    <?php if ($snippet) : ?>
      <p class="search-snippet"<?php print $content_attributes; ?>><?php print $snippet; ?></p>
    <?php endif; ?>
    <?php if ($info) : ?>
      <p class="search-info"><?php print $info; ?></p>
    <?php endif; ?>
  </div>
</li>
<?php endif; ?>
