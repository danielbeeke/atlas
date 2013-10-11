<?php
/**
 * @file
 * a_api.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function a_api_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access atlast api'.
  $permissions['access atlast api'] = array(
    'name' => 'access atlast api',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'a_api',
  );

  return $permissions;
}
