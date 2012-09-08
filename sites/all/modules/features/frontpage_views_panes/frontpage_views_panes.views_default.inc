<?php
/**
 * @file
 * frontpage_views_panes.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function frontpage_views_panes_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'club_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'club_list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Klubber';
  $handler->display->display_options['use_more_text'] = 'mer';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Nullstill';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér på';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Synkende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer per side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'club_large_teaser';
  $handler->display->display_options['row_options']['links'] = 1;
  $handler->display->display_options['row_options']['comments'] = 0;
  /* Felt: Innhold: Tittel */
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
  /* Sorteringskriterium: Innhold: Tittel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Innhold: Publisert */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Innhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'club' => 'club',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'klubber';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Klubber';
  $handler->display->display_options['menu']['description'] = 'Liste over klubber';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['club_list'] = array(
    t('Master'),
    t('Klubber'),
    t('mer'),
    t('Bruk'),
    t('Nullstill'),
    t('Sortér på'),
    t('Stigende'),
    t('Synkende'),
    t('Elementer per side'),
    t('- Alle -'),
    t('Offset'),
    t('Page'),
  );
  $export['club_list'] = $view;

  $view = new view;
  $view->name = 'dive_list';
  $view->description = 'A list and a map of divesites';
  $view->tag = 'group';
  $view->base_table = 'node';
  $view->human_name = 'dive_list';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Siste loggførte';
  $handler->display->display_options['css_class'] = 'site-list-view';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'mer';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Nullstill';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér på';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Synkende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'log_small_teaser';
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'log_small_teaser';
  /* Topptekst: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  /* Bunntekst: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  /* No results behavior: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'Det finnes ingen steder med disse kriteriene.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relasjon: Innhold: Taxonomy terms on node */
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
  /* Felt: Innhold: Tittel */
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
  /* Felt: Innhold: Om stedet */
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
  /* Felt: Innhold: Bilder */
  $handler->display->display_options['fields']['field_place_images']['id'] = 'field_place_images';
  $handler->display->display_options['fields']['field_place_images']['table'] = 'field_data_field_place_images';
  $handler->display->display_options['fields']['field_place_images']['field'] = 'field_place_images';
  $handler->display->display_options['fields']['field_place_images']['label'] = '';
  $handler->display->display_options['fields']['field_place_images']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_place_images']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_place_images']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_place_images']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_place_images']['element_class'] = 'images-inline-1px';
  $handler->display->display_options['fields']['field_place_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_place_images']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_place_images']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_place_images']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_place_images']['hide_alter_empty'] = 1;
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
  $handler->display->display_options['fields']['field_place_images']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_place_images']['separator'] = '';
  $handler->display->display_options['fields']['field_place_images']['field_api_classes'] = 0;
  /* Sorteringskriterium: Innhold: Tidspunkt (field_glob_date) */
  $handler->display->display_options['sorts']['field_glob_date_value']['id'] = 'field_glob_date_value';
  $handler->display->display_options['sorts']['field_glob_date_value']['table'] = 'field_data_field_glob_date';
  $handler->display->display_options['sorts']['field_glob_date_value']['field'] = 'field_glob_date_value';
  $handler->display->display_options['sorts']['field_glob_date_value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_glob_date_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_glob_date_value']['expose']['label'] = 'Tidspunkt';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  /* Filter criterion: Innhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'log' => 'log',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Innhold: Bilder (field_log_images:fid) */
  $handler->display->display_options['filters']['field_log_images_fid']['id'] = 'field_log_images_fid';
  $handler->display->display_options['filters']['field_log_images_fid']['table'] = 'field_data_field_log_images';
  $handler->display->display_options['filters']['field_log_images_fid']['field'] = 'field_log_images_fid';
  $handler->display->display_options['filters']['field_log_images_fid']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Nullstill';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortering';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Synkende';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 1;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'sort' => array(
      'bef_format' => 'bef',
      'combine' => 1,
      'reset' => 0,
      'reset_label' => '',
    ),
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterium: Innhold: Tidspunkt (field_glob_date) */
  $handler->display->display_options['sorts']['field_glob_date_value']['id'] = 'field_glob_date_value';
  $handler->display->display_options['sorts']['field_glob_date_value']['table'] = 'field_data_field_glob_date';
  $handler->display->display_options['sorts']['field_glob_date_value']['field'] = 'field_glob_date_value';
  $handler->display->display_options['sorts']['field_glob_date_value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_glob_date_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_glob_date_value']['expose']['label'] = 'Tidspunkt';
  /* Sorteringskriterium: Innhold: Dybde (field_log_depth) */
  $handler->display->display_options['sorts']['field_log_depth_value']['id'] = 'field_log_depth_value';
  $handler->display->display_options['sorts']['field_log_depth_value']['table'] = 'field_data_field_log_depth';
  $handler->display->display_options['sorts']['field_log_depth_value']['field'] = 'field_log_depth_value';
  $handler->display->display_options['sorts']['field_log_depth_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_log_depth_value']['expose']['label'] = 'Dybde';
  /* Sorteringskriterium: Innhold: Dykketid (field_log_downtime) */
  $handler->display->display_options['sorts']['field_log_downtime_value']['id'] = 'field_log_downtime_value';
  $handler->display->display_options['sorts']['field_log_downtime_value']['table'] = 'field_data_field_log_downtime';
  $handler->display->display_options['sorts']['field_log_downtime_value']['field'] = 'field_log_downtime_value';
  $handler->display->display_options['sorts']['field_log_downtime_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_log_downtime_value']['expose']['label'] = 'Dykketid';
  $handler->display->display_options['path'] = 'dykk';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Dykk';
  $handler->display->display_options['menu']['description'] = 'En oversikt over siste loggførte dykk';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

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

  /* Display: Sites with no images */
  $handler = $view->new_display('attachment', 'Sites with no images', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Andre loggføringer';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Innhold: Tittel */
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
  /* Felt: Innhold: Kommentarer */
  $handler->display->display_options['fields']['field_log_comments']['id'] = 'field_log_comments';
  $handler->display->display_options['fields']['field_log_comments']['table'] = 'field_data_field_log_comments';
  $handler->display->display_options['fields']['field_log_comments']['field'] = 'field_log_comments';
  $handler->display->display_options['fields']['field_log_comments']['label'] = '';
  $handler->display->display_options['fields']['field_log_comments']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_log_comments']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_log_comments']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_log_comments']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_log_comments']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_log_comments']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_log_comments']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_log_comments']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_log_comments']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_log_comments']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_log_comments']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_log_comments']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_log_comments']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_log_comments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_log_comments']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_log_comments']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_log_comments']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_log_comments']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_log_comments']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_log_comments']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['fields']['field_log_comments']['field_api_classes'] = 0;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Innhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'log' => 'log',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Innhold: Bilder (field_log_images:fid) */
  $handler->display->display_options['filters']['field_log_images_fid']['id'] = 'field_log_images_fid';
  $handler->display->display_options['filters']['field_log_images_fid']['table'] = 'field_data_field_log_images';
  $handler->display->display_options['filters']['field_log_images_fid']['field'] = 'field_log_images_fid';
  $handler->display->display_options['filters']['field_log_images_fid']['operator'] = 'empty';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = 1;
  $translatables['dive_list'] = array(
    t('Defaults'),
    t('Siste loggførte'),
    t('mer'),
    t('Bruk'),
    t('Nullstill'),
    t('Sortér på'),
    t('Stigende'),
    t('Synkende'),
    t('Det finnes ingen steder med disse kriteriene.'),
    t('ord'),
    t('<b>[title_2]</b>'),
    t('Tidspunkt'),
    t('Page'),
    t('Sortering'),
    t('Dybde'),
    t('Dykketid'),
    t('Feed'),
    t('Sites with no images'),
    t('Andre loggføringer'),
  );
  $export['dive_list'] = $view;

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
  $handler->display->display_options['title'] = 'Steder verdt å dykke';
  $handler->display->display_options['css_class'] = 'site-list-view';
  $handler->display->display_options['use_more_text'] = 'mer';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Nullstill';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér på';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Synkende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer per side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'divesite_small_teaser';
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'divesite_small_teaser';
  /* Topptekst: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  /* Bunntekst: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  /* No results behavior: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'Det finnes ingen steder med disse kriteriene.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relasjon: Innhold: Taxonomy terms on node */
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
  /* Felt: Innhold: Tittel */
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
  /* Felt: Innhold: Om stedet */
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
  /* Felt: Innhold: Bilder */
  $handler->display->display_options['fields']['field_place_images']['id'] = 'field_place_images';
  $handler->display->display_options['fields']['field_place_images']['table'] = 'field_data_field_place_images';
  $handler->display->display_options['fields']['field_place_images']['field'] = 'field_place_images';
  $handler->display->display_options['fields']['field_place_images']['label'] = '';
  $handler->display->display_options['fields']['field_place_images']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_place_images']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_place_images']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_place_images']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_place_images']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_place_images']['element_class'] = 'images-inline-1px';
  $handler->display->display_options['fields']['field_place_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_place_images']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_place_images']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_place_images']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_place_images']['hide_alter_empty'] = 1;
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
  $handler->display->display_options['fields']['field_place_images']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_place_images']['separator'] = '';
  $handler->display->display_options['fields']['field_place_images']['field_api_classes'] = 0;
  /* Sorteringskriterium: Innhold: Oppdatert dato */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['changed']['expose']['label'] = 'Oppdatert dato';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  /* Filter criterion: Innhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'divesite' => 'divesite',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Innhold: Bilder (field_place_images:fid) */
  $handler->display->display_options['filters']['field_place_images_fid']['id'] = 'field_place_images_fid';
  $handler->display->display_options['filters']['field_place_images_fid']['table'] = 'field_data_field_place_images';
  $handler->display->display_options['filters']['field_place_images_fid']['field'] = 'field_place_images_fid';
  $handler->display->display_options['filters']['field_place_images_fid']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Nullstill';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = '-';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Synkende';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 1;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'sort' => array(
      'bef_format' => 'bef',
      'combine' => 1,
      'reset' => 0,
      'reset_label' => '',
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '22';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer per side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'divesite_small_teaser';
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'divesite_small_teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterium: Innhold: Oppdatert dato */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['changed']['expose']['label'] = 'Oppdatert dato';
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

  /* Display: Sites with no images */
  $handler = $view->new_display('attachment', 'Sites with no images', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Andre dykkesteder';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Innhold: Tittel */
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
  /* Felt: Innhold: Om stedet */
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
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Innhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'divesite' => 'divesite',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Innhold: Bilder (field_place_images:fid) */
  $handler->display->display_options['filters']['field_place_images_fid']['id'] = 'field_place_images_fid';
  $handler->display->display_options['filters']['field_place_images_fid']['table'] = 'field_data_field_place_images';
  $handler->display->display_options['filters']['field_place_images_fid']['field'] = 'field_place_images_fid';
  $handler->display->display_options['filters']['field_place_images_fid']['operator'] = 'empty';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = 1;
  $translatables['site_list'] = array(
    t('Defaults'),
    t('Steder verdt å dykke'),
    t('mer'),
    t('Bruk'),
    t('Nullstill'),
    t('Sortér på'),
    t('Stigende'),
    t('Synkende'),
    t('Elementer per side'),
    t('- Alle -'),
    t('Offset'),
    t('Det finnes ingen steder med disse kriteriene.'),
    t('ord'),
    t('<b>[title_2]</b>'),
    t('Oppdatert dato'),
    t('Page'),
    t('-'),
    t('Feed'),
    t('Sites with no images'),
    t('Andre dykkesteder'),
  );
  $export['site_list'] = $view;

  return $export;
}
