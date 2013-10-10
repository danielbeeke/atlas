<?php
/**
 * @file
 * a_instance.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function a_instance_user_default_roles() {
  $roles = array();

  // Exported role: instance.
  $roles['instance'] = array(
    'name' => 'instance',
    'weight' => 2,
  );

  return $roles;
}
