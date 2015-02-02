<?php
/**
 * @file
 * feature_tipo_contenido_1.features.inc
 */

/**
 * Implements hook_node_info().
 */
function feature_tipo_contenido_1_node_info() {
  $items = array(
    'tipo_contenido_1' => array(
      'name' => t('Tipo_contenido_1'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
