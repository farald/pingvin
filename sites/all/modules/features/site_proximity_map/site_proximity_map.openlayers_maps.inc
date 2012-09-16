<?php
/**
 * @file
 * site_proximity_map.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function site_proximity_map_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'divesite_proximity_map';
  $openlayers_maps->title = 'Divesite proximity map';
  $openlayers_maps->description = 'A proximity map for dives. Holds lots of additional layers.';
  $openlayers_maps->data = array(
    'width' => '100%',
    'height' => '600px',
    'image_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '12.216796874996, 60.930429234958',
        'zoom' => '5',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_attribution' => array(
        'seperator' => '',
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'roundedCorner' => 1,
        'roundedCornerColor' => '#222222',
        'maximizeDefault' => 1,
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'proximity_map_for_sites__layers_openlayers_2' => 'proximity_map_for_sites__layers_openlayers_2',
          'proximity_map_for_sites__layers_openlayers_3' => 'proximity_map_for_sites__layers_openlayers_3',
          'proximity_map_for_sites__layers_openlayers_1' => 'proximity_map_for_sites__layers_openlayers_1',
        ),
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => array(
          'proximity_map_for_sites__layers_openlayers_1' => 'proximity_map_for_sites__layers_openlayers_1',
          'mapquest_osm' => 0,
          'mapquest_openaerial' => 0,
          'proximity_map_for_sites__layers_openlayers_2' => 0,
          'proximity_map_for_sites__layers_openlayers_3' => 0,
        ),
        'point_zoom_level' => '12',
        'zoomtolayer_scale' => '1',
      ),
    ),
    'default_layer' => 'mapquest_osm',
    'layers' => array(
      'mapquest_osm' => 'mapquest_osm',
      'mapquest_openaerial' => 'mapquest_openaerial',
      'proximity_map_for_sites__layers_openlayers_2' => 'proximity_map_for_sites__layers_openlayers_2',
      'proximity_map_for_sites__layers_openlayers_3' => 'proximity_map_for_sites__layers_openlayers_3',
      'proximity_map_for_sites__layers_openlayers_1' => 'proximity_map_for_sites__layers_openlayers_1',
    ),
    'layer_weight' => array(
      'proximity_map_for_sites__layers_openlayers_2' => '0',
      'proximity_map_for_sites__layers_openlayers_3' => '0',
      'proximity_map_for_sites__layers_openlayers_1' => '0',
      'log_personal_list_openlayers_1' => '0',
      'log_personal_list_proximity_sites' => '0',
      'openlayers_geojson_picture_this' => '0',
      'log_personal_list_proximity_dives' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'log_personal_list_proximity_dives' => '0',
      'log_personal_list_proximity_sites' => '0',
      'log_personal_list_openlayers_1' => '0',
      'proximity_map_for_sites__layers_openlayers_2' => 'default_marker_blue',
      'proximity_map_for_sites__layers_openlayers_3' => 'default_marker_green',
      'proximity_map_for_sites__layers_openlayers_1' => 'default_marker_red',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'log_personal_list_proximity_dives' => '0',
      'log_personal_list_proximity_sites' => '0',
      'log_personal_list_openlayers_1' => '0',
      'proximity_map_for_sites__layers_openlayers_2' => '0',
      'proximity_map_for_sites__layers_openlayers_3' => '0',
      'proximity_map_for_sites__layers_openlayers_1' => 'default_marker_red',
    ),
    'layer_activated' => array(
      'proximity_map_for_sites__layers_openlayers_2' => 'proximity_map_for_sites__layers_openlayers_2',
      'proximity_map_for_sites__layers_openlayers_3' => 'proximity_map_for_sites__layers_openlayers_3',
      'proximity_map_for_sites__layers_openlayers_1' => 'proximity_map_for_sites__layers_openlayers_1',
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'log_personal_list_proximity_dives' => 0,
      'log_personal_list_proximity_sites' => 0,
      'log_personal_list_openlayers_1' => 0,
    ),
    'layer_switcher' => array(
      'proximity_map_for_sites__layers_openlayers_2' => 'proximity_map_for_sites__layers_openlayers_2',
      'proximity_map_for_sites__layers_openlayers_3' => 'proximity_map_for_sites__layers_openlayers_3',
      'proximity_map_for_sites__layers_openlayers_1' => 'proximity_map_for_sites__layers_openlayers_1',
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'log_personal_list_proximity_dives' => 0,
      'log_personal_list_proximity_sites' => 0,
      'log_personal_list_openlayers_1' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default_marker_red',
      'select' => 'default_marker_black',
      'temporary' => 'default_marker_green',
    ),
  );
  $export['divesite_proximity_map'] = $openlayers_maps;

  return $export;
}
