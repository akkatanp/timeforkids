<?php

/**
 * Prepare the questions of the form from a structure of nodes.
 */
function grammar_wizard_prepare_questions($node) {
  $questions = array();
  $result = db_query("
    SELECT f.entity_id from field_data_field_grammar_practice f
    INNER JOIN {node} n ON n.vid = f.revision_id
    WHERE f.field_grammar_practice_nid = :nid
    AND f.entity_type = 'node'
    AND f.bundle = 'grammar_practice_question'
  ", array(':nid' => $node->nid));
  foreach ($result as $record) {
    $nids[] = $record->entity_id;
  }
  if ($nids) {
    $nodes = node_load_multiple($nids);
    usort($nodes, 'grammar_wizard_sort_questions');
    foreach ($nodes as $index => $node) {
      $questions[] = grammar_wizard_prepare_question($node);
    }
  }
  $questions[] = grammar_wizard_final_question();
  return $questions;
}

function grammar_wizard_prepare_question($node) {
  $form['description'] = node_view($node, 'full');

  $answer = field_get_items('node', $node, 'field_grammar_practice_answer');
  $rule = field_get_items('node', $node, 'field_grammar_practice_rule');
  $choices = field_get_items('node', $node, 'field_grammar_practice_choices');

  $answers = array();
  $form['question'] = array(
    '#type' => 'radios',
    '#required' => TRUE,
    '#options' => $answers,
    '#title' => check_plain($node->title),
  );

  $form['#parent_nid'] = arg(1); 

  return $form;
}

function grammar_wizard_sort_questions($a, $b) {
  $weight_a = field_get_items('node', $a, 'field_step_weight');
  $weight_b = field_get_items('node', $b, 'field_step_weight');
  return ($a->field_question_weight[$a->language][0]['value'] > $b->field_question_weight[$a->language][0]['value']);
}


/**
 * Prepare final question.
 */
function grammar_wizard_final_question() {
  return $form;
} 

