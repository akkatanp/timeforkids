<?php

/**
 * Prepare the questions of the form from a structure of nodes.
 */
function grammar_wizard_prepare_questions($node) {
  $questions = array();
  // Find 5 random questions from this quiz.
  $result = db_query_range("
    SELECT f.entity_id from field_data_field_grammar_practice f
    INNER JOIN {node} n ON n.vid = f.revision_id
    WHERE f.field_grammar_practice_nid = :nid
    AND f.entity_type = 'node'
    AND f.bundle = 'grammar_practice_question'
    AND n.status = 1
    ORDER BY RAND()
  ", 0, 5, array(':nid' => $node->nid));
  foreach ($result as $record) {
    $nids[] = $record->entity_id;
  }
  if ($nids) {
    $nodes = node_load_multiple($nids);
    shuffle($nodes);
    foreach ($nodes as $index => $node) {
      $questions[] = grammar_wizard_prepare_question($node);
    }
  }
  $questions[] = grammar_wizard_results();
  return $questions;
}

function grammar_wizard_prepare_question($node) {
  $form['description'] = node_view($node, 'full');

  // Combine the correct and incorrect choices and randomize their order.
  $answer = field_get_items('node', $node, 'field_grammar_practice_answer');
  $rule = field_get_items('node', $node, 'field_grammar_practice_rule');
  $choices = field_get_items('node', $node, 'field_grammar_practice_choices');
  $answers = array($answer[0]['safe_value']);
  foreach ($choices as $key => $choice) {
    $answers[] = $choices[$key]['safe_value'];
  }
  shuffle($answers);
  foreach ($answers as $key => $answer) {
    $answers[$answer] = $answer;
    unset($answers[$key]);
  }

  $form['question'] = array(
    '#type' => 'radios',
    '#options' => $answers,
    '#title' => check_plain($node->title),
  );

  $form['#parent_nid'] = arg(1); 
  $form['#correct_answer'] = $node->field_grammar_practice_answer[$node->language][0]['value'];

  $rule_node = node_load($node->field_grammar_practice_rule[$node->language][0]['nid']);
  $form['#rule'] = $rule_node->body[$node->language][0]['safe_value'];
  $form['#rule_title'] = $rule_node->title;
  $form['#rule_example'] = $rule_node->field_grammar_example[$node->language][0]['safe_value'];

  $form['#checked'] = NULL;

  return $form;
}

/**
 * Show the results page.
 */
function grammar_wizard_results() {
  return $form;
} 

