<?php
/**
 * @file
 * node_displays.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function node_displays_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_data|node|log|default';
  $field_group->group_name = 'group_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'log';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Data',
    'weight' => '2',
    'children' => array(
      0 => 'field_log_depth',
      1 => 'field_glob_date',
      2 => 'field_log_downtime',
      3 => 'field_log_buddies',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Data',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_data|node|log|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_descr|node|log|default';
  $field_group->group_name = 'group_descr';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'log';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '1',
    'children' => array(
      0 => 'field_log_comments',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Description',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_descr|node|log|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mapdata|node|log|form';
  $field_group->group_name = 'group_mapdata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'log';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kartdata',
    'weight' => '1',
    'children' => array(
      0 => 'field_map_point',
      1 => 'field_map_country',
      2 => 'field_map_region',
      3 => 'field_map_marker',
      4 => 'field_map_country_1',
      5 => 'field_map_region_1',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mapdata|node|log|form'] = $field_group;

  return $export;
}
