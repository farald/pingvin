<?php
/**
 * @file
 * site_discussions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function site_discussions_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function site_discussions_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function site_discussions_node_info() {
  $items = array(
    'discussion' => array(
      'name' => t('Diskusjon'),
      'base' => 'node_content',
      'description' => t('En diskusjon om en entitet.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
