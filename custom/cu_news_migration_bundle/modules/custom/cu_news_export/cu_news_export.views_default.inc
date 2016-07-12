<?php
/**
 * @file
 * cu_news_export.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cu_news_export_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'article_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Article Export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Article Export';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = 'summary';
  $handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_1']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Highlights */
  $handler->display->display_options['fields']['field_news_highlights']['id'] = 'field_news_highlights';
  $handler->display->display_options['fields']['field_news_highlights']['table'] = 'field_data_field_news_highlights';
  $handler->display->display_options['fields']['field_news_highlights']['field'] = 'field_news_highlights';
  $handler->display->display_options['fields']['field_news_highlights']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_highlights']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_highlights']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_highlights']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_news_highlights']['field_api_classes'] = TRUE;
  /* Field: Field: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['label'] = 'topics';
  $handler->display->display_options['fields']['field_topic']['element_type'] = '0';
  $handler->display->display_options['fields']['field_topic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_topic']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['type'] = 'taxonomy_term_reference_csv';
  $handler->display->display_options['fields']['field_topic']['settings'] = array(
    'links_option' => 0,
    'separator_option' => ', ',
    'element_option' => '- None -',
    'element_class' => '',
    'wrapper_option' => '- None -',
    'wrapper_class' => '',
  );
  $handler->display->display_options['fields']['field_topic']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_topic']['field_api_classes'] = TRUE;
  /* Field: Content: Audience */
  $handler->display->display_options['fields']['field_bb_audience']['id'] = 'field_bb_audience';
  $handler->display->display_options['fields']['field_bb_audience']['table'] = 'field_data_field_bb_audience';
  $handler->display->display_options['fields']['field_bb_audience']['field'] = 'field_bb_audience';
  $handler->display->display_options['fields']['field_bb_audience']['label'] = 'audiences';
  $handler->display->display_options['fields']['field_bb_audience']['element_type'] = '0';
  $handler->display->display_options['fields']['field_bb_audience']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bb_audience']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_bb_audience']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_bb_audience']['type'] = 'ds_taxonomy_separator';
  $handler->display->display_options['fields']['field_bb_audience']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_bb_audience']['field_api_classes'] = TRUE;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = 'video_url';
  $handler->display->display_options['fields']['field_video']['element_type'] = '0';
  $handler->display->display_options['fields']['field_video']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_video']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video']['type'] = 'node_reference_path';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'alias' => 1,
    'absolute' => 0,
  );
  $handler->display->display_options['fields']['field_video']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_video']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_video']['field_api_classes'] = TRUE;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video_1']['id'] = 'field_video_1';
  $handler->display->display_options['fields']['field_video_1']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video_1']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video_1']['label'] = 'video_title';
  $handler->display->display_options['fields']['field_video_1']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_video_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_video_1']['delta_offset'] = '0';
  /* Field: Content: Quotes */
  $handler->display->display_options['fields']['field_news_quotes']['id'] = 'field_news_quotes';
  $handler->display->display_options['fields']['field_news_quotes']['table'] = 'field_data_field_news_quotes';
  $handler->display->display_options['fields']['field_news_quotes']['field'] = 'field_news_quotes';
  $handler->display->display_options['fields']['field_news_quotes']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_quotes']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_quotes']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_quotes']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_news_quotes']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_news_quotes']['field_api_classes'] = TRUE;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_photo_collection']['id'] = 'field_photo_collection';
  $handler->display->display_options['fields']['field_photo_collection']['table'] = 'field_data_field_photo_collection';
  $handler->display->display_options['fields']['field_photo_collection']['field'] = 'field_photo_collection';
  $handler->display->display_options['fields']['field_photo_collection']['element_type'] = '0';
  $handler->display->display_options['fields']['field_photo_collection']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_photo_collection']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_photo_collection']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_photo_collection']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_photo_collection']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_photo_collection']['field_api_classes'] = TRUE;
  /* Field: Content: Thumbnail */
  $handler->display->display_options['fields']['field_release_thumbnail']['id'] = 'field_release_thumbnail';
  $handler->display->display_options['fields']['field_release_thumbnail']['table'] = 'field_data_field_release_thumbnail';
  $handler->display->display_options['fields']['field_release_thumbnail']['field'] = 'field_release_thumbnail';
  $handler->display->display_options['fields']['field_release_thumbnail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_release_thumbnail']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_release_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_release_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_release_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_release_thumbnail']['field_api_classes'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Field: User: Authentication name */
  $handler->display->display_options['fields']['authname']['id'] = 'authname';
  $handler->display->display_options['fields']['authname']['table'] = 'authmap';
  $handler->display->display_options['fields']['authname']['field'] = 'authname';
  $handler->display->display_options['fields']['authname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['authname']['label'] = 'username';
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
    'news_release' => 'news_release',
  );

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'article-export';
  $export['article_export'] = $view;

  $view = new view();
  $view->name = 'audio_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Audio Export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Article Export';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Thumbnail */
  $handler->display->display_options['fields']['field_release_thumbnail']['id'] = 'field_release_thumbnail';
  $handler->display->display_options['fields']['field_release_thumbnail']['table'] = 'field_data_field_release_thumbnail';
  $handler->display->display_options['fields']['field_release_thumbnail']['field'] = 'field_release_thumbnail';
  $handler->display->display_options['fields']['field_release_thumbnail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_release_thumbnail']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_release_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_release_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_release_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_release_thumbnail']['field_api_classes'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Field: Content: Script */
  $handler->display->display_options['fields']['field_audio_script']['id'] = 'field_audio_script';
  $handler->display->display_options['fields']['field_audio_script']['table'] = 'field_data_field_audio_script';
  $handler->display->display_options['fields']['field_audio_script']['field'] = 'field_audio_script';
  $handler->display->display_options['fields']['field_audio_script']['element_type'] = '0';
  $handler->display->display_options['fields']['field_audio_script']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_audio_script']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_audio_script']['field_api_classes'] = TRUE;
  /* Field: Field: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['element_type'] = '0';
  $handler->display->display_options['fields']['field_topic']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_topic']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['type'] = 'taxonomy_term_reference_csv';
  $handler->display->display_options['fields']['field_topic']['settings'] = array(
    'links_option' => 0,
    'separator_option' => ', ',
    'element_option' => '- None -',
    'element_class' => '',
    'wrapper_option' => '- None -',
    'wrapper_class' => '',
  );
  $handler->display->display_options['fields']['field_topic']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_topic']['field_api_classes'] = TRUE;
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
    'audio' => 'audio',
  );

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'audio-export';
  $export['audio_export'] = $view;

  return $export;
}
