<?php
/**
 * @file
 * Plugin class to handle the filters using Views API.
 */

class views_filters_selective_exposed_form_plugin extends views_plugin_exposed_form_input_required {

  function option_definition() {
    $options = parent::option_definition();
    
    $options['vfs'] = array(
      'default' => array(),
    );
    return $options;
  }
  
  function get_display_exposed_filters() {
    $filters = array();
    foreach ($this->display->handler->get_handlers('filter') as $filter) {
      if ($filter->options['exposed']) {
        $filters[$filter->options['expose']['identifier']] = $filter;
      }
    }
    return $filters;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    // Go through each filter and add the options to control the behavior.	
    $filters = $this->get_display_exposed_filters();
    $form_type = isset($form['#type']) ? $form['#type'] : NULL;
    foreach ($filters as $key => $filter) {
      $vfs_options[$key] = $this->options_form_construct($key, $filter, $form_type);
    }
    $form['vfs'] = $vfs_options;
    $form['text_input_required']['#description'] = t('Text to display instead of 
      results until the user selects and applies an exposed filter. If left blank
      it will be ignored.');
  }
  function exposed_form_alter(&$form, &$form_state) {
    parent::exposed_form_alter($form, $form_state);
    // No recursion!
    static $guard = FALSE;
    if ($guard) return;
    $guard = TRUE;
    if ($this->exposed_filter_applied()) {

      // we should do our tasks after a form has been submmitted
      // therefore we TRUST that all information is now in
      // $form_state['views'] & $form_state['display']
      // @see function views_exposed_form
      // @see views_exposed_form_submit
      // Things to note here is that we have 
      // the real view object (and not a copy) and
      // by the time this function is called the view object 
      // was completely updated.
      $view = $form_state['view'];
      $display = $form_state['display'];
      // Clone the view
      $view_clone = $view->clone_view();

      // cone_view returns a fresh view, we need to set some things
      // ...fallowing the spirit of views_ui_preview 
      $view_clone->set_exposed_input($view->exposed_input);
      $view_clone->set_display($view->current_display);
      $view_clone->set_arguments($view->args);

      // @todo write code here to avoid grouping
      // No distinct
      $view_clone->display_handler->set_option('distinct', FALSE);

      // No caching!
      $view_clone->display_handler->set_option('cache',
        array('type' => 'none')
      );
          
      // We want the results all at once.
      $view_clone->set_items_per_page(0);
                    
      // ...executing to gather results.
      $view_clone->preview();
          
      // Construct array to pass to vfs handlers
      $base_ids = array();
      foreach ($view_clone->result as $result) {
        $base_ids[] = $result->{$view_clone->base_field};
      }
      // Set the $empty_results property, to be need it in case
      // no results & the filters must still be shown.
      $this->set_empty_results(empty($base_ids));
      
      // Only call the handlers for the selected filters
      // Remember they have to return $options suitable
      // to assign to the FAPI '#options'
      foreach ($view->filter as $filter) {
        if (!$filter->options['exposed']) {
          // Skip unexposed filters.
          continue;
        }

        $id = $filter->options['expose']['identifier'];
        // Form element is designated by the element ID which is user-configurable.
        $filter_element = &$form[$id];
        if ((isset($this->options['vfs'][$id]['vfs_active']) && $this->options['vfs'][$id]['vfs_active'] == 1)
          && in_array($filter_element['#type'], array('checkboxes', 'radios', 'select', 'tableselect'))) {
     
          $function = $this->get_reducer_handler($filter);
          if (function_exists($function)) { 
            $options = $function($filter, $filter_element['#options'], $base_ids);
            if (isset($options)) {
              
              // Fix the selected item(s) 
              if (empty($options)) {
                if (isset($this->options['vfs'][$id]['vfs_hide_empty']) && 
                  $this->options['vfs'][$id]['vfs_hide_empty'] == 1) {
                    // use the 'access hack'
                    // otherwise some validate functions can complain.
                    $filter_element['#access'] = FALSE;
                }
                else {
                  $filter_element['#disabled'] = TRUE;
                                    
                }
              }
              $filter_element['#options'] = $options;
            }
            else {
              drupal_set_message(t('The filter selective handler for @filter 
                                    doesn\'t return a valid result.', 
                                    array('@filter' => $filter->options['expose']['label'])), 'error');
            }
          }
          else {
            drupal_set_message(t('No filter selective handler found for filter @filter.',
                                array('@filter' => $filter->options['expose']['label'])), 'error');
          }
        }
      }
    }
    $guard = FALSE;
  }
  private function options_form_construct($key, $filter, $form_type) {
    $form = array();
    // Don't use $filter->definition['title'] as label, if the filters are from
    // the same type they are going to read the same in the UI.
    // Use instead the filter's options
    $label = (isset($filter->options['ui_name']) && $filter->options['ui_name'] != '')
                  ? $filter->options['ui_name'] : (isset($filter->options['expose']['label']) && 
                  !empty($filter->options['expose']['label']) ? $filter->options['expose']['label'] : 
                  t('No label found'));

    $label = '"' . $filter->definition['group'] . ': ' . $label . '"';
  
    $options = (isset($this->options['vfs'][$key])) ? $this->options['vfs'][$key] : array();

    $dom_id = 'edit-exposed-form-options-' . 
              (isset($form_type) && $form_type == 'fieldset' ? 'views-filters-selective-' : '') . 
              'vfs-' . str_replace('_', '-', $key) . '-vfs-active';
    $form['vfs_active'] = array(
      '#type' => 'checkbox',
      '#title' => t('Limit !label values to result set', array('!label' => $label)),
      '#default_value' => !empty($options) ? $options['vfs_active'] : 0,
      '#description' => t(
        'If checked, the items presented to the user will be further restricted according to
        the values of all active exposed filters (i.e., those with selected values).'
      ),
    );
    // @todo Check if it's enough with $this->view->current_display
    // in views module there are example that use like beneath (specially when dealing with forms)
    $display = isset($this->view->display[$this->view->current_display]->display_options['fields']) ? 
    $this->view->display[$this->view->current_display] : $this->view->display['default'];
      
    if (!empty($display->display_options['fields'])) {
      foreach ($display->display_options['fields'] as $field_id => $field) {
        $fields["field:$field_id"] = t('!field', array('!field' => (empty($field['label']) ? $field_id : $field['label'])));
      }
    }
    $form['vfs_hide_empty'] = array(
      '#type' => 'checkbox',
      '#title' => t('Hide if empty'),
      '#default_value' => !empty($options) ? $options['vfs_hide_empty'] : 0,
      '#description' => t(
        'Hide the exposed filter if no values apply to the current view results.'
      ),
      '#dependency' => array(
        $dom_id => array(1),
      ),
    );
    return $form;
  }
    
  function get_reducer_handler($filter) {
    static $handlers = NULL;
    if (empty($handlers)) {
      $handlers = module_invoke_all('views_filters_selective_handler');
    }
    if (isset($handlers[get_class($filter)])) {
      $function = $handlers[get_class($filter)];
      if (function_exists($function)) {
        return $function;
      }
    }
    return;
  }
    
  function query() {
    // case 1: First run
    if (!$this->exposed_filter_applied()) {
      // Ignore the _input_required.
      views_plugin_exposed_form::query();
    }
    elseif ($this->get_empty_results() && empty($this->options['text_input_required'])) {
      // We return with no query; this will force the empty text.
      $this->view->built = TRUE;
      $this->view->executed = TRUE;
      $this->view->result = array();
    }
    else {
      parent::query();
    }
  }
  private $empty_results;
  function get_empty_results() {
    return $this->empty_results;
  }
  function set_empty_results($e_results = TRUE) {
    $this->empty_results = $e_results;
  }
}
