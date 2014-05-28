<?php
/**
 * @file
 * hot_asides.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function hot_asides_defaultconfig_features() {
  return array(
    'hot_asides' => array(
      'field_default_fields' => 'field_default_fields',
      'strongarm' => 'strongarm',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function hot_asides_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'fieldable_panels_pane-hot_asides-field_basic_url'.
  $fields['fieldable_panels_pane-hot_asides-field_basic_url'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => -1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_basic_url',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
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
      'translatable' => 0,
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'hot_asides',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_basic_url',
      'label' => 'URL',
      'required' => 0,
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'configurable_title' => 0,
          'rel' => '',
          'target' => 'default',
          'title' => '',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'linkit' => array(
          'enable' => 1,
          'insert_plugin' => 'raw_url',
        ),
        'rel_remove' => 'default',
        'title' => 'required',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 'optional',
        'user_register_form' => FALSE,
        'validate_url' => 1,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => -3,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('URL');

  return $fields;
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function hot_asides_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_fieldable_panels_pane__hot_asides';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(
        'title' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_fieldable_panels_pane__hot_asides'] = $strongarm;

  return $export;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function hot_asides_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fieldable hot_asides'.
  $permissions['create fieldable hot_asides'] = array(
    'name' => 'create fieldable hot_asides',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable hot_asides'.
  $permissions['delete fieldable hot_asides'] = array(
    'name' => 'delete fieldable hot_asides',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable hot_asides'.
  $permissions['edit fieldable hot_asides'] = array(
    'name' => 'edit fieldable hot_asides',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'fieldable_panels_panes',
  );

  return $permissions;
}
