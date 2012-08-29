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

/**
 * Implements hook_process_html().
 */
function pingvintheme_process_html(&$vars) {
  // When the user stop using the Shortcut module, but has
  // Drupal_toolbar_collapsed cookie set to false, we get an extra
  // empty space at the top, because of the .toolbar-drawer padding
  if (!module_exists('shortcut')) {
    $vars['classes'] = str_replace(' toolbar-drawer', '', $vars['classes']);
  }
}

/**
 * Implements hook_preprocess_page().
 */
function pingvintheme_process_page(&$vars) {
  if (isset($vars['site_name'])) {
    $vars['site_name'] = str_replace('Aller', '<strong>Aller</strong>', $vars['site_name']);
  }

  if (drupal_is_front_page()) {
    if (isset($vars['breadcrumb'])) {
      unset($vars['breadcrumb']);
    }
  }

  if (isset($vars['node']) && $vars['node']->type == 'produktvisning') {
    if (isset($vars['title'])) {
      unset($vars['title']);
    }
  }

  if (module_exists('search_api_page')) {
    $search_block = module_invoke('search_api_page', 'block_view', 'solr_search');
    if (!empty($search_block['content'])) {
      $vars['search'] = $search_block['content'];
    }
  }

  if (module_exists('service_links')) {
    $social_links = module_invoke('service_links', 'block_view', 'service_links_not_node');
    if (!empty($social_links['content'])) {
      $vars['social_links'] = $social_links['content'];
    }
  }
}

/**
 * Implements hook_preprocess_node().
 */
function pingvintheme_preprocess_node(&$vars) {
  if ($vars['type'] == 'produktvisning' && $vars['view_mode'] == 'full') {
    if (isset($vars['content']['group_cart']['field_display_product'])) {
      $submit_btn = &$vars['content']['group_cart']['field_display_product'][0]['submit'];
      $submit_btn['#attributes']['class'][] = 'btn-large';
      $submit_btn['#attributes']['class'][] = 'btn-success';
    }
  }
}

/**
 * Implements hook_process_node().
 */
function pingvintheme_process_node(&$vars) {
  if ($vars['type'] == 'produktvisning' && $vars['view_mode'] == 'full') {
    // Remove empty header.
    if ($vars['header'] == '&nbsp;') {
      unset($vars['header']);
    }
  }
}

/**
 * Preprocesses the rendered tree for theme_menu_tree().
 */
function pingvintheme_preprocess_menu_tree(&$vars) {
  if (is_array($vars['tree'])) {
    reset($vars['tree']);
    $link = current($vars['tree']);
    $menu_name = $link['#original_link']['menu_name'];

    if ($menu_name == 'menu-produkter') {
      $vars['attributes']['class'][] = 'nav-pills';
    }

    $vars['tree'] = $vars['tree']['#children'];
  }
}

function pingvintheme_preprocess_block(&$vars) {
  if ($vars['block']->region == 'footer') {
    // dsm($vars);
    $vars['classes_array'][] = 'span3';
  }
  if ($vars['block']->region == 'header') {
    // dsm($vars);
  }
}

function pingvintheme_preprocess_views_view(&$vars) {
  // Homepage slideshow
  if ($vars['view']->name == 'nodequeue_1') {
    $vars['classes_array'][] = 'carousel';
    $vars['classes_array'][] = 'slide';
  }
}

function pingvintheme_preprocess_views_view_unformatted(&$vars) {
  // Homepage slideshow
  if ($vars['view']->name == 'nodequeue_1') {
    // Set initial active slide
    if (isset($vars['classes_array'][0])) {
      $vars['classes_array'][0] .= ' active';
    }
  }
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

/**
 * Implements hook_form_alter().
 */
function pingvintheme_form_alter(&$form, &$form_state, $form_id) {
  // Add primary buttons for teasers form.
  if (isset($form['#attributes']['class'][0]) && $form['#attributes']['class'][0] == 'commerce-add-to-cart') {
    $form['submit']['#attributes']['class'][] = 'btn-primary';
  }
  if ($form_id == 'search_api_page_search_form_solr_search') {
    $form['#attributes']['class'][] = 'navbar-search';
    $form['#attributes']['class'][] = 'pull-right';

    if (isset($form['keys_2'])) {
      $form['keys_2']['#attributes']['class'][] = 'search-query';
      $form['keys_2']['#attributes']['class'][] = 'span3';
      $form['keys_2']['#attributes']['placeholder'] = t('Search...');
    }
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