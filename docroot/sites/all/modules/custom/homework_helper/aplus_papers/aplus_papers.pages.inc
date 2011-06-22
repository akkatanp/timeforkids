<?php

/**
 * Prepare the steps of the form from a structure of nodes.
 */
function aplus_papers_prepare_steps($node) {
  $steps = array();
  $steps[] = aplus_papers_first_step($node);
  $result = db_query("
    SELECT f.entity_id from field_data_field_step_parent f
    INNER JOIN {node} n ON n.vid = f.revision_id
    WHERE f.field_step_parent_nid = :nid
    AND f.entity_type = 'node'
    AND f.bundle = 'paper_step'
  ", array(':nid' => $node->nid));
  foreach ($result as $record) {
    $nids[] = $record->entity_id;
  }
  if ($nids) {
    $nodes = node_load_multiple($nids);
    usort($nodes, 'aplus_papers_sort_steps');
    foreach ($nodes as $index => $node) {
      $steps[] = aplus_papers_prepare_step($node);
    }
  }
  $steps[] = aplus_papers_review_step($steps);
  $steps[] = aplus_papers_final_step();
  return $steps;
}

function aplus_papers_first_step($node) {
  $description = field_get_items('node', $node, 'field_paper_description');
  $description = $description[0]['safe_value'];
  $form['description'] = array(
    '#markup' => '<div class="aplus-overview"><h2 class="node-title"></h2>' . $description . '</div>',
  );
  $form['#parent_nid'] = $node->nid;
  return $form;
}

function aplus_papers_prepare_step($node) {
  $form['description'] = node_view($node, 'full');
  if ($node->field_step_title && $node->field_step_title[$node->language][0]['value']) {
    $form['title'] = array(
      '#type' => 'textfield',
      '#required' => TRUE,
      '#title' => 'Title:',
    );
  }
  if ($node->field_step_name_date && $node->field_step_name_date[$node->language][0]['value']) {
    $form['name'] = array(
      '#type' => 'textfield',
      '#required' => TRUE,
      '#title' => 'Name:',
    );
    $form['date'] = array(
      '#type' => 'textfield',
      '#required' => TRUE,
      '#title' => 'Date:',
    );
  }
  if ($node->field_step_text_area[$node->language][0]['value']) {
    $form['textarea'] = array(
      '#type' => 'textarea',
      '#required' => TRUE,
      '#title' => isset($node->field_step_text_label[$node->language][0]['value']) ? $node->field_step_text_label[$node->language][0]['value'] : check_plain($node->title),
    );
  }
  if ($node->field_step_checkbox) {
    $form['#checklist'] = $node->field_step_checkbox[$node->language][0]['value'];
  }  
  $form['#parent_nid'] = arg(1); 
  
  return $form;
}

function aplus_papers_sort_steps($a, $b) {
  return ($a->field_step_weight[$a->language][0]['value'] > $b->field_step_weight[$a->language][0]['value']);
}

/**
 * Prepare review form step.
 */
function aplus_papers_review_step($steps) {
  $form['#prefix'] = '<div id="aplus-review-step">';
  $form['#suffix'] = '</div>';
  $form['description'] = array(
    '#markup' => '<h2 class="node-title">' . t('Review Your Paper') . '</h2><div class="a-plus-review-description">' . t('Read through and check each section for errors.') . '</div>',
  );
  $form['#checklist'] = t('Review your work');
  $form['#parent_nid'] = arg(1); 
  
  foreach ($steps as $step) {
    unset($step['description']);
    $form[] = $step;
  }
  return $form;
}

/**
 * Prepare final step.
 */
function aplus_papers_final_step() {
  $form['#parent_nid'] = arg(1); 
  return $form;
} 

