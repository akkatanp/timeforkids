<?php
/**
 * @file
 * homework_helper.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function homework_helper_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'flashcard_landing';
  $context->description = 'Flash-card Maker landing page.';
  $context->tag = 'Homework Helper';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'homework-helper/flashcards' => 'homework-helper/flashcards',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'block-21' => array(
          'module' => 'block',
          'delta' => '21',
          'region' => 'content',
          'weight' => '-9',
        ),
        'study_helper-0' => array(
          'module' => 'study_helper',
          'delta' => '0',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Flash-card Maker landing page.');
  t('Homework Helper');
  $export['flashcard_landing'] = $context;

  return $export;
}
