<?php
/**
 * @file
 * a_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function a_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create a_page content'.
  $permissions['create a_page content'] = array(
    'name' => 'create a_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any a_page content'.
  $permissions['delete any a_page content'] = array(
    'name' => 'delete any a_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own a_page content'.
  $permissions['delete own a_page content'] = array(
    'name' => 'delete own a_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any a_page content'.
  $permissions['edit any a_page content'] = array(
    'name' => 'edit any a_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own a_page content'.
  $permissions['edit own a_page content'] = array(
    'name' => 'edit own a_page content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
