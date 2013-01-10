<?php
/**
 * @file
 * feature_board_members.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function feature_board_members_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'tfk_board_members';
  $context->description = 'Tfk board members';
  $context->tag = 'board members';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'teacher-board-members' => 'teacher-board-members',
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
  $export['tfk_board_members'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'tfk_boardmember_node';
  $context->description = 'TFK Member CCK Type View';
  $context->tag = 'board members';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'board_member' => 'board_member',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-link-to-board-members' => array(
          'module' => 'menu',
          'delta' => 'menu-link-to-board-members',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-board_members-block_2' => array(
          'module' => 'views',
          'delta' => 'board_members-block_2',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('TFK Member CCK Type View');
  t('board members');
  $export['tfk_boardmember_node'] = $context;

  return $export;
}
