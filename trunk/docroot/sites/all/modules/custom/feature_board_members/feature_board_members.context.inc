<?php
/**
 * @file
 * feature_board_members.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function feature_board_members_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'Tfk board members';
  $context->description = 'Tfk board members';
  $context->tag = 'board members';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'board_members:page' => 'board_members:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-board_members-block_1' => array(
          'module' => 'views',
          'delta' => 'board_members-block_1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Tfk board members');
  t('board members');
  $export['Tfk board members'] = $context;

  return $export;
}
