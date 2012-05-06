<?php
/**
 * @file
 * Integration with Views.
 */

/**
 * Implementation of hook_views_plugins()
 */
function views_filters_selective_views_plugins() {
  return array(
    'exposed_form' => array(
      'views_filters_selective' => array(
        'title' => t('Selective Exposed Filters'),
        'help topic' => t('Restrict exposed filter values to those present in the result set.'),
        'handler' => 'views_filters_selective_exposed_form_plugin',
        'uses options' => TRUE,
        'parent' => 'basic',
      ),
    ),
  );
}

