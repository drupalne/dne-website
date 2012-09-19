<?php
/**
 * @file
 * drupalne_talk_suggestions.features.inc
 */

/**
 * Implements hook_views_api().
 */
function drupalne_talk_suggestions_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function drupalne_talk_suggestions_node_info() {
  $items = array(
    'talk_suggestion' => array(
      'name' => t('Talk Suggestion'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
