<?php
/**
 * @file
 * a_instance.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function a_instance_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_user_slug'
  $field_bases['field_user_slug'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_user_slug',
    'foreign keys' => array(),
    'indexes' => array(
      'machine' => array(
        0 => 'machine',
      ),
    ),
    'locked' => 0,
    'module' => 'safeword',
    'settings' => array(
      'allow_machine_changes' => 1,
      'machine_description' => 'A URL-safe version of the text. It may only contain lowercase letters, numbers and underscores. Leave blank to re-generate.',
      'machine_label' => 'Slug',
      'max_length' => 255,
      'replace_pattern' => '(--|<[^<>]+>|[^a-z0-9-])+',
      'replace_value' => '-',
      'show_complete_path' => 0,
      'unique' => 1,
    ),
    'translatable' => 0,
    'type' => 'safeword_title',
  );

  return $field_bases;
}
