<?php
/**
 * @file
 * a_location.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function a_location_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-a_location-field_a_location_body'
  $field_instances['node-a_location-field_a_location_body'] = array(
    'bundle' => 'a_location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_a_location_body',
    'label' => 'Body',
    'required' => 1,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-a_location-field_a_location_color'
  $field_instances['node-a_location-field_a_location_color'] = array(
    'bundle' => 'a_location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'color_field',
        'settings' => array(),
        'type' => 'color_field_default_formatter',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_a_location_color',
    'label' => 'Color',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'color_field',
      'settings' => array(),
      'type' => 'color_field_default_widget',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-a_location-field_a_location_icon'
  $field_instances['node-a_location-field_a_location_icon'] = array(
    'bundle' => 'a_location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_a_location_icon',
    'label' => 'Icon',
    'required' => 0,
    'settings' => array(
      'allowed_values_function' => 'a_basic_font_awesome_icon_allowed_list',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'autocomplete_widgets',
      'settings' => array(
        'autocomplete_case' => 1,
        'autocomplete_match' => 'contains',
        'autocomplete_xss' => 0,
        'i18n_flddata' => 0,
        'order' => 'ASC',
        'size' => 60,
      ),
      'type' => 'autocomplete_widgets_allowvals',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-a_location-field_a_location_location'
  $field_instances['node-a_location-field_a_location_location'] = array(
    'bundle' => 'a_location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_a_location_location',
    'label' => 'Location',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'leaflet_geojson_widget',
      'settings' => array(
        'leaflet_geojson_widget_center_lat' => 0,
        'leaflet_geojson_widget_center_lon' => 0,
        'leaflet_geojson_widget_map' => 'OSM Mapnik',
        'leaflet_geojson_widget_tools' => array(
          'circle' => 0,
          'marker' => 'marker',
          'polygon' => 0,
          'polyline' => 0,
          'rectangle' => 0,
        ),
        'leaflet_geojson_widget_zoom' => 0,
      ),
      'type' => 'leaflet_geojson_widget',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-a_location-field_a_location_photos'
  $field_instances['node-a_location-field_a_location_photos'] = array(
    'bundle' => 'a_location',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'thumbnail',
        ),
        'type' => 'image',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_a_location_photos',
    'label' => 'Photo\'s',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'multiupload_imagefield_widget',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_miw',
      'weight' => 35,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Color');
  t('Icon');
  t('Location');
  t('Photo\'s');

  return $field_instances;
}
