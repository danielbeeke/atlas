<?php
/**
 * @file
 * a_instance.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function a_instance_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_user__user';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'account' => array(
          'weight' => '1',
        ),
        'timezone' => array(
          'weight' => '3',
        ),
        'wysiwyg' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_user__user'] = $strongarm;

  return $export;
}
