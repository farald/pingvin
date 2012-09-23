<?php
/**
 * @file
 * site_drawings.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function site_drawings_field_default_fields() {
  $fields = array();

  // Exported field: 'node-drawing-field_drawing_comment'.
  $fields['node-drawing-field_drawing_comment'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_drawing_comment',
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
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'drawing',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Gi kommentarer til tegningen din her.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'drawing_full_node' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'drawing_large_teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
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
      'field_name' => 'field_drawing_comment',
      'label' => 'Kommentarer',
      'required' => 0,
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
        'weight' => '34',
      ),
    ),
  );

  // Exported field: 'node-drawing-field_nodekobling'.
  $fields['node-drawing-field_nodekobling'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_nodekobling',
      'foreign keys' => array(),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'direction' => 'ASC',
            'field' => 'body:value',
            'property' => 'nid',
            'type' => 'none',
          ),
          'target_bundles' => array(
            'divesite' => 'divesite',
          ),
        ),
        'handler_submit' => 'Change handler',
        'target_type' => 'node',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'drawing',
      'default_value' => NULL,
      'default_value_function' => 'entityreference_prepopulate_field_default_value',
      'deleted' => '0',
      'description' => 'Hvilken node skal dette innholdet kobles til?',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => FALSE,
          ),
          'type' => 'entityreference_label',
          'weight' => '1',
        ),
        'drawing_full_node' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => FALSE,
          ),
          'type' => 'entityreference_label',
          'weight' => '1',
        ),
        'drawing_large_teaser' => array(
          'label' => 'above',
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
      'field_name' => 'field_nodekobling',
      'label' => 'Nodekobling',
      'required' => 1,
      'settings' => array(
        'behaviors' => array(
          'prepopulate' => array(
            'action' => 'hide',
            'fallback' => 'redirect',
            'skip_perm' => 'access administration menu',
            'status' => 1,
          ),
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '33',
      ),
    ),
  );

  // Exported field: 'node-drawing-field_sketch_source'.
  $fields['node-drawing-field_sketch_source'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_sketch_source',
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
          0 => '',
          1 => '',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'drawing',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => 'Klikk denne boksen hvis tegningen din skal karakteriseres som et skissegrunnlag. Det vil si, at det kun forekommer stedsspesifikk informasjon, og ingen dykkeinformasjon på tegningen. Brukes for å legge inn sonarbilder, kartutklipp osv, og kan brukes av andre til å tegne på.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '3',
        ),
        'drawing_full_node' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'drawing_large_teaser' => array(
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
      'field_name' => 'field_sketch_source',
      'label' => 'Skissegrunnlag',
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
        'weight' => '35',
      ),
    ),
  );

  // Exported field: 'node-drawing-field_tegning'.
  $fields['node-drawing-field_tegning'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_tegning',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
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
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'drawing',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '0',
        ),
        'drawing_full_node' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '0',
        ),
        'drawing_large_teaser' => array(
          'label' => 'hidden',
          'module' => 'colorbox',
          'settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_image_style' => '',
            'colorbox_node_style' => 'two_x_two',
          ),
          'type' => 'colorbox',
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
      'field_name' => 'field_tegning',
      'label' => 'Tegning',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => 'drawing',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '1500x1500',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'aviary_falcon_enabled' => 0,
          'aviary_falcon_position' => '0',
          'aviary_feather_enabled' => 0,
          'aviary_feather_position' => '0',
          'aviary_peacock_enabled' => 0,
          'aviary_peacock_position' => '0',
          'aviary_phoenix_enabled' => 0,
          'aviary_phoenix_position' => '0',
          'aviary_raven_enabled' => 0,
          'aviary_raven_position' => '0',
          'filefield_sources' => array(
            'filefield_sources' => array(
              'attach' => 0,
              'imageeditor' => 'imageeditor',
              'reference' => 0,
              'remote' => 0,
            ),
            'source_attach' => array(
              'absolute' => '0',
              'attach_mode' => 'move',
              'path' => 'file_attach',
            ),
            'source_imageeditor' => array(
              'source_imageeditor_image' => 0,
            ),
            'source_imce' => array(
              'imce_mode' => 0,
            ),
            'source_reference' => array(
              'autocomplete' => '0',
            ),
          ),
          'flauntr_styler_enabled' => 0,
          'flauntr_styler_position' => '0',
          'fotoflexer_enabled' => 0,
          'fotoflexer_position' => '0',
          'imageeditor_icons_position' => '0',
          'imageeditor_replace' => 1,
          'imageshack_upload_enabled' => 0,
          'imageshack_upload_position' => '0',
          'immio_upload_enabled' => 0,
          'immio_upload_position' => '0',
          'insert' => 0,
          'insert_class' => '',
          'insert_default' => 'auto',
          'insert_styles' => array(
            'auto' => 'auto',
            'colorbox__four_x_four' => 0,
            'colorbox__galleria_thumb' => 0,
            'colorbox__galleria_zoom' => 0,
            'colorbox__large' => 0,
            'colorbox__medium' => 0,
            'colorbox__thumbnail' => 0,
            'colorbox__thumbnail_small' => 0,
            'image' => 0,
            'image_four_x_four' => 0,
            'image_galleria_thumb' => 0,
            'image_galleria_zoom' => 0,
            'image_large' => 0,
            'image_medium' => 0,
            'image_thumbnail' => 0,
            'image_thumbnail_small' => 0,
            'link' => 0,
          ),
          'insert_width' => '',
          'paintweb_enabled' => 1,
          'paintweb_position' => '0',
          'picmonkey_enabled' => 1,
          'picmonkey_position' => '0',
          'pixlr_editor_enabled' => 1,
          'pixlr_editor_position' => '0',
          'pixlr_express_enabled' => 1,
          'pixlr_express_position' => '0',
          'pixlr_upload_enabled' => 0,
          'pixlr_upload_position' => '0',
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
          'snipshot_enabled' => 1,
          'snipshot_position' => '0',
          'sumopaint_enabled' => 0,
          'sumopaint_position' => '0',
          'svgedit_enabled' => 0,
          'svgedit_position' => '0',
        ),
        'type' => 'image_image',
        'weight' => '31',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Gi kommentarer til tegningen din her.');
  t('Hvilken node skal dette innholdet kobles til?');
  t('Klikk denne boksen hvis tegningen din skal karakteriseres som et skissegrunnlag. Det vil si, at det kun forekommer stedsspesifikk informasjon, og ingen dykkeinformasjon på tegningen. Brukes for å legge inn sonarbilder, kartutklipp osv, og kan brukes av andre til å tegne på.');
  t('Kommentarer');
  t('Nodekobling');
  t('Skissegrunnlag');
  t('Tegning');

  return $fields;
}
