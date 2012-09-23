<?php
/**
 * @file
 * node_displays.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function node_displays_field_default_fields() {
  $fields = array();

  // Exported field: 'node-club-field_club_about'.
  $fields['node-club-field_club_about'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_club_about',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'global_block_settings' => '1',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'club',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Gi litt generell informasjon om klubben. Mer er generelt bedre enn mindre, da denne siden praktisk talt fungerer som en reklameplakat for klubben.',
      'display' => array(
        'club_full_node' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'club_large_teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => '200',
          ),
          'type' => 'text_trimmed',
          'weight' => '2',
        ),
        'club_small_teaser' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_club_about',
      'label' => 'Om klubben',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '-2',
      ),
    ),
  );

  // Exported field: 'node-club-field_club_address'.
  $fields['node-club-field_club_address'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_club_address',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'global_block_settings' => '1',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'club',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Klubbens gateadresse, hvis det finnes en.',
      'display' => array(
        'club_full_node' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
        'club_large_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
        'club_small_teaser' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_club_address',
      'label' => 'Gateadresse',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-club-field_club_docs'.
  $fields['node-club-field_club_docs'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_club_docs',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'global_block_settings' => '1',
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'file',
      'settings' => array(
        'display_default' => 0,
        'display_field' => 0,
        'uri_scheme' => 'private',
      ),
      'translatable' => '1',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'club',
      'deleted' => '0',
      'description' => 'Her kan du legge inn påmeldingsskjemaer, lederinstrukser og annet som man ønsker skal være tilgjengelig.',
      'display' => array(
        'club_full_node' => array(
          'label' => 'hidden',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '3',
        ),
        'club_large_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
        'club_small_teaser' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '8',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '8',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_club_docs',
      'label' => 'Dokumenter',
      'required' => 0,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => 'user-[current-user:uid]/docs-club',
        'file_extensions' => 'txt',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'file',
        'settings' => array(
          'insert' => 0,
          'insert_class' => '',
          'insert_default' => array(
            0 => 'auto',
          ),
          'insert_styles' => array(
            0 => 'auto',
          ),
          'insert_width' => '',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_generic',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-club-field_club_image'.
  $fields['node-club-field_club_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_club_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'global_block_settings' => '1',
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => '59',
        'uri_scheme' => 'public',
      ),
      'translatable' => '1',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'club',
      'deleted' => '0',
      'description' => 'Deres klubblogo. Bør være en logo på hvit eller gjennomsiktig bakgrunn.',
      'display' => array(
        'club_full_node' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '1',
        ),
        'club_large_teaser' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => 'content',
            'image_style' => 'thumbnail',
          ),
          'type' => 'image',
          'weight' => '0',
        ),
        'club_small_teaser' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '3',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '3',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_club_image',
      'label' => 'Logo',
      'required' => 1,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '1000x1000',
        'min_resolution' => '50x50',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'insert' => 0,
          'insert_class' => '',
          'insert_default' => array(
            0 => 'auto',
          ),
          'insert_styles' => array(
            0 => 'auto',
          ),
          'insert_width' => '',
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'bar',
        ),
        'type' => 'image_image',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-club-field_club_mail_list'.
  $fields['node-club-field_club_mail_list'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_club_mail_list',
      'foreign keys' => array(),
      'global_block_settings' => '1',
      'indexes' => array(),
      'locked' => '0',
      'module' => 'email',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'email',
    ),
    'field_instance' => array(
      'bundle' => 'club',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Klubbens mailingliste, hvis den har noen. Hvis ikke, skriv inn en epost som klubben kan kontaktes på.',
      'display' => array(
        'club_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
        'club_large_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '8',
        ),
        'club_small_teaser' => array(
          'label' => 'above',
          'module' => 'email',
          'settings' => array(),
          'type' => 'email_default',
          'weight' => '1',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'email',
          'settings' => array(),
          'type' => 'email_default',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_club_mail_list',
      'label' => 'Mailingliste',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'email',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'email_textfield',
        'weight' => '-3',
      ),
    ),
  );

  // Exported field: 'node-club-field_club_members'.
  $fields['node-club-field_club_members'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_club_members',
      'foreign keys' => array(),
      'global_block_settings' => '1',
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'club',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'club_full_node' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => '4',
        ),
        'club_large_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'club_small_teaser' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => '5',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => '5',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_club_members',
      'label' => 'Antall medlemmer',
      'required' => 0,
      'settings' => array(
        'max' => '500',
        'min' => '0',
        'prefix' => '',
        'suffix' => ' medlemmer',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-club-field_map_country_1'.
  $fields['node-club-field_map_country_1'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_map_country_1',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'global_block_settings' => '1',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'club',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'club_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'club_large_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'club_small_teaser' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '11',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '11',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_map_country_1',
      'label' => 'Land',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '13',
      ),
    ),
  );

  // Exported field: 'node-club-field_map_name_browser'.
  $fields['node-club-field_map_name_browser'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '2',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_map_name_browser',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'global_block_settings' => '1',
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'countries',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '1',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'club',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Denne skal være avslått for brukeren, så denne skal man ikke kunne se. Ser du den, gi beskjed til administrator.',
      'display' => array(
        'club_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
        'club_large_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
        'club_small_teaser' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '7',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '7',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_map_name_browser',
      'label' => 'Landshiearki',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'node-club-field_map_point'.
  $fields['node-club-field_map_point'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_map_point',
      'foreign keys' => array(),
      'global_block_settings' => '1',
      'indexes' => array(
        'lid' => array(
          0 => 'lid',
        ),
      ),
      'locked' => '0',
      'module' => 'location_cck',
      'settings' => array(
        'gmap_macro' => '[gmap overlay=tile/1.0:http://opencache.statkart.no/gatekeeper/gk/gk.open_gmaps?layers=sjo_hovedkart2&zoom={Z}&x={X}&y={Y} | zoom=3 |center=44.715513732021336,-40.60546875 |width=600px |height=400px |control=Small |type=Map]',
        'gmap_marker' => 'drupal',
        'location_settings' => array(
          'display' => array(
            'hide' => array(
              'additional' => 'additional',
              'city' => 'city',
              'coords' => 'coords',
              'country' => 'country',
              'country_name' => 'country_name',
              'locpick' => 'locpick',
              'map_link' => 'map_link',
              'name' => 'name',
              'postal_code' => 'postal_code',
              'province' => 'province',
              'province_name' => 'province_name',
              'street' => 'street',
            ),
          ),
          'form' => array(
            'fields' => array(
              'additional' => array(
                'collect' => '0',
                'default' => '',
                'weight' => '6',
              ),
              'city' => array(
                'collect' => '0',
                'default' => '',
                'weight' => '8',
              ),
              'country' => array(
                'collect' => '4',
                'default' => 'no',
                'weight' => '14',
              ),
              'locpick' => array(
                'collect' => '2',
                'weight' => '20',
              ),
              'name' => array(
                'collect' => '0',
                'default' => '',
                'weight' => '2',
              ),
              'postal_code' => array(
                'collect' => '0',
                'default' => '',
                'weight' => '12',
              ),
              'province' => array(
                'collect' => '0',
                'default' => '',
                'weight' => '10',
              ),
              'street' => array(
                'collect' => '0',
                'default' => '',
                'weight' => '4',
              ),
            ),
          ),
        ),
      ),
      'translatable' => '1',
      'type' => 'location',
    ),
    'field_instance' => array(
      'bundle' => 'club',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Klubbens lokalitet, vanligvis lokaliteten til klubbhuset.',
      'display' => array(
        'club_full_node' => array(
          'label' => 'hidden',
          'module' => 'location_cck',
          'settings' => array(),
          'type' => 'location_default',
          'weight' => '2',
        ),
        'club_large_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
        'club_small_teaser' => array(
          'label' => 'above',
          'module' => 'location_cck',
          'settings' => array(),
          'type' => 'location_default',
          'weight' => '6',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'location_cck',
          'settings' => array(),
          'type' => 'location_default',
          'weight' => '6',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_map_point',
      'label' => 'Lokalitet',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-club-field_map_region_1'.
  $fields['node-club-field_map_region_1'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_map_region_1',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'global_block_settings' => '1',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'club',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'club_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
        'club_large_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
        'club_small_teaser' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '10',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '10',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_map_region_1',
      'label' => 'Region',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'node-club-field_place_radius'.
  $fields['node-club-field_place_radius'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_place_radius',
      'foreign keys' => array(),
      'global_block_settings' => '1',
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'club',
      'default_value' => array(
        0 => array(
          'value' => '100000',
        ),
      ),
      'deleted' => '0',
      'description' => 'Den statistiske radius for dykkesteder av interesse. NB: Måles i meter.',
      'display' => array(
        'club_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'club_large_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'club_small_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => '13',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_place_radius',
      'label' => 'Statistisk radius',
      'required' => 1,
      'settings' => array(
        'max' => '100000',
        'min' => '1',
        'prefix' => '',
        'suffix' => ' Meter',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '32',
      ),
    ),
  );

  // Exported field: 'node-club-group_group'.
  $fields['node-club-group_group'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'group_group',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'no_ui' => TRUE,
      'settings' => array(
        'allowed_values' => array(
          0 => 'Not a group type',
          1 => 'Group type',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'club',
      'default_value' => array(
        0 => array(
          'value' => 1,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'club_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
        'club_large_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
        'club_small_teaser' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '12',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '12',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'group_group',
      'label' => 'Group type',
      'required' => TRUE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'view modes' => array(
        'full' => array(
          'custom settings' => FALSE,
          'label' => 'Full',
          'type' => 'og_group_subscribe',
        ),
        'teaser' => array(
          'custom settings' => FALSE,
          'label' => 'Teaser',
          'type' => 'og_group_subscribe',
        ),
      ),
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '14',
      ),
      'widget_type' => 'options_select',
    ),
  );

  // Exported field: 'node-divesite-field_map_country'.
  $fields['node-divesite-field_map_country'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_map_country',
      'foreign keys' => array(),
      'global_block_settings' => '1',
      'indexes' => array(),
      'locked' => '0',
      'module' => 'computed_field',
      'settings' => array(
        'code' => '	$query = array(\'lat\' => $entity->field_map_point[und][0][locpick][user_latitude], \'lng\' => $entity->field_map_point[und][0][locpick][user_longitude], \'radius\' => 100);
	$me = array();
	$result = geonames_query(\'countrysubdivision\', $query);
	if (!empty($result->results)) {
  		foreach ($result->results as $place) {
     		$me[] = $place[countryname];
  			}
	} elseif ($node->locations[0][\'delete_location\'] == 1) {$me[0] = "Location empty";
	} else {$me[0] = "International";};
	
$entity_field[0][\'value\'] = "";
$entity_field[0][\'value\'] = $me[0];',
        'database' => array(
          'data_default' => '',
          'data_index' => 0,
          'data_length' => '32',
          'data_not_NULL' => 0,
          'data_precision' => '10',
          'data_scale' => '2',
          'data_size' => 'normal',
          'data_type' => 'varchar',
        ),
        'display_format' => '$display_output = $entity_field_item[\'value\'];',
        'store' => 1,
      ),
      'translatable' => '1',
      'type' => 'computed',
    ),
    'field_instance' => array(
      'bundle' => 'divesite',
      'deleted' => '0',
      'description' => 'Not to be shown for the current user.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
        'divesite_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
        'divesite_large_teaser' => array(
          'label' => 'above',
          'module' => 'computed_field',
          'settings' => array(),
          'type' => 'computed_field_plain',
          'weight' => '4',
        ),
        'divesite_small_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'computed_field',
          'settings' => array(),
          'type' => 'computed_field_plain',
          'weight' => '4',
        ),
        'log_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
        'log_large_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
        'log_small_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
        'map_bubble_view' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_map_country',
      'label' => 'Land',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'computed_field',
        'settings' => array(),
        'type' => 'computed',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'node-divesite-field_map_country_1'.
  $fields['node-divesite-field_map_country_1'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_map_country_1',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'global_block_settings' => '1',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'divesite',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Skal ikke vises.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'divesite_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
        'divesite_large_teaser' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '7',
        ),
        'divesite_small_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '7',
        ),
        'log_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
        'log_large_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
        'log_small_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
        'map_bubble_view' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_map_country_1',
      'label' => 'Land',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => NULL,
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'field_extrawidgets_hidden',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'node-divesite-field_map_geofield'.
  $fields['node-divesite-field_map_geofield'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_map_geofield',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'geofield',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'geofield',
    ),
    'field_instance' => array(
      'bundle' => 'divesite',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Mest mulig nøyaktig kartpunkt.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'geofield',
          'settings' => array(
            'data' => 'full',
          ),
          'type' => 'geofield_wkt',
          'weight' => 17,
        ),
        'divesite_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'divesite_large_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'divesite_small_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'map_bubble_view' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_map_geofield',
      'label' => 'Koordinater (geo)',
      'required' => 0,
      'settings' => array(
        'local_solr' => array(
          'enabled' => FALSE,
          'lat_field' => 'lat',
          'lng_field' => 'lng',
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'geofield',
        'settings' => array(
          'data_storage' => 'single',
          'openlayers_map' => 'geofield_widget_map',
        ),
        'type' => 'geofield_openlayers',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-divesite-field_map_marker'.
  $fields['node-divesite-field_map_marker'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_map_marker',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'global_block_settings' => '1',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '100',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'divesite',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
        'divesite_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '17',
        ),
        'divesite_large_teaser' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '8',
        ),
        'divesite_small_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '17',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '8',
        ),
        'log_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '17',
        ),
        'log_large_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '17',
        ),
        'log_small_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '17',
        ),
        'map_bubble_view' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_map_marker',
      'label' => 'Marker',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => NULL,
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'field_extrawidgets_hidden',
        'weight' => '16',
      ),
    ),
  );

  // Exported field: 'node-divesite-field_map_name_browser'.
  $fields['node-divesite-field_map_name_browser'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '2',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_map_name_browser',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'global_block_settings' => '1',
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'countries',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '1',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'divesite',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '2',
        ),
        'divesite_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
        'divesite_large_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'divesite_small_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'log_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
        'log_large_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
        'log_small_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
        'map_bubble_view' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '8',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_map_name_browser',
      'label' => 'Sted',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => NULL,
        'settings' => array(),
        'type' => 'field_extrawidgets_hidden',
        'weight' => '15',
      ),
    ),
  );

  // Exported field: 'node-divesite-field_map_point'.
  $fields['node-divesite-field_map_point'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_map_point',
      'foreign keys' => array(),
      'global_block_settings' => '1',
      'indexes' => array(
        'lid' => array(
          0 => 'lid',
        ),
      ),
      'locked' => '0',
      'module' => 'location_cck',
      'settings' => array(
        'gmap_macro' => '[gmap overlay=tile/1.0:http://opencache.statkart.no/gatekeeper/gk/gk.open_gmaps?layers=sjo_hovedkart2&zoom={Z}&x={X}&y={Y} | zoom=3 |center=44.715513732021336,-40.60546875 |width=600px |height=400px |control=Small |type=Map]',
        'gmap_marker' => 'drupal',
        'location_settings' => array(
          'display' => array(
            'hide' => array(
              'additional' => 'additional',
              'city' => 'city',
              'coords' => 'coords',
              'country' => 'country',
              'country_name' => 'country_name',
              'locpick' => 'locpick',
              'map_link' => 'map_link',
              'name' => 'name',
              'postal_code' => 'postal_code',
              'province' => 'province',
              'province_name' => 'province_name',
              'street' => 'street',
            ),
          ),
          'form' => array(
            'fields' => array(
              'additional' => array(
                'collect' => '0',
                'default' => '',
                'weight' => '6',
              ),
              'city' => array(
                'collect' => '0',
                'default' => '',
                'weight' => '8',
              ),
              'country' => array(
                'collect' => '4',
                'default' => 'no',
                'weight' => '14',
              ),
              'locpick' => array(
                'collect' => '2',
                'weight' => '20',
              ),
              'name' => array(
                'collect' => '0',
                'default' => '',
                'weight' => '2',
              ),
              'postal_code' => array(
                'collect' => '0',
                'default' => '',
                'weight' => '12',
              ),
              'province' => array(
                'collect' => '0',
                'default' => '',
                'weight' => '10',
              ),
              'street' => array(
                'collect' => '0',
                'default' => '',
                'weight' => '4',
              ),
            ),
          ),
        ),
      ),
      'translatable' => '1',
      'type' => 'location',
    ),
    'field_instance' => array(
      'bundle' => 'divesite',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
        'divesite_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'divesite_large_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
        'divesite_small_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
        'log_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
        'log_large_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
        'log_small_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
        'map_bubble_view' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_map_point',
      'label' => 'Kart',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => NULL,
        'settings' => array(),
        'type' => 'field_extrawidgets_hidden',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-divesite-field_map_region'.
  $fields['node-divesite-field_map_region'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_map_region',
      'foreign keys' => array(),
      'global_block_settings' => '1',
      'indexes' => array(),
      'locked' => '0',
      'module' => 'computed_field',
      'settings' => array(
        'code' => '$query = array(\'lat\' => $entity->field_map_point[und][0][locpick][user_latitude], \'lng\' => $entity->field_map_point[und][0][locpick][user_longitude], \'radius\' => 100 ,\'maxrows\'=>1);
	$me = array();
	$result = geonames_query(\'countrysubdivision\', $query);
	if (!empty($result->results)) {
  		foreach ($result->results as $place) {
     		$me[] = $place[adminname1];
  			}
	} elseif ($node->locations[0][\'delete_location\'] == 1) {$me[0] = "Location empty";
	} else {$me[0] = "Unknown region";};
	
$entity_field[0][\'value\'] = "";
$entity_field[0][\'value\'] = $me[0];',
        'database' => array(
          'data_default' => '',
          'data_index' => 0,
          'data_length' => '32',
          'data_not_NULL' => 0,
          'data_precision' => '10',
          'data_scale' => '2',
          'data_size' => 'normal',
          'data_type' => 'varchar',
        ),
        'display_format' => '$display_output = $entity_field_item[\'value\'];',
        'store' => 1,
      ),
      'translatable' => '1',
      'type' => 'computed',
    ),
    'field_instance' => array(
      'bundle' => 'divesite',
      'deleted' => '0',
      'description' => 'Not to be shown publicly',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
        'divesite_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
        'divesite_large_teaser' => array(
          'label' => 'above',
          'module' => 'computed_field',
          'settings' => array(),
          'type' => 'computed_field_plain',
          'weight' => '5',
        ),
        'divesite_small_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'computed_field',
          'settings' => array(),
          'type' => 'computed_field_plain',
          'weight' => '5',
        ),
        'log_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
        'log_large_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
        'log_small_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
        'map_bubble_view' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_map_region',
      'label' => 'Region',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'computed_field',
        'settings' => array(),
        'type' => 'computed',
        'weight' => '14',
      ),
    ),
  );

  // Exported field: 'node-divesite-field_map_region_1'.
  $fields['node-divesite-field_map_region_1'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_map_region_1',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'global_block_settings' => '1',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'divesite',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Skal ikke vises.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
        'divesite_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'divesite_large_teaser' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '6',
        ),
        'divesite_small_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '6',
        ),
        'log_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'log_large_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'log_small_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'map_bubble_view' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_map_region_1',
      'label' => 'Region',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => NULL,
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'field_extrawidgets_hidden',
        'weight' => '13',
      ),
    ),
  );

  // Exported field: 'node-divesite-field_place_images'.
  $fields['node-divesite-field_place_images'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_place_images',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'global_block_settings' => '1',
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '1',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'divesite',
      'deleted' => '0',
      'description' => 'BIlder hjelper til å identifisere stedet. Ta gjerne noen oversiktsbilder neste gang du er der, det holder med overflatebilder selv om det er gøy med undervannsbilder også. 
Undervannsbilder har vi nok av i loggene.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'galleria',
          'settings' => array(
            'alt_field' => '',
            'optionset' => 'default',
            'referenced_fields' => array(),
            'title_field' => '',
          ),
          'type' => 'galleria',
          'weight' => '0',
        ),
        'divesite_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
        'divesite_large_teaser' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '3',
        ),
        'divesite_small_teaser' => array(
          'label' => 'hidden',
          'module' => 'field_slideshow',
          'settings' => array(
            'slideshow_caption' => '',
            'slideshow_caption_link' => 'content',
            'slideshow_carousel_circular' => 0,
            'slideshow_carousel_image_style' => '',
            'slideshow_carousel_scroll' => '1',
            'slideshow_carousel_speed' => '500',
            'slideshow_carousel_vertical' => 0,
            'slideshow_carousel_visible' => '3',
            'slideshow_colorbox_image_style' => '',
            'slideshow_colorbox_slideshow' => '',
            'slideshow_colorbox_slideshow_speed' => '4000',
            'slideshow_colorbox_speed' => '350',
            'slideshow_colorbox_transition' => 'elastic',
            'slideshow_controls' => 0,
            'slideshow_field_collection_image' => '',
            'slideshow_fx' => 'fade',
            'slideshow_image_style' => 'four_x_four',
            'slideshow_link' => 'content',
            'slideshow_order' => '',
            'slideshow_pager' => '',
            'slideshow_pager_image_style' => '',
            'slideshow_pause' => 0,
            'slideshow_speed' => '1000',
            'slideshow_timeout' => '4000',
          ),
          'type' => 'slideshow',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'colorbox',
          'settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_image_style' => '',
            'colorbox_node_style' => 'thumbnail',
          ),
          'type' => 'colorbox',
          'weight' => '0',
        ),
        'log_full_node' => array(
          'label' => 'above',
          'module' => 'galleria',
          'settings' => array(
            'alt_field' => '',
            'optionset' => 'default',
            'referenced_fields' => array(),
            'title_field' => '',
          ),
          'type' => 'galleria',
          'weight' => '0',
        ),
        'log_large_teaser' => array(
          'label' => 'above',
          'module' => 'galleria',
          'settings' => array(
            'alt_field' => '',
            'optionset' => 'default',
            'referenced_fields' => array(),
            'title_field' => '',
          ),
          'type' => 'galleria',
          'weight' => '0',
        ),
        'log_small_teaser' => array(
          'label' => 'above',
          'module' => 'galleria',
          'settings' => array(
            'alt_field' => '',
            'optionset' => 'default',
            'referenced_fields' => array(),
            'title_field' => '',
          ),
          'type' => 'galleria',
          'weight' => '0',
        ),
        'map_bubble_view' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => 'content',
            'image_style' => 'four_x_four',
          ),
          'type' => 'image',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_place_images',
      'label' => 'Bilder',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '5 Mb',
        'max_resolution' => '1280x1024',
        'min_resolution' => '200x200',
        'title_field' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'insert' => 0,
          'insert_class' => '',
          'insert_default' => array(
            0 => 'auto',
          ),
          'insert_styles' => array(
            0 => 'auto',
          ),
          'insert_width' => '',
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-divesite-field_place_links'.
  $fields['node-divesite-field_place_links'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_place_links',
      'foreign keys' => array(),
      'global_block_settings' => '1',
      'indexes' => array(),
      'locked' => '0',
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => '1',
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'divesite',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Lenker som kan være av hjelp ved dykking i området. Kun lenker som er relevante på dette stedet. Hvis det blir mer generelle lenker, tenk heller på å legge dem inn under regionen som det dykkes i. ',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'divesite_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '8',
        ),
        'divesite_large_teaser' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '1',
        ),
        'divesite_small_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '2',
        ),
        'log_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
        'log_large_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
        'log_small_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
        'map_bubble_view' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_place_links',
      'label' => 'Ressurslenker',
      'required' => 0,
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => '80',
        ),
        'enable_tokens' => 1,
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
        'user_register_form' => FALSE,
        'validate_url' => 1,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-divesite-field_place_notes'.
  $fields['node-divesite-field_place_notes'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_place_notes',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'global_block_settings' => '1',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'divesite',
      'default_value' => array(
        0 => array(
          'value' => 'Om stedet:
Tilkomst:
Dykking:',
        ),
      ),
      'deleted' => '0',
      'description' => 'En god beskrivelse av dykkestedet. Hold informasjonen objektiv.
Ting som bør være med i en god beskrivelse er: Informasjon om stedet, tilkomst, hva som er verdt å se etc.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
        'divesite_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
        'divesite_large_teaser' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'divesite_small_teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => '250',
          ),
          'type' => 'text_trimmed',
          'weight' => '2',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
        'log_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'log_large_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'log_small_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'map_bubble_view' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => '150',
          ),
          'type' => 'text_trimmed',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_place_notes',
      'label' => 'Om stedet',
      'required' => 1,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '21',
      ),
    ),
  );

  // Exported field: 'node-divesite-field_place_radius'.
  $fields['node-divesite-field_place_radius'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_place_radius',
      'foreign keys' => array(),
      'global_block_settings' => '1',
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'divesite',
      'default_value' => array(
        0 => array(
          'value' => '500',
        ),
      ),
      'deleted' => '0',
      'description' => 'Den radius som statistikken skal regnes utifra. For stor radius resulterer i mer uspesifikk data, mens en liten radius kan forårsake dårlig datagrunnlag på steder som blir trafikkert av få dykkere. Det kan være lurt å la statistikken ha en stor radius i begynnelse, for deretter å endre den etterhvert som datagrunnlaget blir bedre.',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => '1',
        ),
        'divesite_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '7',
        ),
        'divesite_large_teaser' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => '0',
        ),
        'divesite_small_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => '1',
        ),
        'log_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '8',
        ),
        'log_large_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '8',
        ),
        'log_small_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '8',
        ),
        'map_bubble_view' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_place_radius',
      'label' => 'Statistisk radius',
      'required' => 0,
      'settings' => array(
        'max' => '50000',
        'min' => '10',
        'prefix' => '',
        'suffix' => ' meter',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '22',
      ),
    ),
  );

  // Exported field: 'node-log-field_glob_date'.
  $fields['node-log-field_glob_date'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_glob_date',
      'foreign keys' => array(),
      'global_block_settings' => '1',
      'indexes' => array(),
      'locked' => '0',
      'module' => 'date',
      'settings' => array(
        'granularity' => array(
          'day' => 'day',
          'hour' => 'hour',
          'minute' => 'minute',
          'month' => 'month',
          'year' => 'year',
        ),
        'repeat' => 0,
        'timezone_db' => '',
        'todate' => '',
        'tz_handling' => 'none',
      ),
      'translatable' => '1',
      'type' => 'datetime',
    ),
    'field_instance' => array(
      'bundle' => 'log',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Tidspunkt for dykket. ',
      'display' => array(
        'cck_blocks' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
        'default' => array(
          'label' => 'inline',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
          ),
          'type' => 'date_default',
          'weight' => '3',
        ),
        'full' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'log_full_node' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
        'log_large_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
        'log_small_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
        'map_bubble_view' => array(
          'label' => 'inline',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
          ),
          'type' => 'date_default',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_glob_date',
      'label' => 'Tidspunkt',
      'required' => 1,
      'settings' => array(
        'default_format' => 'medium',
        'default_value' => 'blank',
        'default_value2' => 'blank',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'increment' => '1',
          'input_format' => 'd/m/Y - H:i:s',
          'input_format_custom' => '',
          'label_position' => 'above',
          'repeat_collapsed' => 0,
          'text_parts' => array(),
          'year_range' => '-15:+1',
        ),
        'type' => 'date_select',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-log-field_log_buddies'.
  $fields['node-log-field_log_buddies'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '10',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_log_buddies',
      'foreign keys' => array(
        'uid' => array(
          'columns' => array(
            'uid' => 'uid',
          ),
          'table' => 'users',
        ),
      ),
      'global_block_settings' => '1',
      'indexes' => array(
        'uid' => array(
          0 => 'uid',
        ),
      ),
      'locked' => '0',
      'module' => 'user_reference',
      'settings' => array(
        'referenceable_roles' => array(
          2 => '2',
          3 => 0,
          4 => 0,
        ),
        'referenceable_status' => array(
          0 => 0,
          1 => '1',
        ),
        'view' => array(
          'args' => array(
            0 => '',
          ),
          'display_name' => 'references_1',
          'view_name' => 'user_reference_listings',
        ),
      ),
      'translatable' => '1',
      'type' => 'user_reference',
    ),
    'field_instance' => array(
      'bundle' => 'log',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Hvem andre var deltakende på dette dykket sammen med deg?',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'user_reference',
          'settings' => array(),
          'type' => 'user_reference_default',
          'weight' => '5',
        ),
        'full' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '22',
        ),
        'log_full_node' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '20',
        ),
        'log_large_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '20',
        ),
        'log_small_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '21',
        ),
        'map_bubble_view' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_log_buddies',
      'label' => 'Buddyer',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'user_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'user_reference/autocomplete',
          'size' => 60,
        ),
        'type' => 'user_reference_autocomplete',
        'weight' => '21',
      ),
    ),
  );

  // Exported field: 'node-log-field_log_comments'.
  $fields['node-log-field_log_comments'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_log_comments',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'log',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'cck_blocks' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'full' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '8',
        ),
        'log_full_node' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '7',
        ),
        'log_large_teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '7',
        ),
        'log_small_teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => '200',
          ),
          'type' => 'text_trimmed',
          'weight' => '2',
        ),
        'map_bubble_view' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_trimmed',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_log_comments',
      'label' => 'Kommentarer',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'node-log-field_log_depth'.
  $fields['node-log-field_log_depth'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_log_depth',
      'foreign keys' => array(),
      'global_block_settings' => '2',
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'decimal_separator' => ',',
      ),
      'translatable' => '1',
      'type' => 'number_float',
    ),
    'field_instance' => array(
      'bundle' => 'log',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Maks dybde på dykket',
      'display' => array(
        'cck_blocks' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'default' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 2,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_decimal',
          'weight' => '6',
        ),
        'full' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '20',
        ),
        'log_full_node' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '18',
        ),
        'log_large_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '18',
        ),
        'log_small_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '19',
        ),
        'map_bubble_view' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 2,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_decimal',
          'weight' => '3',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_log_depth',
      'label' => 'Dybde',
      'required' => 1,
      'settings' => array(
        'max' => '80',
        'min' => '1',
        'prefix' => '',
        'suffix' => ' m',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-log-field_log_downtime'.
  $fields['node-log-field_log_downtime'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_log_downtime',
      'foreign keys' => array(),
      'global_block_settings' => '2',
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'log',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Dykketid i hele minutter (En foreløpig løsning).',
      'display' => array(
        'cck_blocks' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '18',
        ),
        'default' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => '4',
        ),
        'full' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '17',
        ),
        'log_full_node' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'log_large_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'log_small_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
        'map_bubble_view' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_log_downtime',
      'label' => 'Dykketid',
      'required' => 1,
      'settings' => array(
        'max' => '400',
        'min' => '1',
        'prefix' => '',
        'suffix' => ' min',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'node-log-field_log_env_current'.
  $fields['node-log-field_log_env_current'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_log_env_current',
      'foreign keys' => array(),
      'global_block_settings' => '1',
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'Ingen',
          1 => 'Laber',
          2 => 'Moderat',
          3 => 'Betydelig',
          4 => 'Sterk',
          5 => 'Farlig sterk',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '1',
      'type' => 'list_integer',
    ),
    'field_instance' => array(
      'bundle' => 'log',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '3',
        ),
        'full' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
        'log_full_node' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
        'log_large_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
        'log_small_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
        'map_bubble_view' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_log_env_current',
      'label' => 'Strøm',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '20',
      ),
    ),
  );

  // Exported field: 'node-log-field_log_env_temp_air'.
  $fields['node-log-field_log_env_temp_air'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_log_env_temp_air',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'decimal_separator' => '.',
        'precision' => '10',
        'scale' => '1',
      ),
      'translatable' => '1',
      'type' => 'number_decimal',
    ),
    'field_instance' => array(
      'bundle' => 'log',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Temperaturen over vannet.',
      'display' => array(
        'cck_blocks' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
        'default' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 2,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_decimal',
          'weight' => '5',
        ),
        'full' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'log_full_node' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '8',
        ),
        'log_large_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '8',
        ),
        'log_small_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
        'map_bubble_view' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
        'teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_log_env_temp_air',
      'label' => 'Temp luft',
      'required' => 0,
      'settings' => array(
        'max' => '60',
        'min' => '-30',
        'prefix' => '',
        'suffix' => ' C',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '19',
      ),
    ),
  );

  // Exported field: 'node-log-field_log_env_temp_water'.
  $fields['node-log-field_log_env_temp_water'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_log_env_temp_water',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'decimal_separator' => '.',
        'precision' => '10',
        'scale' => '1',
      ),
      'translatable' => '1',
      'type' => 'number_decimal',
    ),
    'field_instance' => array(
      'bundle' => 'log',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Temperaturen under vannet.',
      'display' => array(
        'cck_blocks' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
        'default' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 2,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_decimal',
          'weight' => '6',
        ),
        'full' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
        'log_full_node' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
        'log_large_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
        'log_small_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'map_bubble_view' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
        'teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '17',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_log_env_temp_water',
      'label' => 'Temp vann',
      'required' => 0,
      'settings' => array(
        'max' => '50',
        'min' => '0',
        'prefix' => '',
        'suffix' => ' C',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '18',
      ),
    ),
  );

  // Exported field: 'node-log-field_log_images'.
  $fields['node-log-field_log_images'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_log_images',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'global_block_settings' => '1',
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '1',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'log',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'cck_blocks' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '21',
        ),
        'default' => array(
          'label' => 'hidden',
          'module' => 'galleria',
          'settings' => array(
            'alt_field' => '',
            'optionset' => 'default',
            'referenced_fields' => array(),
            'title_field' => '',
          ),
          'type' => 'galleria',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'colorbox',
          'settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_image_style' => '',
            'colorbox_node_style' => 'thumbnail',
          ),
          'type' => 'colorbox',
          'weight' => '2',
        ),
        'log_full_node' => array(
          'label' => 'hidden',
          'module' => 'colorbox',
          'settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_image_style' => '',
            'colorbox_node_style' => 'thumbnail',
          ),
          'type' => 'colorbox',
          'weight' => '1',
        ),
        'log_large_teaser' => array(
          'label' => 'hidden',
          'module' => 'colorbox',
          'settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_image_style' => '',
            'colorbox_node_style' => 'thumbnail',
          ),
          'type' => 'colorbox',
          'weight' => '1',
        ),
        'log_small_teaser' => array(
          'label' => 'hidden',
          'module' => 'field_slideshow',
          'settings' => array(
            'slideshow_caption' => '',
            'slideshow_caption_link' => '',
            'slideshow_carousel_circular' => 0,
            'slideshow_carousel_image_style' => '',
            'slideshow_carousel_scroll' => '1',
            'slideshow_carousel_speed' => '500',
            'slideshow_carousel_vertical' => 0,
            'slideshow_carousel_visible' => '3',
            'slideshow_colorbox_image_style' => '',
            'slideshow_colorbox_slideshow' => '',
            'slideshow_colorbox_slideshow_speed' => '4000',
            'slideshow_colorbox_speed' => '350',
            'slideshow_colorbox_transition' => 'elastic',
            'slideshow_controls' => 0,
            'slideshow_field_collection_image' => '',
            'slideshow_fx' => 'fade',
            'slideshow_image_style' => 'four_x_four',
            'slideshow_link' => 'content',
            'slideshow_order' => '',
            'slideshow_pager' => '',
            'slideshow_pager_image_style' => '',
            'slideshow_pause' => 0,
            'slideshow_speed' => '1000',
            'slideshow_timeout' => '4000',
          ),
          'type' => 'slideshow',
          'weight' => '0',
        ),
        'map_bubble_view' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => 'content',
            'image_style' => 'four_x_four',
          ),
          'type' => 'image',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'colorbox',
          'settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_image_style' => '',
            'colorbox_node_style' => 'thumbnail',
          ),
          'type' => 'colorbox',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_log_images',
      'label' => 'Bilder',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '80 MB',
        'max_resolution' => '1280x1280',
        'min_resolution' => '100x100',
        'title_field' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'insert' => 0,
          'insert_class' => '',
          'insert_default' => array(
            0 => 'auto',
          ),
          'insert_styles' => array(
            0 => 'auto',
          ),
          'insert_width' => '',
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'bar',
        ),
        'type' => 'image_image',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-log-field_log_press_capacity'.
  $fields['node-log-field_log_press_capacity'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_log_press_capacity',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          6 => '6 Liter',
          8 => '8 Liter',
          10 => '10 Liter',
          12 => '12 Liter',
          14 => '14 Liter',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '1',
      'type' => 'list_integer',
    ),
    'field_instance' => array(
      'bundle' => 'log',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Volumet på flaska. Dykker du med flere, legg sammen totalt volum.',
      'display' => array(
        'cck_blocks' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '14',
        ),
        'full' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '21',
        ),
        'log_full_node' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '19',
        ),
        'log_large_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '19',
        ),
        'log_small_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '20',
        ),
        'map_bubble_view' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '24',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_log_press_capacity',
      'label' => 'Flaskevolum',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '14',
      ),
    ),
  );

  // Exported field: 'node-log-field_log_press_end'.
  $fields['node-log-field_log_press_end'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_log_press_end',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'decimal_separator' => '.',
      ),
      'translatable' => '1',
      'type' => 'number_float',
    ),
    'field_instance' => array(
      'bundle' => 'log',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Hvor mye luft var det igjen når dykket var ferdig?',
      'display' => array(
        'cck_blocks' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '20',
        ),
        'default' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 2,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_decimal',
          'weight' => '13',
        ),
        'full' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '29',
        ),
        'log_full_node' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '27',
        ),
        'log_large_teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '27',
        ),
        'log_small_teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '28',
        ),
        'map_bubble_view' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '23',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '21',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_log_press_end',
      'label' => 'Flasketrykk slutt',
      'required' => 0,
      'settings' => array(
        'max' => '500',
        'min' => '0',
        'prefix' => '',
        'suffix' => ' bar',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '16',
      ),
    ),
  );

  // Exported field: 'node-log-field_log_press_gastype'.
  $fields['node-log-field_log_press_gastype'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_log_press_gastype',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'airtype',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '1',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'log',
      'default_value' => array(
        0 => array(
          'tid' => '17',
        ),
      ),
      'deleted' => '0',
      'description' => 'Typen luft du dykket med. her er luft det aller vanligste.',
      'display' => array(
        'cck_blocks' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
        'default' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '11',
        ),
        'full' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '23',
        ),
        'log_full_node' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '21',
        ),
        'log_large_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '21',
        ),
        'log_small_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '22',
        ),
        'map_bubble_view' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '21',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '18',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_log_press_gastype',
      'label' => 'Luft-type',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '13',
      ),
    ),
  );

  // Exported field: 'node-log-field_log_press_start'.
  $fields['node-log-field_log_press_start'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_log_press_start',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'decimal_separator' => '.',
      ),
      'translatable' => '1',
      'type' => 'number_float',
    ),
    'field_instance' => array(
      'bundle' => 'log',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Hvor mye luft fantes på starten av dykket?',
      'display' => array(
        'cck_blocks' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '17',
        ),
        'default' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 1,
            'scale' => '0',
            'thousand_separator' => ' ',
          ),
          'type' => 'number_decimal',
          'weight' => '12',
        ),
        'full' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '24',
        ),
        'log_full_node' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '22',
        ),
        'log_large_teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '22',
        ),
        'log_small_teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '23',
        ),
        'map_bubble_view' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '22',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '20',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_log_press_start',
      'label' => 'Flasketrykk start',
      'required' => 0,
      'settings' => array(
        'max' => '500',
        'min' => '0',
        'prefix' => '',
        'suffix' => ' bar',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '15',
      ),
    ),
  );

  // Exported field: 'node-log-field_log_press_total'.
  $fields['node-log-field_log_press_total'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_log_press_total',
      'foreign keys' => array(),
      'global_block_settings' => '1',
      'indexes' => array(),
      'locked' => '0',
      'module' => 'computed_field',
      'settings' => array(
        'code' => '$out = $entity->field_log_press_start[\'und\'][0][\'value\'] - $entity->field_log_press_end[\'und\'][0][\'value\'];
$entity_field[0][\'value\'] = $out;
',
        'database' => array(
          'data_default' => '',
          'data_index' => 0,
          'data_length' => '32',
          'data_not_NULL' => 0,
          'data_precision' => '10',
          'data_scale' => 2,
          'data_size' => 'normal',
          'data_type' => 'int',
        ),
        'display_format' => '$display_output = $entity_field_item[\'value\'] . " BAR";',
        'store' => 0,
      ),
      'translatable' => '1',
      'type' => 'computed',
    ),
    'field_instance' => array(
      'bundle' => 'log',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'cck_blocks' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '19',
        ),
        'default' => array(
          'label' => 'inline',
          'module' => 'computed_field',
          'settings' => array(),
          'type' => 'computed_field_unsanitized',
          'weight' => '7',
        ),
        'full' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '18',
        ),
        'log_full_node' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
        'log_large_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
        'log_small_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '17',
        ),
        'map_bubble_view' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '17',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_log_press_total',
      'label' => 'Luftforbruk',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'computed_field',
        'settings' => array(),
        'type' => 'computed',
        'weight' => '17',
      ),
    ),
  );

  // Exported field: 'node-log-field_log_problem_report_check'.
  $fields['node-log-field_log_problem_report_check'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_log_problem_report_check',
      'foreign keys' => array(),
      'global_block_settings' => '1',
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => '',
          1 => '',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '1',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'log',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => 'Rapporter feil på dykket. Hvis du ønsker det, kan du rapportere om problem ved å klikke her. 
Loggen vil da lyse opp med et rødt lite kryss på kart, og du kan evnt skrive om denne feilen i kommentarfeltet på loggen.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '26',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '32',
        ),
        'log_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '30',
        ),
        'log_large_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '30',
        ),
        'log_small_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '31',
        ),
        'map_bubble_view' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '30',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_log_problem_report_check',
      'label' => 'Rapporter et problem',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'node-log-field_log_seabed'.
  $fields['node-log-field_log_seabed'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_log_seabed',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'global_block_settings' => '1',
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'seabed',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '1',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'log',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'cck_blocks' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'default' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '9',
        ),
        'full' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
        'log_full_node' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'log_large_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'log_small_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
        'map_bubble_view' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '19',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '22',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_log_seabed',
      'label' => 'Bunntype',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '17',
      ),
    ),
  );

  // Exported field: 'node-log-field_log_simple_check'.
  $fields['node-log-field_log_simple_check'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_log_simple_check',
      'foreign keys' => array(),
      'global_block_settings' => '1',
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => '',
          1 => 'Vise avansert data',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '1',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'log',
      'default_value' => array(
        0 => array(
          'value' => 1,
        ),
      ),
      'deleted' => '0',
      'description' => 'Loggfør et godt dokumentert dykk, eller bare det mest nødvendige.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '25',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '31',
        ),
        'log_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '29',
        ),
        'log_large_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '29',
        ),
        'log_small_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '30',
        ),
        'map_bubble_view' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '29',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_log_simple_check',
      'label' => 'Loggfør detaljerte data',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => NULL,
        'settings' => array(
          'display_label' => 0,
        ),
        'type' => 'field_extrawidgets_hidden',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'node-log-field_log_startpoint'.
  $fields['node-log-field_log_startpoint'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_log_startpoint',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'enrance',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '1',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'log',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Hvordan kom du deg i vannet på dette dykket?',
      'display' => array(
        'cck_blocks' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'default' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '10',
        ),
        'full' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
        'log_full_node' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
        'log_large_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
        'log_small_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'map_bubble_view' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '20',
        ),
        'teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_log_startpoint',
      'label' => 'Startpunkt',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '16',
      ),
    ),
  );

  // Exported field: 'node-log-field_log_stop'.
  $fields['node-log-field_log_stop'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_log_stop',
      'foreign keys' => array(),
      'global_block_settings' => '1',
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'Ingen',
          1 => '1 min',
          2 => '2 min',
          3 => '3 min',
          4 => '4 min',
          5 => '5 min',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '1',
      'type' => 'list_integer',
    ),
    'field_instance' => array(
      'bundle' => 'log',
      'default_value' => array(
        0 => array(
          'value' => '3',
        ),
      ),
      'deleted' => '0',
      'description' => 'Sikkerhetsstopp.',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '8',
        ),
        'full' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '19',
        ),
        'log_full_node' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '17',
        ),
        'log_large_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '17',
        ),
        'log_small_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '18',
        ),
        'map_bubble_view' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '18',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_log_stop',
      'label' => 'Sikkerhetsstopp',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-log-field_log_tag'.
  $fields['node-log-field_log_tag'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_log_tag',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'global_block_settings' => '1',
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'tags',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '1',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'log',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Her kan du skrive inn korte, gjenkjennende tagger på dykket, separert med komma. Eksempel: Kamskjell, vanskelig, prøvedykk',
      'display' => array(
        'cck_blocks' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '22',
        ),
        'full' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '26',
        ),
        'log_full_node' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '24',
        ),
        'log_large_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '24',
        ),
        'log_small_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '25',
        ),
        'map_bubble_view' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '26',
        ),
        'teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_log_tag',
      'label' => 'Dine tagger',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'node-log-field_log_tag_locked'.
  $fields['node-log-field_log_tag_locked'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_log_tag_locked',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'global_block_settings' => '1',
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'ideelt_for',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '1',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'log',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Velg de av hovedtaggene som kan passe for ditt dykk.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '30',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '36',
        ),
        'log_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '34',
        ),
        'log_large_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '34',
        ),
        'log_small_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '35',
        ),
        'map_bubble_view' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '34',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_log_tag_locked',
      'label' => 'Faste tagger',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'node-log-field_log_visibility'.
  $fields['node-log-field_log_visibility'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_log_visibility',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'decimal_separator' => '.',
        'precision' => '10',
        'scale' => '1',
      ),
      'translatable' => '1',
      'type' => 'number_decimal',
    ),
    'field_instance' => array(
      'bundle' => 'log',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'cck_blocks' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
        'default' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 1,
            'scale' => '0',
            'thousand_separator' => ' ',
          ),
          'type' => 'number_decimal',
          'weight' => '4',
        ),
        'full' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
        'log_full_node' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
        'log_large_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
        'log_small_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
        'map_bubble_view' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '19',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_log_visibility',
      'label' => 'Sikt',
      'required' => 0,
      'settings' => array(
        'max' => '200',
        'min' => '0',
        'prefix' => '',
        'suffix' => ' meter',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '21',
      ),
    ),
  );

  // Exported field: 'node-log-field_map_country'.
  $fields['node-log-field_map_country'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_map_country',
      'foreign keys' => array(),
      'global_block_settings' => '1',
      'indexes' => array(),
      'locked' => '0',
      'module' => 'computed_field',
      'settings' => array(
        'code' => '	$query = array(\'lat\' => $entity->field_map_point[und][0][locpick][user_latitude], \'lng\' => $entity->field_map_point[und][0][locpick][user_longitude], \'radius\' => 100);
	$me = array();
	$result = geonames_query(\'countrysubdivision\', $query);
	if (!empty($result->results)) {
  		foreach ($result->results as $place) {
     		$me[] = $place[countryname];
  			}
	} elseif ($node->locations[0][\'delete_location\'] == 1) {$me[0] = "Location empty";
	} else {$me[0] = "International";};
	
$entity_field[0][\'value\'] = "";
$entity_field[0][\'value\'] = $me[0];',
        'database' => array(
          'data_default' => '',
          'data_index' => 0,
          'data_length' => '32',
          'data_not_NULL' => 0,
          'data_precision' => '10',
          'data_scale' => '2',
          'data_size' => 'normal',
          'data_type' => 'varchar',
        ),
        'display_format' => '$display_output = $entity_field_item[\'value\'];',
        'store' => 1,
      ),
      'translatable' => '1',
      'type' => 'computed',
    ),
    'field_instance' => array(
      'bundle' => 'log',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'cck_blocks' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '6',
        ),
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '19',
        ),
        'full' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '27',
        ),
        'log_full_node' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '25',
        ),
        'log_large_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '25',
        ),
        'log_small_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '26',
        ),
        'map_bubble_view' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '25',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '25',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_map_country',
      'label' => 'Land',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => NULL,
        'settings' => array(),
        'type' => 'field_extrawidgets_hidden',
        'weight' => '28',
      ),
    ),
  );

  // Exported field: 'node-log-field_map_country_1'.
  $fields['node-log-field_map_country_1'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_map_country_1',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'global_block_settings' => '1',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'log',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Skal ikke vises.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '28',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '34',
        ),
        'log_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '32',
        ),
        'log_large_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '32',
        ),
        'log_small_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '33',
        ),
        'map_bubble_view' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '32',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_map_country_1',
      'label' => 'Land',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => NULL,
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'field_extrawidgets_hidden',
        'weight' => '30',
      ),
    ),
  );

  // Exported field: 'node-log-field_map_geofield'.
  $fields['node-log-field_map_geofield'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_map_geofield',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'geofield',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'geofield',
    ),
    'field_instance' => array(
      'bundle' => 'log',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Stedet du har dykket på.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'geofield',
          'settings' => array(
            'data' => 'full',
          ),
          'type' => 'geofield_wkt',
          'weight' => 32,
        ),
        'log_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'log_large_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'log_small_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'map_bubble_view' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_map_geofield',
      'label' => 'Koordinater (geo)',
      'required' => 0,
      'settings' => array(
        'local_solr' => array(
          'enabled' => FALSE,
          'lat_field' => 'lat',
          'lng_field' => 'lng',
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'geofield',
        'settings' => array(
          'data_storage' => 'single',
          'openlayers_map' => 'geofield_widget_map',
        ),
        'type' => 'geofield_openlayers',
        'weight' => '25',
      ),
    ),
  );

  // Exported field: 'node-log-field_map_inherit_data'.
  $fields['node-log-field_map_inherit_data'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_map_inherit_data',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'global_block_settings' => '1',
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'locked' => '0',
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'asset' => 0,
          'club' => 0,
          'divesite' => 'divesite',
          'divetrip' => 0,
          'help' => 0,
          'log' => 'log',
          'panel' => 0,
          'request' => 0,
        ),
        'view' => array(
          'args' => array(
            0 => '',
          ),
          'display_name' => '',
          'view_name' => '',
        ),
      ),
      'translatable' => '1',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'log',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Du kan bruke dette feltet til å importere geografiske data fra en annen lokalitet. Dette feltet vil da overskrive kartet nedenfor.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '31',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
        'log_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '35',
        ),
        'log_large_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '35',
        ),
        'log_small_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '36',
        ),
        'map_bubble_view' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '35',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_map_inherit_data',
      'label' => 'Inporter en posisjon',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => NULL,
        'settings' => array(),
        'type' => 'field_extrawidgets_hidden',
        'weight' => '33',
      ),
    ),
  );

  // Exported field: 'node-log-field_map_marker'.
  $fields['node-log-field_map_marker'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_map_marker',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'global_block_settings' => '1',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '100',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'log',
      'default_value' => array(
        0 => array(
          'value' => 'drupal',
        ),
      ),
      'deleted' => '0',
      'description' => 'This field is automatically set when saving a node. This way, every node may have its own unique marker.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '27',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '33',
        ),
        'log_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '31',
        ),
        'log_large_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '31',
        ),
        'log_small_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '32',
        ),
        'map_bubble_view' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '31',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_map_marker',
      'label' => 'Map marker',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => NULL,
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'field_extrawidgets_hidden',
        'weight' => '27',
      ),
    ),
  );

  // Exported field: 'node-log-field_map_name_browser'.
  $fields['node-log-field_map_name_browser'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '2',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_map_name_browser',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'global_block_settings' => '1',
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'countries',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '1',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'log',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Denne skal ikke vises! Ser du denne, gi beskjed til admin!',
      'display' => array(
        'cck_blocks' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '7',
        ),
        'default' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '7',
        ),
        'full' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '25',
        ),
        'log_full_node' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '23',
        ),
        'log_large_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '23',
        ),
        'log_small_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '24',
        ),
        'map_bubble_view' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_map_name_browser',
      'label' => 'Region',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => NULL,
        'settings' => array(),
        'type' => 'field_extrawidgets_hidden',
        'weight' => '32',
      ),
    ),
  );

  // Exported field: 'node-log-field_map_point'.
  $fields['node-log-field_map_point'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_map_point',
      'foreign keys' => array(),
      'global_block_settings' => '1',
      'indexes' => array(
        'lid' => array(
          0 => 'lid',
        ),
      ),
      'locked' => '0',
      'module' => 'location_cck',
      'settings' => array(
        'gmap_macro' => '[gmap overlay=tile/1.0:http://opencache.statkart.no/gatekeeper/gk/gk.open_gmaps?layers=sjo_hovedkart2&zoom={Z}&x={X}&y={Y} | zoom=3 |center=44.715513732021336,-40.60546875 |width=600px |height=400px |control=Small |type=Map]',
        'gmap_marker' => 'drupal',
        'location_settings' => array(
          'display' => array(
            'hide' => array(
              'additional' => 'additional',
              'city' => 'city',
              'coords' => 'coords',
              'country' => 'country',
              'country_name' => 'country_name',
              'locpick' => 'locpick',
              'map_link' => 'map_link',
              'name' => 'name',
              'postal_code' => 'postal_code',
              'province' => 'province',
              'province_name' => 'province_name',
              'street' => 'street',
            ),
          ),
          'form' => array(
            'fields' => array(
              'additional' => array(
                'collect' => '0',
                'default' => '',
                'weight' => '6',
              ),
              'city' => array(
                'collect' => '0',
                'default' => '',
                'weight' => '8',
              ),
              'country' => array(
                'collect' => '4',
                'default' => 'no',
                'weight' => '14',
              ),
              'locpick' => array(
                'collect' => '2',
                'weight' => '20',
              ),
              'name' => array(
                'collect' => '0',
                'default' => '',
                'weight' => '2',
              ),
              'postal_code' => array(
                'collect' => '0',
                'default' => '',
                'weight' => '12',
              ),
              'province' => array(
                'collect' => '0',
                'default' => '',
                'weight' => '10',
              ),
              'street' => array(
                'collect' => '0',
                'default' => '',
                'weight' => '4',
              ),
            ),
          ),
        ),
      ),
      'translatable' => '1',
      'type' => 'location',
    ),
    'field_instance' => array(
      'bundle' => 'log',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'cck_blocks' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '24',
        ),
        'full' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '30',
        ),
        'log_full_node' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '28',
        ),
        'log_large_teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '28',
        ),
        'log_small_teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '29',
        ),
        'map_bubble_view' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '28',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '23',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_map_point',
      'label' => 'Kartdata',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => NULL,
        'settings' => array(),
        'type' => 'field_extrawidgets_hidden',
        'weight' => '26',
      ),
    ),
  );

  // Exported field: 'node-log-field_map_region'.
  $fields['node-log-field_map_region'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_map_region',
      'foreign keys' => array(),
      'global_block_settings' => '1',
      'indexes' => array(),
      'locked' => '0',
      'module' => 'computed_field',
      'settings' => array(
        'code' => '$query = array(\'lat\' => $entity->field_map_point[und][0][locpick][user_latitude], \'lng\' => $entity->field_map_point[und][0][locpick][user_longitude], \'radius\' => 100 ,\'maxrows\'=>1);
	$me = array();
	$result = geonames_query(\'countrysubdivision\', $query);
	if (!empty($result->results)) {
  		foreach ($result->results as $place) {
     		$me[] = $place[adminname1];
  			}
	} elseif ($node->locations[0][\'delete_location\'] == 1) {$me[0] = "Location empty";
	} else {$me[0] = "Unknown region";};
	
$entity_field[0][\'value\'] = "";
$entity_field[0][\'value\'] = $me[0];',
        'database' => array(
          'data_default' => '',
          'data_index' => 0,
          'data_length' => '32',
          'data_not_NULL' => 0,
          'data_precision' => '10',
          'data_scale' => '2',
          'data_size' => 'normal',
          'data_type' => 'varchar',
        ),
        'display_format' => '$display_output = $entity_field_item[\'value\'];',
        'store' => 1,
      ),
      'translatable' => '1',
      'type' => 'computed',
    ),
    'field_instance' => array(
      'bundle' => 'log',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'cck_blocks' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '23',
        ),
        'full' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '28',
        ),
        'log_full_node' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '26',
        ),
        'log_large_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '26',
        ),
        'log_small_teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '27',
        ),
        'map_bubble_view' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '27',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '26',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_map_region',
      'label' => 'Region',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => NULL,
        'settings' => array(),
        'type' => 'field_extrawidgets_hidden',
        'weight' => '31',
      ),
    ),
  );

  // Exported field: 'node-log-field_map_region_1'.
  $fields['node-log-field_map_region_1'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_map_region_1',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'global_block_settings' => '1',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'log',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '29',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '35',
        ),
        'log_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '33',
        ),
        'log_large_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '33',
        ),
        'log_small_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '34',
        ),
        'map_bubble_view' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '33',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_map_region_1',
      'label' => 'Region',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => NULL,
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'field_extrawidgets_hidden',
        'weight' => '29',
      ),
    ),
  );

  // Exported field: 'taxonomy_term-countries-field_term_countrycode'.
  $fields['taxonomy_term-countries-field_term_countrycode'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_term_countrycode',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'global_block_settings' => '1',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '4',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'countries',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 1,
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_term_countrycode',
      'label' => 'Landskode',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '10',
        ),
        'type' => 'text_textfield',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'taxonomy_term-countries-field_term_image'.
  $fields['taxonomy_term-countries-field_term_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_term_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'global_block_settings' => '1',
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => '58',
        'uri_scheme' => 'public',
      ),
      'translatable' => '1',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'countries',
      'deleted' => '0',
      'description' => 'Et enkelt bilde til å bruke som identifikasjonsbilde på term-siden.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 0,
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_term_image',
      'label' => 'Bilde',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => 'tax-countries',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '5M',
        'max_resolution' => '800x600',
        'min_resolution' => '200x200',
        'title_field' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'insert' => 0,
          'insert_class' => '',
          'insert_default' => array(
            0 => 'auto',
          ),
          'insert_styles' => array(
            0 => 'auto',
          ),
          'insert_width' => '',
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'taxonomy_term-seabed-field_term_image'.
  $fields['taxonomy_term-seabed-field_term_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_term_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'global_block_settings' => '1',
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => '58',
        'uri_scheme' => 'public',
      ),
      'translatable' => '1',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'seabed',
      'deleted' => '0',
      'description' => 'Legg til et beskrivende bilde av denne kategorien.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_term_image',
      'label' => 'Bilde',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '2 MB',
        'max_resolution' => '1000x1000',
        'min_resolution' => '100x100',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'insert' => 0,
          'insert_class' => '',
          'insert_default' => array(
            0 => 'auto',
          ),
          'insert_styles' => array(
            0 => 'auto',
          ),
          'insert_width' => '',
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'taxonomy_term-tags-field_term_image'.
  $fields['taxonomy_term-tags-field_term_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_term_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'global_block_settings' => '1',
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => '58',
        'uri_scheme' => 'public',
      ),
      'translatable' => '1',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'tags',
      'deleted' => '0',
      'description' => 'Et beskrivende bilde for kategorien.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_term_image',
      'label' => 'Bilde',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '2MB',
        'max_resolution' => '1000x1000',
        'min_resolution' => '100x100',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'insert' => 0,
          'insert_class' => '',
          'insert_default' => array(
            0 => 'auto',
          ),
          'insert_styles' => array(
            0 => 'auto',
          ),
          'insert_width' => '',
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '2',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Antall medlemmer');
  t('BIlder hjelper til å identifisere stedet. Ta gjerne noen oversiktsbilder neste gang du er der, det holder med overflatebilder selv om det er gøy med undervannsbilder også. 
Undervannsbilder har vi nok av i loggene.');
  t('Bilde');
  t('Bilder');
  t('Buddyer');
  t('Bunntype');
  t('Den radius som statistikken skal regnes utifra. For stor radius resulterer i mer uspesifikk data, mens en liten radius kan forårsake dårlig datagrunnlag på steder som blir trafikkert av få dykkere. Det kan være lurt å la statistikken ha en stor radius i begynnelse, for deretter å endre den etterhvert som datagrunnlaget blir bedre.');
  t('Den statistiske radius for dykkesteder av interesse. NB: Måles i meter.');
  t('Denne skal ikke vises! Ser du denne, gi beskjed til admin!');
  t('Denne skal være avslått for brukeren, så denne skal man ikke kunne se. Ser du den, gi beskjed til administrator.');
  t('Deres klubblogo. Bør være en logo på hvit eller gjennomsiktig bakgrunn.');
  t('Dine tagger');
  t('Dokumenter');
  t('Du kan bruke dette feltet til å importere geografiske data fra en annen lokalitet. Dette feltet vil da overskrive kartet nedenfor.');
  t('Dybde');
  t('Dykketid');
  t('Dykketid i hele minutter (En foreløpig løsning).');
  t('En god beskrivelse av dykkestedet. Hold informasjonen objektiv.
Ting som bør være med i en god beskrivelse er: Informasjon om stedet, tilkomst, hva som er verdt å se etc.');
  t('Et beskrivende bilde for kategorien.');
  t('Et enkelt bilde til å bruke som identifikasjonsbilde på term-siden.');
  t('Faste tagger');
  t('Flasketrykk slutt');
  t('Flasketrykk start');
  t('Flaskevolum');
  t('Gateadresse');
  t('Gi litt generell informasjon om klubben. Mer er generelt bedre enn mindre, da denne siden praktisk talt fungerer som en reklameplakat for klubben.');
  t('Group type');
  t('Her kan du legge inn påmeldingsskjemaer, lederinstrukser og annet som man ønsker skal være tilgjengelig.');
  t('Her kan du skrive inn korte, gjenkjennende tagger på dykket, separert med komma. Eksempel: Kamskjell, vanskelig, prøvedykk');
  t('Hvem andre var deltakende på dette dykket sammen med deg?');
  t('Hvor mye luft fantes på starten av dykket?');
  t('Hvor mye luft var det igjen når dykket var ferdig?');
  t('Hvordan kom du deg i vannet på dette dykket?');
  t('Inporter en posisjon');
  t('Kart');
  t('Kartdata');
  t('Klubbens gateadresse, hvis det finnes en.');
  t('Klubbens lokalitet, vanligvis lokaliteten til klubbhuset.');
  t('Klubbens mailingliste, hvis den har noen. Hvis ikke, skriv inn en epost som klubben kan kontaktes på.');
  t('Kommentarer');
  t('Koordinater (geo)');
  t('Land');
  t('Landshiearki');
  t('Landskode');
  t('Legg til et beskrivende bilde av denne kategorien.');
  t('Lenker som kan være av hjelp ved dykking i området. Kun lenker som er relevante på dette stedet. Hvis det blir mer generelle lenker, tenk heller på å legge dem inn under regionen som det dykkes i. ');
  t('Loggfør detaljerte data');
  t('Loggfør et godt dokumentert dykk, eller bare det mest nødvendige.');
  t('Logo');
  t('Lokalitet');
  t('Luft-type');
  t('Luftforbruk');
  t('Mailingliste');
  t('Maks dybde på dykket');
  t('Map marker');
  t('Marker');
  t('Mest mulig nøyaktig kartpunkt.');
  t('Not to be shown for the current user.');
  t('Not to be shown publicly');
  t('Om klubben');
  t('Om stedet');
  t('Rapporter et problem');
  t('Rapporter feil på dykket. Hvis du ønsker det, kan du rapportere om problem ved å klikke her. 
Loggen vil da lyse opp med et rødt lite kryss på kart, og du kan evnt skrive om denne feilen i kommentarfeltet på loggen.');
  t('Region');
  t('Ressurslenker');
  t('Sikkerhetsstopp');
  t('Sikkerhetsstopp.');
  t('Sikt');
  t('Skal ikke vises.');
  t('Startpunkt');
  t('Statistisk radius');
  t('Sted');
  t('Stedet du har dykket på.');
  t('Strøm');
  t('Temp luft');
  t('Temp vann');
  t('Temperaturen over vannet.');
  t('Temperaturen under vannet.');
  t('This field is automatically set when saving a node. This way, every node may have its own unique marker.');
  t('Tidspunkt');
  t('Tidspunkt for dykket. ');
  t('Typen luft du dykket med. her er luft det aller vanligste.');
  t('Velg de av hovedtaggene som kan passe for ditt dykk.');
  t('Volumet på flaska. Dykker du med flere, legg sammen totalt volum.');

  return $fields;
}
