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

?>

<?php foreach ($fields as $id => $field): ?>

    <?php if($id != 'field_related_articles_1' && $id != 'field_additional_content'):?>
      <?php if (!empty($field->separator)): ?>
        <?php print $field->separator; ?>
      <?php endif; ?>

      <?php print $field->wrapper_prefix; ?>
        <?php print $field->label_html; ?>
        <?php print $field->content; ?>
      <?php print $field->wrapper_suffix; ?>
    <?php endif; ?>
<?php endforeach; ?>



<?php if(array_key_exists('field_related_articles_1', $fields) && strlen($fields['field_related_articles_1']->content) != 0):?>
    <div class="related-content-wrap">
      <div class="addit-content">Additional Content</div>
        <?php if($fields['field_related_articles_1']): ?>
           <div class="addit-mini-lessons"><?php print $fields['field_related_articles_1']->content;?></div>
        <?php endif; ?>
       
    </div>
<?php endif;?>

<?php if(array_key_exists('field_additional_content', $fields) && strlen($fields['field_additional_content']->content) != 0):?>
    <div class="related-content-wrap">
      <div class="addit-content">Additional Content</div>
        <?php if($fields['field_additional_content']): ?>
           <div class="addit-mini-lessons">ARTICLE: <?php print $fields['field_additional_content']->content;?></div>
        <?php endif; ?>
       
    </div>
<?php endif;?>
