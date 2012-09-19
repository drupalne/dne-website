<?php
/**
 * @file
 * drupalne_events.features.inc
 */

/**
 * Implements hook_views_api().
 */
function drupalne_events_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function drupalne_events_node_info() {
  $items = array(
    'events' => array(
      'name' => t('Events'),
      'base' => 'node_content',
      'description' => t('Event content type for creating Drupal NE events'),
      'has_title' => '1',
      'title_label' => t('Event name'),
      'help' => '',
    ),
  );
  return $items;
}
