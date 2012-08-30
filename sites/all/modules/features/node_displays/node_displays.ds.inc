<?php
/**
 * @file
 * node_displays.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function node_displays_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|divesite|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'divesite';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_place_images',
      ),
      'right' => array(
        0 => 'field_place_radius',
        1 => 'field_map_name_browser',
        2 => 'field_place_notes',
      ),
    ),
    'fields' => array(
      'field_place_images' => 'left',
      'field_place_radius' => 'right',
      'field_map_name_browser' => 'right',
      'field_place_notes' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|divesite|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|divesite|divesite_small_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'divesite';
  $ds_layout->view_mode = 'divesite_small_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_place_images',
        1 => 'title',
        2 => 'field_place_notes',
      ),
    ),
    'fields' => array(
      'field_place_images' => 'ds_content',
      'title' => 'ds_content',
      'field_place_notes' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|divesite|divesite_small_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|log|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'log';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_log_images',
      ),
      'right' => array(
        0 => 'group_descr',
        1 => 'group_data',
        2 => 'field_log_comments',
        3 => 'field_log_env_current',
        4 => 'field_glob_date',
        5 => 'field_log_downtime',
        6 => 'field_log_visibility',
        7 => 'field_log_env_temp_air',
        8 => 'field_log_buddies',
        9 => 'field_log_env_temp_water',
        10 => 'field_log_depth',
        11 => 'field_map_name_browser',
        12 => 'field_log_press_total',
        13 => 'field_log_stop',
        14 => 'field_log_seabed',
        15 => 'field_log_startpoint',
        16 => 'field_log_press_gastype',
        17 => 'field_log_press_start',
        18 => 'field_log_press_end',
        19 => 'field_log_press_capacity',
      ),
    ),
    'fields' => array(
      'field_log_images' => 'left',
      'group_descr' => 'right',
      'group_data' => 'right',
      'field_log_comments' => 'right',
      'field_log_env_current' => 'right',
      'field_glob_date' => 'right',
      'field_log_downtime' => 'right',
      'field_log_visibility' => 'right',
      'field_log_env_temp_air' => 'right',
      'field_log_buddies' => 'right',
      'field_log_env_temp_water' => 'right',
      'field_log_depth' => 'right',
      'field_map_name_browser' => 'right',
      'field_log_press_total' => 'right',
      'field_log_stop' => 'right',
      'field_log_seabed' => 'right',
      'field_log_startpoint' => 'right',
      'field_log_press_gastype' => 'right',
      'field_log_press_start' => 'right',
      'field_log_press_end' => 'right',
      'field_log_press_capacity' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|log|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|log|log_small_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'log';
  $ds_layout->view_mode = 'log_small_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_log_images',
        1 => 'title',
        2 => 'field_log_comments',
      ),
    ),
    'fields' => array(
      'field_log_images' => 'ds_content',
      'title' => 'ds_content',
      'field_log_comments' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|log|log_small_teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function node_displays_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'divesite_small_teaser';
  $ds_view_mode->label = 'Divesite small teaser';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['divesite_small_teaser'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'log_small_teaser';
  $ds_view_mode->label = 'Log small teaser';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['log_small_teaser'] = $ds_view_mode;

  return $export;
}
