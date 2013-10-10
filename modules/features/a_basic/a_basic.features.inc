<?php
/**
 * @file
 * a_basic.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function a_basic_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
