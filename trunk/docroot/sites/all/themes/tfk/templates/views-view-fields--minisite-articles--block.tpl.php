<?php
/**
 * @file views-view-fields.tpl.php
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */

global $base_url;

?>

<?php 

  $count = 0;
  $slide_image = "";
  
  foreach ($fields as $id => $field):
  
    if($id != 'field_related_articles_1' && $id != 'field_related_articles' && $id != 'field_slideshow_images' && $id != 'field_additional_content'):
      if (!empty($field->separator)): 
        print $field->separator; 
      endif; 
      print $field->wrapper_prefix; 
        print $field->label_html; 
        
        if ($slide_image!="") {
          preg_match('/<a href="(.+)">/', $field->content, $href);
          print "<a href=\"".$href[1]."\"><img class=\"minisite-slideshow-slide\" src=\"".$slide_image."\"/></a>";
          $slide_image = "";
        }
        
        print $field->content;
      print $field->wrapper_suffix; 
    endif; 
   
    if($id == 'field_slideshow_images' && isset($field->content)):

      $img = node_load($field->content);
    
      $tmp_img = field_get_items('node', $img, 'field_image');
      $img_fid = $tmp_img[0]['filename'];
      
      $slide_image = image_style_url('slideshow_small_square', file_build_uri(basename($img_fid)));

    endif;
    
  endforeach; 
  
  if(isset($fields['field_related_articles_1']) && !empty($fields['field_related_articles_1']->content) || !empty($fields['field_related_articles']->content) || isset($fields['field_additional_content']->content)):
  
?>

  <div class="related-content-wrap">
    <div class="addit-content"><?php print $fields['field_related_articles']->content;?></div>
    <?php if($fields['field_related_articles_1']): ?>
       <div class="addit-related-articles"><?php print $fields['field_related_articles_1']->content; ?></div>
    <?php endif; ?>
    <?php if($fields['field_additional_content']): ?>
       <div class="addit-related-articles">Additional Content: <?php print $fields['field_additional_content']->content; ?></div>
    <?php endif; ?>

  </div>
  
<?php endif;?>
