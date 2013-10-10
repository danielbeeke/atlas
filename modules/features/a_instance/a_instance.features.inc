<?php
/**
 * @file
 * a_instance.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function a_instance_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
