<?php
/**
 * @file
 * drupalne_talk_suggestions.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function drupalne_talk_suggestions_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'talk_suggestions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Talk suggestions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Latest Talk Suggestions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'talk_suggestion' => 'talk_suggestion',
  );

  /* Display: Lastest Talk Suggestions */
  $handler = $view->new_display('block', 'Lastest Talk Suggestions', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: Highest Rated Talk Suggestions */
  $handler = $view->new_display('block', 'Highest Rated Talk Suggestions', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Highest Rated Talk Suggestions';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Suggestion Vote (field_suggestion_vote:rating) */
  $handler->display->display_options['sorts']['field_suggestion_vote_rating']['id'] = 'field_suggestion_vote_rating';
  $handler->display->display_options['sorts']['field_suggestion_vote_rating']['table'] = 'field_data_field_suggestion_vote';
  $handler->display->display_options['sorts']['field_suggestion_vote_rating']['field'] = 'field_suggestion_vote_rating';
  $handler->display->display_options['sorts']['field_suggestion_vote_rating']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'talk_suggestion' => 'talk_suggestion',
  );
  /* Filter criterion: Content: Suggestion Vote (field_suggestion_vote:rating) */
  $handler->display->display_options['filters']['field_suggestion_vote_rating']['id'] = 'field_suggestion_vote_rating';
  $handler->display->display_options['filters']['field_suggestion_vote_rating']['table'] = 'field_data_field_suggestion_vote';
  $handler->display->display_options['filters']['field_suggestion_vote_rating']['field'] = 'field_suggestion_vote_rating';
  $handler->display->display_options['filters']['field_suggestion_vote_rating']['operator'] = '>';
  $handler->display->display_options['filters']['field_suggestion_vote_rating']['value']['value'] = '0';
  $export['talk_suggestions'] = $view;

  return $export;
}
