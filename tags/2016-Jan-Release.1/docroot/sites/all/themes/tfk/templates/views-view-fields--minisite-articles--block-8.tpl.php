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
<?php $i = 0; $j = 0; $str = ''; ?>
<?php foreach ($fields as $id => $field): ?>
      <?php 
        $space_class = ($i % 2 === 0) ? "space-minisite space-even" : "space-minisite space-odd";
      ?>
      <?php 
        if ($j === 0):
          $str .='<div class="' . $space_class . '">';
        endif; 
      ?>
      <?php if ($j === 0 || $j === 1 || $j === 2): ?>
        <?php if (!empty($field->separator)): ?>
          <?php $str .= $field->separator; ?>
        <?php endif; ?>

        <?php $str .= $field->wrapper_prefix; ?>
          <?php $str .= $field->label_html; ?>
          <?php $str .= $field->content; ?>
        <?php $str .= $field->wrapper_suffix; ?>
      <?php endif; ?>
      <?php 
        if ($j === 2):
          $str .= '</div>';
        endif; 
      ?>
      <?php 
        if ($j < 2) {
          $j++;
        }
        else {
          $j = 0;
          $i++;
        }
      ?>
<?php endforeach; ?>
<?php print $str;

