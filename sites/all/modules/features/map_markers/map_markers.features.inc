<?php
/**
 * @file
 * map_markers.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function map_markers_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_styles") {
    return array("version" => "1");
  }
}
