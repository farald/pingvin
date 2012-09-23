<?php
/**
 * @file
 * site_drawings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function site_drawings_ctools_plugin_api() {
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
function site_drawings_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function site_drawings_node_info() {
  $items = array(
    'drawing' => array(
      'name' => t('Tegning'),
      'base' => 'node_content',
      'description' => t('En tegning av et dykkested. '),
      'has_title' => '1',
      'title_label' => t('Tittel'),
      'help' => t('Du kan bruke andre tegninger, og bygge på dem.'),
    ),
  );
  return $items;
}
