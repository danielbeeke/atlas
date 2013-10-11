<?php
/**
 * @file
 * a_location.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function a_location_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create a_location content'.
  $permissions['create a_location content'] = array(
    'name' => 'create a_location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any a_location content'.
  $permissions['delete any a_location content'] = array(
    'name' => 'delete any a_location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own a_location content'.
  $permissions['delete own a_location content'] = array(
    'name' => 'delete own a_location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any a_location content'.
  $permissions['edit any a_location content'] = array(
    'name' => 'edit any a_location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own a_location content'.
  $permissions['edit own a_location content'] = array(
    'name' => 'edit own a_location content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
