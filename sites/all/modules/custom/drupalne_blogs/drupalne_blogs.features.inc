<?php
/**
 * @file
 * drupalne_blogs.features.inc
 */

/**
 * Implements hook_views_api().
 */
function drupalne_blogs_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function drupalne_blogs_node_info() {
  $items = array(
    'blog' => array(
      'name' => t('Blog'),
      'base' => 'node_content',
      'description' => t('Use <em>blogs</em> for time-sensitive blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
