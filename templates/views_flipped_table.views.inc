<?php

/**
 * @file
 * Defines the Flipped table style plugin, flipping rows and columns.
 */

/**
 * Implements hook_views_plugins().
 */
function views_flipped_table_views_plugins() {
  return array(
    'style' => array(
      'flipped' => array(
        'title' => t('Flipped table'),
        'help' => t('Displays a table with rows and columns flipped.'),
        'handler' => 'views_flipped_table_plugin_style_flipped_table',
        'parent' => 'table',
        'uses row plugin' => FALSE,
        'uses row class' => TRUE,
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
        'theme' => 'views_flipped_table',
      ),
    ),
  );
}
