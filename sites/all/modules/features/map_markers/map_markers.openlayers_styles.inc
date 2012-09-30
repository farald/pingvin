<?php

/**
 * @file
 * map_markers.openlayers_styles.inc
 */

/**
 * Implements hook_openlayers_styles().
 */
function map_markers_openlayers_styles() {
  $export = array();

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'a_warning_white';
  $openlayers_styles->title = 'a_warning_white';
  $openlayers_styles->description = 'a_warning_white';
  $openlayers_styles->data = array(
    'externalGraphic' => 'sites/all/themes/pingvintheme/mapicons/a_warning_white.png',
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
  $export['a_warning_white'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'a_warning_red';
  $openlayers_styles->title = 'a_warning_red';
  $openlayers_styles->description = 'a_warning_red';
  $openlayers_styles->data = array(
    'externalGraphic' => 'sites/all/themes/pingvintheme/mapicons/a_warning_red.png',
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
  $export['a_warning_red'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'a_malstrom_red';
  $openlayers_styles->title = 'a_malstrom_red';
  $openlayers_styles->description = 'a_malstrom_red';
  $openlayers_styles->data = array(
    'externalGraphic' => 'sites/all/themes/pingvintheme/mapicons/a_malstrom_red.png',
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
  $export['a_malstrom_red'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'a_damm_red';
  $openlayers_styles->title = 'a_damm_red';
  $openlayers_styles->description = 'a_damm_red';
  $openlayers_styles->data = array(
    'externalGraphic' => 'sites/all/themes/pingvintheme/mapicons/a_damm_red.png',
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
  $export['a_damm_red'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'a_surfaceboat_red';
  $openlayers_styles->title = 'a_surfaceboat_red';
  $openlayers_styles->description = 'a_surfaceboat_red';
  $openlayers_styles->data = array(
    'externalGraphic' => 'sites/all/themes/pingvintheme/mapicons/a_surfaceboat_red.png',
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
  $export['a_surfaceboat_red'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'a_fallingrocks_red';
  $openlayers_styles->title = 'a_fallingrocks_red';
  $openlayers_styles->description = 'a_fallingrocks_red';
  $openlayers_styles->data = array(
    'externalGraphic' => 'sites/all/themes/pingvintheme/mapicons/a_fallingrocks_red.png',
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
  $export['a_fallingrocks_red'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'a_current_often_red';
  $openlayers_styles->title = 'a_current_often_red';
  $openlayers_styles->description = 'a_current_often_red';
  $openlayers_styles->data = array(
    'externalGraphic' => 'sites/all/themes/pingvintheme/mapicons/a_current_often_red.png',
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
  $export['a_current_often_red'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'a_seacable_red';
  $openlayers_styles->title = 'a_seacable_red';
  $openlayers_styles->description = 'a_seacable_red';
  $openlayers_styles->data = array(
    'externalGraphic' => 'sites/all/themes/pingvintheme/mapicons/a_seacable_red.png',
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
  $export['a_seacable_red'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'b_accident_white';
  $openlayers_styles->title = 'b_accident_white';
  $openlayers_styles->description = 'b_accident_white';
  $openlayers_styles->data = array(
    'externalGraphic' => 'sites/all/themes/pingvintheme/mapicons/b_accident_white.png',
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
  $export['b_accident_white'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'c_cave_brown';
  $openlayers_styles->title = 'c_cave_brown';
  $openlayers_styles->description = 'c_cave_brown';
  $openlayers_styles->data = array(
    'externalGraphic' => 'sites/all/themes/pingvintheme/mapicons/c_cave_brown.png',
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
  $export['c_cave_brown'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'c_observe_brown';
  $openlayers_styles->title = 'c_observe_brown';
  $openlayers_styles->description = '';
  $openlayers_styles->data = array(
    'externalGraphic' => 'sites/all/themes/pingvintheme/mapicons/c_observe_brown.png',
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
  $export['c_observe_brown'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'c_wall_brown';
  $openlayers_styles->title = 'c_wall_brown';
  $openlayers_styles->description = 'c_wall_brown';
  $openlayers_styles->data = array(
    'externalGraphic' => 'sites/all/themes/pingvintheme/mapicons/c_wall_brown.png',
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
  $export['c_wall_brown'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'd_bridge_grey';
  $openlayers_styles->title = 'd_bridge_grey';
  $openlayers_styles->description = 'd_bridge_grey';
  $openlayers_styles->data = array(
    'externalGraphic' => 'sites/all/themes/pingvintheme/mapicons/d_bridge_grey.png',
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
  $export['d_bridge_grey'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'd_owner_grey';
  $openlayers_styles->title = 'd_owner_grey';
  $openlayers_styles->description = 'd_owner_grey';
  $openlayers_styles->data = array(
    'externalGraphic' => 'sites/all/themes/pingvintheme/mapicons/d_owner_grey.png',
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
  $export['d_owner_grey'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'd_airfill_grey';
  $openlayers_styles->title = 'd_airfill_grey';
  $openlayers_styles->description = 'd_airfill_grey';
  $openlayers_styles->data = array(
    'externalGraphic' => 'sites/all/themes/pingvintheme/mapicons/d_airfill_grey.png',
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
  $export['d_airfill_grey'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'd_hostel_grey';
  $openlayers_styles->title = 'd_hostel_grey';
  $openlayers_styles->description = 'd_hostel_grey';
  $openlayers_styles->data = array(
    'externalGraphic' => 'sites/all/themes/pingvintheme/mapicons/d_hostel_grey.png',
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
  $export['d_hostel_grey'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'd_training_grey';
  $openlayers_styles->title = 'd_training_grey';
  $openlayers_styles->description = 'd_training_grey';
  $openlayers_styles->data = array(
    'externalGraphic' => 'sites/all/themes/pingvintheme/mapicons/d_training_grey.png',
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
  $export['d_training_grey'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'e_target_special_green';
  $openlayers_styles->title = 'e_target_special_green';
  $openlayers_styles->description = 'e_target_special_green';
  $openlayers_styles->data = array(
    'externalGraphic' => 'sites/all/themes/pingvintheme/mapicons/e_target_special_green.png',
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
  $export['e_target_special_green'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'e_target_learning_green';
  $openlayers_styles->title = 'e_target_learning_green';
  $openlayers_styles->description = 'e_target_learning_green';
  $openlayers_styles->data = array(
    'externalGraphic' => 'sites/all/themes/pingvintheme/mapicons/e_target_learning_green.png',
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
  $export['e_target_learning_green'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'e_target_wreck_green';
  $openlayers_styles->title = 'e_target_wreck_green';
  $openlayers_styles->description = 'e_target_wreck_green';
  $openlayers_styles->data = array(
    'externalGraphic' => 'sites/all/themes/pingvintheme/mapicons/e_target_wreck_green.png',
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
  $export['e_target_wreck_green'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'e_target_wreck_blue';
  $openlayers_styles->title = 'e_target_wreck_blue';
  $openlayers_styles->description = 'e_target_wreck_blue';
  $openlayers_styles->data = array(
    'externalGraphic' => 'sites/all/themes/pingvintheme/mapicons/e_target_wreck_blue.png',
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
  $export['e_target_wreck_blue'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'e_target_general_green';
  $openlayers_styles->title = 'e_target_general_green';
  $openlayers_styles->description = 'e_target_general_green';
  $openlayers_styles->data = array(
    'externalGraphic' => 'sites/all/themes/pingvintheme/mapicons/e_target_general_green.png',
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
  $export['e_target_general_green'] = $openlayers_styles;
  
  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'f_club_yellow';
  $openlayers_styles->title = 'f_club_yellow';
  $openlayers_styles->description = 'f_club_yellow';
  $openlayers_styles->data = array(
    'externalGraphic' => 'sites/all/themes/pingvintheme/mapicons/f_club_yellow.png',
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
  $export['f_club_yellow'] = $openlayers_styles;
//
//  $openlayers_styles = new stdClass();
//  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
//  $openlayers_styles->api_version = 1;
//  $openlayers_styles->name = '';
//  $openlayers_styles->title = '';
//  $openlayers_styles->description = '';
//  $openlayers_styles->data = array(
//    'externalGraphic' => 'sites/all/themes/pingvintheme/mapicons/.png',
//    'pointRadius' => 16,
//    'fillColor' => '#EE9900',
//    'strokeColor' => '#EE9900',
//    'strokeWidth' => 1,
//    'fillOpacity' => 1,
//    'strokeOpacity' => 1,
//    'strokeLinecap' => 'round',
//    'strokeDashstyle' => 'solid',
//    'graphicWidth' => 32,
//    'graphicHeight' => 37,
//    'graphicOpacity' => 1,
//    'graphicXOffset' => -16,
//    'graphicYOffset' => -37,
//    'labelAlign' => 'cm',
//  );
//  $export[''] = $openlayers_styles;
//  $openlayers_styles = new stdClass();
//  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
//  $openlayers_styles->api_version = 1;
//  $openlayers_styles->name = '';
//  $openlayers_styles->title = '';
//  $openlayers_styles->description = '';
//  $openlayers_styles->data = array(
//    'externalGraphic' => 'sites/all/themes/pingvintheme/mapicons/.png',
//    'pointRadius' => 16,
//    'fillColor' => '#EE9900',
//    'strokeColor' => '#EE9900',
//    'strokeWidth' => 1,
//    'fillOpacity' => 1,
//    'strokeOpacity' => 1,
//    'strokeLinecap' => 'round',
//    'strokeDashstyle' => 'solid',
//    'graphicWidth' => 32,
//    'graphicHeight' => 37,
//    'graphicOpacity' => 1,
//    'graphicXOffset' => -16,
//    'graphicYOffset' => -37,
//    'labelAlign' => 'cm',
//  );
//  $export[''] = $openlayers_styles;




  return $export;
}
