<?php
/**
 * @file
 * full_feature_map.openlayers_styles.inc
 */

/**
 * Implements hook_openlayers_styles().
 */
function full_feature_map_openlayers_styles() {
  $export = array();

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'clone_of_default_marker_red';
  $openlayers_styles->title = 'Log - Add log marker';
  $openlayers_styles->description = 'Red marker provided by the OpenLayers module.';
  $openlayers_styles->data = array(
    'externalGraphic' => 'sites/all/themes/pingvintheme/mapicons/scubadiving.png',
    'pointRadius' => 16,
    'fillColor' => '#EE9900',
    'strokeColor' => '#EE9900',
    'strokeWidth' => 1,
    'fillOpacity' => 1,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicWidth' => 32,
    'graphicHeight' => 37,
    'graphicOpacity' => 1,
    'graphicXOffset' => -16,
    'graphicYOffset' => -37,
    'labelAlign' => 'cm',
  );
  $export['clone_of_default_marker_red'] = $openlayers_styles;

  return $export;
}
