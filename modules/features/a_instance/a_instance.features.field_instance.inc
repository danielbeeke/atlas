<?php
/**
 * @file
 * a_instance.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function a_instance_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_user_slug'
  $field_instances['user-user-field_user_slug'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'safeword',
        'settings' => array(),
        'type' => 'safeword_machine_basic',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_slug',
    'label' => 'Slug',
    'required' => 1,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'safeword',
      'settings' => array(),
      'type' => 'safeword_machine_name_only',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Slug');

  return $field_instances;
}
