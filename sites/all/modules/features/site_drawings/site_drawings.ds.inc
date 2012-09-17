<?php
/**
 * @file
 * site_drawings.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function site_drawings_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|drawing|drawing_large_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'drawing';
  $ds_fieldsetting->view_mode = 'drawing_large_teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|drawing|drawing_large_teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function site_drawings_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|drawing|drawing_large_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'drawing';
  $ds_layout->view_mode = 'drawing_large_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_tegning',
        1 => 'title',
        2 => 'field_drawing_comment',
      ),
    ),
    'fields' => array(
      'field_tegning' => 'ds_content',
      'title' => 'ds_content',
      'field_drawing_comment' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|drawing|drawing_large_teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function site_drawings_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'drawing_full_node';
  $ds_view_mode->label = 'Drawing full node';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['drawing_full_node'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'drawing_large_teaser';
  $ds_view_mode->label = 'Drawing large teaser';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['drawing_large_teaser'] = $ds_view_mode;

  return $export;
}
