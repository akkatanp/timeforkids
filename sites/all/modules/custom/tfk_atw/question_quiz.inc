<?php

/**
 * @file
 * Webform module textfield component.
 */

/**
 * Implementation of _webform_defaults_component().
 */
function _webform_defaults_question_quiz() {
  return array(
    'name' => '',
    'form_key' => NULL,
    'pid' => 0,
    'weight' => 0,
    'mandatory' => 1,
    'extra' => array(
      'question' => '',
      'answers' => '',
      'correct_text' => '',
      'attributes' => array(),
    ),
  );
}

/**
 * Implementation of _webform_theme_component().
 */
function _webform_theme_question_quiz() {
  return array(
    'webform_display_question_quiz' => array(
      'render element' => 'element',
    ),
  );
}

/**
 * Implementation of _webform_edit_component().
 */
function _webform_edit_question_quiz($component) {

  $form = array();
  
  $form['extra']['answers'] = array(
    '#type' => 'textarea',
    '#title' => t('Answers'),
    '#default_value' => isset($component['extra']['answers']) ? $component['extra']['answers'] : '', 
    '#weight' => 1,
  );
  
  $options = explode ("\n", $component['extra']['answers']);


  $form['extra']['correct_answer_new'] = array(
    '#type' => 'textfield',
    '#title' => t('The real Correct Answer'),
      '#default_value' => isset($component['extra']['correct_answer_new']) ? $component['extra']['correct_answer_new'] : '',
    '#weight' => 2,);

//  $form['extra']['correct_answer'] = array(
//    '#type' => 'radios',
//    '#title' => t('Correct Answer'),
//    '#options' => $options,
//    '#default_value' => isset($component['extra']['correct_answer']) ? $component['extra']['correct_answer'] : '',
//    '#weight' => 2,
//  );
   
 $form['extra']['correct_text'] = array(
    '#type' => 'textarea',
    '#title' => t('Correct answer text'),
    '#default_value' => isset($component['extra']['correct_text']) ? $component['extra']['correct_text'] : '',
    '#description' => t('The default value of the field.') . theme('webform_token_help'),
    '#size' => 60,
    '#maxlength' => 1024,
    '#weight' => 3,
  );

  return $form;
}

/**
 * Implementation of _webform_render_component().
 */
function _webform_render_question_quiz($component, $value = NULL, $filter = TRUE) {

  $element['question'] = array(
    '#type' => 'item',
    '#title' => $component['name'],
    '#webform_component' => $component,
    '#weight' => 0
  );
  
  $options = explode ("\n", $component['extra']['answers']);
  
  $element['answer'] = array(
    '#type' => 'radios',
    '#options' => $options,
    '#required' => TRUE,
    '#weight' => 1,
    '#webform_component' => $component,
  );

  return $element;
}

/**
 * Implementation of _webform_display_component().
 */
function _webform_display_question_quiz($component, $value, $format = 'html') {

	//dsm('liber');
  return array(
    '#title' => $component['name'],
    '#weight' => $component['weight'],
    '#theme' => 'webform_display_question_quiz',
    '#theme_wrappers' => $format == 'html' ? array('webform_element') : array('webform_element_text'),
    '#field_prefix' => $component['extra']['field_prefix'],
    '#field_suffix' => $component['extra']['field_suffix'],
    '#format' => $format,
    '#value' => isset($value[0]) ? $value[0] : '',
    '#webform_component' => $component,
  );
}

/**
 * Format the output of data for this component.
 */
function theme_webform_display_question_quiz($variables) {
  $element = $variables['element'];
  $prefix = $element['#format'] == 'html' ? '' : $element['#field_prefix'];
  $suffix = $element['#format'] == 'html' ? '' : $element['#field_suffix'];
  $value = $element['#format'] == 'html' ? check_plain($element['#value']) : $element['#value'];
  return $value !== '' ? ($prefix . $value . $suffix) : ' ';
}

/**
 * Implementation of _webform_analysis_component().
 */
function _webform_analysis_question_quiz($component, $sids = array()) {
  $query = db_select('webform_submitted_data', 'wsd', array('fetch' => PDO::FETCH_ASSOC))
    ->fields('wsd', array('data'))
    ->condition('nid', $component['nid'])
    ->condition('cid', $component['cid']);

  if (count($sids)) {
    $query->condition('sid', $sids, 'IN');
  }

  $nonblanks = 0;
  $submissions = 0;
  $wordcount = 0;

  $result = $query->execute();
  foreach ($result as $data) {
    if (drupal_strlen(trim($data['data'])) > 0) {
      $nonblanks++;
      $wordcount += str_word_count(trim($data['data']));
    }
    $submissions++;
  }

  $rows[0] = array(t('Left Blank'), ($submissions - $nonblanks));
  $rows[1] = array(t('User entered value'), $nonblanks);
  $rows[2] = array(t('Average submission length in words (ex blanks)'), ($nonblanks != 0 ? number_format($wordcount/$nonblanks, 2) : '0'));
  return $rows;
}

/**
 * Implementation of _webform_table_component().
 */
function _webform_table_question_quiz($component, $value) {
  return check_plain(empty($value[0]) ? '' : $value[0]);
}

/**
 * Implementation of _webform_csv_headers_component().
 */
function _webform_csv_headers_question_quiz($component, $export_options) {
  $header = array();
  $header[0] = '';
  $header[1] = '';
  $header[2] = $component['name'];
  return $header;
}

/**
 * Implementation of _webform_csv_data_component().
 */
function _webform_csv_data_question_quiz($component, $export_options, $value) {
  return !isset($value[0]) ? '' : $value[0];
}
