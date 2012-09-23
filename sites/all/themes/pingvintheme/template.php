<?php

/**
 * Implements hook_js_alter().
 */
function pingvintheme_js_alter(&$javascript) {
  // Swap out jQuery to use an updated version of the library.
  $javascript['misc/jquery.js']['data'] = 'https://ajax.googleapis.com/ajax/libs/jquery/1.7.2/jquery.min.js';
}

/**
 * Alter the theme registry information returned from hook_theme().
 */
function pingvintheme_theme_registry_alter(&$theme_registry) {
  foreach ($theme_registry['menu_tree']['preprocess functions'] as $key => $value) {
    if ($value == 'template_preprocess_menu_tree') {
      unset($theme_registry['menu_tree']['preprocess functions'][$key]);
    }
  }
}

/**
 * Implements hook_preprocess().
 */
function pingvintheme_preprocess(&$variables, $hook) {
  static $hooks;
}

/**
 * Implements hook_process().
 */
function pingvintheme_process(&$variables, $hook) {
  static $hooks;
}

function pingvintheme_preprocess_views_exposed_form(&$vars) {
  if (isset($vars['form']['sort_bef_combine'])) {
    $old_str = 'form-radios"';
    $new_str = 'form-radios btn-group" data-toggle="buttons-checkbox"';
    $vars['button'] = str_replace($old_str, $new_str, $vars['button']);

    $old_str = 'form-type-radio ';
    $new_str = 'form-type-radio btn btn-primary ';
    $vars['button'] = str_replace($old_str, $new_str, $vars['button']);
  }
}

// Theme Overrides
function pingvintheme_menu_tree($variables) {
  $attributes = array('class' => array('menu', 'nav'));
  if (isset($variables['attributes'])) {
    $attributes = array_merge_recursive($attributes, $variables['attributes']);
  }

  return '<ul ' . drupal_attributes($attributes). '>' . $variables['tree'] . '</ul>';
}

/**
 * Returns HTML for a breadcrumb trail.
 */
function pingvintheme_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];

  if (!empty($breadcrumb)) {
    // Add the title of the current page to the breadcrumb.
    $breadcrumb[] =  '<span>' . drupal_get_title() . '</span>';

    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';

    $output .= '<div class="breadcrumb">' . implode(' / ', $breadcrumb) . '</div>';
    return $output;
  }
}

/**
 * Formats an element used to toggle the toolbar drawer's visibility.
 */
function pingvintheme_toolbar_toggle($variables) {
  if (!module_exits('shortcut')) {
    return FALSE;
  }
  if ($variables['collapsed']) {
    $toggle_text = t('Show shortcuts');
  }
  else {
    $toggle_text = t('Hide shortcuts');
    $variables['attributes']['class'][] = 'toggle-active';
  }
  return l($toggle_text, 'toolbar/toggle', array('query' => drupal_get_destination(), 'attributes' => array('title' => $toggle_text) + $variables['attributes']));
} 