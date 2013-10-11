<?php
/**
 * @file
 * a_instance.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function a_instance_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'choose user revisions'.
  $permissions['choose user revisions'] = array(
    'name' => 'choose user revisions',
    'roles' => array(),
    'module' => 'user_revision',
  );

  // Exported permission: 'delete own user revisions'.
  $permissions['delete own user revisions'] = array(
    'name' => 'delete own user revisions',
    'roles' => array(),
    'module' => 'user_revision',
  );

  // Exported permission: 'delete user revisions'.
  $permissions['delete user revisions'] = array(
    'name' => 'delete user revisions',
    'roles' => array(),
    'module' => 'user_revision',
  );

  // Exported permission: 'revert own user revisions'.
  $permissions['revert own user revisions'] = array(
    'name' => 'revert own user revisions',
    'roles' => array(),
    'module' => 'user_revision',
  );

  // Exported permission: 'revert user revisions'.
  $permissions['revert user revisions'] = array(
    'name' => 'revert user revisions',
    'roles' => array(),
    'module' => 'user_revision',
  );

  // Exported permission: 'view own user revisions'.
  $permissions['view own user revisions'] = array(
    'name' => 'view own user revisions',
    'roles' => array(),
    'module' => 'user_revision',
  );

  // Exported permission: 'view user revisions'.
  $permissions['view user revisions'] = array(
    'name' => 'view user revisions',
    'roles' => array(),
    'module' => 'user_revision',
  );

  return $permissions;
}
