<?php
/**
 * @file
 * Administration settings for Time Inc Data Object.
 *
 * @author Neal Bailly
 *
 */


/**
 * @return array
 *  Admin form for setting UDO keys and mapping to metadata keys
 */
function ti_udo_admin_form() {

  drupal_add_js(drupal_get_path('module', 'ti_udo') . '/js/form.js');
  drupal_add_css(drupal_get_path('module', 'ti_udo') . '/css/form.css');

  $udo_map = json_decode(file_get_contents(drupal_get_path('module', 'ti_udo') . '/udo.json'));
  $udo_site_map = variable_get('ti_udo_map', array());

  $form = array();

  $form['metadata'] = array(
    '#type'        => 'fieldset',
    '#title'       => t('Map the Time Inc. Universal Data Object (UDO) to your Site Specific Data Layer'),
    '#collapsible' => FALSE,
    '#description' => t('<ul><li>Use the table below to map the Time Inc UDO to the specific data layer elements used by your site.</li><li>UDO key names site data layer key names are the same by default, but can be re-mapped to separate key site keys below, if needed.</li></ul>'),
  );

  $form['metadata']['map'] = array(
    '#type' => 'hidden',
    '#value' => json_encode($udo_site_map),
    '#attributes' => array('class' => array('udo-map')),
  );

  $form['metadata']['markup'] = array(
    '#type' => 'markup',
    '#markup' => theme('admin', array('udo_map' => $udo_map, 'udo_site_map' => $udo_site_map)),
  );

  $form['#submit'][] = 'ti_udo_admin_form_submit';

  return system_settings_form($form);
}
/**
 * Submit handler for Add Tag page.
 */

function ti_udo_admin_form_submit($form, &$form_state) {

  $map = json_decode($form_state['input']['map']);
  variable_set('ti_udo_map', $map);

}
