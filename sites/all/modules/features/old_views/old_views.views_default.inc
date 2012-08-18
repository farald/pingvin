<?php
/**
 * @file
 * old_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function old_views_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'cron_club_members';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'cron_club_members';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 1;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Field: Groups audience (group_audience:gid) */
  $handler->display->display_options['arguments']['group_audience_gid']['id'] = 'group_audience_gid';
  $handler->display->display_options['arguments']['group_audience_gid']['table'] = 'field_data_group_audience';
  $handler->display->display_options['arguments']['group_audience_gid']['field'] = 'group_audience_gid';
  $handler->display->display_options['arguments']['group_audience_gid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['group_audience_gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['group_audience_gid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['group_audience_gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['group_audience_gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['group_audience_gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['group_audience_gid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['group_audience_gid']['not'] = 0;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $translatables['cron_club_members'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Uid'),
    t('All'),
  );
  $export['cron_club_members'] = $view;

  $view = new view;
  $view->name = 'cron_trips';
  $view->description = 'Active trips, within range of 3 months.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'cron_trips';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Turperiode */
  $handler->display->display_options['fields']['field_trip_date_range']['id'] = 'field_trip_date_range';
  $handler->display->display_options['fields']['field_trip_date_range']['table'] = 'field_data_field_trip_date_range';
  $handler->display->display_options['fields']['field_trip_date_range']['field'] = 'field_trip_date_range';
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_trip_date_range']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_trip_date_range']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_trip_date_range']['field_api_classes'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Turperiode (field_trip_date_range) */
  $handler->display->display_options['filters']['field_trip_date_range_value']['id'] = 'field_trip_date_range_value';
  $handler->display->display_options['filters']['field_trip_date_range_value']['table'] = 'field_data_field_trip_date_range';
  $handler->display->display_options['filters']['field_trip_date_range_value']['field'] = 'field_trip_date_range_value';
  $handler->display->display_options['filters']['field_trip_date_range_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_trip_date_range_value']['value'] = array(
    'min' => NULL,
    'max' => NULL,
    'value' => NULL,
    'type' => 'date',
  );
  $handler->display->display_options['filters']['field_trip_date_range_value']['group'] = '0';
  $handler->display->display_options['filters']['field_trip_date_range_value']['expose']['required'] = 0;

  /* Display: T30 */
  $handler = $view->new_display('attachment', 'T30', 't30');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Turperiode (field_trip_date_range) */
  $handler->display->display_options['filters']['field_trip_date_range_value']['id'] = 'field_trip_date_range_value';
  $handler->display->display_options['filters']['field_trip_date_range_value']['table'] = 'field_data_field_trip_date_range';
  $handler->display->display_options['filters']['field_trip_date_range_value']['field'] = 'field_trip_date_range_value';
  $handler->display->display_options['filters']['field_trip_date_range_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_trip_date_range_value']['value'] = array(
    'min' => NULL,
    'max' => NULL,
    'value' => NULL,
    'type' => 'date',
  );
  $handler->display->display_options['filters']['field_trip_date_range_value']['group'] = 1;
  $handler->display->display_options['filters']['field_trip_date_range_value']['expose']['required'] = 0;

  /* Display: T07 */
  $handler = $view->new_display('attachment', 'T07', 't07');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Turperiode (field_trip_date_range) */
  $handler->display->display_options['filters']['field_trip_date_range_value']['id'] = 'field_trip_date_range_value';
  $handler->display->display_options['filters']['field_trip_date_range_value']['table'] = 'field_data_field_trip_date_range';
  $handler->display->display_options['filters']['field_trip_date_range_value']['field'] = 'field_trip_date_range_value';
  $handler->display->display_options['filters']['field_trip_date_range_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_trip_date_range_value']['value'] = array(
    'min' => NULL,
    'max' => NULL,
    'value' => NULL,
    'type' => 'date',
  );
  $handler->display->display_options['filters']['field_trip_date_range_value']['group'] = 1;
  $handler->display->display_options['filters']['field_trip_date_range_value']['expose']['required'] = 0;

  /* Display: T04 */
  $handler = $view->new_display('attachment', 'T04', 't04');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Turperiode (field_trip_date_range) */
  $handler->display->display_options['filters']['field_trip_date_range_value']['id'] = 'field_trip_date_range_value';
  $handler->display->display_options['filters']['field_trip_date_range_value']['table'] = 'field_data_field_trip_date_range';
  $handler->display->display_options['filters']['field_trip_date_range_value']['field'] = 'field_trip_date_range_value';
  $handler->display->display_options['filters']['field_trip_date_range_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_trip_date_range_value']['value'] = array(
    'min' => NULL,
    'max' => NULL,
    'value' => NULL,
    'type' => 'date',
  );
  $handler->display->display_options['filters']['field_trip_date_range_value']['group'] = 1;
  $handler->display->display_options['filters']['field_trip_date_range_value']['expose']['required'] = 0;

  /* Display: T02 */
  $handler = $view->new_display('attachment', 'T02', 't02');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Turperiode (field_trip_date_range) */
  $handler->display->display_options['filters']['field_trip_date_range_value']['id'] = 'field_trip_date_range_value';
  $handler->display->display_options['filters']['field_trip_date_range_value']['table'] = 'field_data_field_trip_date_range';
  $handler->display->display_options['filters']['field_trip_date_range_value']['field'] = 'field_trip_date_range_value';
  $handler->display->display_options['filters']['field_trip_date_range_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_trip_date_range_value']['value'] = array(
    'min' => NULL,
    'max' => NULL,
    'value' => NULL,
    'type' => 'date',
  );
  $handler->display->display_options['filters']['field_trip_date_range_value']['group'] = 1;
  $handler->display->display_options['filters']['field_trip_date_range_value']['expose']['required'] = 0;

  /* Display: T01 */
  $handler = $view->new_display('attachment', 'T01', 't01');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Turperiode (field_trip_date_range) */
  $handler->display->display_options['filters']['field_trip_date_range_value']['id'] = 'field_trip_date_range_value';
  $handler->display->display_options['filters']['field_trip_date_range_value']['table'] = 'field_data_field_trip_date_range';
  $handler->display->display_options['filters']['field_trip_date_range_value']['field'] = 'field_trip_date_range_value';
  $handler->display->display_options['filters']['field_trip_date_range_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_trip_date_range_value']['value'] = array(
    'min' => NULL,
    'max' => NULL,
    'value' => NULL,
    'type' => 'date',
  );
  $handler->display->display_options['filters']['field_trip_date_range_value']['group'] = 1;
  $handler->display->display_options['filters']['field_trip_date_range_value']['expose']['required'] = 0;
  $translatables['cron_trips'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Turperiode'),
    t('T30'),
    t('T07'),
    t('T04'),
    t('T02'),
    t('T01'),
  );
  $export['cron_trips'] = $view;

  $view = new view;
  $view->name = 'dashboard_my_dives';
  $view->description = 'Mine siste dykk';
  $view->tag = 'dashboard';
  $view->base_table = 'node';
  $view->human_name = 'dashboard_my_dives';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['css_class'] = 'dashboard-my-dives';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  /* Field: Date of dive */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_glob_date';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_glob_date';
  $handler->display->display_options['fields']['entity_id']['ui_name'] = 'Date of dive';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['entity_id']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id']['empty_zero'] = 0;
  $handler->display->display_options['fields']['entity_id']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Dybde */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_log_depth';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_log_depth';
  $handler->display->display_options['fields']['entity_id_1']['label'] = '';
  $handler->display->display_options['fields']['entity_id_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['alter']['text'] = 'D: [entity_id_1]';
  $handler->display->display_options['fields']['entity_id_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['element_type'] = '0';
  $handler->display->display_options['fields']['entity_id_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['entity_id_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['entity_id_1']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['hide_empty'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Dykketid */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_log_downtime';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_log_downtime';
  $handler->display->display_options['fields']['entity_id_2']['label'] = '';
  $handler->display->display_options['fields']['entity_id_2']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['entity_id_2']['alter']['text'] = 'T: [entity_id_2]';
  $handler->display->display_options['fields']['entity_id_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Tidspunkt (field_glob_date) */
  $handler->display->display_options['sorts']['field_glob_date_value']['id'] = 'field_glob_date_value';
  $handler->display->display_options['sorts']['field_glob_date_value']['table'] = 'field_data_field_glob_date';
  $handler->display->display_options['sorts']['field_glob_date_value']['field'] = 'field_glob_date_value';
  $handler->display->display_options['sorts']['field_glob_date_value']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mine siste loggføringer';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Broken/missing handler */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['label'] = '';
  $handler->display->display_options['footer']['php']['empty'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Broken/missing handler */
  $handler->display->display_options['empty']['php']['id'] = 'php';
  $handler->display->display_options['empty']['php']['table'] = 'views';
  $handler->display->display_options['empty']['php']['field'] = 'php';
  $handler->display->display_options['empty']['php']['label'] = '';
  $handler->display->display_options['empty']['php']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Tidspunkt */
  $handler->display->display_options['fields']['field_glob_date']['id'] = 'field_glob_date';
  $handler->display->display_options['fields']['field_glob_date']['table'] = 'field_data_field_glob_date';
  $handler->display->display_options['fields']['field_glob_date']['field'] = 'field_glob_date';
  $handler->display->display_options['fields']['field_glob_date']['label'] = '';
  $handler->display->display_options['fields']['field_glob_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_glob_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_glob_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_glob_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_glob_date']['field_api_classes'] = 0;
  /* Field: Depth */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_log_depth';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_log_depth';
  $handler->display->display_options['fields']['entity_id_1']['ui_name'] = 'Depth';
  $handler->display->display_options['fields']['entity_id_1']['label'] = 'D:';
  $handler->display->display_options['fields']['entity_id_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['alter']['text'] = 'D: [entity_id_1] meter';
  $handler->display->display_options['fields']['entity_id_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['element_type'] = '0';
  $handler->display->display_options['fields']['entity_id_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['entity_id_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['entity_id_1']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['hide_empty'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['entity_id_1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: Downtime */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_log_downtime';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_log_downtime';
  $handler->display->display_options['fields']['entity_id_2']['ui_name'] = 'Downtime';
  $handler->display->display_options['fields']['entity_id_2']['label'] = 'T:';
  $handler->display->display_options['fields']['entity_id_2']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['entity_id_2']['alter']['text'] = 'T: [entity_id_2] minutes<br>';
  $handler->display->display_options['fields']['entity_id_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id_2']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['entity_id_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['element_type'] = '0';
  $handler->display->display_options['fields']['entity_id_2']['element_label_type'] = '0';
  $handler->display->display_options['fields']['entity_id_2']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['entity_id_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id_2']['hide_empty'] = 1;
  $handler->display->display_options['fields']['entity_id_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['entity_id_2']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'log' => 'log',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['filters']['uid_current']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Liste: Mine siste dykk';
  $translatables['dashboard_my_dives'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('D: [entity_id_1]'),
    t('T: [entity_id_2]'),
    t('All'),
    t('Block'),
    t('Mine siste loggføringer'),
    t('D:'),
    t('D: [entity_id_1] meter'),
    t('T:'),
    t('T: [entity_id_2] minutes<br>'),
    t('Liste: Mine siste dykk'),
  );
  $export['dashboard_my_dives'] = $view;

  $view = new view;
  $view->name = 'dashboard_my_regions';
  $view->description = 'Displays a list of geographical regions whici the user has content in';
  $view->tag = 'dashboard';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Dashboard: Mine regioner';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['css_class'] = 'dashboard-regions';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Broken/missing handler */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'Ingen data registrert av deg ennå.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Taxonomy term: Content with term */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = 1;
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'nid';
  $handler->display->display_options['relationships']['uid']['required'] = 1;
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'nid';
  $handler->display->display_options['relationships']['parent']['required'] = 1;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'nid';
  $handler->display->display_options['fields']['name']['label'] = 'Term';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = 'Term';
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name_1']['link_to_taxonomy'] = 0;
  /* Sort criterion: Taxonomy term: Term ID */
  $handler->display->display_options['sorts']['tid']['id'] = 'tid';
  $handler->display->display_options['sorts']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['tid']['field'] = 'tid';
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'nid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['filters']['uid_current']['group'] = '0';
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['relationship'] = 'nid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['filters']['vid']['group'] = '0';
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid_1']['id'] = 'vid_1';
  $handler->display->display_options['filters']['vid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid_1']['field'] = 'vid';
  $handler->display->display_options['filters']['vid_1']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['filters']['vid_1']['group'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mine områder';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = 'name_1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
    'name_1' => 'name_1',
  );
  $handler->display->display_options['row_options']['separator'] = ' - ';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Broken/missing handler */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['label'] = '';
  $handler->display->display_options['footer']['php']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'nid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name_1']['link_to_taxonomy'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Term ID */
  $handler->display->display_options['sorts']['tid']['id'] = 'tid';
  $handler->display->display_options['sorts']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['tid']['field'] = 'tid';
  $handler->display->display_options['block_description'] = 'Liste: Mine regioner';
  $translatables['dashboard_my_regions'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('php'),
    t('Ingen data registrert av deg ennå.'),
    t('node'),
    t('nodes'),
    t('Parent'),
    t('Term'),
    t('Block'),
    t('Mine områder'),
    t('Liste: Mine regioner'),
  );
  $export['dashboard_my_regions'] = $view;

  $view = new view;
  $view->name = 'dashboard_node_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'dashboard_node_block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mine siste bilder';
  $handler->display->display_options['css_class'] = 'dashboard-dive';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '24';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '1';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  /* Footer: Broken/missing handler */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['label'] = '';
  $handler->display->display_options['footer']['php']['empty'] = FALSE;
  /* Field: Content: Bilder */
  $handler->display->display_options['fields']['field_glob_images']['id'] = 'field_glob_images';
  $handler->display->display_options['fields']['field_glob_images']['table'] = 'field_data_field_glob_images';
  $handler->display->display_options['fields']['field_glob_images']['field'] = 'field_glob_images';
  $handler->display->display_options['fields']['field_glob_images']['label'] = '';
  $handler->display->display_options['fields']['field_glob_images']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_glob_images']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_glob_images']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_glob_images']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_glob_images']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_glob_images']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_glob_images']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_glob_images']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_glob_images']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_glob_images']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_glob_images']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_glob_images']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_glob_images']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_glob_images']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_glob_images']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_glob_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_glob_images']['settings'] = array(
    'image_style' => 'thumbnail_small',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_glob_images']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_glob_images']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_glob_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_glob_images']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_glob_images']['field_api_classes'] = 0;
  /* Field: Content: Bilder */
  $handler->display->display_options['fields']['field_log_images']['id'] = 'field_log_images';
  $handler->display->display_options['fields']['field_log_images']['table'] = 'field_data_field_log_images';
  $handler->display->display_options['fields']['field_log_images']['field'] = 'field_log_images';
  $handler->display->display_options['fields']['field_log_images']['label'] = '';
  $handler->display->display_options['fields']['field_log_images']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_log_images']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_images']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_images']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_images']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_images']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_images']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_images']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_images']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_images']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_images']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_images']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_log_images']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_images']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_log_images']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_log_images']['settings'] = array(
    'image_style' => 'thumbnail_small',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_log_images']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_log_images']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_log_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_log_images']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_log_images']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Bilder (field_glob_images:fid) */
  $handler->display->display_options['filters']['field_glob_images_fid']['id'] = 'field_glob_images_fid';
  $handler->display->display_options['filters']['field_glob_images_fid']['table'] = 'field_data_field_glob_images';
  $handler->display->display_options['filters']['field_glob_images_fid']['field'] = 'field_glob_images_fid';
  $handler->display->display_options['filters']['field_glob_images_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_glob_images_fid']['group'] = 2;
  /* Filter criterion: Content: Bilder (field_log_images:fid) */
  $handler->display->display_options['filters']['field_log_images_fid']['id'] = 'field_log_images_fid';
  $handler->display->display_options['filters']['field_log_images_fid']['table'] = 'field_data_field_log_images';
  $handler->display->display_options['filters']['field_log_images_fid']['field'] = 'field_log_images_fid';
  $handler->display->display_options['filters']['field_log_images_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_log_images_fid']['group'] = 2;

  /* Display: User's last images */
  $handler = $view->new_display('block', 'User\'s last images', 'user_recent_images_block');
  $translatables['dashboard_node_block'] = array(
    t('Master'),
    t('Mine siste bilder'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('All'),
    t('User\'s last images'),
  );
  $export['dashboard_node_block'] = $view;

  $view = new view;
  $view->name = 'dashboard_upcoming_trips_list';
  $view->description = 'A view of upcoming trips';
  $view->tag = 'dashboard';
  $view->base_table = 'node';
  $view->human_name = 'dashboard_upcoming_trips_list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Tidspunkt */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_glob_date';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_glob_date';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id']['empty_zero'] = 0;
  $handler->display->display_options['fields']['entity_id']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Newest first */
  $handler->display->display_options['sorts']['field_glob_date_value']['id'] = 'field_glob_date_value';
  $handler->display->display_options['sorts']['field_glob_date_value']['table'] = 'field_data_field_glob_date';
  $handler->display->display_options['sorts']['field_glob_date_value']['field'] = 'field_glob_date_value';
  $handler->display->display_options['sorts']['field_glob_date_value']['ui_name'] = 'Newest first';
  $handler->display->display_options['sorts']['field_glob_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'divetrip' => 'divetrip',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  /* Filter criterion: Content: Tidspunkt (field_glob_date) */
  $handler->display->display_options['filters']['field_glob_date_value']['id'] = 'field_glob_date_value';
  $handler->display->display_options['filters']['field_glob_date_value']['table'] = 'field_data_field_glob_date';
  $handler->display->display_options['filters']['field_glob_date_value']['field'] = 'field_glob_date_value';
  $handler->display->display_options['filters']['field_glob_date_value']['value'] = array(
    'min' => '',
    'max' => '',
    'value' => '',
  );
  $handler->display->display_options['filters']['field_glob_date_value']['group'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Kommende dykketurer';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Ingen turer */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['ui_name'] = 'Ingen turer';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'Ingen turer er planlagt. <a href="/node/add/divetrip">Planlegg en tur</a>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: When */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_glob_date';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_glob_date';
  $handler->display->display_options['fields']['entity_id']['ui_name'] = 'When';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id']['empty_zero'] = 0;
  $handler->display->display_options['fields']['entity_id']['type'] = 'format_interval';
  $handler->display->display_options['fields']['entity_id']['settings'] = array(
    'interval' => '2',
  );
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'divetrip' => 'divetrip',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Tidspunkt (field_glob_date) */
  $handler->display->display_options['filters']['field_glob_date_value']['id'] = 'field_glob_date_value';
  $handler->display->display_options['filters']['field_glob_date_value']['table'] = 'field_data_field_glob_date';
  $handler->display->display_options['filters']['field_glob_date_value']['field'] = 'field_glob_date_value';
  $handler->display->display_options['filters']['field_glob_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_glob_date_value']['value'] = array(
    'min' => NULL,
    'max' => NULL,
    'value' => NULL,
    'type' => 'date',
  );
  $handler->display->display_options['filters']['field_glob_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_glob_date_value']['expose']['required'] = 0;
  $handler->display->display_options['block_description'] = 'Liste: Kommende turer';
  $translatables['dashboard_upcoming_trips_list'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Block'),
    t('Kommende dykketurer'),
    t('Ingen turer er planlagt. <a href="/node/add/divetrip">Planlegg en tur</a>'),
    t('Liste: Kommende turer'),
  );
  $export['dashboard_upcoming_trips_list'] = $view;

  $view = new view;
  $view->name = 'gallery_node_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'gallery_node_slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'nivo-full';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  /* Field: Content: Bilder */
  $handler->display->display_options['fields']['field_glob_images']['id'] = 'field_glob_images';
  $handler->display->display_options['fields']['field_glob_images']['table'] = 'field_data_field_glob_images';
  $handler->display->display_options['fields']['field_glob_images']['field'] = 'field_glob_images';
  $handler->display->display_options['fields']['field_glob_images']['label'] = '';
  $handler->display->display_options['fields']['field_glob_images']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_glob_images']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_glob_images']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_glob_images']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_glob_images']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_glob_images']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_glob_images']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_glob_images']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_glob_images']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_glob_images']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_glob_images']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_glob_images']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_glob_images']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_glob_images']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_glob_images']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_glob_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_glob_images']['settings'] = array(
    'image_style' => 'full-width',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_glob_images']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_glob_images']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_glob_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_glob_images']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_glob_images']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gallery' => 'gallery',
  );

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $translatables['gallery_node_slideshow'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Entity content'),
  );
  $export['gallery_node_slideshow'] = $view;

  $view = new view;
  $view->name = 'log_details';
  $view->description = 'A list containing the detail on a log page.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'log_details';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['field_language'] = 'und';
  $handler->display->display_options['field_language_add_to_query'] = 0;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = 0;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'countries' => 'countries',
    'seabed' => 0,
    'enrance' => 0,
    'ideelt_for' => 0,
    'airtype' => 0,
    'life' => 0,
    'tags' => 0,
  );
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid_1']['id'] = 'term_node_tid_1';
  $handler->display->display_options['relationships']['term_node_tid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid_1']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid_1']['label'] = 'term_tags';
  $handler->display->display_options['relationships']['term_node_tid_1']['required'] = 0;
  $handler->display->display_options['relationships']['term_node_tid_1']['vocabularies'] = array(
    'tags' => 'tags',
    'seabed' => 0,
    'enrance' => 0,
    'ideelt_for' => 0,
    'countries' => 0,
    'airtype' => 0,
    'life' => 0,
  );
  /* Field: Content: Kommentarer */
  $handler->display->display_options['fields']['field_log_comments']['id'] = 'field_log_comments';
  $handler->display->display_options['fields']['field_log_comments']['table'] = 'field_data_field_log_comments';
  $handler->display->display_options['fields']['field_log_comments']['field'] = 'field_log_comments';
  $handler->display->display_options['fields']['field_log_comments']['label'] = '';
  $handler->display->display_options['fields']['field_log_comments']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_log_comments']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_comments']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_comments']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_comments']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_comments']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_comments']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_comments']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_comments']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_comments']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_comments']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_comments']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_log_comments']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_comments']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_log_comments']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_comments']['field_api_classes'] = 0;
  /* Field: Content: Tidspunkt */
  $handler->display->display_options['fields']['field_glob_date']['id'] = 'field_glob_date';
  $handler->display->display_options['fields']['field_glob_date']['table'] = 'field_data_field_glob_date';
  $handler->display->display_options['fields']['field_glob_date']['field'] = 'field_glob_date';
  $handler->display->display_options['fields']['field_glob_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['alter']['text'] = 'Tidspunkt: [field_glob_date]';
  $handler->display->display_options['fields']['field_glob_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_glob_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_glob_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_glob_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_glob_date']['field_api_classes'] = 0;
  /* Field: Content: Dykketid */
  $handler->display->display_options['fields']['field_log_downtime']['id'] = 'field_log_downtime';
  $handler->display->display_options['fields']['field_log_downtime']['table'] = 'field_data_field_log_downtime';
  $handler->display->display_options['fields']['field_log_downtime']['field'] = 'field_log_downtime';
  $handler->display->display_options['fields']['field_log_downtime']['label'] = '';
  $handler->display->display_options['fields']['field_log_downtime']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_log_downtime']['alter']['text'] = 'Dykketid: [field_log_downtime]';
  $handler->display->display_options['fields']['field_log_downtime']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_downtime']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_downtime']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_downtime']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_downtime']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_downtime']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_downtime']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_downtime']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_downtime']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_downtime']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_downtime']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_log_downtime']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_downtime']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_log_downtime']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_downtime']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_log_downtime']['field_api_classes'] = 0;
  /* Field: Content: Sikkerhetsstopp */
  $handler->display->display_options['fields']['field_log_stop']['id'] = 'field_log_stop';
  $handler->display->display_options['fields']['field_log_stop']['table'] = 'field_data_field_log_stop';
  $handler->display->display_options['fields']['field_log_stop']['field'] = 'field_log_stop';
  $handler->display->display_options['fields']['field_log_stop']['label'] = 'Stopp';
  $handler->display->display_options['fields']['field_log_stop']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_log_stop']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_stop']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_stop']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_stop']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_stop']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_stop']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_stop']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_stop']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_stop']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_stop']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_stop']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_log_stop']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_stop']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_log_stop']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_stop']['field_api_classes'] = 0;
  /* Field: Content: Dybde */
  $handler->display->display_options['fields']['field_log_depth']['id'] = 'field_log_depth';
  $handler->display->display_options['fields']['field_log_depth']['table'] = 'field_data_field_log_depth';
  $handler->display->display_options['fields']['field_log_depth']['field'] = 'field_log_depth';
  $handler->display->display_options['fields']['field_log_depth']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['alter']['text'] = 'Dybde: [field_log_downtime] ';
  $handler->display->display_options['fields']['field_log_depth']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_depth']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_depth']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_depth']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_log_depth']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_log_depth']['field_api_classes'] = 0;
  /* Field: Content: Startpunkt */
  $handler->display->display_options['fields']['field_log_startpoint']['id'] = 'field_log_startpoint';
  $handler->display->display_options['fields']['field_log_startpoint']['table'] = 'field_data_field_log_startpoint';
  $handler->display->display_options['fields']['field_log_startpoint']['field'] = 'field_log_startpoint';
  $handler->display->display_options['fields']['field_log_startpoint']['label'] = '';
  $handler->display->display_options['fields']['field_log_startpoint']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_log_startpoint']['alter']['text'] = 'Startpunkt: [field_log_startpoint]';
  $handler->display->display_options['fields']['field_log_startpoint']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_startpoint']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_startpoint']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_startpoint']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_startpoint']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_startpoint']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_startpoint']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_startpoint']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_startpoint']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_startpoint']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_startpoint']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_log_startpoint']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_startpoint']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_log_startpoint']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_startpoint']['field_api_classes'] = 0;
  /* Field: Content: Buddyer */
  $handler->display->display_options['fields']['field_log_buddies']['id'] = 'field_log_buddies';
  $handler->display->display_options['fields']['field_log_buddies']['table'] = 'field_data_field_log_buddies';
  $handler->display->display_options['fields']['field_log_buddies']['field'] = 'field_log_buddies';
  $handler->display->display_options['fields']['field_log_buddies']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_log_buddies']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_buddies']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_buddies']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_buddies']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_buddies']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_buddies']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_buddies']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_buddies']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_buddies']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_buddies']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_buddies']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_log_buddies']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_buddies']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_log_buddies']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_buddies']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_log_buddies']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_log_buddies']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_log_buddies']['field_api_classes'] = 0;
  /* Field: Content: Bunntype */
  $handler->display->display_options['fields']['field_log_seabed']['id'] = 'field_log_seabed';
  $handler->display->display_options['fields']['field_log_seabed']['table'] = 'field_data_field_log_seabed';
  $handler->display->display_options['fields']['field_log_seabed']['field'] = 'field_log_seabed';
  $handler->display->display_options['fields']['field_log_seabed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_log_seabed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_seabed']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_seabed']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_seabed']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_seabed']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_seabed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_seabed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_seabed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_seabed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_seabed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_seabed']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_log_seabed']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_seabed']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_log_seabed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_seabed']['field_api_classes'] = 0;
  /* Field: Content: Dine tagger */
  $handler->display->display_options['fields']['field_log_tag']['id'] = 'field_log_tag';
  $handler->display->display_options['fields']['field_log_tag']['table'] = 'field_data_field_log_tag';
  $handler->display->display_options['fields']['field_log_tag']['field'] = 'field_log_tag';
  $handler->display->display_options['fields']['field_log_tag']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_log_tag']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_tag']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_tag']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_tag']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_tag']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_tag']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_tag']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_tag']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_tag']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_tag']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_tag']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_log_tag']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_tag']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_log_tag']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_tag']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_log_tag']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_log_tag']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_log_tag']['field_api_classes'] = 0;
  /* Field: Content: Faste tagger */
  $handler->display->display_options['fields']['field_log_tag_locked']['id'] = 'field_log_tag_locked';
  $handler->display->display_options['fields']['field_log_tag_locked']['table'] = 'field_data_field_log_tag_locked';
  $handler->display->display_options['fields']['field_log_tag_locked']['field'] = 'field_log_tag_locked';
  $handler->display->display_options['fields']['field_log_tag_locked']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_log_tag_locked']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_tag_locked']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_tag_locked']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_tag_locked']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_tag_locked']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_tag_locked']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_tag_locked']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_tag_locked']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_tag_locked']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_tag_locked']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_tag_locked']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_log_tag_locked']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_tag_locked']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_log_tag_locked']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_tag_locked']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_log_tag_locked']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_log_tag_locked']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_log_tag_locked']['field_api_classes'] = 0;
  /* Field: Content: Sikt */
  $handler->display->display_options['fields']['field_log_visibility']['id'] = 'field_log_visibility';
  $handler->display->display_options['fields']['field_log_visibility']['table'] = 'field_data_field_log_visibility';
  $handler->display->display_options['fields']['field_log_visibility']['field'] = 'field_log_visibility';
  $handler->display->display_options['fields']['field_log_visibility']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_log_visibility']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_visibility']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_visibility']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_visibility']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_visibility']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_visibility']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_visibility']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_visibility']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_visibility']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_visibility']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_visibility']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_log_visibility']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_visibility']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_log_visibility']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_visibility']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_log_visibility']['field_api_classes'] = 0;
  /* Field: Content: Temp luft */
  $handler->display->display_options['fields']['field_log_env_temp_air']['id'] = 'field_log_env_temp_air';
  $handler->display->display_options['fields']['field_log_env_temp_air']['table'] = 'field_data_field_log_env_temp_air';
  $handler->display->display_options['fields']['field_log_env_temp_air']['field'] = 'field_log_env_temp_air';
  $handler->display->display_options['fields']['field_log_env_temp_air']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_air']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_air']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_air']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_air']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_air']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_air']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_env_temp_air']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_env_temp_air']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_air']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_air']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_air']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_log_env_temp_air']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_env_temp_air']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_log_env_temp_air']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_air']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_log_env_temp_air']['field_api_classes'] = 0;
  /* Field: Content: Temp vann */
  $handler->display->display_options['fields']['field_log_env_temp_water']['id'] = 'field_log_env_temp_water';
  $handler->display->display_options['fields']['field_log_env_temp_water']['table'] = 'field_data_field_log_env_temp_water';
  $handler->display->display_options['fields']['field_log_env_temp_water']['field'] = 'field_log_env_temp_water';
  $handler->display->display_options['fields']['field_log_env_temp_water']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_water']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_water']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_water']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_water']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_water']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_water']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_env_temp_water']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_env_temp_water']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_water']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_water']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_water']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_log_env_temp_water']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_env_temp_water']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_log_env_temp_water']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_water']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_log_env_temp_water']['field_api_classes'] = 0;
  /* Field: Content: Strøm */
  $handler->display->display_options['fields']['field_log_env_current']['id'] = 'field_log_env_current';
  $handler->display->display_options['fields']['field_log_env_current']['table'] = 'field_data_field_log_env_current';
  $handler->display->display_options['fields']['field_log_env_current']['field'] = 'field_log_env_current';
  $handler->display->display_options['fields']['field_log_env_current']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_log_env_current']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_env_current']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_env_current']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_env_current']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_env_current']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_env_current']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_env_current']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_env_current']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_env_current']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_env_current']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_env_current']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_log_env_current']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_env_current']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_log_env_current']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_env_current']['field_api_classes'] = 0;
  /* Field: Content: Flasketrykk start */
  $handler->display->display_options['fields']['field_log_press_start']['id'] = 'field_log_press_start';
  $handler->display->display_options['fields']['field_log_press_start']['table'] = 'field_data_field_log_press_start';
  $handler->display->display_options['fields']['field_log_press_start']['field'] = 'field_log_press_start';
  $handler->display->display_options['fields']['field_log_press_start']['label'] = 'BAR inn';
  $handler->display->display_options['fields']['field_log_press_start']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_log_press_start']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_press_start']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_press_start']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_press_start']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_press_start']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_press_start']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_press_start']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_press_start']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_press_start']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_press_start']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_press_start']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_log_press_start']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_press_start']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_log_press_start']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_press_start']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_log_press_start']['field_api_classes'] = 0;
  /* Field: Content: Flasketrykk slutt */
  $handler->display->display_options['fields']['field_log_press_end']['id'] = 'field_log_press_end';
  $handler->display->display_options['fields']['field_log_press_end']['table'] = 'field_data_field_log_press_end';
  $handler->display->display_options['fields']['field_log_press_end']['field'] = 'field_log_press_end';
  $handler->display->display_options['fields']['field_log_press_end']['label'] = 'BAR ut';
  $handler->display->display_options['fields']['field_log_press_end']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_log_press_end']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_press_end']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_press_end']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_press_end']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_press_end']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_press_end']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_press_end']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_press_end']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_press_end']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_press_end']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_press_end']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_log_press_end']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_press_end']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_log_press_end']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_press_end']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_log_press_end']['field_api_classes'] = 0;
  /* Field: Content: Luftforbruk */
  $handler->display->display_options['fields']['field_log_press_total']['id'] = 'field_log_press_total';
  $handler->display->display_options['fields']['field_log_press_total']['table'] = 'field_data_field_log_press_total';
  $handler->display->display_options['fields']['field_log_press_total']['field'] = 'field_log_press_total';
  $handler->display->display_options['fields']['field_log_press_total']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_log_press_total']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_press_total']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_press_total']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_press_total']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_press_total']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_press_total']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_press_total']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_press_total']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_press_total']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_press_total']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_press_total']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_log_press_total']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_press_total']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_log_press_total']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_press_total']['type'] = 'computed_field_default';
  $handler->display->display_options['fields']['field_log_press_total']['field_api_classes'] = 0;
  /* Field: Content: Flaskevolum */
  $handler->display->display_options['fields']['field_log_press_capacity']['id'] = 'field_log_press_capacity';
  $handler->display->display_options['fields']['field_log_press_capacity']['table'] = 'field_data_field_log_press_capacity';
  $handler->display->display_options['fields']['field_log_press_capacity']['field'] = 'field_log_press_capacity';
  $handler->display->display_options['fields']['field_log_press_capacity']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_log_press_capacity']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_press_capacity']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_press_capacity']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_press_capacity']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_press_capacity']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_press_capacity']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_press_capacity']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_press_capacity']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_press_capacity']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_press_capacity']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_press_capacity']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_log_press_capacity']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_press_capacity']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_log_press_capacity']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_press_capacity']['field_api_classes'] = 0;
  /* Field: Content: Luft-type */
  $handler->display->display_options['fields']['field_log_press_gastype']['id'] = 'field_log_press_gastype';
  $handler->display->display_options['fields']['field_log_press_gastype']['table'] = 'field_data_field_log_press_gastype';
  $handler->display->display_options['fields']['field_log_press_gastype']['field'] = 'field_log_press_gastype';
  $handler->display->display_options['fields']['field_log_press_gastype']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_log_press_gastype']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_press_gastype']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_press_gastype']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_press_gastype']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_press_gastype']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_press_gastype']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_press_gastype']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_press_gastype']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_press_gastype']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_press_gastype']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_press_gastype']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_log_press_gastype']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_press_gastype']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_log_press_gastype']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_press_gastype']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'log' => 'log',
  );

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_list_of_logdata');

  /* Display: Image block */
  $handler = $view->new_display('entity_view', 'Image block', 'entity_view_1');
  $translatables['log_details'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('term'),
    t('term_tags'),
    t('Tidspunkt'),
    t('Tidspunkt: [field_glob_date]'),
    t('Dykketid: [field_log_downtime]'),
    t('Stopp'),
    t('Dybde'),
    t('Dybde: [field_log_downtime] '),
    t('Startpunkt: [field_log_startpoint]'),
    t('Buddyer'),
    t('Bunntype'),
    t('Dine tagger'),
    t('Faste tagger'),
    t('Sikt'),
    t('Temp luft'),
    t('Temp vann'),
    t('Strøm'),
    t('BAR inn'),
    t('BAR ut'),
    t('Luftforbruk'),
    t('Flaskevolum'),
    t('Luft-type'),
    t('All'),
    t('Entity content'),
    t('Image block'),
  );
  $export['log_details'] = $view;

  $view = new view;
  $view->name = 'logstats_helper';
  $view->description = 'Hepler view for the logstats module, displays basic location logdata.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'logstats_helper';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Location: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'location';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['label'] = '';
  $handler->display->display_options['fields']['latitude']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['external'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['latitude']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['latitude']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['html'] = 0;
  $handler->display->display_options['fields']['latitude']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['latitude']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['latitude']['hide_empty'] = 0;
  $handler->display->display_options['fields']['latitude']['empty_zero'] = 0;
  $handler->display->display_options['fields']['latitude']['style'] = 'dd';
  /* Field: Location: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'location';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Location: Distance / Proximity */
  $handler->display->display_options['arguments']['distance']['id'] = 'distance';
  $handler->display->display_options['arguments']['distance']['table'] = 'location';
  $handler->display->display_options['arguments']['distance']['field'] = 'distance';
  $handler->display->display_options['arguments']['distance']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['distance']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['distance']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['distance']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['distance']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['distance']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['distance']['search_units'] = 'm';
  $handler->display->display_options['arguments']['distance']['search_method'] = 'dist';
  $handler->display->display_options['arguments']['distance']['type'] = 'latlon';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'log' => 'log',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $translatables['logstats_helper'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Longitude'),
    t('All'),
  );
  $export['logstats_helper'] = $view;

  $view = new view;
  $view->name = 'node_location';
  $view->description = 'Show a node location if available.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'node_location';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['required'] = 1;
  /* Field: Location: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'location';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['label'] = '';
  $handler->display->display_options['fields']['latitude']['exclude'] = TRUE;
  $handler->display->display_options['fields']['latitude']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['external'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['latitude']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['latitude']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['html'] = 0;
  $handler->display->display_options['fields']['latitude']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['latitude']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['latitude']['hide_empty'] = 0;
  $handler->display->display_options['fields']['latitude']['empty_zero'] = 0;
  /* Field: Location: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'location';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['label'] = '';
  $handler->display->display_options['fields']['longitude']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['longitude']['alter']['text'] = 'DMS: [latitude] / [longitude]';
  $handler->display->display_options['fields']['longitude']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['external'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['longitude']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['longitude']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['html'] = 0;
  $handler->display->display_options['fields']['longitude']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['longitude']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['longitude']['hide_empty'] = 0;
  $handler->display->display_options['fields']['longitude']['empty_zero'] = 0;
  /* Field: Location: Latitude */
  $handler->display->display_options['fields']['latitude_1']['id'] = 'latitude_1';
  $handler->display->display_options['fields']['latitude_1']['table'] = 'location';
  $handler->display->display_options['fields']['latitude_1']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude_1']['label'] = 'DEG Latitude';
  $handler->display->display_options['fields']['latitude_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['latitude_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['latitude_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['latitude_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['latitude_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['latitude_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['latitude_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['latitude_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['latitude_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['latitude_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['latitude_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['latitude_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['latitude_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['latitude_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['latitude_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['latitude_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['latitude_1']['style'] = 'dd';
  /* Field: Location: Longitude */
  $handler->display->display_options['fields']['longitude_1']['id'] = 'longitude_1';
  $handler->display->display_options['fields']['longitude_1']['table'] = 'location';
  $handler->display->display_options['fields']['longitude_1']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude_1']['label'] = '';
  $handler->display->display_options['fields']['longitude_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['longitude_1']['alter']['text'] = 'DEC [latitude_1] / [longitude_1]';
  $handler->display->display_options['fields']['longitude_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['longitude_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['longitude_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['longitude_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['longitude_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['longitude_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['longitude_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['longitude_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['longitude_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['longitude_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['longitude_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['longitude_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['longitude_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['longitude_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['longitude_1']['style'] = 'dd';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = 'Region';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name']['label'] = 'Land';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[tid] in [name]';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '[tid] in [name]';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 0;
  /* Field: Content: Statistisk radius */
  $handler->display->display_options['fields']['field_place_radius']['id'] = 'field_place_radius';
  $handler->display->display_options['fields']['field_place_radius']['table'] = 'field_data_field_place_radius';
  $handler->display->display_options['fields']['field_place_radius']['field'] = 'field_place_radius';
  $handler->display->display_options['fields']['field_place_radius']['label'] = '';
  $handler->display->display_options['fields']['field_place_radius']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_place_radius']['alter']['text'] = 'Radius for statistikk: [field_place_radius]';
  $handler->display->display_options['fields']['field_place_radius']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_place_radius']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_place_radius']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_place_radius']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_place_radius']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_place_radius']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_place_radius']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_place_radius']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_place_radius']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_place_radius']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_place_radius']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_place_radius']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_place_radius']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_place_radius']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_place_radius']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_place_radius']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Table with DEG and DMS */
  $handler = $view->new_display('entity_view', 'Table with DEG and DMS', 'entity_view_1');

  /* Display: Single region in country sentence */
  $handler = $view->new_display('entity_view', 'Single region in country sentence', 'entity_view_2');
  $translatables['node_location'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Parent'),
    t('DMS: [latitude] / [longitude]'),
    t('DEG Latitude'),
    t('DEC [latitude_1] / [longitude_1]'),
    t('Region'),
    t('Land'),
    t('[tid] in [name]'),
    t('Radius for statistikk: [field_place_radius]'),
    t('All'),
    t('Table with DEG and DMS'),
    t('Single region in country sentence'),
  );
  $export['node_location'] = $view;

  $view = new view;
  $view->name = 'node_reference_listings';
  $view->description = 'Views required by various node reference fields troughout the site';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'node_reference_listings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = 0;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'countries' => 'countries',
    'seabed' => 0,
    'enrance' => 0,
    'ideelt_for' => 0,
    'airtype' => 0,
    'life' => 0,
    'tags' => 0,
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'divesite' => 'divesite',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';

  /* Display: References */
  $handler = $view->new_display('references', 'References', 'references_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'references_style';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'tid' => 'tid',
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['separator'] = ' --> ';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['node_reference_listings'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('term'),
    t('References'),
  );
  $export['node_reference_listings'] = $view;

  $view = new view;
  $view->name = 'og_nodes_regular_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'og_nodes_regular_content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'user';
  $handler->display->display_options['relationships']['uid']['required'] = 1;
  /* Field: Content: Bilder */
  $handler->display->display_options['fields']['field_log_images']['id'] = 'field_log_images';
  $handler->display->display_options['fields']['field_log_images']['table'] = 'field_data_field_log_images';
  $handler->display->display_options['fields']['field_log_images']['field'] = 'field_log_images';
  $handler->display->display_options['fields']['field_log_images']['label'] = '';
  $handler->display->display_options['fields']['field_log_images']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_log_images']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_images']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_images']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_images']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_images']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_images']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_images']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_images']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_images']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_images']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_images']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_log_images']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_images']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_log_images']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_log_images']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_log_images']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_log_images']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_log_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_log_images']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_log_images']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Field: Groups audience (group_audience:gid) */
  $handler->display->display_options['arguments']['group_audience_gid']['id'] = 'group_audience_gid';
  $handler->display->display_options['arguments']['group_audience_gid']['table'] = 'field_data_group_audience';
  $handler->display->display_options['arguments']['group_audience_gid']['field'] = 'group_audience_gid';
  $handler->display->display_options['arguments']['group_audience_gid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['group_audience_gid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['group_audience_gid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['group_audience_gid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['group_audience_gid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['group_audience_gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['group_audience_gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['group_audience_gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['group_audience_gid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['group_audience_gid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'log' => 'log',
  );
  /* Filter criterion: Content: Bilder (field_log_images:fid) */
  $handler->display->display_options['filters']['field_log_images_fid']['id'] = 'field_log_images_fid';
  $handler->display->display_options['filters']['field_log_images_fid']['table'] = 'field_data_field_log_images';
  $handler->display->display_options['filters']['field_log_images_fid']['field'] = 'field_log_images_fid';
  $handler->display->display_options['filters']['field_log_images_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_log_images_fid']['group'] = '0';

  /* Display: Log images view for club pages */
  $handler = $view->new_display('panel_pane', 'Log images view for club pages', 'panel_pane_1');
  $translatables['og_nodes_regular_content'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('user'),
    t('All'),
    t('Log images view for club pages'),
  );
  $export['og_nodes_regular_content'] = $view;

  $view = new view;
  $view->name = 'place_upcoming_trips';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'place_upcoming_trips';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_glob_date' => 'field_glob_date',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_glob_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Turer hit';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Field: Groups audience */
  $handler->display->display_options['fields']['group_audience']['id'] = 'group_audience';
  $handler->display->display_options['fields']['group_audience']['table'] = 'field_data_group_audience';
  $handler->display->display_options['fields']['group_audience']['field'] = 'group_audience';
  $handler->display->display_options['fields']['group_audience']['label'] = 'hvem';
  $handler->display->display_options['fields']['group_audience']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['external'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['group_audience']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['group_audience']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['html'] = 0;
  $handler->display->display_options['fields']['group_audience']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['group_audience']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['group_audience']['hide_empty'] = 0;
  $handler->display->display_options['fields']['group_audience']['empty_zero'] = 0;
  $handler->display->display_options['fields']['group_audience']['click_sort_column'] = 'gid';
  $handler->display->display_options['fields']['group_audience']['group_column'] = 'gid';
  $handler->display->display_options['fields']['group_audience']['group_rows'] = 1;
  $handler->display->display_options['fields']['group_audience']['delta_offset'] = '0';
  $handler->display->display_options['fields']['group_audience']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['group_audience']['field_api_classes'] = 0;
  /* Field: Content: Tidspunkt */
  $handler->display->display_options['fields']['field_glob_date_1']['id'] = 'field_glob_date_1';
  $handler->display->display_options['fields']['field_glob_date_1']['table'] = 'field_data_field_glob_date';
  $handler->display->display_options['fields']['field_glob_date_1']['field'] = 'field_glob_date';
  $handler->display->display_options['fields']['field_glob_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_glob_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_glob_date_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_glob_date_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_glob_date_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_glob_date_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_glob_date_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_glob_date_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_glob_date_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_glob_date_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_glob_date_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_glob_date_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_glob_date_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_glob_date_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_glob_date_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_glob_date_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_glob_date_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_glob_date_1']['type'] = 'date_month';
  $handler->display->display_options['fields']['field_glob_date_1']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_glob_date_1']['field_api_classes'] = 0;
  /* Field: Content: Turperiode */
  $handler->display->display_options['fields']['field_trip_date_range']['id'] = 'field_trip_date_range';
  $handler->display->display_options['fields']['field_trip_date_range']['table'] = 'field_data_field_trip_date_range';
  $handler->display->display_options['fields']['field_trip_date_range']['field'] = 'field_trip_date_range';
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_trip_date_range']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_trip_date_range']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_trip_date_range']['field_api_classes'] = 0;
  /* Sort criterion: Content: Turperiode (field_trip_date_range) */
  $handler->display->display_options['sorts']['field_trip_date_range_value']['id'] = 'field_trip_date_range_value';
  $handler->display->display_options['sorts']['field_trip_date_range_value']['table'] = 'field_data_field_trip_date_range';
  $handler->display->display_options['sorts']['field_trip_date_range_value']['field'] = 'field_trip_date_range_value';
  $handler->display->display_options['sorts']['field_trip_date_range_value']['order'] = 'DESC';
  /* Contextual filter: Content: Aktuelle dykkesteder (field_trip_target) */
  $handler->display->display_options['arguments']['field_trip_target_nid']['id'] = 'field_trip_target_nid';
  $handler->display->display_options['arguments']['field_trip_target_nid']['table'] = 'field_data_field_trip_target';
  $handler->display->display_options['arguments']['field_trip_target_nid']['field'] = 'field_trip_target_nid';
  $handler->display->display_options['arguments']['field_trip_target_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_trip_target_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_trip_target_nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_trip_target_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_trip_target_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_trip_target_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_trip_target_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_trip_target_nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $translatables['place_upcoming_trips'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Turer hit'),
    t('hvem'),
    t('Turperiode'),
    t('All'),
    t('Entity content'),
  );
  $export['place_upcoming_trips'] = $view;

  $view = new view;
  $view->name = 'proximity_functions';
  $view->description = 'A collection of views for proximity calculations';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'proximity_functions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Location: Distance / Proximity */
  $handler->display->display_options['fields']['distance']['id'] = 'distance';
  $handler->display->display_options['fields']['distance']['table'] = 'location';
  $handler->display->display_options['fields']['distance']['field'] = 'distance';
  $handler->display->display_options['fields']['distance']['label'] = '';
  $handler->display->display_options['fields']['distance']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['external'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['distance']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['distance']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['html'] = 0;
  $handler->display->display_options['fields']['distance']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['distance']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['distance']['hide_empty'] = 0;
  $handler->display->display_options['fields']['distance']['empty_zero'] = 0;
  $handler->display->display_options['fields']['distance']['origin'] = 'tied';
  /* Field: Location: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'location';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['external'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['latitude']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['latitude']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['html'] = 0;
  $handler->display->display_options['fields']['latitude']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['latitude']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['latitude']['hide_empty'] = 0;
  $handler->display->display_options['fields']['latitude']['empty_zero'] = 0;
  $handler->display->display_options['fields']['latitude']['style'] = 'dd';
  /* Field: Location: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'location';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['external'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['longitude']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['longitude']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['html'] = 0;
  $handler->display->display_options['fields']['longitude']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['longitude']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['longitude']['hide_empty'] = 0;
  $handler->display->display_options['fields']['longitude']['empty_zero'] = 0;
  $handler->display->display_options['fields']['longitude']['style'] = 'dd';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['type']['link_to_node'] = 0;
  $handler->display->display_options['fields']['type']['machine_name'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'PHP';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  /* Sort criterion: Location: Distance / Proximity */
  $handler->display->display_options['sorts']['distance']['id'] = 'distance';
  $handler->display->display_options['sorts']['distance']['table'] = 'location';
  $handler->display->display_options['sorts']['distance']['field'] = 'distance';
  $handler->display->display_options['sorts']['distance']['origin'] = 'php';
  $handler->display->display_options['sorts']['distance']['uid_arg'] = 'uid';
  /* Sort criterion: Content: Tidspunkt (field_glob_date) */
  $handler->display->display_options['sorts']['field_glob_date_value']['id'] = 'field_glob_date_value';
  $handler->display->display_options['sorts']['field_glob_date_value']['table'] = 'field_data_field_glob_date';
  $handler->display->display_options['sorts']['field_glob_date_value']['field'] = 'field_glob_date_value';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Location: Distance / Proximity */
  $handler->display->display_options['filters']['distance']['id'] = 'distance';
  $handler->display->display_options['filters']['distance']['table'] = 'location';
  $handler->display->display_options['filters']['distance']['field'] = 'distance';
  $handler->display->display_options['filters']['distance']['operator'] = 'dist';
  $handler->display->display_options['filters']['distance']['value'] = array(
    'latitude' => '',
    'longitude' => '',
    'postal_code' => '',
    'country' => '',
    'php_code' => 'if (is_numeric (arg(1))){
    $node = node_load(arg(1));
    $lat = $node->field_map_point[und][0][locpick][user_latitude];
    $lon = $node->field_map_point[und][0][locpick][user_longitude];
    return array(\'latitude\' => (float)$lat, \'longitude\' => (float)$lon);
}
',
    'nid_arg' => '',
    'nid_loc_field' => 'node',
    'uid_arg' => 'uid',
    'search_distance' => '60',
    'search_units' => 'km',
  );
  $handler->display->display_options['filters']['distance']['group'] = '0';
  $handler->display->display_options['filters']['distance']['origin'] = 'php';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['group'] = '0';
  $handler->display->display_options['filters']['type_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type_1']['expose']['operator_id'] = 'type_1_op';
  $handler->display->display_options['filters']['type_1']['expose']['label'] = 'Content: Type';
  $handler->display->display_options['filters']['type_1']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['type_1']['expose']['operator'] = 'type_1_op';
  $handler->display->display_options['filters']['type_1']['expose']['identifier'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['type_1']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['type_1']['expose']['multiple'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');

  /* Display: Map over area (Places) */
  $handler = $view->new_display('block', 'Map over area (Places)', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Location: Distance / Proximity */
  $handler->display->display_options['fields']['distance']['id'] = 'distance';
  $handler->display->display_options['fields']['distance']['table'] = 'location';
  $handler->display->display_options['fields']['distance']['field'] = 'distance';
  $handler->display->display_options['fields']['distance']['label'] = '';
  $handler->display->display_options['fields']['distance']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['distance']['alter']['text'] = '[distance] fra stedet.';
  $handler->display->display_options['fields']['distance']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['external'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['distance']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['distance']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['html'] = 0;
  $handler->display->display_options['fields']['distance']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['distance']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['distance']['hide_empty'] = 0;
  $handler->display->display_options['fields']['distance']['empty_zero'] = 0;
  $handler->display->display_options['fields']['distance']['origin'] = 'tied';
  /* Field: Location: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'location';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['exclude'] = TRUE;
  $handler->display->display_options['fields']['latitude']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['external'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['latitude']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['latitude']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['html'] = 0;
  $handler->display->display_options['fields']['latitude']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['latitude']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['latitude']['hide_empty'] = 0;
  $handler->display->display_options['fields']['latitude']['empty_zero'] = 0;
  $handler->display->display_options['fields']['latitude']['style'] = 'dd';
  /* Field: Location: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'location';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['exclude'] = TRUE;
  $handler->display->display_options['fields']['longitude']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['external'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['longitude']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['longitude']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['html'] = 0;
  $handler->display->display_options['fields']['longitude']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['longitude']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['longitude']['hide_empty'] = 0;
  $handler->display->display_options['fields']['longitude']['empty_zero'] = 0;
  $handler->display->display_options['fields']['longitude']['style'] = 'dd';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['type']['alter']['text'] = 'Type [type]';
  $handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['type']['link_to_node'] = 0;
  $handler->display->display_options['fields']['type']['machine_name'] = 0;
  /* Field: Content: Dybde */
  $handler->display->display_options['fields']['field_log_depth']['id'] = 'field_log_depth';
  $handler->display->display_options['fields']['field_log_depth']['table'] = 'field_data_field_log_depth';
  $handler->display->display_options['fields']['field_log_depth']['field'] = 'field_log_depth';
  $handler->display->display_options['fields']['field_log_depth']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_depth']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_depth']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_depth']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_log_depth']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_log_depth']['field_api_classes'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Map marker */
  $handler->display->display_options['fields']['field_map_marker']['id'] = 'field_map_marker';
  $handler->display->display_options['fields']['field_map_marker']['table'] = 'field_data_field_map_marker';
  $handler->display->display_options['fields']['field_map_marker']['field'] = 'field_map_marker';
  $handler->display->display_options['fields']['field_map_marker']['label'] = '';
  $handler->display->display_options['fields']['field_map_marker']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_map_marker']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_map_marker']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_map_marker']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_map_marker']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_map_marker']['field_api_classes'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Location: Distance / Proximity */
  $handler->display->display_options['filters']['distance']['id'] = 'distance';
  $handler->display->display_options['filters']['distance']['table'] = 'location';
  $handler->display->display_options['filters']['distance']['field'] = 'distance';
  $handler->display->display_options['filters']['distance']['operator'] = 'dist';
  $handler->display->display_options['filters']['distance']['value'] = array(
    'latitude' => '',
    'longitude' => '',
    'postal_code' => '',
    'country' => '',
    'php_code' => 'if (is_numeric (arg(1))){
    $node = node_load(arg(1));
    $lat = $node->field_map_point[und][0][locpick][user_latitude];
    $lon = $node->field_map_point[und][0][locpick][user_longitude];
    return array(\'latitude\' => (float)$lat, \'longitude\' => (float)$lon);
}
',
    'nid_arg' => '',
    'nid_loc_field' => 'node',
    'uid_arg' => 'uid',
    'search_distance' => '60',
    'search_units' => 'km',
  );
  $handler->display->display_options['filters']['distance']['group'] = 1;
  $handler->display->display_options['filters']['distance']['origin'] = 'php';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'club' => 'club',
    'divesite' => 'divesite',
    'log' => 'log',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  $handler->display->display_options['filters']['type_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type_1']['expose']['operator_id'] = 'type_1_op';
  $handler->display->display_options['filters']['type_1']['expose']['label'] = 'Content: Type';
  $handler->display->display_options['filters']['type_1']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['type_1']['expose']['operator'] = 'type_1_op';
  $handler->display->display_options['filters']['type_1']['expose']['identifier'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['type_1']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['type_1']['expose']['multiple'] = FALSE;

  /* Display: node/%log/view Map. */
  $handler = $view->new_display('entity_view', 'node/%log/view Map.', 'entity_view_2');

  /* Display: Images from area */
  $handler = $view->new_display('block', 'Images from area', 'prox_images');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = 'php';
  $handler->display->display_options['style_options']['columns'] = '8';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Location: Distance / Proximity */
  $handler->display->display_options['fields']['distance']['id'] = 'distance';
  $handler->display->display_options['fields']['distance']['table'] = 'location';
  $handler->display->display_options['fields']['distance']['field'] = 'distance';
  $handler->display->display_options['fields']['distance']['label'] = '';
  $handler->display->display_options['fields']['distance']['exclude'] = TRUE;
  $handler->display->display_options['fields']['distance']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['external'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['distance']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['distance']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['html'] = 0;
  $handler->display->display_options['fields']['distance']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['distance']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['distance']['hide_empty'] = 0;
  $handler->display->display_options['fields']['distance']['empty_zero'] = 0;
  $handler->display->display_options['fields']['distance']['origin'] = 'php';
  $handler->display->display_options['fields']['distance']['php_code'] = 'return gmap_mod_loc_from_node($row);';
  $handler->display->display_options['fields']['distance']['uid_arg'] = 'uid';
  /* Field: Location: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'location';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['exclude'] = TRUE;
  $handler->display->display_options['fields']['latitude']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['external'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['latitude']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['latitude']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['html'] = 0;
  $handler->display->display_options['fields']['latitude']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['latitude']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['latitude']['hide_empty'] = 0;
  $handler->display->display_options['fields']['latitude']['empty_zero'] = 0;
  $handler->display->display_options['fields']['latitude']['style'] = 'dd';
  /* Field: Location: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'location';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['exclude'] = TRUE;
  $handler->display->display_options['fields']['longitude']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['external'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['longitude']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['longitude']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['html'] = 0;
  $handler->display->display_options['fields']['longitude']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['longitude']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['longitude']['hide_empty'] = 0;
  $handler->display->display_options['fields']['longitude']['empty_zero'] = 0;
  $handler->display->display_options['fields']['longitude']['style'] = 'dd';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 1;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Bilder */
  $handler->display->display_options['fields']['field_log_images']['id'] = 'field_log_images';
  $handler->display->display_options['fields']['field_log_images']['table'] = 'field_data_field_log_images';
  $handler->display->display_options['fields']['field_log_images']['field'] = 'field_log_images';
  $handler->display->display_options['fields']['field_log_images']['label'] = '';
  $handler->display->display_options['fields']['field_log_images']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_log_images']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_images']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_images']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_images']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_images']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_images']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_images']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_images']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_images']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_images']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_images']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_log_images']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_images']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_log_images']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_log_images']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_log_images']['settings'] = array(
    'colorbox_node_style' => 'thumbnail',
    'colorbox_image_style' => 'large',
  );
  $handler->display->display_options['fields']['field_log_images']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_log_images']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_log_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_log_images']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_log_images']['field_api_classes'] = 0;
  /* Field: Content: Bilder */
  $handler->display->display_options['fields']['field_place_images']['id'] = 'field_place_images';
  $handler->display->display_options['fields']['field_place_images']['table'] = 'field_data_field_place_images';
  $handler->display->display_options['fields']['field_place_images']['field'] = 'field_place_images';
  $handler->display->display_options['fields']['field_place_images']['label'] = '';
  $handler->display->display_options['fields']['field_place_images']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_place_images']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_place_images']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_place_images']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_place_images']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_place_images']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_place_images']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_place_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_place_images']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_place_images']['settings'] = array(
    'colorbox_node_style' => 'thumbnail',
    'colorbox_image_style' => 'large',
  );
  $handler->display->display_options['fields']['field_place_images']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_place_images']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_place_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_place_images']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_place_images']['field_api_classes'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['php']['alter']['text'] = 'Innenfor [php] kilometer';
  $handler->display->display_options['fields']['php']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Location: Distance / Proximity */
  $handler->display->display_options['filters']['distance']['id'] = 'distance';
  $handler->display->display_options['filters']['distance']['table'] = 'location';
  $handler->display->display_options['filters']['distance']['field'] = 'distance';
  $handler->display->display_options['filters']['distance']['operator'] = 'dist';
  $handler->display->display_options['filters']['distance']['value'] = array(
    'latitude' => '',
    'longitude' => '',
    'postal_code' => '',
    'country' => '',
    'php_code' => 'if (is_numeric (arg(1))){
    $node = node_load(arg(1));
    $lat = $node->field_map_point[und][0][locpick][user_latitude];
    $lon = $node->field_map_point[und][0][locpick][user_longitude];
    return array(\'latitude\' => (float)$lat, \'longitude\' => (float)$lon);
}
',
    'nid_arg' => '',
    'nid_loc_field' => 'node',
    'uid_arg' => 'uid',
    'search_distance' => '60',
    'search_units' => 'km',
  );
  $handler->display->display_options['filters']['distance']['group'] = 1;
  $handler->display->display_options['filters']['distance']['origin'] = 'php';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'divesite' => 'divesite',
    'divetrip' => 'divetrip',
    'log' => 'log',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  $handler->display->display_options['filters']['type_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type_1']['expose']['operator_id'] = 'type_1_op';
  $handler->display->display_options['filters']['type_1']['expose']['label'] = 'Content: Type';
  $handler->display->display_options['filters']['type_1']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['type_1']['expose']['operator'] = 'type_1_op';
  $handler->display->display_options['filters']['type_1']['expose']['identifier'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['type_1']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['type_1']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Bilder (field_log_images:fid) */
  $handler->display->display_options['filters']['field_log_images_fid']['id'] = 'field_log_images_fid';
  $handler->display->display_options['filters']['field_log_images_fid']['table'] = 'field_data_field_log_images';
  $handler->display->display_options['filters']['field_log_images_fid']['field'] = 'field_log_images_fid';
  $handler->display->display_options['filters']['field_log_images_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_log_images_fid']['group'] = 2;
  /* Filter criterion: Content: Bilder (field_place_images:fid) */
  $handler->display->display_options['filters']['field_place_images_fid']['id'] = 'field_place_images_fid';
  $handler->display->display_options['filters']['field_place_images_fid']['table'] = 'field_data_field_place_images';
  $handler->display->display_options['filters']['field_place_images_fid']['field'] = 'field_place_images_fid';
  $handler->display->display_options['filters']['field_place_images_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_place_images_fid']['group'] = 2;

  /* Display: Map over area, list attatchment (Places) */
  $handler = $view->new_display('block', 'Map over area, list attatchment (Places)', 'block_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = 'type';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'distance' => 'distance',
    'php' => 'php',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Location: Distance / Proximity */
  $handler->display->display_options['fields']['distance']['id'] = 'distance';
  $handler->display->display_options['fields']['distance']['table'] = 'location';
  $handler->display->display_options['fields']['distance']['field'] = 'distance';
  $handler->display->display_options['fields']['distance']['label'] = '';
  $handler->display->display_options['fields']['distance']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['text'] = '[distance] fra stedet.';
  $handler->display->display_options['fields']['distance']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['external'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['distance']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['distance']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['html'] = 0;
  $handler->display->display_options['fields']['distance']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['distance']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['distance']['hide_empty'] = 0;
  $handler->display->display_options['fields']['distance']['empty_zero'] = 0;
  $handler->display->display_options['fields']['distance']['origin'] = 'tied';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['php']['alter']['text'] = '[php] for stedet.';
  $handler->display->display_options['fields']['php']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  /* Field: Location: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'location';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['exclude'] = TRUE;
  $handler->display->display_options['fields']['latitude']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['external'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['latitude']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['latitude']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['html'] = 0;
  $handler->display->display_options['fields']['latitude']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['latitude']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['latitude']['hide_empty'] = 0;
  $handler->display->display_options['fields']['latitude']['empty_zero'] = 0;
  $handler->display->display_options['fields']['latitude']['style'] = 'dd';
  /* Field: Location: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'location';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['exclude'] = TRUE;
  $handler->display->display_options['fields']['longitude']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['external'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['longitude']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['longitude']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['html'] = 0;
  $handler->display->display_options['fields']['longitude']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['longitude']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['longitude']['hide_empty'] = 0;
  $handler->display->display_options['fields']['longitude']['empty_zero'] = 0;
  $handler->display->display_options['fields']['longitude']['style'] = 'dd';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['type']['alter']['text'] = 'Type [type]';
  $handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['type']['link_to_node'] = 0;
  $handler->display->display_options['fields']['type']['machine_name'] = 0;
  /* Field: Content: Dybde */
  $handler->display->display_options['fields']['field_log_depth']['id'] = 'field_log_depth';
  $handler->display->display_options['fields']['field_log_depth']['table'] = 'field_data_field_log_depth';
  $handler->display->display_options['fields']['field_log_depth']['field'] = 'field_log_depth';
  $handler->display->display_options['fields']['field_log_depth']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_log_depth']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_depth']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_depth']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_depth']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_log_depth']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_log_depth']['field_api_classes'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Map marker */
  $handler->display->display_options['fields']['field_map_marker']['id'] = 'field_map_marker';
  $handler->display->display_options['fields']['field_map_marker']['table'] = 'field_data_field_map_marker';
  $handler->display->display_options['fields']['field_map_marker']['field'] = 'field_map_marker';
  $handler->display->display_options['fields']['field_map_marker']['label'] = '';
  $handler->display->display_options['fields']['field_map_marker']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_map_marker']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_map_marker']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_map_marker']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_map_marker']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_map_marker']['field_api_classes'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Location: Distance / Proximity */
  $handler->display->display_options['sorts']['distance']['id'] = 'distance';
  $handler->display->display_options['sorts']['distance']['table'] = 'location';
  $handler->display->display_options['sorts']['distance']['field'] = 'distance';
  $handler->display->display_options['sorts']['distance']['origin'] = 'php';
  $handler->display->display_options['sorts']['distance']['uid_arg'] = 'uid';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Location: Distance / Proximity */
  $handler->display->display_options['filters']['distance']['id'] = 'distance';
  $handler->display->display_options['filters']['distance']['table'] = 'location';
  $handler->display->display_options['filters']['distance']['field'] = 'distance';
  $handler->display->display_options['filters']['distance']['operator'] = 'dist';
  $handler->display->display_options['filters']['distance']['value'] = array(
    'latitude' => '',
    'longitude' => '',
    'postal_code' => '',
    'country' => '',
    'php_code' => 'if (is_numeric (arg(1))){
    $node = node_load(arg(1));
    $lat = $node->field_map_point[und][0][locpick][user_latitude];
    $lon = $node->field_map_point[und][0][locpick][user_longitude];
    return array(\'latitude\' => (float)$lat, \'longitude\' => (float)$lon);
}
',
    'nid_arg' => '',
    'nid_loc_field' => 'node',
    'uid_arg' => 'uid',
    'search_distance' => '60',
    'search_units' => 'km',
  );
  $handler->display->display_options['filters']['distance']['group'] = 1;
  $handler->display->display_options['filters']['distance']['origin'] = 'php';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  $handler->display->display_options['filters']['type_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type_1']['expose']['operator_id'] = 'type_1_op';
  $handler->display->display_options['filters']['type_1']['expose']['label'] = 'Content: Type';
  $handler->display->display_options['filters']['type_1']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['type_1']['expose']['operator'] = 'type_1_op';
  $handler->display->display_options['filters']['type_1']['expose']['identifier'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['type_1']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['type_1']['expose']['multiple'] = FALSE;

  /* Display: Nearest divesite to a log */
  $handler = $view->new_display('entity_view', 'Nearest divesite to a log', 'entity_view_3');

  /* Display: node/%place/view Map. */
  $handler = $view->new_display('entity_view', 'node/%place/view Map.', 'node_place_view_map');

  /* Display: node/%trip Latest logged */
  $handler = $view->new_display('entity_view', 'node/%trip Latest logged', 'entity_view_4');

  /* Display: node/%trip Images from latest logged */
  $handler = $view->new_display('entity_view', 'node/%trip Images from latest logged', 'entity_view_5');

  /* Display: Club logo */
  $handler = $view->new_display('entity_view', 'Club logo', 'entity_view_6');
  $translatables['proximity_functions'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Latitude'),
    t('Longitude'),
    t('PHP'),
    t('All'),
    t('Content: Type'),
    t('Entity content'),
    t('Map over area (Places)'),
    t('[distance] fra stedet.'),
    t('Type [type]'),
    t('Dybde'),
    t('node/%log/view Map.'),
    t('Images from area'),
    t('Innenfor [php] kilometer'),
    t('Map over area, list attatchment (Places)'),
    t('[php] for stedet.'),
    t('Nearest divesite to a log'),
    t('node/%place/view Map.'),
    t('node/%trip Latest logged'),
    t('node/%trip Images from latest logged'),
    t('Club logo'),
  );
  $export['proximity_functions'] = $view;

  $view = new view;
  $view->name = 'reference_passed_trips';
  $view->description = 'A reference list for passed trips to connect content to.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'reference_passed_trips';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_trip_date_range' => 'field_trip_date_range',
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['separator'] = ': ';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  /* Field: Content: Turperiode */
  $handler->display->display_options['fields']['field_trip_date_range']['id'] = 'field_trip_date_range';
  $handler->display->display_options['fields']['field_trip_date_range']['table'] = 'field_data_field_trip_date_range';
  $handler->display->display_options['fields']['field_trip_date_range']['field'] = 'field_trip_date_range';
  $handler->display->display_options['fields']['field_trip_date_range']['label'] = '';
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['text'] = '[field_trip_date_range]: ';
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_trip_date_range']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['settings'] = array(
    'format_type' => 'd_m_y',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_trip_date_range']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['group_audience_gid']['id'] = 'group_audience_gid';
  $handler->display->display_options['fields']['group_audience_gid']['table'] = 'field_data_group_audience';
  $handler->display->display_options['fields']['group_audience_gid']['field'] = 'group_audience_gid';
  $handler->display->display_options['fields']['group_audience_gid']['label'] = '';
  $handler->display->display_options['fields']['group_audience_gid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['group_audience_gid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['group_audience_gid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['group_audience_gid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['group_audience_gid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['group_audience_gid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['group_audience_gid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['group_audience_gid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['group_audience_gid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['group_audience_gid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['group_audience_gid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['group_audience_gid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['group_audience_gid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['group_audience_gid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['group_audience_gid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['group_audience_gid']['empty_zero'] = 0;
  /* Sort criterion: Content: Turperiode (field_trip_date_range) */
  $handler->display->display_options['sorts']['field_trip_date_range_value']['id'] = 'field_trip_date_range_value';
  $handler->display->display_options['sorts']['field_trip_date_range_value']['table'] = 'field_data_field_trip_date_range';
  $handler->display->display_options['sorts']['field_trip_date_range_value']['field'] = 'field_trip_date_range_value';
  $handler->display->display_options['sorts']['field_trip_date_range_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'divetrip' => 'divetrip',
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['group'] = '0';
  /* Filter criterion: Content: Turperiode (field_trip_date_range) */
  $handler->display->display_options['filters']['field_trip_date_range_value']['id'] = 'field_trip_date_range_value';
  $handler->display->display_options['filters']['field_trip_date_range_value']['table'] = 'field_data_field_trip_date_range';
  $handler->display->display_options['filters']['field_trip_date_range_value']['field'] = 'field_trip_date_range_value';
  $handler->display->display_options['filters']['field_trip_date_range_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_trip_date_range_value']['value'] = array(
    'min' => NULL,
    'max' => NULL,
    'value' => NULL,
    'type' => 'date',
  );
  $handler->display->display_options['filters']['field_trip_date_range_value']['group'] = '0';
  $handler->display->display_options['filters']['field_trip_date_range_value']['expose']['required'] = 0;

  /* Display: References */
  $handler = $view->new_display('references', 'References', 'reference_passed_trips');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'references_style';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['reference_passed_trips'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('[field_trip_date_range]: '),
    t('References'),
  );
  $export['reference_passed_trips'] = $view;

  $view = new view;
  $view->name = 'request_details';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'request_details';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Feilrapporteringer og andre forespørsler';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_request_text' => 'title',
    'field_request_status' => 'field_request_status',
    'field_request_type' => 'field_request_type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br>',
    ),
    'field_request_text' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_request_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_request_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'Du har kommet til Pingvindatabasen\'s lille utviklerhjørne. Her kan du delta i utviklingen av siden, selv du som ikke er programmerer. Har du ideer, eller finner feil, legg til en ny rapport.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Footer: Broken/missing handler */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['label'] = '';
  $handler->display->display_options['footer']['php']['empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Hva';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_request_text']['id'] = 'field_request_text';
  $handler->display->display_options['fields']['field_request_text']['table'] = 'field_data_field_request_text';
  $handler->display->display_options['fields']['field_request_text']['field'] = 'field_request_text';
  $handler->display->display_options['fields']['field_request_text']['label'] = '';
  $handler->display->display_options['fields']['field_request_text']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_request_text']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_request_text']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_request_text']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_request_text']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_request_text']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_request_text']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['field_request_text']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_request_text']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_request_text']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_request_text']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_request_text']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_request_text']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_request_text']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_request_text']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_request_text']['empty_zero'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_request_status']['id'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status']['table'] = 'field_data_field_request_status';
  $handler->display->display_options['fields']['field_request_status']['field'] = 'field_request_status';
  $handler->display->display_options['fields']['field_request_status']['label'] = 'Status på forespørsel';
  $handler->display->display_options['fields']['field_request_status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_request_status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_request_status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_request_status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_request_status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_request_status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_request_status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_request_status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_request_status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_request_status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_request_status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_request_status']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_request_status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_request_status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_request_status']['empty_zero'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_request_type']['id'] = 'field_request_type';
  $handler->display->display_options['fields']['field_request_type']['table'] = 'field_data_field_request_type';
  $handler->display->display_options['fields']['field_request_type']['field'] = 'field_request_type';
  $handler->display->display_options['fields']['field_request_type']['label'] = 'Type';
  $handler->display->display_options['fields']['field_request_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_request_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_request_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_request_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_request_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_request_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_request_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_request_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_request_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_request_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_request_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_request_type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_request_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_request_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_request_type']['empty_zero'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = 'Innspill';
  $handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['external'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['comment_count']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['comment_count']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['html'] = 0;
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['comment_count']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['comment_count']['hide_empty'] = 0;
  $handler->display->display_options['fields']['comment_count']['empty_zero'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'request' => 'request',
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_request_status_value']['id'] = 'field_request_status_value';
  $handler->display->display_options['filters']['field_request_status_value']['table'] = 'field_data_field_request_status';
  $handler->display->display_options['filters']['field_request_status_value']['field'] = 'field_request_status_value';
  $handler->display->display_options['filters']['field_request_status_value']['operator'] = 'in';
  $handler->display->display_options['filters']['field_request_status_value']['value'] = array(
    'open' => 'open',
  );
  $handler->display->display_options['filters']['field_request_status_value']['group'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'request' => 'request',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_request_status_value']['id'] = 'field_request_status_value';
  $handler->display->display_options['filters']['field_request_status_value']['table'] = 'field_data_field_request_status';
  $handler->display->display_options['filters']['field_request_status_value']['field'] = 'field_request_status_value';
  $handler->display->display_options['filters']['field_request_status_value']['operator'] = 'in';
  $handler->display->display_options['filters']['field_request_status_value']['value'] = array(
    'open' => 'open',
  );
  $handler->display->display_options['filters']['field_request_status_value']['group'] = 1;
  $handler->display->display_options['path'] = 'developer/requests';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Feilrapportering og ønskebrønn';
  $handler->display->display_options['menu']['description'] = 'Meld fra om feil, forbedringer og ønsker om ny funksjonalitet her!';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-help';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'Nedenfor finner du tiltak som er ferdig utført.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'request' => 'request',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_request_status_value']['id'] = 'field_request_status_value';
  $handler->display->display_options['filters']['field_request_status_value']['table'] = 'field_data_field_request_status';
  $handler->display->display_options['filters']['field_request_status_value']['field'] = 'field_request_status_value';
  $handler->display->display_options['filters']['field_request_status_value']['operator'] = 'not in';
  $handler->display->display_options['filters']['field_request_status_value']['value'] = array(
    'open' => 'open',
  );
  $handler->display->display_options['filters']['field_request_status_value']['group'] = 1;
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $translatables['request_details'] = array(
    t('Master'),
    t('Feilrapporteringer og andre forespørsler'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Du har kommet til Pingvindatabasen\'s lille utviklerhjørne. Her kan du delta i utviklingen av siden, selv du som ikke er programmerer. Har du ideer, eller finner feil, legg til en ny rapport.'),
    t('Hva'),
    t('Status på forespørsel'),
    t('Type'),
    t('Innspill'),
    t('Page'),
    t('Attachment'),
    t('Nedenfor finner du tiltak som er ferdig utført.'),
  );
  $export['request_details'] = $view;

  $view = new view;
  $view->name = 'site_list';
  $view->description = 'A list and a map of divesites';
  $view->tag = 'group';
  $view->base_table = 'node';
  $view->human_name = 'site_list';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Dykkesteder';
  $handler->display->display_options['css_class'] = 'site-list-view';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = 'tid';
  $handler->display->display_options['style_options']['row_class'] = 'v-align-top width-20-percent edit-fields';
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'Det finnes ingen steder med disse kriteriene.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = 1;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'countries' => 'countries',
    'seabed' => 0,
    'certificates' => 0,
    'enrance' => 0,
    'ideelt_for' => 0,
    'airtype' => 0,
    'life' => 0,
    'tags' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title_2']['alter']['text'] = '<b>[title_2]</b>';
  $handler->display->display_options['fields']['title_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_2']['link_to_node'] = 1;
  /* Field: Content: Om stedet */
  $handler->display->display_options['fields']['field_place_notes']['id'] = 'field_place_notes';
  $handler->display->display_options['fields']['field_place_notes']['table'] = 'field_data_field_place_notes';
  $handler->display->display_options['fields']['field_place_notes']['field'] = 'field_place_notes';
  $handler->display->display_options['fields']['field_place_notes']['label'] = '';
  $handler->display->display_options['fields']['field_place_notes']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_place_notes']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_place_notes']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_place_notes']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_place_notes']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_place_notes']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_place_notes']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_place_notes']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_place_notes']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_place_notes']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_place_notes']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_place_notes']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_place_notes']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_place_notes']['element_wrapper_class'] = 'small-description-150';
  $handler->display->display_options['fields']['field_place_notes']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_place_notes']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_place_notes']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_place_notes']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_place_notes']['field_api_classes'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  /* Field: Content: Bilder */
  $handler->display->display_options['fields']['field_place_images']['id'] = 'field_place_images';
  $handler->display->display_options['fields']['field_place_images']['table'] = 'field_data_field_place_images';
  $handler->display->display_options['fields']['field_place_images']['field'] = 'field_place_images';
  $handler->display->display_options['fields']['field_place_images']['label'] = '';
  $handler->display->display_options['fields']['field_place_images']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_place_images']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_place_images']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_place_images']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_place_images']['element_class'] = 'images-inline-1px';
  $handler->display->display_options['fields']['field_place_images']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_place_images']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_place_images']['empty'] = '<h2>..ingen blider ennå..</h2>';
  $handler->display->display_options['fields']['field_place_images']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_place_images']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_place_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_place_images']['settings'] = array(
    'image_style' => 'thumbnail_small',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_place_images']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_place_images']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_place_images']['delta_limit'] = '4';
  $handler->display->display_options['fields']['field_place_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_place_images']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_place_images']['separator'] = '';
  $handler->display->display_options['fields']['field_place_images']['field_api_classes'] = 0;
  /* Sort criterion: Content: Turperiode (field_trip_date_range) */
  $handler->display->display_options['sorts']['field_trip_date_range_value']['id'] = 'field_trip_date_range_value';
  $handler->display->display_options['sorts']['field_trip_date_range_value']['table'] = 'field_data_field_trip_date_range';
  $handler->display->display_options['sorts']['field_trip_date_range_value']['field'] = 'field_trip_date_range_value';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Land og regioner';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'countries';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['error_message'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '4';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'divesite' => 'divesite',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'not';
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'ideelt_for';
  $handler->display->display_options['filters']['tid']['error_message'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Liste';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'Velg mellom dykkesteder som er registrert i databasen.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Broken/missing handler */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['label'] = '';
  $handler->display->display_options['footer']['php']['empty'] = FALSE;
  $handler->display->display_options['path'] = 'sted';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Steder';
  $handler->display->display_options['menu']['description'] = 'En oversikt over dykkesteder i pingvindatabasen';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'group-list/feed';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
  );
  $translatables['site_list'] = array(
    t('Defaults'),
    t('Dykkesteder'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Det finnes ingen steder med disse kriteriene.'),
    t('term'),
    t('<b>[title_2]</b>'),
    t('<h2>..ingen blider ennå..</h2>'),
    t('Land og regioner'),
    t('Type'),
    t('Page'),
    t('Liste'),
    t('Velg mellom dykkesteder som er registrert i databasen.'),
    t('Feed'),
  );
  $export['site_list'] = $view;

  $view = new view;
  $view->name = 'term_all_regions';
  $view->description = 'Displays a list of all geographical regions which have content';
  $view->tag = 'term';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'term_all_regions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Relationship: Taxonomy term: Content with term */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = 1;
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['required'] = 1;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'nid';
  $handler->display->display_options['fields']['name']['label'] = 'Term';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['name_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name_1']['link_to_taxonomy'] = 0;
  /* Sort criterion: Taxonomy term: Term ID */
  $handler->display->display_options['sorts']['tid']['id'] = 'tid';
  $handler->display->display_options['sorts']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['tid']['field'] = 'tid';
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['filters']['vid']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['vid']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['vid']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['vid']['expose']['multiple'] = FALSE;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid_1']['id'] = 'vid_1';
  $handler->display->display_options['filters']['vid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid_1']['field'] = 'vid';
  $handler->display->display_options['filters']['vid_1']['value'] = array(
    7 => '7',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mine områder';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = 'name_1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
    'name_1' => 'name_1',
  );
  $handler->display->display_options['row_options']['separator'] = ' - ';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
  $handler->display->display_options['fields']['name']['convert_spaces'] = 0;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name_1']['link_to_taxonomy'] = 1;
  $handler->display->display_options['fields']['name_1']['convert_spaces'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Term ID */
  $handler->display->display_options['sorts']['tid']['id'] = 'tid';
  $handler->display->display_options['sorts']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['tid']['field'] = 'tid';

  /* Display: Sitewide regions */
  $handler = $view->new_display('block', 'Sitewide regions', 'block_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = 'name_1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['term_all_regions'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('node'),
    t('Parent'),
    t('Term'),
    t('Block'),
    t('Mine områder'),
    t('Sitewide regions'),
  );
  $export['term_all_regions'] = $view;

  $view = new view;
  $view->name = 'term_regions_in_country';
  $view->description = 'Show a list of regions in selected country';
  $view->tag = 'term';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'term_regions_in_country';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['hide'] = 1;
  $handler->display->display_options['style_options']['path'] = 'tid';
  $handler->display->display_options['style_options']['choose'] = '- Hopp til fylke -';
  $handler->display->display_options['style_options']['default_value'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['text'] = 'taxonomy/term/[tid]';
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['format_plural'] = 0;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
  /* Contextual filter: Taxonomy term: Parent term */
  $handler->display->display_options['arguments']['parent']['id'] = 'parent';
  $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent']['default_action'] = 'default';
  $handler->display->display_options['arguments']['parent']['exception']['title_enable'] = 1;
  $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['parent']['default_argument_options']['term_page'] = '1';
  $handler->display->display_options['arguments']['parent']['default_argument_options']['node'] = '1';
  $handler->display->display_options['arguments']['parent']['default_argument_options']['limit'] = '1';
  $handler->display->display_options['arguments']['parent']['default_argument_options']['vocabularies'] = array(
    'countries' => 'countries',
  );
  $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['parent']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['parent']['not'] = 0;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['filters']['vid']['group'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $translatables['term_regions_in_country'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('taxonomy/term/[tid]'),
    t('.'),
    t(','),
    t('All'),
    t('Block'),
  );
  $export['term_regions_in_country'] = $view;

  $view = new view;
  $view->name = 'trip_details';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'trip_details';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Test';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = 'Det blå punktet er startpunktet. De grønne er dykkesteder som er nevnt i hovedplanleggeren. De hvite prikkene er geografiske data som er lagt inn via kommentarfeltet (IKKE FERDIG IMPLEMENTERT).';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Location: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'location';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['external'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['latitude']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['latitude']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['html'] = 0;
  $handler->display->display_options['fields']['latitude']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['latitude']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['latitude']['hide_empty'] = 0;
  $handler->display->display_options['fields']['latitude']['empty_zero'] = 0;
  $handler->display->display_options['fields']['latitude']['style'] = 'dd';
  /* Field: Location: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'location';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['external'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['longitude']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['longitude']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['html'] = 0;
  $handler->display->display_options['fields']['longitude']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['longitude']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['longitude']['hide_empty'] = 0;
  $handler->display->display_options['fields']['longitude']['empty_zero'] = 0;
  $handler->display->display_options['fields']['longitude']['style'] = 'dd';
  /* Field: Content: Map marker */
  $handler->display->display_options['fields']['field_map_marker']['id'] = 'field_map_marker';
  $handler->display->display_options['fields']['field_map_marker']['table'] = 'field_data_field_map_marker';
  $handler->display->display_options['fields']['field_map_marker']['field'] = 'field_map_marker';
  $handler->display->display_options['fields']['field_map_marker']['label'] = '';
  $handler->display->display_options['fields']['field_map_marker']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_map_marker']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_map_marker']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_map_marker']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_map_marker']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_map_marker']['field_api_classes'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = 'return pingvindatabasen_trip_special_map_nids();';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 1;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $translatables['trip_details'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Test'),
    t('Det blå punktet er startpunktet. De grønne er dykkesteder som er nevnt i hovedplanleggeren. De hvite prikkene er geografiske data som er lagt inn via kommentarfeltet (IKKE FERDIG IMPLEMENTERT).'),
    t('Nid'),
    t('Latitude'),
    t('Longitude'),
    t('All'),
    t('Attachment'),
  );
  $export['trip_details'] = $view;

  $view = new view;
  $view->name = 'trip_possible_places';
  $view->description = 'A trip consists of possible places. This is a list of them.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'trip_possible_places';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'tid' => 'tid',
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['separator'] = ' i ';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  /* Relationship: Content: Aktuelle dykkesteder (field_trip_target) */
  $handler->display->display_options['relationships']['field_trip_target_nid']['id'] = 'field_trip_target_nid';
  $handler->display->display_options['relationships']['field_trip_target_nid']['table'] = 'field_data_field_trip_target';
  $handler->display->display_options['relationships']['field_trip_target_nid']['field'] = 'field_trip_target_nid';
  $handler->display->display_options['relationships']['field_trip_target_nid']['required'] = 1;
  $handler->display->display_options['relationships']['field_trip_target_nid']['delta'] = '-1';
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'field_trip_target_nid';
  $handler->display->display_options['relationships']['parent']['required'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_trip_target_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Om stedet */
  $handler->display->display_options['fields']['field_place_notes']['id'] = 'field_place_notes';
  $handler->display->display_options['fields']['field_place_notes']['table'] = 'field_data_field_place_notes';
  $handler->display->display_options['fields']['field_place_notes']['field'] = 'field_place_notes';
  $handler->display->display_options['fields']['field_place_notes']['relationship'] = 'field_trip_target_nid';
  $handler->display->display_options['fields']['field_place_notes']['label'] = '';
  $handler->display->display_options['fields']['field_place_notes']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_place_notes']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_place_notes']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_place_notes']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_place_notes']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_place_notes']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_place_notes']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_place_notes']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_place_notes']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_place_notes']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_place_notes']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_place_notes']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_place_notes']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_place_notes']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_place_notes']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_place_notes']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_place_notes']['field_api_classes'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_trip_target_nid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $translatables['trip_possible_places'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('field_trip_target'),
    t('Parent'),
    t('All'),
    t('Entity content'),
  );
  $export['trip_possible_places'] = $view;

  $view = new view;
  $view->name = 'trips_list';
  $view->description = 'Show active groups that are nodes';
  $view->tag = 'group';
  $view->base_table = 'node';
  $view->human_name = 'trips_list';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Kommende dykketurer';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = 'field_trip_date_range_1';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_2' => 'title_2',
    'field_club_image' => 'field_club_image',
    'field_trip_date_range' => 'field_trip_date_range',
    'field_trip_notes' => 'field_trip_notes',
    'field_trip_target' => 'field_trip_target',
    'group_audience' => 'group_audience',
    'field_trip_manager' => 'group_audience',
    'field_club_image_1' => 'field_club_image_1',
    'field_trip_date_range_1' => 'field_trip_date_range_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_club_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_trip_date_range' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_trip_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_trip_target' => array(
      'align' => '',
      'separator' => '',
    ),
    'group_audience' => array(
      'align' => '',
      'separator' => '',
    ),
    'field_trip_manager' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_club_image_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_trip_date_range_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'Det finnes ingen kommende dykketurer på nåværende tidspunkt.';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['label'] = 'Tur';
  $handler->display->display_options['fields']['title_2']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title_2']['alter']['text'] = '<b>[title_2]</b>';
  $handler->display->display_options['fields']['title_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_2']['link_to_node'] = 1;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_club_image']['id'] = 'field_club_image';
  $handler->display->display_options['fields']['field_club_image']['table'] = 'field_data_field_club_image';
  $handler->display->display_options['fields']['field_club_image']['field'] = 'field_club_image';
  $handler->display->display_options['fields']['field_club_image']['label'] = '';
  $handler->display->display_options['fields']['field_club_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_club_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_club_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_club_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_club_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_club_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_club_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_club_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_club_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_club_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_club_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_club_image']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_club_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_club_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_club_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_club_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_club_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_club_image']['settings'] = array(
    'colorbox_node_style' => 'thumbnail',
    'colorbox_image_style' => '',
  );
  $handler->display->display_options['fields']['field_club_image']['field_api_classes'] = 0;
  /* Field: Content: Turperiode */
  $handler->display->display_options['fields']['field_trip_date_range']['id'] = 'field_trip_date_range';
  $handler->display->display_options['fields']['field_trip_date_range']['table'] = 'field_data_field_trip_date_range';
  $handler->display->display_options['fields']['field_trip_date_range']['field'] = 'field_trip_date_range';
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_trip_date_range']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_trip_date_range']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_trip_date_range']['field_api_classes'] = 0;
  /* Field: Content: Informasjon */
  $handler->display->display_options['fields']['field_trip_notes']['id'] = 'field_trip_notes';
  $handler->display->display_options['fields']['field_trip_notes']['table'] = 'field_data_field_trip_notes';
  $handler->display->display_options['fields']['field_trip_notes']['field'] = 'field_trip_notes';
  $handler->display->display_options['fields']['field_trip_notes']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_trip_notes']['label'] = '';
  $handler->display->display_options['fields']['field_trip_notes']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['max_length'] = '600';
  $handler->display->display_options['fields']['field_trip_notes']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_trip_notes']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['field_api_classes'] = 0;
  /* Field: Content: Aktuelle dykkesteder */
  $handler->display->display_options['fields']['field_trip_target']['id'] = 'field_trip_target';
  $handler->display->display_options['fields']['field_trip_target']['table'] = 'field_data_field_trip_target';
  $handler->display->display_options['fields']['field_trip_target']['field'] = 'field_trip_target';
  $handler->display->display_options['fields']['field_trip_target']['label'] = 'Turmål';
  $handler->display->display_options['fields']['field_trip_target']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_trip_target']['alter']['text'] = 'Aktuelle turmål: [field_trip_target]';
  $handler->display->display_options['fields']['field_trip_target']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_trip_target']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_trip_target']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_trip_target']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_trip_target']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_trip_target']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_trip_target']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_trip_target']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_trip_target']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_trip_target']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_trip_target']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_trip_target']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_trip_target']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_trip_target']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_trip_target']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_trip_target']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_trip_target']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_trip_target']['field_api_classes'] = 0;
  /* Field: Field: Groups audience */
  $handler->display->display_options['fields']['group_audience']['id'] = 'group_audience';
  $handler->display->display_options['fields']['group_audience']['table'] = 'field_data_group_audience';
  $handler->display->display_options['fields']['group_audience']['field'] = 'group_audience';
  $handler->display->display_options['fields']['group_audience']['label'] = 'I regi av';
  $handler->display->display_options['fields']['group_audience']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['group_audience']['alter']['text'] = '[group_audience]';
  $handler->display->display_options['fields']['group_audience']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['external'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['group_audience']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['group_audience']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['html'] = 0;
  $handler->display->display_options['fields']['group_audience']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['group_audience']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['group_audience']['hide_empty'] = 0;
  $handler->display->display_options['fields']['group_audience']['empty_zero'] = 0;
  $handler->display->display_options['fields']['group_audience']['click_sort_column'] = 'gid';
  $handler->display->display_options['fields']['group_audience']['group_rows'] = 1;
  $handler->display->display_options['fields']['group_audience']['delta_offset'] = '0';
  $handler->display->display_options['fields']['group_audience']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['group_audience']['field_api_classes'] = 0;
  /* Field: Content: Dykkeleder */
  $handler->display->display_options['fields']['field_trip_manager']['id'] = 'field_trip_manager';
  $handler->display->display_options['fields']['field_trip_manager']['table'] = 'field_data_field_trip_manager';
  $handler->display->display_options['fields']['field_trip_manager']['field'] = 'field_trip_manager';
  $handler->display->display_options['fields']['field_trip_manager']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_trip_manager']['alter']['text'] = ', tursjef [field_trip_manager]';
  $handler->display->display_options['fields']['field_trip_manager']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_trip_manager']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_trip_manager']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_trip_manager']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_trip_manager']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_trip_manager']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_trip_manager']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_trip_manager']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_trip_manager']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_trip_manager']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_trip_manager']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_trip_manager']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_trip_manager']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_trip_manager']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_trip_manager']['field_api_classes'] = 0;
  /* Field: Content: Turperiode */
  $handler->display->display_options['fields']['field_trip_date_range_1']['id'] = 'field_trip_date_range_1';
  $handler->display->display_options['fields']['field_trip_date_range_1']['table'] = 'field_data_field_trip_date_range';
  $handler->display->display_options['fields']['field_trip_date_range_1']['field'] = 'field_trip_date_range';
  $handler->display->display_options['fields']['field_trip_date_range_1']['label'] = '';
  $handler->display->display_options['fields']['field_trip_date_range_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_trip_date_range_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_trip_date_range_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_trip_date_range_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_trip_date_range_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range_1']['settings'] = array(
    'format_type' => 'month_and_year',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_trip_date_range_1']['field_api_classes'] = 0;
  /* Sort criterion: Content: Turperiode (field_trip_date_range) */
  $handler->display->display_options['sorts']['field_trip_date_range_value']['id'] = 'field_trip_date_range_value';
  $handler->display->display_options['sorts']['field_trip_date_range_value']['table'] = 'field_data_field_trip_date_range';
  $handler->display->display_options['sorts']['field_trip_date_range_value']['field'] = 'field_trip_date_range_value';
  $handler->display->display_options['sorts']['field_trip_date_range_value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_trip_date_range_value']['expose']['label'] = 'Fields: Turperiode (field_trip_date_range) - value';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'divetrip' => 'divetrip',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Fylke';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'countries';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['tid']['error_message'] = 1;
  /* Filter criterion: Content: Turperiode (field_trip_date_range) */
  $handler->display->display_options['filters']['field_trip_date_range_value']['id'] = 'field_trip_date_range_value';
  $handler->display->display_options['filters']['field_trip_date_range_value']['table'] = 'field_data_field_trip_date_range';
  $handler->display->display_options['filters']['field_trip_date_range_value']['field'] = 'field_trip_date_range_value';
  $handler->display->display_options['filters']['field_trip_date_range_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_trip_date_range_value']['value'] = array(
    'min' => NULL,
    'max' => NULL,
    'value' => NULL,
    'type' => 'date',
  );
  $handler->display->display_options['filters']['field_trip_date_range_value']['group'] = 1;
  $handler->display->display_options['filters']['field_trip_date_range_value']['expose']['required'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Liste';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Listen viser alle dykketurer som er planlagt det nærmeste året.';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Turperiode (field_trip_date_range) */
  $handler->display->display_options['sorts']['field_trip_date_range_value']['id'] = 'field_trip_date_range_value';
  $handler->display->display_options['sorts']['field_trip_date_range_value']['table'] = 'field_data_field_trip_date_range';
  $handler->display->display_options['sorts']['field_trip_date_range_value']['field'] = 'field_trip_date_range_value';
  $handler->display->display_options['sorts']['field_trip_date_range_value']['expose']['label'] = 'Fields: Turperiode (field_trip_date_range) - value';
  $handler->display->display_options['path'] = 'tur';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Dykketurer';
  $handler->display->display_options['menu']['description'] = 'En oversikt over turene til deltakende dykkeklubber';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'group-list/feed';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
  );

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = 'field_trip_date_range_1';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'Overståtte dykketurer';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'Ingen tidligere dykketurer.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title_2']['alter']['text'] = '<b>[title_2]</b>';
  $handler->display->display_options['fields']['title_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_2']['link_to_node'] = 1;
  /* Field: Content: Turperiode */
  $handler->display->display_options['fields']['field_trip_date_range_1']['id'] = 'field_trip_date_range_1';
  $handler->display->display_options['fields']['field_trip_date_range_1']['table'] = 'field_data_field_trip_date_range';
  $handler->display->display_options['fields']['field_trip_date_range_1']['field'] = 'field_trip_date_range';
  $handler->display->display_options['fields']['field_trip_date_range_1']['label'] = '';
  $handler->display->display_options['fields']['field_trip_date_range_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_trip_date_range_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_trip_date_range_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_trip_date_range_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range_1']['settings'] = array(
    'format_type' => 'month_and_year',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_trip_date_range_1']['field_api_classes'] = 0;
  /* Field: Field: Groups audience */
  $handler->display->display_options['fields']['group_audience']['id'] = 'group_audience';
  $handler->display->display_options['fields']['group_audience']['table'] = 'field_data_group_audience';
  $handler->display->display_options['fields']['group_audience']['field'] = 'group_audience';
  $handler->display->display_options['fields']['group_audience']['label'] = '';
  $handler->display->display_options['fields']['group_audience']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['group_audience']['alter']['text'] = '[group_audience]';
  $handler->display->display_options['fields']['group_audience']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['external'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['group_audience']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['group_audience']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['html'] = 0;
  $handler->display->display_options['fields']['group_audience']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['group_audience']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['group_audience']['hide_empty'] = 0;
  $handler->display->display_options['fields']['group_audience']['empty_zero'] = 0;
  $handler->display->display_options['fields']['group_audience']['click_sort_column'] = 'gid';
  $handler->display->display_options['fields']['group_audience']['group_column'] = 'gid';
  $handler->display->display_options['fields']['group_audience']['group_rows'] = 1;
  $handler->display->display_options['fields']['group_audience']['delta_offset'] = '0';
  $handler->display->display_options['fields']['group_audience']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['group_audience']['field_api_classes'] = 0;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_club_image']['id'] = 'field_club_image';
  $handler->display->display_options['fields']['field_club_image']['table'] = 'field_data_field_club_image';
  $handler->display->display_options['fields']['field_club_image']['field'] = 'field_club_image';
  $handler->display->display_options['fields']['field_club_image']['label'] = '';
  $handler->display->display_options['fields']['field_club_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_club_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_club_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_club_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_club_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_club_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_club_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_club_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_club_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_club_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_club_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_club_image']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_club_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_club_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_club_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_club_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_club_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_club_image']['settings'] = array(
    'colorbox_node_style' => 'thumbnail',
    'colorbox_image_style' => '',
  );
  $handler->display->display_options['fields']['field_club_image']['field_api_classes'] = 0;
  /* Field: Content: Informasjon */
  $handler->display->display_options['fields']['field_trip_notes']['id'] = 'field_trip_notes';
  $handler->display->display_options['fields']['field_trip_notes']['table'] = 'field_data_field_trip_notes';
  $handler->display->display_options['fields']['field_trip_notes']['field'] = 'field_trip_notes';
  $handler->display->display_options['fields']['field_trip_notes']['label'] = '';
  $handler->display->display_options['fields']['field_trip_notes']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_trip_notes']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_trip_notes']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['field_api_classes'] = 0;
  /* Field: Content: Aktuelle dykkesteder */
  $handler->display->display_options['fields']['field_trip_target']['id'] = 'field_trip_target';
  $handler->display->display_options['fields']['field_trip_target']['table'] = 'field_data_field_trip_target';
  $handler->display->display_options['fields']['field_trip_target']['field'] = 'field_trip_target';
  $handler->display->display_options['fields']['field_trip_target']['label'] = 'Turmål';
  $handler->display->display_options['fields']['field_trip_target']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_trip_target']['alter']['text'] = 'Aktuelle turmål: [field_trip_target]';
  $handler->display->display_options['fields']['field_trip_target']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_trip_target']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_trip_target']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_trip_target']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_trip_target']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_trip_target']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_trip_target']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_trip_target']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_trip_target']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_trip_target']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_trip_target']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_trip_target']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_trip_target']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_trip_target']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_trip_target']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_trip_target']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_trip_target']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_trip_target']['field_api_classes'] = 0;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'divetrip' => 'divetrip',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Fylke';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'countries';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['tid']['error_message'] = 1;
  /* Filter criterion: Content: Turperiode (field_trip_date_range) */
  $handler->display->display_options['filters']['field_trip_date_range_value']['id'] = 'field_trip_date_range_value';
  $handler->display->display_options['filters']['field_trip_date_range_value']['table'] = 'field_data_field_trip_date_range';
  $handler->display->display_options['filters']['field_trip_date_range_value']['field'] = 'field_trip_date_range_value';
  $handler->display->display_options['filters']['field_trip_date_range_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_trip_date_range_value']['value'] = array(
    'min' => NULL,
    'max' => NULL,
    'value' => NULL,
    'type' => 'date',
  );
  $handler->display->display_options['filters']['field_trip_date_range_value']['group'] = 1;
  $handler->display->display_options['filters']['field_trip_date_range_value']['expose']['required'] = 0;
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = 1;
  $translatables['trips_list'] = array(
    t('Defaults'),
    t('Kommende dykketurer'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Det finnes ingen kommende dykketurer på nåværende tidspunkt.'),
    t('Tur'),
    t('<b>[title_2]</b>'),
    t('Turperiode'),
    t('Turmål'),
    t('Aktuelle turmål: [field_trip_target]'),
    t('I regi av'),
    t('[group_audience]'),
    t('Dykkeleder'),
    t(', tursjef [field_trip_manager]'),
    t('Fields: Turperiode (field_trip_date_range) - value'),
    t('Fylke'),
    t('Page'),
    t('Liste'),
    t('Listen viser alle dykketurer som er planlagt det nærmeste året.'),
    t('Feed'),
    t('Attachment'),
    t('Overståtte dykketurer'),
    t('Ingen tidligere dykketurer.'),
  );
  $export['trips_list'] = $view;

  $view = new view;
  $view->name = 'user_divelog';
  $view->description = 'A collection of views for the divelog';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'user_divelog';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['row_class'] = 'pull-together-images';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_log_images' => 'field_log_images',
  );
  $handler->display->display_options['row_options']['separator'] = ' ';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Ingen innhold';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'Du har ikke laget noen sider i loggen din ennå.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'user';
  $handler->display->display_options['relationships']['uid']['required'] = 1;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'node/[nid]';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['text'] = '# [counter]';
  $handler->display->display_options['fields']['counter']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['counter']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['external'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['html'] = 0;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['counter']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['counter']['hide_empty'] = 0;
  $handler->display->display_options['fields']['counter']['empty_zero'] = 0;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Field: Location: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'location';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['label'] = '';
  $handler->display->display_options['fields']['latitude']['exclude'] = TRUE;
  $handler->display->display_options['fields']['latitude']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['external'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['latitude']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['latitude']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['html'] = 0;
  $handler->display->display_options['fields']['latitude']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['latitude']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['latitude']['hide_empty'] = 0;
  $handler->display->display_options['fields']['latitude']['empty_zero'] = 0;
  $handler->display->display_options['fields']['latitude']['style'] = 'dd';
  /* Field: Location: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'location';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  /* Sort criterion: Content: Tidspunkt (field_glob_date) */
  $handler->display->display_options['sorts']['field_glob_date_value']['id'] = 'field_glob_date_value';
  $handler->display->display_options['sorts']['field_glob_date_value']['table'] = 'field_data_field_glob_date';
  $handler->display->display_options['sorts']['field_glob_date_value']['field'] = 'field_glob_date_value';
  /* Contextual filter: User: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'users';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'log' => 'log',
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['group'] = '0';

  /* Display: Log counter */
  $handler = $view->new_display('entity_view', 'Log counter', 'log_shortcuts');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_log_depth' => 'field_log_depth',
    'field_log_downtime' => 'field_log_downtime',
    'field_glob_date' => 'field_glob_date',
    'field_log_buddies' => 'field_log_buddies',
    'field_log_press_start' => 'field_log_press_start',
    'field_log_press_end' => 'field_log_press_end',
    'field_log_press_gastype' => 'field_log_press_gastype',
    'field_log_stop' => 'field_log_stop',
    'field_log_env_temp_air' => 'field_log_env_temp_air',
    'field_log_env_temp_water' => 'field_log_env_temp_water',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_log_depth' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_log_downtime' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_glob_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_log_buddies' => array(
      'align' => '',
      'separator' => '',
    ),
    'field_log_press_start' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_log_press_end' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_log_press_gastype' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_log_stop' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_log_env_temp_air' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_log_env_temp_water' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Tittel';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Dybde */
  $handler->display->display_options['fields']['field_log_depth']['id'] = 'field_log_depth';
  $handler->display->display_options['fields']['field_log_depth']['table'] = 'field_data_field_log_depth';
  $handler->display->display_options['fields']['field_log_depth']['field'] = 'field_log_depth';
  $handler->display->display_options['fields']['field_log_depth']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_depth']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_depth']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_log_depth']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_depth']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_depth']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_log_depth']['field_api_classes'] = 0;
  /* Field: Content: Dykketid */
  $handler->display->display_options['fields']['field_log_downtime']['id'] = 'field_log_downtime';
  $handler->display->display_options['fields']['field_log_downtime']['table'] = 'field_data_field_log_downtime';
  $handler->display->display_options['fields']['field_log_downtime']['field'] = 'field_log_downtime';
  $handler->display->display_options['fields']['field_log_downtime']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_log_downtime']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_downtime']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_downtime']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_downtime']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_downtime']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_downtime']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_downtime']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_downtime']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_downtime']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_downtime']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_downtime']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_log_downtime']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_downtime']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_log_downtime']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_downtime']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_log_downtime']['field_api_classes'] = 0;
  /* Field: Content: Tidspunkt */
  $handler->display->display_options['fields']['field_glob_date']['id'] = 'field_glob_date';
  $handler->display->display_options['fields']['field_glob_date']['table'] = 'field_data_field_glob_date';
  $handler->display->display_options['fields']['field_glob_date']['field'] = 'field_glob_date';
  $handler->display->display_options['fields']['field_glob_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_glob_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_glob_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_glob_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_glob_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_glob_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_glob_date']['field_api_classes'] = 0;
  /* Field: Content: Buddyer */
  $handler->display->display_options['fields']['field_log_buddies']['id'] = 'field_log_buddies';
  $handler->display->display_options['fields']['field_log_buddies']['table'] = 'field_data_field_log_buddies';
  $handler->display->display_options['fields']['field_log_buddies']['field'] = 'field_log_buddies';
  $handler->display->display_options['fields']['field_log_buddies']['label'] = 'Buddy';
  $handler->display->display_options['fields']['field_log_buddies']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_log_buddies']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_buddies']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_buddies']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_buddies']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_buddies']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_buddies']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_buddies']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_buddies']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_buddies']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_buddies']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_buddies']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_log_buddies']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_buddies']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_log_buddies']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_buddies']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_log_buddies']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_log_buddies']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_log_buddies']['field_api_classes'] = 0;
  /* Field: Content: Flasketrykk start */
  $handler->display->display_options['fields']['field_log_press_start']['id'] = 'field_log_press_start';
  $handler->display->display_options['fields']['field_log_press_start']['table'] = 'field_data_field_log_press_start';
  $handler->display->display_options['fields']['field_log_press_start']['field'] = 'field_log_press_start';
  $handler->display->display_options['fields']['field_log_press_start']['label'] = 'T inn';
  $handler->display->display_options['fields']['field_log_press_start']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_log_press_start']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_press_start']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_press_start']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_press_start']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_press_start']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_press_start']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_press_start']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_press_start']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_press_start']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_press_start']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_press_start']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_log_press_start']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_press_start']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_log_press_start']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_press_start']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_log_press_start']['field_api_classes'] = 0;
  /* Field: Content: Flasketrykk slutt */
  $handler->display->display_options['fields']['field_log_press_end']['id'] = 'field_log_press_end';
  $handler->display->display_options['fields']['field_log_press_end']['table'] = 'field_data_field_log_press_end';
  $handler->display->display_options['fields']['field_log_press_end']['field'] = 'field_log_press_end';
  $handler->display->display_options['fields']['field_log_press_end']['label'] = 'T ut';
  $handler->display->display_options['fields']['field_log_press_end']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_log_press_end']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_press_end']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_press_end']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_press_end']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_press_end']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_press_end']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_press_end']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_press_end']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_press_end']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_press_end']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_press_end']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_log_press_end']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_press_end']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_log_press_end']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_press_end']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_log_press_end']['field_api_classes'] = 0;
  /* Field: Content: Luft-type */
  $handler->display->display_options['fields']['field_log_press_gastype']['id'] = 'field_log_press_gastype';
  $handler->display->display_options['fields']['field_log_press_gastype']['table'] = 'field_data_field_log_press_gastype';
  $handler->display->display_options['fields']['field_log_press_gastype']['field'] = 'field_log_press_gastype';
  $handler->display->display_options['fields']['field_log_press_gastype']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_log_press_gastype']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_press_gastype']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_press_gastype']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_press_gastype']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_press_gastype']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_press_gastype']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_press_gastype']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_press_gastype']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_press_gastype']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_press_gastype']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_press_gastype']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_log_press_gastype']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_press_gastype']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_log_press_gastype']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_press_gastype']['field_api_classes'] = 0;
  /* Field: Content: Sikkerhetsstopp */
  $handler->display->display_options['fields']['field_log_stop']['id'] = 'field_log_stop';
  $handler->display->display_options['fields']['field_log_stop']['table'] = 'field_data_field_log_stop';
  $handler->display->display_options['fields']['field_log_stop']['field'] = 'field_log_stop';
  $handler->display->display_options['fields']['field_log_stop']['label'] = 'Stopp';
  $handler->display->display_options['fields']['field_log_stop']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_log_stop']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_stop']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_stop']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_stop']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_stop']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_stop']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_stop']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_stop']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_stop']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_stop']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_stop']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_log_stop']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_stop']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_log_stop']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_stop']['field_api_classes'] = 0;
  /* Field: Content: Temp luft */
  $handler->display->display_options['fields']['field_log_env_temp_air']['id'] = 'field_log_env_temp_air';
  $handler->display->display_options['fields']['field_log_env_temp_air']['table'] = 'field_data_field_log_env_temp_air';
  $handler->display->display_options['fields']['field_log_env_temp_air']['field'] = 'field_log_env_temp_air';
  $handler->display->display_options['fields']['field_log_env_temp_air']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_air']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_air']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_air']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_air']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_air']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_air']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_env_temp_air']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_env_temp_air']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_air']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_air']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_air']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_log_env_temp_air']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_env_temp_air']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_air']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_air']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_log_env_temp_air']['field_api_classes'] = 0;
  /* Field: Content: Temp vann */
  $handler->display->display_options['fields']['field_log_env_temp_water']['id'] = 'field_log_env_temp_water';
  $handler->display->display_options['fields']['field_log_env_temp_water']['table'] = 'field_data_field_log_env_temp_water';
  $handler->display->display_options['fields']['field_log_env_temp_water']['field'] = 'field_log_env_temp_water';
  $handler->display->display_options['fields']['field_log_env_temp_water']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_water']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_water']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_water']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_water']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_water']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_water']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_env_temp_water']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_env_temp_water']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_water']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_water']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_water']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_log_env_temp_water']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_env_temp_water']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_water']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_env_temp_water']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_log_env_temp_water']['field_api_classes'] = 0;
  /* Field: Location: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'location';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['exclude'] = TRUE;
  $handler->display->display_options['fields']['latitude']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['external'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['latitude']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['latitude']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['html'] = 0;
  $handler->display->display_options['fields']['latitude']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['latitude']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['latitude']['hide_empty'] = 0;
  $handler->display->display_options['fields']['latitude']['empty_zero'] = 0;
  $handler->display->display_options['fields']['latitude']['style'] = 'dd';
  /* Field: Location: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'location';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['exclude'] = TRUE;
  $handler->display->display_options['fields']['longitude']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['external'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['longitude']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['longitude']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['html'] = 0;
  $handler->display->display_options['fields']['longitude']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['longitude']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['longitude']['hide_empty'] = 0;
  $handler->display->display_options['fields']['longitude']['empty_zero'] = 0;
  $handler->display->display_options['fields']['longitude']['style'] = 'dd';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['title_enable'] = 1;
  $handler->display->display_options['arguments']['uid']['title'] = '%1';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 1;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'log' => 'log',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'user/%/log';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Min dykkelogg';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Member divelog images */
  $handler = $view->new_display('block', 'Member divelog images', 'club_image_block');
  $handler->display->display_options['display_description'] = 'Log images for the club page';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['row_class'] = 'pull-together-images';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_log_images' => 'field_log_images',
  );
  $handler->display->display_options['row_options']['separator'] = ' ';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'node/[nid]';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 1;
  /* Field: Content: Bilder */
  $handler->display->display_options['fields']['field_log_images']['id'] = 'field_log_images';
  $handler->display->display_options['fields']['field_log_images']['table'] = 'field_data_field_log_images';
  $handler->display->display_options['fields']['field_log_images']['field'] = 'field_log_images';
  $handler->display->display_options['fields']['field_log_images']['label'] = '';
  $handler->display->display_options['fields']['field_log_images']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_log_images']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_images']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_images']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_images']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_images']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_images']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_images']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_images']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_images']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_images']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_images']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_log_images']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_images']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_log_images']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_log_images']['settings'] = array(
    'image_style' => 'thumbnail_small',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_log_images']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_log_images']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_log_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_log_images']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_log_images']['separator'] = ' ';
  $handler->display->display_options['fields']['field_log_images']['field_api_classes'] = 0;
  /* Field: Field: Groups audience */
  $handler->display->display_options['fields']['group_audience']['id'] = 'group_audience';
  $handler->display->display_options['fields']['group_audience']['table'] = 'field_data_group_audience';
  $handler->display->display_options['fields']['group_audience']['field'] = 'group_audience';
  $handler->display->display_options['fields']['group_audience']['relationship'] = 'uid';
  $handler->display->display_options['fields']['group_audience']['label'] = '';
  $handler->display->display_options['fields']['group_audience']['exclude'] = TRUE;
  $handler->display->display_options['fields']['group_audience']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['external'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['group_audience']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['group_audience']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['html'] = 0;
  $handler->display->display_options['fields']['group_audience']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['group_audience']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['group_audience']['hide_empty'] = 0;
  $handler->display->display_options['fields']['group_audience']['empty_zero'] = 0;
  $handler->display->display_options['fields']['group_audience']['click_sort_column'] = 'gid';
  $handler->display->display_options['fields']['group_audience']['group_column'] = 'gid';
  $handler->display->display_options['fields']['group_audience']['group_rows'] = 1;
  $handler->display->display_options['fields']['group_audience']['delta_offset'] = '0';
  $handler->display->display_options['fields']['group_audience']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['group_audience']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Groups audience (group_audience:gid) */
  $handler->display->display_options['arguments']['group_audience_gid']['id'] = 'group_audience_gid';
  $handler->display->display_options['arguments']['group_audience_gid']['table'] = 'field_data_group_audience';
  $handler->display->display_options['arguments']['group_audience_gid']['field'] = 'group_audience_gid';
  $handler->display->display_options['arguments']['group_audience_gid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['group_audience_gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['group_audience_gid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['group_audience_gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['group_audience_gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['group_audience_gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['group_audience_gid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['group_audience_gid']['not'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'log' => 'log',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Bilder (field_log_images:fid) */
  $handler->display->display_options['filters']['field_log_images_fid']['id'] = 'field_log_images_fid';
  $handler->display->display_options['filters']['field_log_images_fid']['table'] = 'field_data_field_log_images';
  $handler->display->display_options['filters']['field_log_images_fid']['field'] = 'field_log_images_fid';
  $handler->display->display_options['filters']['field_log_images_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_log_images_fid']['group'] = 1;

  /* Display: Member divelog latest dives */
  $handler = $view->new_display('block', 'Member divelog latest dives', 'club_dives_block');
  $handler->display->display_options['display_description'] = 'Latest dives for the club page.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['row_class'] = 'pull-together-images';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_log_images' => 'field_log_images',
  );
  $handler->display->display_options['row_options']['separator'] = ' ';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'node/[nid]';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'log' => 'log',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['group'] = 1;
  /* Filter criterion: Content: Bilder (field_log_images:fid) */
  $handler->display->display_options['filters']['field_log_images_fid']['id'] = 'field_log_images_fid';
  $handler->display->display_options['filters']['field_log_images_fid']['table'] = 'field_data_field_log_images';
  $handler->display->display_options['filters']['field_log_images_fid']['field'] = 'field_log_images_fid';
  $handler->display->display_options['filters']['field_log_images_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_log_images_fid']['group'] = 1;
  $translatables['user_divelog'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Ingen innhold'),
    t('Du har ikke laget noen sider i loggen din ennå.'),
    t('user'),
    t('[name]'),
    t('node/[nid]'),
    t('# [counter]'),
    t('Uid'),
    t('Longitude'),
    t('All'),
    t('Log counter'),
    t('Page'),
    t('Tittel'),
    t('Dybde'),
    t('Dykketid'),
    t('Tidspunkt'),
    t('Buddy'),
    t('T inn'),
    t('T ut'),
    t('Luft-type'),
    t('Stopp'),
    t('Temp luft'),
    t('Temp vann'),
    t('Latitude'),
    t('%1'),
    t('Member divelog images'),
    t('Log images for the club page'),
    t('Member divelog latest dives'),
    t('Latest dives for the club page.'),
  );
  $export['user_divelog'] = $view;

  $view = new view;
  $view->name = 'user_reference_listings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'user_reference_listings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Region */
  $handler->display->display_options['fields']['field_map_region_1']['id'] = 'field_map_region_1';
  $handler->display->display_options['fields']['field_map_region_1']['table'] = 'field_data_field_map_region_1';
  $handler->display->display_options['fields']['field_map_region_1']['field'] = 'field_map_region_1';
  $handler->display->display_options['fields']['field_map_region_1']['label'] = '';
  $handler->display->display_options['fields']['field_map_region_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_map_region_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_map_region_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_map_region_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_map_region_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_map_region_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_map_region_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_map_region_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_map_region_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_map_region_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_map_region_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_map_region_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_map_region_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_map_region_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_map_region_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_map_region_1']['field_api_classes'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: References */
  $handler = $view->new_display('references', 'References', 'references_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'references_style';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['separator'] = ' -->';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['user_reference_listings'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('References'),
  );
  $export['user_reference_listings'] = $view;

  $view = new view;
  $view->name = 'user_trip_attending';
  $view->description = 'Shows a list of the trips this user is attending.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'user_trip_attending';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'user_trip_attending';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['row_class'] = '.padding-bottom-10';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'timestamp' => 'timestamp',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Du er ikke';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'Du er ikke påmeldt.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Deltakere (field_trip_people) */
  $handler->display->display_options['relationships']['field_trip_people_uid']['id'] = 'field_trip_people_uid';
  $handler->display->display_options['relationships']['field_trip_people_uid']['table'] = 'field_data_field_trip_people';
  $handler->display->display_options['relationships']['field_trip_people_uid']['field'] = 'field_trip_people_uid';
  $handler->display->display_options['relationships']['field_trip_people_uid']['required'] = 1;
  $handler->display->display_options['relationships']['field_trip_people_uid']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Informasjon */
  $handler->display->display_options['fields']['field_trip_notes']['id'] = 'field_trip_notes';
  $handler->display->display_options['fields']['field_trip_notes']['table'] = 'field_data_field_trip_notes';
  $handler->display->display_options['fields']['field_trip_notes']['field'] = 'field_trip_notes';
  $handler->display->display_options['fields']['field_trip_notes']['label'] = '';
  $handler->display->display_options['fields']['field_trip_notes']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_trip_notes']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_trip_notes']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['field_api_classes'] = 0;
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Deltakere (field_trip_people) */
  $handler->display->display_options['arguments']['field_trip_people_uid']['id'] = 'field_trip_people_uid';
  $handler->display->display_options['arguments']['field_trip_people_uid']['table'] = 'field_data_field_trip_people';
  $handler->display->display_options['arguments']['field_trip_people_uid']['field'] = 'field_trip_people_uid';
  $handler->display->display_options['arguments']['field_trip_people_uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_trip_people_uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['field_trip_people_uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['field_trip_people_uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_trip_people_uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_trip_people_uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_trip_people_uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_trip_people_uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_trip_people_uid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'divetrip' => 'divetrip',
  );
  /* Filter criterion: Content: Turperiode (field_trip_date_range:value2) */
  $handler->display->display_options['filters']['field_trip_date_range_value2']['id'] = 'field_trip_date_range_value2';
  $handler->display->display_options['filters']['field_trip_date_range_value2']['table'] = 'field_data_field_trip_date_range';
  $handler->display->display_options['filters']['field_trip_date_range_value2']['field'] = 'field_trip_date_range_value2';
  $handler->display->display_options['filters']['field_trip_date_range_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_trip_date_range_value2']['value'] = array(
    'min' => NULL,
    'max' => NULL,
    'value' => NULL,
    'type' => 'date',
  );
  $handler->display->display_options['filters']['field_trip_date_range_value2']['group'] = '0';
  $handler->display->display_options['filters']['field_trip_date_range_value2']['expose']['required'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['external'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['timestamp']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['timestamp']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['html'] = 0;
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['timestamp']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['timestamp']['hide_empty'] = 0;
  $handler->display->display_options['fields']['timestamp']['empty_zero'] = 0;
  $handler->display->display_options['fields']['timestamp']['link_to_node'] = 0;
  $handler->display->display_options['fields']['timestamp']['comments'] = 0;
  /* Field: Content: Informasjon */
  $handler->display->display_options['fields']['field_trip_notes']['id'] = 'field_trip_notes';
  $handler->display->display_options['fields']['field_trip_notes']['table'] = 'field_data_field_trip_notes';
  $handler->display->display_options['fields']['field_trip_notes']['field'] = 'field_trip_notes';
  $handler->display->display_options['fields']['field_trip_notes']['label'] = '';
  $handler->display->display_options['fields']['field_trip_notes']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_trip_notes']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_trip_notes']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_trip_notes']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_trip_notes']['field_api_classes'] = 0;
  /* Field: Content: Turperiode */
  $handler->display->display_options['fields']['field_trip_date_range']['id'] = 'field_trip_date_range';
  $handler->display->display_options['fields']['field_trip_date_range']['table'] = 'field_data_field_trip_date_range';
  $handler->display->display_options['fields']['field_trip_date_range']['field'] = 'field_trip_date_range';
  $handler->display->display_options['fields']['field_trip_date_range']['label'] = '';
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_trip_date_range']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_trip_date_range']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_trip_date_range']['field_api_classes'] = 0;
  $translatables['user_trip_attending'] = array(
    t('Master'),
    t('user_trip_attending'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Du er ikke'),
    t('Du er ikke påmeldt.'),
    t('field_trip_people'),
    t('Has new content'),
    t('All'),
    t('Block'),
  );
  $export['user_trip_attending'] = $view;

  $view = new view;
  $view->name = 'view_dive_thumbnails';
  $view->description = 'View a dive\'s thumbnails';
  $view->tag = 'Log';
  $view->base_table = 'node';
  $view->human_name = 'View dive thumbnails';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Image thumbs */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_log_images';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_log_images';
  $handler->display->display_options['fields']['entity_id']['ui_name'] = 'Image thumbs';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['entity_id']['element_wrapper_class'] = 'inline';
  $handler->display->display_options['fields']['entity_id']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id']['empty_zero'] = 0;
  $handler->display->display_options['fields']['entity_id']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['entity_id']['type'] = 'colorbox';
  $handler->display->display_options['fields']['entity_id']['settings'] = array(
    'colorbox_node_style' => 'thumbnail',
    'colorbox_image_style' => '',
  );
  $handler->display->display_options['fields']['entity_id']['group_column'] = 'fid';
  $translatables['view_dive_thumbnails'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
  );
  $export['view_dive_thumbnails'] = $view;

  return $export;
}
