<?php
/**
 * @file
 * node_displays.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function node_displays_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|club|club_large_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'club';
  $ds_fieldsetting->view_mode = 'club_large_teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|club|club_large_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|divesite|divesite_small_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'divesite';
  $ds_fieldsetting->view_mode = 'divesite_small_teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|divesite|divesite_small_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|divesite|map_bubble_view';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'divesite';
  $ds_fieldsetting->view_mode = 'map_bubble_view';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|divesite|map_bubble_view'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|log|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'log';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'log_data_table' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:1:{s:7:"context";a:1:{i:0;s:25:"argument_entity_id:node_1";}}s:4:"type";s:11:"views_panes";s:7:"subtype";s:27:"log_data_table-panel_pane_1";}',
        'load_terms' => 1,
      ),
    ),
    'post_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
  );
  $export['node|log|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|log|log_small_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'log';
  $ds_fieldsetting->view_mode = 'log_small_teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|log|log_small_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|log|map_bubble_view';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'log';
  $ds_fieldsetting->view_mode = 'map_bubble_view';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|log|map_bubble_view'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|user_mini_teaser';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'user_mini_teaser';
  $ds_fieldsetting->settings = array(
    'name' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_thumbnail',
    ),
  );
  $export['user|user|user_mini_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|user_teaser';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'user_teaser';
  $ds_fieldsetting->settings = array(
    'name' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_medium',
    ),
  );
  $export['user|user|user_teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function node_displays_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|club|club_full_node';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'club';
  $ds_layout->view_mode = 'club_full_node';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_club_about',
      ),
      'right' => array(
        0 => 'field_club_image',
        1 => 'field_map_point',
        2 => 'field_club_docs',
        3 => 'field_club_members',
        4 => 'field_club_address',
      ),
    ),
    'fields' => array(
      'field_club_about' => 'left',
      'field_club_image' => 'right',
      'field_map_point' => 'right',
      'field_club_docs' => 'right',
      'field_club_members' => 'right',
      'field_club_address' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|club|club_full_node'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|club|club_large_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'club';
  $ds_layout->view_mode = 'club_large_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_club_image',
        1 => 'title',
        2 => 'field_club_about',
      ),
    ),
    'fields' => array(
      'field_club_image' => 'ds_content',
      'title' => 'ds_content',
      'field_club_about' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|club|club_large_teaser'] = $ds_layout;

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
  $ds_layout->id = 'node|divesite|map_bubble_view';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'divesite';
  $ds_layout->view_mode = 'map_bubble_view';
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
    'limit' => array(
      'field_place_images' => '1',
    ),
    'classes' => array(),
  );
  $export['node|divesite|map_bubble_view'] = $ds_layout;

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
        5 => 'field_log_visibility',
        6 => 'field_log_downtime',
        7 => 'field_log_env_temp_air',
        8 => 'field_log_buddies',
        9 => 'field_log_depth',
        10 => 'field_log_env_temp_water',
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
      'field_log_visibility' => 'right',
      'field_log_downtime' => 'right',
      'field_log_env_temp_air' => 'right',
      'field_log_buddies' => 'right',
      'field_log_depth' => 'right',
      'field_log_env_temp_water' => 'right',
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

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|log|map_bubble_view';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'log';
  $ds_layout->view_mode = 'map_bubble_view';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_log_images',
        1 => 'title',
        2 => 'field_log_comments',
        3 => 'field_glob_date',
      ),
    ),
    'fields' => array(
      'field_log_images' => 'ds_content',
      'title' => 'ds_content',
      'field_log_comments' => 'ds_content',
      'field_glob_date' => 'ds_content',
    ),
    'limit' => array(
      'field_log_images' => '1',
    ),
    'classes' => array(),
  );
  $export['node|log|map_bubble_view'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|user_mini_teaser';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'user_mini_teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'ds_user_picture',
      ),
      'right' => array(
        0 => 'name',
        1 => 'field_user_certificate',
        2 => 'group_audience',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'left',
      'name' => 'right',
      'field_user_certificate' => 'right',
      'group_audience' => 'right',
    ),
    'classes' => array(),
  );
  $export['user|user|user_mini_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|user_teaser';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'user_teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'right' => array(
        0 => 'name',
        1 => 'field_user_aboutme',
        2 => 'group_audience',
      ),
      'left' => array(
        0 => 'ds_user_picture',
      ),
    ),
    'fields' => array(
      'name' => 'right',
      'ds_user_picture' => 'left',
      'field_user_aboutme' => 'right',
      'group_audience' => 'right',
    ),
    'classes' => array(),
  );
  $export['user|user|user_teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function node_displays_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'club_full_node';
  $ds_view_mode->label = 'Club full node';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['club_full_node'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'club_large_teaser';
  $ds_view_mode->label = 'Club large teaser';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['club_large_teaser'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'club_small_teaser';
  $ds_view_mode->label = 'Club small teaser';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['club_small_teaser'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'divesite_full_node';
  $ds_view_mode->label = 'Divesite full node';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['divesite_full_node'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'divesite_large_teaser';
  $ds_view_mode->label = 'Divesite large teaser';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['divesite_large_teaser'] = $ds_view_mode;

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
  $ds_view_mode->view_mode = 'log_full_node';
  $ds_view_mode->label = 'Log full node';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['log_full_node'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'log_large_teaser';
  $ds_view_mode->label = 'Log large teaser';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['log_large_teaser'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'log_small_teaser';
  $ds_view_mode->label = 'Log small teaser';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['log_small_teaser'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'map_bubble_view';
  $ds_view_mode->label = 'Map bubble view';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['map_bubble_view'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'user_mini_teaser';
  $ds_view_mode->label = 'User mini teaser';
  $ds_view_mode->entities = array(
    'user' => 'user',
  );
  $export['user_mini_teaser'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'user_teaser';
  $ds_view_mode->label = 'User teaser';
  $ds_view_mode->entities = array(
    'user' => 'user',
  );
  $export['user_teaser'] = $ds_view_mode;

  return $export;
}
