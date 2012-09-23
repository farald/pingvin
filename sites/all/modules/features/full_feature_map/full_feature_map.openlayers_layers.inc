<?php
/**
 * @file
 * full_feature_map.openlayers_layers.inc
 */

/**
 * Implements hook_openlayers_layers().
 */
function full_feature_map_openlayers_layers() {
  $export = array();

  $openlayers_layers = new stdClass();
  $openlayers_layers->disabled = FALSE; /* Edit this to true to make a default openlayers_layers disabled initially */
  $openlayers_layers->api_version = 1;
  $openlayers_layers->name = 'norsk_sj_kart';
  $openlayers_layers->title = 'Norsk sjøkart';
  $openlayers_layers->description = 'Sjøkart fra kartverket';
  $openlayers_layers->data = array(
    'url' => 'http://opencache.statkart.no/gatekeeper/gk/gk.open_gmaps?layers=sjo_hovedkart2&zoom=${z}&x=${x}&y=${y}',
    'layer_type' => 'openlayers_layer_type_xyz',
    'serverResolutions' => array(),
    'wrapDateLine' => 0,
    'projection' => array(
      0 => '900913',
    ),
  );
  $export['norsk_sj_kart'] = $openlayers_layers;

  return $export;
}
