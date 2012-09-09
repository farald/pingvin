<?php
/**
 * @file
 * site_discussions.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function site_discussions_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'discussion_full_node';
  $ds_view_mode->label = 'Discussion full node';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['discussion_full_node'] = $ds_view_mode;

  return $export;
}
