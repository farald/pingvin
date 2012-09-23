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
  $field_group->identifier = 'group_air|node|log|form';
  $field_group->group_name = 'group_air';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'log';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Luft',
    'weight' => '4',
    'children' => array(
      0 => 'field_log_press_start',
      1 => 'field_log_press_end',
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
  $export['group_air|node|log|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic|node|divesite|form';
  $field_group->group_name = 'group_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'divesite';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Generelt',
    'weight' => '4',
    'children' => array(
      0 => 'field_place_notes',
      1 => 'field_place_radius',
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
  $export['group_basic|node|divesite|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_buddies|node|log|form';
  $field_group->group_name = 'group_buddies';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'log';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Buddyer',
    'weight' => '6',
    'children' => array(
      0 => 'field_log_buddies',
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
  $export['group_buddies|node|log|form'] = $field_group;

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
      3 => 'field_map_name_browser',
      4 => 'field_log_buddies',
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
  $field_group->identifier = 'group_environment|node|log|form';
  $field_group->group_name = 'group_environment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'log';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Miljø',
    'weight' => '3',
    'children' => array(
      0 => 'field_log_env_temp_air',
      1 => 'field_log_env_temp_water',
      2 => 'field_log_seabed',
      3 => 'field_log_startpoint',
      4 => 'field_log_visibility',
      5 => 'field_log_env_current',
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
  $export['group_environment|node|log|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gear|node|log|form';
  $field_group->group_name = 'group_gear';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'log';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Utstyr',
    'weight' => '5',
    'children' => array(
      0 => 'field_log_press_total',
      1 => 'field_log_press_capacity',
      2 => 'field_log_press_gastype',
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
  $export['group_gear|node|log|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_images|node|log|form';
  $field_group->group_name = 'group_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'log';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bilder',
    'weight' => '7',
    'children' => array(
      0 => 'field_log_images',
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
  $export['group_images|node|log|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mandatory|node|log|form';
  $field_group->group_name = 'group_mandatory';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'log';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Obligatorisk',
    'weight' => '2',
    'children' => array(
      0 => 'field_log_depth',
      1 => 'field_log_comments',
      2 => 'field_log_tag',
      3 => 'field_glob_date',
      4 => 'field_log_downtime',
      5 => 'field_log_stop',
      6 => 'field_log_tag_locked',
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
  $export['group_mandatory|node|log|form'] = $field_group;

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
      3 => 'field_map_name_browser',
      4 => 'field_map_marker',
      5 => 'field_map_country_1',
      6 => 'field_map_region_1',
      7 => 'field_map_inherit_data',
      8 => 'field_map_geofield',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab1|node|divesite|form';
  $field_group->group_name = 'group_tab1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'divesite';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Grunnleggende',
    'weight' => '2',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Grunnleggende',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'Det viktigste.',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_tab1|node|divesite|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab_hidden_stuff|node|divesite|form';
  $field_group->group_name = 'group_tab_hidden_stuff';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'divesite';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Stuff som skal settes automatisk',
    'weight' => '7',
    'children' => array(
      0 => 'field_map_name_browser',
      1 => 'field_map_country',
      2 => 'field_map_region',
      3 => 'field_map_region_1',
      4 => 'field_map_country_1',
      5 => 'field_map_marker',
      6 => 'path',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_tab_hidden_stuff|node|divesite|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab_images|node|divesite|form';
  $field_group->group_name = 'group_tab_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'divesite';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bilder',
    'weight' => '6',
    'children' => array(
      0 => 'field_place_images',
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
  $export['group_tab_images|node|divesite|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab_links|node|divesite|form';
  $field_group->group_name = 'group_tab_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'divesite';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Lenker',
    'weight' => '5',
    'children' => array(
      0 => 'field_place_links',
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
  $export['group_tab_links|node|divesite|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab_map|node|divesite|form';
  $field_group->group_name = 'group_tab_map';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'divesite';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kart',
    'weight' => '3',
    'children' => array(
      0 => 'field_map_point',
      1 => 'field_map_geofield',
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
  $export['group_tab_map|node|divesite|form'] = $field_group;

  return $export;
}
