<?php
/**
 * @file
 * full_feature_map.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function full_feature_map_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'map_of_everything';
  $openlayers_maps->title = 'Fullscreen map with everything';
  $openlayers_maps->description = 'Displays the user\'s other maps.';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '700px',
    'image_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '12.48046875, 64.736638788575',
        'zoom' => '4',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_argparser' => array(
        'anchor' => 1,
      ),
      'openlayers_behavior_fullscreen' => array(
        'activated' => 1,
      ),
      'openlayers_behavior_geolocate' => array(
        'bind' => '1',
        'zoom_level' => '12',
        'watch' => '1',
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
        'zoomWorldIcon' => 1,
        'panIcons' => 1,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'log_personal_list_proximity_sites' => 'log_personal_list_proximity_sites',
          'log_personal_list_openlayers_1' => 'log_personal_list_openlayers_1',
          'log_personal_list_proximity_dives' => 'log_personal_list_proximity_dives',
        ),
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => array(
          'log_personal_list_proximity_sites' => 'log_personal_list_proximity_sites',
          'log_personal_list_openlayers_1' => 'log_personal_list_openlayers_1',
          'mapquest_osm' => 0,
          'mapquest_openaerial' => 0,
          'google_hybrid' => 0,
          'osm_mapnik' => 0,
          'norsk_sj_kart' => 0,
          'log_personal_list_proximity_dives' => 0,
        ),
        'point_zoom_level' => '9',
        'zoomtolayer_scale' => '1',
      ),
    ),
    'default_layer' => 'mapquest_osm',
    'layers' => array(
      'mapquest_osm' => 'mapquest_osm',
      'mapquest_openaerial' => 'mapquest_openaerial',
      'google_hybrid' => 'google_hybrid',
      'osm_mapnik' => 'osm_mapnik',
      'norsk_sj_kart' => 'norsk_sj_kart',
      'log_personal_list_proximity_sites' => 'log_personal_list_proximity_sites',
      'log_personal_list_openlayers_1' => 'log_personal_list_openlayers_1',
      'log_personal_list_proximity_dives' => 'log_personal_list_proximity_dives',
    ),
    'layer_weight' => array(
      'log_personal_list_proximity_sites' => '-6',
      'log_personal_list_openlayers_1' => '0',
      'log_personal_list_proximity_dives' => '0',
      'proximity_map_for_sites__layers_openlayers_3' => '0',
      'proximity_map_for_sites__layers_openlayers_2' => '0',
      'openlayers_geojson_picture_this' => '0',
      'proximity_map_for_sites__layers_openlayers_1' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'proximity_map_for_sites__layers_openlayers_1' => '0',
      'proximity_map_for_sites__layers_openlayers_2' => '0',
      'proximity_map_for_sites__layers_openlayers_3' => '0',
      'log_personal_list_proximity_sites' => 'e_target_special_green',
      'log_personal_list_openlayers_1' => 'default_marker_blue',
      'log_personal_list_proximity_dives' => 'default_marker_red',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'proximity_map_for_sites__layers_openlayers_1' => '0',
      'proximity_map_for_sites__layers_openlayers_2' => '0',
      'proximity_map_for_sites__layers_openlayers_3' => '0',
      'log_personal_list_proximity_sites' => 'e_target_special_green',
      'log_personal_list_openlayers_1' => 'default_marker_blue',
      'log_personal_list_proximity_dives' => 'default_marker_red',
    ),
    'layer_activated' => array(
      'log_personal_list_proximity_sites' => 'log_personal_list_proximity_sites',
      'log_personal_list_openlayers_1' => 'log_personal_list_openlayers_1',
      'log_personal_list_proximity_dives' => 0,
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'proximity_map_for_sites__layers_openlayers_1' => 0,
      'proximity_map_for_sites__layers_openlayers_2' => 0,
      'proximity_map_for_sites__layers_openlayers_3' => 0,
    ),
    'layer_switcher' => array(
      'log_personal_list_proximity_sites' => 'log_personal_list_proximity_sites',
      'log_personal_list_openlayers_1' => 'log_personal_list_openlayers_1',
      'log_personal_list_proximity_dives' => 'log_personal_list_proximity_dives',
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'proximity_map_for_sites__layers_openlayers_1' => 0,
      'proximity_map_for_sites__layers_openlayers_2' => 0,
      'proximity_map_for_sites__layers_openlayers_3' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default_marker_red',
      'select' => 'default_marker_red',
      'temporary' => 'default_marker_red',
    ),
  );
  $export['map_of_everything'] = $openlayers_maps;

  return $export;
}
