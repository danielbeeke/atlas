<?php
/**
 * @file
 * a_instance.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function a_instance_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|form';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_user_account',
        1 => 'account',
        2 => 'group_user_settings',
        3 => 'wysiwyg',
        5 => 'field_user_slug',
        6 => 'field_user_map_url',
      ),
      'hidden' => array(
        4 => 'timezone',
      ),
    ),
    'fields' => array(
      'group_user_account' => 'ds_content',
      'account' => 'ds_content',
      'group_user_settings' => 'ds_content',
      'wysiwyg' => 'ds_content',
      'timezone' => 'hidden',
      'field_user_slug' => 'ds_content',
      'field_user_map_url' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['user|user|form'] = $ds_layout;

  return $export;
}
