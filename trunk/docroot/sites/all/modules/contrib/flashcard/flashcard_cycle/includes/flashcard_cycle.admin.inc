<?php

/**
 * @file
 * Administrative page callbacks for the Flashcard Cycle module.
 */

/**
 * General configuration form for controlling the Flashcard Cycle behaviour.
 */
function flashcard_cycle_admin_settings() {
  $form['animation'] = array(
    '#type' => 'fieldset',
    '#title' => t('Animation'),
  );
  $form['animation']['flashcard_cycle_speed_setting'] = array(
    '#type' => 'select',
    '#title' => t('Speed'),
    '#default_value' => variable_get('flashcard_cycle_speed_setting', 'slow'),
    '#options' => array(
      'slow' => t('Slow (200ms)'),
      'fast' => t('Fast (600ms)'),
      'custom' => t('Custom'),
    ),
    '#description' => t('Speed of the flashcard animations.'),
  );
  $form['animation']['flashcard_cycle_custom_speed'] = array(
    '#type' => 'textfield',
    '#title' => t('Custom speed'),
    '#default_value' => variable_get('flashcard_cycle_custom_speed', '1000'),
    '#size' => 4,
    '#maxlength' => 128,
    '#description' => t('Speed in miliseconds.'),
    '#states' => array(
      'visible' => array(
        ':input[name="flashcard_cycle_speed_setting"]' => array('value' => 'custom'),
      ),
    ),
  );

  $form['behavior'] = array(
    '#type' => 'fieldset',
    '#title' => t('Behavior'),
  );
  $form['behavior']['flashcard_cycle_flip'] = array(
    '#type' => 'radios',
    '#title' => t('Flip button'),
    '#default_value' => variable_get('flashcard_cycle_flip', 'flip'),
    '#options' => array(
      'flip' => t('Toggle back of card on and off.'),
      'next' => t('Show back of card, then go to next card.'),
    ),
  );
  return system_settings_form($form);
}
