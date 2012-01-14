<?php

/**
 * @file
 * Administration-related functions for GeoNames
 */

/**
 * Admin Settings Page
 */
function geonames_admin_settings() {
  $form['geonames_docs_path'] = array(
    '#type' => 'textfield',
    '#title' => t('Path to GeoNames Documentation'),
    '#description' => t('Where do you want the documentation to reside?'),
    '#default_value' => variable_get('geonames_docs_path', 'geonames/docs'),
  );
  $form['cache'] = array(
    '#type' => 'fieldset',
    '#title' => t('Cache'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['cache']['clear_cache'] = array(
    '#type' => 'markup',
    '#markup' => t('There are currently %num items in the cache. [!clearlink]', array(
      '%num' => db_query("SELECT COUNT(*) FROM {cache_geonames}")->fetchField(),
      '!clearlink' => l(t('Clear cache'), 'admin/config/geonames/clear_cache'),
    )),
  );
  $form['cache']['geonames_cache'] = array(
    '#type' => 'radios',
    '#title' => t('Caching'),
    '#description' => t('Enable unless you have a good reason to disable it.'),
    '#default_value' => variable_get('geonames_cache', TRUE),
    '#options' => array(1 => 'Enabled', 0 => 'Disabled'),
  );
  $form['cache']['geonames_cache_limit'] = array(
    '#type' => 'textfield',
    '#title' => t('Cache lifetime'),
    '#description' => t('Cache items for ... days'),
    '#default_value' => variable_get('geonames_cache_limit', 14),
  );
  $form['cache']['geonames_reveal_cache'] = array(
    '#type' => 'radios',
    '#title' => t('Reveal Cache'),
    '#description' => t('If an item is retrieved from the cache, the request[cached] property will be available in the result object if this switch is set to Yes.'),
    '#default_value' => variable_get('geonames_reveal_cache', TRUE),
    '#options' => array(1 => 'Yes', 0 => 'No'),
  );

  $commercial_collapsed = (variable_get('geonames_commercial_active', FALSE) == TRUE) ? FALSE : TRUE;

  $form['commercial'] = array(
    '#type' => 'fieldset',
    '#title' => t('GeoNames Commercial Webservices'),
    '#collapsible' => TRUE,
    '#collapsed' => $commercial_collapsed
  );
  $form['commercial']['leadingtext'] = array(
    '#type' => 'markup',
    '#prefix' => '<div>',
    '#markup' => t('You should always support developers of quality services. Increased performance is cheap, and you should afford it. Visit the !link page for more information', array('!link' => l(t('GeoNames Commercial Webservices'), 'http://www.geonames.org/professional-webservices.html'))),
    '#suffix' => '</div>'
  );
  if (variable_get('geonames_commercial_active', FALSE) == TRUE) {
    // Show the Status and Credits Counter (ick)
    $since = variable_get('geonames_commercial_credits_since', 0);
    $form['commercial']['counter'] = array(
      '#type' => 'markup',
      '#prefix' => '<div><p>',
      '#markup' => '<b>' . t('Status') . ':</b><br />' . t('You have used @credits credits since %date. [!link]', array(
        '@credits' => variable_get('geonames_commercial_credits', 0),
        '%date' => $since ? format_date($since) : t('Unknown date'),
        '!link' => l(t('Reset'), 'admin/config/geonames/reset_credits'),
      )),
      '#suffix' => '</p></div>'
    );
  }
  $form['commercial']['geonames_commercial_active'] = array(
    '#type' => 'radios',
    '#title' => t('GeoNames Commercial Webservices'),
    '#default_value' => variable_get('geonames_commercial_active', 0),
    '#options' => array(1 => 'Enabled', 0 => 'Disabled'),
  );
  $form['commercial']['geonames_commercial_server'] = array(
    '#type' => 'textfield',
    '#title' => t('URL to Commercial Service Server'),
    '#description' => 'Example: http://ws.geonames.net - without the trailing slash',
    '#default_value' => variable_get('geonames_commercial_server', 'http://ws.geonames.net'),
  );
  $form['commercial']['geonames_commercial_username'] = array(
    '#type' => 'textfield',
    '#title' => t('Username'),
    '#default_value' => variable_get('geonames_commercial_username', ''),
  );

  $updated = variable_get('geonames_metadata_updated', 0);
  $values = array(
    '!numcountries' => db_query('SELECT COUNT(*) FROM {geonames_countryinfo}')->fetchField(),
    '!numfeaturecodes' => db_query('SELECT COUNT(*) FROM {geonames_featurecodes}')->fetchField(),
    '!updated' => $updated ? t('Last run !interval ago', array('!interval' => format_interval(REQUEST_TIME - $updated))) : t('Never updated'),
  );

  // The state and title of the fieldset depend on whether the metadata is complete.
  if ($values['!numcountries'] == 0 || $values['!numfeaturecodes'] == 0) {
    $form['metadata'] = array(
      '#type' => 'fieldset',
      '#title' => t('Metadata - Incomplete'),
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
    );
  }
  else {
    $form['metadata'] = array(
      '#type' => 'fieldset',
      '#title' => t('Metadata'),
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
    );
  }

  $form['metadata']['metadata_status'] = array(
    '#type' => 'markup',
    '#prefix' => '<div>',
    '#markup' => t('There are currently !numcountries countries and !numfeaturecodes feature codes in the local tables. !updated.', $values),
    '#suffix' => '</div>',
  );
  $form['metadata']['metadata_refresh'] = array(
    '#type' => 'button',
    '#value' => t('Refresh metadata from geonames.org'),
    '#executes_submit_callback' => TRUE,
    '#submit' => array('geonames_metadata_update'),
  );

  $form['licencing'] = array(
    '#type' => 'markup',
    '#prefix' => '<div>',
    '#markup' => t('Note: You must give credit to !geonameslink if you are not using the commercial services, for example by including a link to !theirsitelink on your pages. The GeoNames geographical database is released under the !cclink.', array(
      '!geonameslink' => l(t('GeoNames'), 'http://www.geonames.org/'),
      '!theirsitelink' => l(t('their site'), 'http://www.geonames.org/'), // should be translated
      '!cclink' =>  l(t('Creative Commons Attribution Licence 3.0'), 'http://creativecommons.org/licenses/by/3.0/'),
    )),
    '#suffix' => '</div>'
  );

  return system_settings_form($form);
}

/**
 * Admin Settings Page : Validation
 */
function geonames_admin_settings_validate($form, &$form_state) {
  $geonames_commercial_active = $form_state['values']['geonames_commercial_active'];
  $geonames_commercial_server = $form_state['values']['geonames_commercial_server'];
  $geonames_commercial_username = $form_state['values']['geonames_commercial_username'];

  // have Commercial Services Changed?
  $c = $form['commercial'];
  $com_changed = $geonames_commercial_active != $c['geonames_commercial_active']['#default_value'];
  $com_changed = $com_changed || ($geonames_commercial_server != $c['geonames_commercial_server']['#default_value']);
  $com_changed = $com_changed || ($geonames_commercial_username != $c['geonames_commercial_username']['#default_value']);

  // if active and changed, validate
  if ($geonames_commercial_active && $com_changed) {

    // verify that a username is set
    if ($geonames_commercial_username == '') {
      form_set_error('geonames_commercial_username', t('Commercial Webservices: You must provide a username.'));
    }
    else {
      // verify if the service works
      // Test using the search service
      $url = $geonames_commercial_server . '/search?username=' . $geonames_commercial_username . '&name=nydalen';
      $data = drupal_http_request($url);
      if ($data->code != '200') {
        form_set_error('geonames_commercial_server', t('There is a problem with the response from the URL you have specified.') . '<br />' . t('The server returned errorcode %code: %error', array('%code' => $data->code, '%error' => $data->error)));
      }
      else {
        $xml = new SimpleXMLElement($data->data);
        if ($xml->status['message']) {
          form_set_error('geonames_commercial_server', t('GeoNames Service Response: %message (code: %code)', array('%message' => $xml->status['message'], '%code' => $xml->status['value'])));
        }
        else {
          geonames_credits_pay(1); // use one credit! ;)
          if ($xml->geoname[0]->name == 'Nydalen') {
            drupal_set_message(t('Your account has been successfully tested and is properly configured!'));
          }
          else {
            form_set_error('', t('Unknown Error'));
          }
        }
      }
    }
  }
}

/**
 * Clear the Results and Data Cache.
 */
function geonames_cache_clear($adminpage = TRUE) {
  cache_clear_all(NULL, 'cache_geonames');
  if ($adminpage) {
    drupal_set_message(t('Cache cleared.'));
    drupal_goto('admin/config/geonames');
  }
}

/**
 * Commercial Service: Reset Credits Counter
 */
function geonames_credits_reset($adminpage = TRUE) {
  variable_set('geonames_commercial_credits', 0);
  variable_set('geonames_commercial_credits_since', REQUEST_TIME);
  if ($adminpage) {
    drupal_set_message(t('Credits and time reset.'));
    drupal_goto('admin/config/geonames');
  }
}

