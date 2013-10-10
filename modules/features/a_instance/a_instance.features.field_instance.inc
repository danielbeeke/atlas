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

  // Exported field_instance: 'user-user-field_user_map_url'
  $field_instances['user-user-field_user_map_url'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'title' => '',
        'url' => 'http://{s}.tile.openstreetmap.org/{z}/{x}/{y}.png',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_map_url',
    'label' => 'Map URL',
    'required' => 1,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => 1,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 7,
    ),
  );

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
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Map URL');
  t('Slug');

  return $field_instances;
}
