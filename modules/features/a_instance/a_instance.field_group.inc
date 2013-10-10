<?php
/**
 * @file
 * a_instance.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function a_instance_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_account|user|user|form';
  $field_group->group_name = 'group_user_account';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Account',
    'weight' => '0',
    'children' => array(
      0 => 'account',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-user-account field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_user_account|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_settings|user|user|form';
  $field_group->group_name = 'group_user_settings';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'App settings',
    'weight' => '1',
    'children' => array(
      0 => 'field_user_slug',
      1 => 'field_user_map_url',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-user-settings field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_user_settings|user|user|form'] = $field_group;

  return $export;
}
