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
  $view->human_name = 'Export - Article';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Export - Article ';
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
  /* Relationship: Content: Photo (field_photo_collection) */
  $handler->display->display_options['relationships']['field_photo_collection_value']['id'] = 'field_photo_collection_value';
  $handler->display->display_options['relationships']['field_photo_collection_value']['table'] = 'field_data_field_photo_collection';
  $handler->display->display_options['relationships']['field_photo_collection_value']['field'] = 'field_photo_collection_value';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Photo (field_photo_collection:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_photo_collection';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = 'delta';
  $handler->display->display_options['fields']['delta']['element_type'] = '0';
  $handler->display->display_options['fields']['delta']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['delta']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['delta']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
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
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = 'video_url';
  $handler->display->display_options['fields']['field_video']['alter']['strip_tags'] = TRUE;
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
  $handler->display->display_options['fields']['field_video_1']['alter']['strip_tags'] = TRUE;
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
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
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
  /* Field: Field collection item: Photo */
  $handler->display->display_options['fields']['field_gallery_photo']['id'] = 'field_gallery_photo';
  $handler->display->display_options['fields']['field_gallery_photo']['table'] = 'field_data_field_gallery_photo';
  $handler->display->display_options['fields']['field_gallery_photo']['field'] = 'field_gallery_photo';
  $handler->display->display_options['fields']['field_gallery_photo']['relationship'] = 'field_photo_collection_value';
  $handler->display->display_options['fields']['field_gallery_photo']['label'] = 'photo_uri';
  $handler->display->display_options['fields']['field_gallery_photo']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_gallery_photo']['element_type'] = '0';
  $handler->display->display_options['fields']['field_gallery_photo']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_gallery_photo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_photo']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_gallery_photo']['settings'] = array(
    'url_type' => '3',
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery_photo']['field_api_classes'] = TRUE;
  /* Field: Field collection item: Caption */
  $handler->display->display_options['fields']['field_gallery_caption']['id'] = 'field_gallery_caption';
  $handler->display->display_options['fields']['field_gallery_caption']['table'] = 'field_data_field_gallery_caption';
  $handler->display->display_options['fields']['field_gallery_caption']['field'] = 'field_gallery_caption';
  $handler->display->display_options['fields']['field_gallery_caption']['relationship'] = 'field_photo_collection_value';
  $handler->display->display_options['fields']['field_gallery_caption']['label'] = 'photo_caption';
  $handler->display->display_options['fields']['field_gallery_caption']['element_type'] = '0';
  $handler->display->display_options['fields']['field_gallery_caption']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_gallery_caption']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_caption']['field_api_classes'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'date';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Field: Topic */
  $handler->display->display_options['fields']['field_topic_1']['id'] = 'field_topic_1';
  $handler->display->display_options['fields']['field_topic_1']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic_1']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic_1']['label'] = 'topic';
  $handler->display->display_options['fields']['field_topic_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_topic_1']['type'] = 'taxonomy_term_reference_csv';
  $handler->display->display_options['fields']['field_topic_1']['settings'] = array(
    'links_option' => 0,
    'separator_option' => ', ',
    'element_option' => '- None -',
    'element_class' => '',
    'wrapper_option' => '- None -',
    'wrapper_class' => '',
  );
  $handler->display->display_options['fields']['field_topic_1']['delta_offset'] = '0';
  /* Field: Content: College or School */
  $handler->display->display_options['fields']['field_college_terms']['id'] = 'field_college_terms';
  $handler->display->display_options['fields']['field_college_terms']['table'] = 'field_data_field_college_terms';
  $handler->display->display_options['fields']['field_college_terms']['field'] = 'field_college_terms';
  $handler->display->display_options['fields']['field_college_terms']['label'] = 'school';
  $handler->display->display_options['fields']['field_college_terms']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_college_terms']['element_type'] = '0';
  $handler->display->display_options['fields']['field_college_terms']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_college_terms']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_college_terms']['type'] = 'taxonomy_term_reference_csv';
  $handler->display->display_options['fields']['field_college_terms']['settings'] = array(
    'links_option' => 0,
    'separator_option' => ', ',
    'element_option' => '- None -',
    'element_class' => '',
    'wrapper_option' => '- None -',
    'wrapper_class' => '',
  );
  $handler->display->display_options['fields']['field_college_terms']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_college_terms']['field_api_classes'] = TRUE;
  /* Field: Field: Audience */
  $handler->display->display_options['fields']['field_audience']['id'] = 'field_audience';
  $handler->display->display_options['fields']['field_audience']['table'] = 'field_data_field_audience';
  $handler->display->display_options['fields']['field_audience']['field'] = 'field_audience';
  $handler->display->display_options['fields']['field_audience']['label'] = 'audience';
  $handler->display->display_options['fields']['field_audience']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_audience']['element_type'] = '0';
  $handler->display->display_options['fields']['field_audience']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_audience']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_audience']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_audience']['type'] = 'taxonomy_term_reference_csv';
  $handler->display->display_options['fields']['field_audience']['settings'] = array(
    'links_option' => 0,
    'separator_option' => ', ',
    'element_option' => '- None -',
    'element_class' => '',
    'wrapper_option' => '- None -',
    'wrapper_class' => '',
  );
  $handler->display->display_options['fields']['field_audience']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_audience']['field_api_classes'] = TRUE;
  /* Field: Field: Topic */
  $handler->display->display_options['fields']['field_topic_2']['id'] = 'field_topic_2';
  $handler->display->display_options['fields']['field_topic_2']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic_2']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic_2']['label'] = 'legacy_topic';
  $handler->display->display_options['fields']['field_topic_2']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_topic_2']['type'] = 'taxonomy_term_reference_csv';
  $handler->display->display_options['fields']['field_topic_2']['settings'] = array(
    'links_option' => 0,
    'separator_option' => ', ',
    'element_option' => '- None -',
    'element_class' => '',
    'wrapper_option' => '- None -',
    'wrapper_class' => '',
  );
  $handler->display->display_options['fields']['field_topic_2']['delta_offset'] = '0';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'published';
  $handler->display->display_options['fields']['status']['type'] = 'boolean';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Thumbnail */
  $handler->display->display_options['fields']['field_release_thumbnail']['id'] = 'field_release_thumbnail';
  $handler->display->display_options['fields']['field_release_thumbnail']['table'] = 'field_data_field_release_thumbnail';
  $handler->display->display_options['fields']['field_release_thumbnail']['field'] = 'field_release_thumbnail';
  $handler->display->display_options['fields']['field_release_thumbnail']['label'] = 'thumbnail_uri';
  $handler->display->display_options['fields']['field_release_thumbnail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_release_thumbnail']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_release_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_release_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_release_thumbnail']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_release_thumbnail']['settings'] = array(
    'url_type' => '3',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Thumbnail */
  $handler->display->display_options['fields']['field_release_thumbnail_2']['id'] = 'field_release_thumbnail_2';
  $handler->display->display_options['fields']['field_release_thumbnail_2']['table'] = 'field_data_field_release_thumbnail';
  $handler->display->display_options['fields']['field_release_thumbnail_2']['field'] = 'field_release_thumbnail';
  $handler->display->display_options['fields']['field_release_thumbnail_2']['label'] = 'thumbnail_alt';
  $handler->display->display_options['fields']['field_release_thumbnail_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_release_thumbnail_2']['alter']['text'] = '[field_release_thumbnail_2-alt]';
  $handler->display->display_options['fields']['field_release_thumbnail_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_release_thumbnail_2']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_release' => 'news_release',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Photo (field_photo_collection:delta) */
  $handler->display->display_options['filters']['delta_1']['id'] = 'delta_1';
  $handler->display->display_options['filters']['delta_1']['table'] = 'field_data_field_photo_collection';
  $handler->display->display_options['filters']['delta_1']['field'] = 'delta';
  $handler->display->display_options['filters']['delta_1']['value']['value'] = '0';
  $handler->display->display_options['filters']['delta_1']['group'] = 2;
  /* Filter criterion: Content: Photo (field_photo_collection:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_photo_collection';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['operator'] = 'empty';
  $handler->display->display_options['filters']['delta']['group'] = 2;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 1;
  $handler->display->display_options['path'] = 'article-export3';
  $handler->display->display_options['sitename_title'] = 0;
  $handler->display->display_options['segment_size'] = '50';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['path'] = 'article-export-preview';
  $export['article_export'] = $view;

  $view = new view();
  $view->name = 'audio_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Export - Audio ';
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
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
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
  $handler->display->display_options['fields']['field_topic']['alter']['strip_tags'] = TRUE;
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
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'username';
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Content: Thumbnail */
  $handler->display->display_options['fields']['field_audio_thumbnail']['id'] = 'field_audio_thumbnail';
  $handler->display->display_options['fields']['field_audio_thumbnail']['table'] = 'field_data_field_audio_thumbnail';
  $handler->display->display_options['fields']['field_audio_thumbnail']['field'] = 'field_audio_thumbnail';
  $handler->display->display_options['fields']['field_audio_thumbnail']['label'] = 'thumbnail_alt';
  $handler->display->display_options['fields']['field_audio_thumbnail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_audio_thumbnail']['alter']['text'] = '[field_audio_thumbnail-alt] ';
  $handler->display->display_options['fields']['field_audio_thumbnail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_audio_thumbnail']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_audio_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_audio_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_audio_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Thumbnail */
  $handler->display->display_options['fields']['field_release_thumbnail']['id'] = 'field_release_thumbnail';
  $handler->display->display_options['fields']['field_release_thumbnail']['table'] = 'field_data_field_release_thumbnail';
  $handler->display->display_options['fields']['field_release_thumbnail']['field'] = 'field_release_thumbnail';
  $handler->display->display_options['fields']['field_release_thumbnail']['label'] = 'thumbnail_uri';
  $handler->display->display_options['fields']['field_release_thumbnail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_release_thumbnail']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_release_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_release_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_release_thumbnail']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_release_thumbnail']['settings'] = array(
    'url_type' => '3',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Script Download */
  $handler->display->display_options['fields']['field_script_file']['id'] = 'field_script_file';
  $handler->display->display_options['fields']['field_script_file']['table'] = 'field_data_field_script_file';
  $handler->display->display_options['fields']['field_script_file']['field'] = 'field_script_file';
  $handler->display->display_options['fields']['field_script_file']['label'] = 'script_download_url';
  $handler->display->display_options['fields']['field_script_file']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_script_file']['element_type'] = '0';
  $handler->display->display_options['fields']['field_script_file']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_script_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_script_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_script_file']['type'] = 'file_url_plain';
  /* Field: Content: Audio Clips */
  $handler->display->display_options['fields']['field_audio_clips']['id'] = 'field_audio_clips';
  $handler->display->display_options['fields']['field_audio_clips']['table'] = 'field_data_field_audio_clips';
  $handler->display->display_options['fields']['field_audio_clips']['field'] = 'field_audio_clips';
  $handler->display->display_options['fields']['field_audio_clips']['label'] = 'audio_clips';
  $handler->display->display_options['fields']['field_audio_clips']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_audio_clips']['element_type'] = '0';
  $handler->display->display_options['fields']['field_audio_clips']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_audio_clips']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_audio_clips']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_audio_clips']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_audio_clips']['delta_limit'] = 'All';
  $handler->display->display_options['fields']['field_audio_clips']['delta_offset'] = '0';
  /* Field: Content: Audio Clips */
  $handler->display->display_options['fields']['field_audio_clips_1']['id'] = 'field_audio_clips_1';
  $handler->display->display_options['fields']['field_audio_clips_1']['table'] = 'field_data_field_audio_clips';
  $handler->display->display_options['fields']['field_audio_clips_1']['field'] = 'field_audio_clips';
  $handler->display->display_options['fields']['field_audio_clips_1']['label'] = 'audio_clip1';
  $handler->display->display_options['fields']['field_audio_clips_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_audio_clips_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_audio_clips_1']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_audio_clips_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_audio_clips_1']['delta_offset'] = '0';
  /* Field: Content: Audio Clips */
  $handler->display->display_options['fields']['field_audio_clips_2']['id'] = 'field_audio_clips_2';
  $handler->display->display_options['fields']['field_audio_clips_2']['table'] = 'field_data_field_audio_clips';
  $handler->display->display_options['fields']['field_audio_clips_2']['field'] = 'field_audio_clips';
  $handler->display->display_options['fields']['field_audio_clips_2']['label'] = 'audio_clip2';
  $handler->display->display_options['fields']['field_audio_clips_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_audio_clips_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_audio_clips_2']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_audio_clips_2']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_audio_clips_2']['delta_offset'] = '1';
  /* Field: Content: Audio Clips */
  $handler->display->display_options['fields']['field_audio_clips_3']['id'] = 'field_audio_clips_3';
  $handler->display->display_options['fields']['field_audio_clips_3']['table'] = 'field_data_field_audio_clips';
  $handler->display->display_options['fields']['field_audio_clips_3']['field'] = 'field_audio_clips';
  $handler->display->display_options['fields']['field_audio_clips_3']['label'] = 'audio_clip3';
  $handler->display->display_options['fields']['field_audio_clips_3']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_audio_clips_3']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_audio_clips_3']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_audio_clips_3']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_audio_clips_3']['delta_offset'] = '2';
  /* Field: Content: Audio Clips */
  $handler->display->display_options['fields']['field_audio_clips_4']['id'] = 'field_audio_clips_4';
  $handler->display->display_options['fields']['field_audio_clips_4']['table'] = 'field_data_field_audio_clips';
  $handler->display->display_options['fields']['field_audio_clips_4']['field'] = 'field_audio_clips';
  $handler->display->display_options['fields']['field_audio_clips_4']['label'] = 'audio_clip4';
  $handler->display->display_options['fields']['field_audio_clips_4']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_audio_clips_4']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_audio_clips_4']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_audio_clips_4']['delta_offset'] = '3';
  /* Field: Content: Audio Clips */
  $handler->display->display_options['fields']['field_audio_clips_5']['id'] = 'field_audio_clips_5';
  $handler->display->display_options['fields']['field_audio_clips_5']['table'] = 'field_data_field_audio_clips';
  $handler->display->display_options['fields']['field_audio_clips_5']['field'] = 'field_audio_clips';
  $handler->display->display_options['fields']['field_audio_clips_5']['label'] = 'audio_clip5';
  $handler->display->display_options['fields']['field_audio_clips_5']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_audio_clips_5']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_audio_clips_5']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_audio_clips_5']['delta_offset'] = '4';
  /* Field: Content: Audio Clips */
  $handler->display->display_options['fields']['field_audio_clips_6']['id'] = 'field_audio_clips_6';
  $handler->display->display_options['fields']['field_audio_clips_6']['table'] = 'field_data_field_audio_clips';
  $handler->display->display_options['fields']['field_audio_clips_6']['field'] = 'field_audio_clips';
  $handler->display->display_options['fields']['field_audio_clips_6']['label'] = 'audio_clip6';
  $handler->display->display_options['fields']['field_audio_clips_6']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_audio_clips_6']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_audio_clips_6']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_audio_clips_6']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_audio_clips_6']['delta_offset'] = '5';
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
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '2015-01-01';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'export/audio';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'export/audio-preview';
  $export['audio_export'] = $view;

  $view = new view();
  $view->name = 'export_feature';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Export - Feature';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Export - Feature';
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
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = 'summary';
  $handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_1']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
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
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'date';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Field: Topic */
  $handler->display->display_options['fields']['field_topic_1']['id'] = 'field_topic_1';
  $handler->display->display_options['fields']['field_topic_1']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic_1']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic_1']['label'] = 'topic';
  $handler->display->display_options['fields']['field_topic_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_topic_1']['type'] = 'taxonomy_term_reference_csv';
  $handler->display->display_options['fields']['field_topic_1']['settings'] = array(
    'links_option' => 0,
    'separator_option' => ', ',
    'element_option' => '- None -',
    'element_class' => '',
    'wrapper_option' => '- None -',
    'wrapper_class' => '',
  );
  $handler->display->display_options['fields']['field_topic_1']['delta_offset'] = '0';
  /* Field: Field: Audience */
  $handler->display->display_options['fields']['field_audience']['id'] = 'field_audience';
  $handler->display->display_options['fields']['field_audience']['table'] = 'field_data_field_audience';
  $handler->display->display_options['fields']['field_audience']['field'] = 'field_audience';
  $handler->display->display_options['fields']['field_audience']['label'] = 'audience';
  $handler->display->display_options['fields']['field_audience']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_audience']['element_type'] = '0';
  $handler->display->display_options['fields']['field_audience']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_audience']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_audience']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_audience']['type'] = 'taxonomy_term_reference_csv';
  $handler->display->display_options['fields']['field_audience']['settings'] = array(
    'links_option' => 0,
    'separator_option' => ', ',
    'element_option' => '- None -',
    'element_class' => '',
    'wrapper_option' => '- None -',
    'wrapper_class' => '',
  );
  $handler->display->display_options['fields']['field_audience']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_audience']['field_api_classes'] = TRUE;
  /* Field: Field: Topic */
  $handler->display->display_options['fields']['field_topic_2']['id'] = 'field_topic_2';
  $handler->display->display_options['fields']['field_topic_2']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic_2']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic_2']['label'] = 'legacy_topic';
  $handler->display->display_options['fields']['field_topic_2']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_topic_2']['type'] = 'taxonomy_term_reference_csv';
  $handler->display->display_options['fields']['field_topic_2']['settings'] = array(
    'links_option' => 0,
    'separator_option' => ', ',
    'element_option' => '- None -',
    'element_class' => '',
    'wrapper_option' => '- None -',
    'wrapper_class' => '',
  );
  $handler->display->display_options['fields']['field_topic_2']['delta_offset'] = '0';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'published';
  $handler->display->display_options['fields']['status']['type'] = 'boolean';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Thumbnail image */
  $handler->display->display_options['fields']['field_feature_thumb']['id'] = 'field_feature_thumb';
  $handler->display->display_options['fields']['field_feature_thumb']['table'] = 'field_data_field_feature_thumb';
  $handler->display->display_options['fields']['field_feature_thumb']['field'] = 'field_feature_thumb';
  $handler->display->display_options['fields']['field_feature_thumb']['label'] = 'thumbnail_uri';
  $handler->display->display_options['fields']['field_feature_thumb']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_feature_thumb']['element_type'] = '0';
  $handler->display->display_options['fields']['field_feature_thumb']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_feature_thumb']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_feature_thumb']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_thumb']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_feature_thumb']['settings'] = array(
    'url_type' => '3',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Thumbnail image */
  $handler->display->display_options['fields']['field_feature_thumb_1']['id'] = 'field_feature_thumb_1';
  $handler->display->display_options['fields']['field_feature_thumb_1']['table'] = 'field_data_field_feature_thumb';
  $handler->display->display_options['fields']['field_feature_thumb_1']['field'] = 'field_feature_thumb';
  $handler->display->display_options['fields']['field_feature_thumb_1']['label'] = 'thumbnail_alt';
  $handler->display->display_options['fields']['field_feature_thumb_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_feature_thumb_1']['alter']['text'] = '[field_feature_thumb_1-alt] ';
  $handler->display->display_options['fields']['field_feature_thumb_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_thumb_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = 'video_url';
  $handler->display->display_options['fields']['field_video']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video']['element_type'] = '0';
  $handler->display->display_options['fields']['field_video']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_video']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video']['type'] = 'node_reference_path';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'alias' => 1,
    'absolute' => 0,
  );
  $handler->display->display_options['fields']['field_video']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_video']['field_api_classes'] = TRUE;
  /* Field: Content: Feature image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['label'] = 'feature_image_uri';
  $handler->display->display_options['fields']['field_feature_image']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_feature_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_feature_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_feature_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'url_type' => '3',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Feature image */
  $handler->display->display_options['fields']['field_feature_image_1']['id'] = 'field_feature_image_1';
  $handler->display->display_options['fields']['field_feature_image_1']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image_1']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image_1']['label'] = 'feature_image_alt';
  $handler->display->display_options['fields']['field_feature_image_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_feature_image_1']['alter']['text'] = '[field_feature_image_1-alt]';
  $handler->display->display_options['fields']['field_feature_image_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_feature_image_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = 'priority';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = 'field_adv_article_image';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
    3 => 'OR',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'feature_article' => 'feature_article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'uid';
  $handler->display->display_options['filters']['name']['value'] = 'kajo7205';
  $handler->display->display_options['filters']['name']['group'] = 3;
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name_1']['id'] = 'name_1';
  $handler->display->display_options['filters']['name_1']['table'] = 'users';
  $handler->display->display_options['filters']['name_1']['field'] = 'name';
  $handler->display->display_options['filters']['name_1']['relationship'] = 'uid';
  $handler->display->display_options['filters']['name_1']['value'] = 'swensong';
  $handler->display->display_options['filters']['name_1']['group'] = 3;
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name_2']['id'] = 'name_2';
  $handler->display->display_options['filters']['name_2']['table'] = 'users';
  $handler->display->display_options['filters']['name_2']['field'] = 'name';
  $handler->display->display_options['filters']['name_2']['relationship'] = 'uid';
  $handler->display->display_options['filters']['name_2']['value'] = 'fraziere';
  $handler->display->display_options['filters']['name_2']['group'] = 3;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 1;
  $handler->display->display_options['path'] = 'export/features';
  $handler->display->display_options['sitename_title'] = 0;
  $handler->display->display_options['segment_size'] = '50';

  /* Display: Features with Images */
  $handler = $view->new_display('page', 'Features with Images', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
    3 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'feature_article' => 'feature_article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'uid';
  $handler->display->display_options['filters']['name']['value'] = 'kajo7205';
  $handler->display->display_options['filters']['name']['group'] = 3;
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name_1']['id'] = 'name_1';
  $handler->display->display_options['filters']['name_1']['table'] = 'users';
  $handler->display->display_options['filters']['name_1']['field'] = 'name';
  $handler->display->display_options['filters']['name_1']['relationship'] = 'uid';
  $handler->display->display_options['filters']['name_1']['value'] = 'swensong';
  $handler->display->display_options['filters']['name_1']['group'] = 3;
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name_2']['id'] = 'name_2';
  $handler->display->display_options['filters']['name_2']['table'] = 'users';
  $handler->display->display_options['filters']['name_2']['field'] = 'name';
  $handler->display->display_options['filters']['name_2']['relationship'] = 'uid';
  $handler->display->display_options['filters']['name_2']['value'] = 'fraziere';
  $handler->display->display_options['filters']['name_2']['group'] = 3;
  /* Filter criterion: Content: Feature image (field_feature_image:fid) */
  $handler->display->display_options['filters']['field_feature_image_fid']['id'] = 'field_feature_image_fid';
  $handler->display->display_options['filters']['field_feature_image_fid']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['filters']['field_feature_image_fid']['field'] = 'field_feature_image_fid';
  $handler->display->display_options['filters']['field_feature_image_fid']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'export/feature-image-preview';

  /* Display: Features with Images */
  $handler = $view->new_display('page', 'Features with Images', 'page_2');
  $handler->display->display_options['path'] = 'export/feature-preview';
  $export['export_feature'] = $view;

  $view = new view();
  $view->name = 'export_news_release_thumbnails';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Export - News Release Thumbnails';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Export News Release Thumbnails';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Thumbnail */
  $handler->display->display_options['fields']['field_release_thumbnail']['id'] = 'field_release_thumbnail';
  $handler->display->display_options['fields']['field_release_thumbnail']['table'] = 'field_data_field_release_thumbnail';
  $handler->display->display_options['fields']['field_release_thumbnail']['field'] = 'field_release_thumbnail';
  $handler->display->display_options['fields']['field_release_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_release_thumbnail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_release_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_release_thumbnail']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_release_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_release_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_release_thumbnail']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_release_thumbnail']['settings'] = array(
    'url_type' => '2',
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_release_thumbnail']['field_api_classes'] = TRUE;
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
  /* Filter criterion: Content: Thumbnail (field_release_thumbnail:fid) */
  $handler->display->display_options['filters']['field_release_thumbnail_fid']['id'] = 'field_release_thumbnail_fid';
  $handler->display->display_options['filters']['field_release_thumbnail_fid']['table'] = 'field_data_field_release_thumbnail';
  $handler->display->display_options['filters']['field_release_thumbnail_fid']['field'] = 'field_release_thumbnail_fid';
  $handler->display->display_options['filters']['field_release_thumbnail_fid']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/export-news-release-thumbnails-preview';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Thumbnail */
  $handler->display->display_options['fields']['field_release_thumbnail']['id'] = 'field_release_thumbnail';
  $handler->display->display_options['fields']['field_release_thumbnail']['table'] = 'field_data_field_release_thumbnail';
  $handler->display->display_options['fields']['field_release_thumbnail']['field'] = 'field_release_thumbnail';
  $handler->display->display_options['fields']['field_release_thumbnail']['label'] = 'thubmnail_path';
  $handler->display->display_options['fields']['field_release_thumbnail']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_release_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_release_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_release_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_release_thumbnail']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_release_thumbnail']['settings'] = array(
    'url_type' => '2',
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['path'] = 'admin/export/thumbnails';
  $export['export_news_release_thumbnails'] = $view;

  $view = new view();
  $view->name = 'file_collections_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'file-collections-export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'file-collections-export';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_gallery_caption' => 'field_gallery_caption',
    'field_gallery_photo' => 'field_gallery_photo',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_gallery_caption' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_gallery_photo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Relationship: Field collection item: Entity with the Photo (field_photo_collection) */
  $handler->display->display_options['relationships']['field_photo_collection_node']['id'] = 'field_photo_collection_node';
  $handler->display->display_options['relationships']['field_photo_collection_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_photo_collection_node']['field'] = 'field_photo_collection_node';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_photo_collection_node';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_photo_collection_node';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field collection item: Caption */
  $handler->display->display_options['fields']['field_gallery_caption']['id'] = 'field_gallery_caption';
  $handler->display->display_options['fields']['field_gallery_caption']['table'] = 'field_data_field_gallery_caption';
  $handler->display->display_options['fields']['field_gallery_caption']['field'] = 'field_gallery_caption';
  $handler->display->display_options['fields']['field_gallery_caption']['label'] = 'caption';
  $handler->display->display_options['fields']['field_gallery_caption']['element_type'] = '0';
  $handler->display->display_options['fields']['field_gallery_caption']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_gallery_caption']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_caption']['field_api_classes'] = TRUE;
  /* Field: Field collection item: Photo */
  $handler->display->display_options['fields']['field_gallery_photo']['id'] = 'field_gallery_photo';
  $handler->display->display_options['fields']['field_gallery_photo']['table'] = 'field_data_field_gallery_photo';
  $handler->display->display_options['fields']['field_gallery_photo']['field'] = 'field_gallery_photo';
  $handler->display->display_options['fields']['field_gallery_photo']['label'] = 'file_path';
  $handler->display->display_options['fields']['field_gallery_photo']['element_type'] = '0';
  $handler->display->display_options['fields']['field_gallery_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_photo']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_gallery_photo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_photo']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_gallery_photo']['settings'] = array(
    'url_type' => '2',
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery_photo']['field_api_classes'] = TRUE;
  /* Field: Field collection item: Photo */
  $handler->display->display_options['fields']['field_gallery_photo_1']['id'] = 'field_gallery_photo_1';
  $handler->display->display_options['fields']['field_gallery_photo_1']['table'] = 'field_data_field_gallery_photo';
  $handler->display->display_options['fields']['field_gallery_photo_1']['field'] = 'field_gallery_photo';
  $handler->display->display_options['fields']['field_gallery_photo_1']['label'] = 'uri';
  $handler->display->display_options['fields']['field_gallery_photo_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_photo_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_gallery_photo_1']['settings'] = array(
    'url_type' => '3',
    'image_style' => '',
    'image_link' => '',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_photo_collection_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'feature_article' => 'feature_article',
    'news_release' => 'news_release',
  );

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'file-collection-export';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'file-collection-export-test';
  $export['file_collections_export'] = $view;

  $view = new view();
  $view->name = 'file_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Export - Files';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'File Export';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Photo (field_photo_collection) */
  $handler->display->display_options['relationships']['field_photo_collection_value']['id'] = 'field_photo_collection_value';
  $handler->display->display_options['relationships']['field_photo_collection_value']['table'] = 'field_data_field_photo_collection';
  $handler->display->display_options['relationships']['field_photo_collection_value']['field'] = 'field_photo_collection_value';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  $handler->display->display_options['fields']['field_photo_collection']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_photo_collection']['field_api_classes'] = TRUE;
  /* Field: Content: Thumbnail image */
  $handler->display->display_options['fields']['field_feature_thumb']['id'] = 'field_feature_thumb';
  $handler->display->display_options['fields']['field_feature_thumb']['table'] = 'field_data_field_feature_thumb';
  $handler->display->display_options['fields']['field_feature_thumb']['field'] = 'field_feature_thumb';
  $handler->display->display_options['fields']['field_feature_thumb']['label'] = '';
  $handler->display->display_options['fields']['field_feature_thumb']['element_type'] = '0';
  $handler->display->display_options['fields']['field_feature_thumb']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_thumb']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_feature_thumb']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_feature_thumb']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_thumb']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_feature_thumb']['settings'] = array(
    'url_type' => '2',
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_feature_thumb']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name_2']['id'] = 'name_2';
  $handler->display->display_options['filters']['name_2']['table'] = 'users';
  $handler->display->display_options['filters']['name_2']['field'] = 'name';
  $handler->display->display_options['filters']['name_2']['relationship'] = 'uid';
  $handler->display->display_options['filters']['name_2']['value'] = 'fraziere';
  $handler->display->display_options['filters']['name_2']['group'] = 2;
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name_1']['id'] = 'name_1';
  $handler->display->display_options['filters']['name_1']['table'] = 'users';
  $handler->display->display_options['filters']['name_1']['field'] = 'name';
  $handler->display->display_options['filters']['name_1']['relationship'] = 'uid';
  $handler->display->display_options['filters']['name_1']['value'] = 'swensong';
  $handler->display->display_options['filters']['name_1']['group'] = 2;
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'uid';
  $handler->display->display_options['filters']['name']['value'] = 'kajo7205';
  $handler->display->display_options['filters']['name']['group'] = 2;
  /* Filter criterion: Content: Thumbnail image (field_feature_thumb:fid) */
  $handler->display->display_options['filters']['field_feature_thumb_fid']['id'] = 'field_feature_thumb_fid';
  $handler->display->display_options['filters']['field_feature_thumb_fid']['table'] = 'field_data_field_feature_thumb';
  $handler->display->display_options['filters']['field_feature_thumb_fid']['field'] = 'field_feature_thumb_fid';
  $handler->display->display_options['filters']['field_feature_thumb_fid']['operator'] = 'not empty';

  /* Display: News Photos */
  $handler = $view->new_display('views_data_export', 'News Photos', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'export/news-photos';

  /* Display: Feature Thumbnails */
  $handler = $view->new_display('views_data_export', 'Feature Thumbnails', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Thumbnail image (field_feature_thumb:fid) */
  $handler->display->display_options['relationships']['field_feature_thumb_fid']['id'] = 'field_feature_thumb_fid';
  $handler->display->display_options['relationships']['field_feature_thumb_fid']['table'] = 'field_data_field_feature_thumb';
  $handler->display->display_options['relationships']['field_feature_thumb_fid']['field'] = 'field_feature_thumb_fid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Thumbnail image */
  $handler->display->display_options['fields']['field_feature_thumb_1']['id'] = 'field_feature_thumb_1';
  $handler->display->display_options['fields']['field_feature_thumb_1']['table'] = 'field_data_field_feature_thumb';
  $handler->display->display_options['fields']['field_feature_thumb_1']['field'] = 'field_feature_thumb';
  $handler->display->display_options['fields']['field_feature_thumb_1']['label'] = 'path';
  $handler->display->display_options['fields']['field_feature_thumb_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_thumb_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_feature_thumb_1']['settings'] = array(
    'url_type' => '2',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Thumbnail image */
  $handler->display->display_options['fields']['field_feature_thumb']['id'] = 'field_feature_thumb';
  $handler->display->display_options['fields']['field_feature_thumb']['table'] = 'field_data_field_feature_thumb';
  $handler->display->display_options['fields']['field_feature_thumb']['field'] = 'field_feature_thumb';
  $handler->display->display_options['fields']['field_feature_thumb']['label'] = 'uri';
  $handler->display->display_options['fields']['field_feature_thumb']['element_type'] = '0';
  $handler->display->display_options['fields']['field_feature_thumb']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_thumb']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_feature_thumb']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_feature_thumb']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_thumb']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_feature_thumb']['settings'] = array(
    'url_type' => '3',
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_feature_thumb']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'feature_article' => 'feature_article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name_2']['id'] = 'name_2';
  $handler->display->display_options['filters']['name_2']['table'] = 'users';
  $handler->display->display_options['filters']['name_2']['field'] = 'name';
  $handler->display->display_options['filters']['name_2']['relationship'] = 'uid';
  $handler->display->display_options['filters']['name_2']['value'] = 'fraziere';
  $handler->display->display_options['filters']['name_2']['group'] = 2;
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name_1']['id'] = 'name_1';
  $handler->display->display_options['filters']['name_1']['table'] = 'users';
  $handler->display->display_options['filters']['name_1']['field'] = 'name';
  $handler->display->display_options['filters']['name_1']['relationship'] = 'uid';
  $handler->display->display_options['filters']['name_1']['value'] = 'swensong';
  $handler->display->display_options['filters']['name_1']['group'] = 2;
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'uid';
  $handler->display->display_options['filters']['name']['value'] = 'kajo7205';
  $handler->display->display_options['filters']['name']['group'] = 2;
  /* Filter criterion: Content: Thumbnail image (field_feature_thumb:fid) */
  $handler->display->display_options['filters']['field_feature_thumb_fid']['id'] = 'field_feature_thumb_fid';
  $handler->display->display_options['filters']['field_feature_thumb_fid']['table'] = 'field_data_field_feature_thumb';
  $handler->display->display_options['filters']['field_feature_thumb_fid']['field'] = 'field_feature_thumb_fid';
  $handler->display->display_options['filters']['field_feature_thumb_fid']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'export/feature-thumbnails';

  /* Display: Feature Images */
  $handler = $view->new_display('views_data_export', 'Feature Images', 'views_data_export_3');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Feature image (field_feature_image:fid) */
  $handler->display->display_options['relationships']['field_feature_image_fid']['id'] = 'field_feature_image_fid';
  $handler->display->display_options['relationships']['field_feature_image_fid']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['relationships']['field_feature_image_fid']['field'] = 'field_feature_image_fid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Feature image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['label'] = 'path';
  $handler->display->display_options['fields']['field_feature_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_feature_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_feature_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'url_type' => '2',
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_feature_image']['field_api_classes'] = TRUE;
  /* Field: Content: Feature image */
  $handler->display->display_options['fields']['field_feature_image_1']['id'] = 'field_feature_image_1';
  $handler->display->display_options['fields']['field_feature_image_1']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image_1']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image_1']['label'] = 'uri';
  $handler->display->display_options['fields']['field_feature_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_feature_image_1']['settings'] = array(
    'url_type' => '3',
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'feature_article' => 'feature_article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name_2']['id'] = 'name_2';
  $handler->display->display_options['filters']['name_2']['table'] = 'users';
  $handler->display->display_options['filters']['name_2']['field'] = 'name';
  $handler->display->display_options['filters']['name_2']['relationship'] = 'uid';
  $handler->display->display_options['filters']['name_2']['value'] = 'fraziere';
  $handler->display->display_options['filters']['name_2']['group'] = 2;
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name_1']['id'] = 'name_1';
  $handler->display->display_options['filters']['name_1']['table'] = 'users';
  $handler->display->display_options['filters']['name_1']['field'] = 'name';
  $handler->display->display_options['filters']['name_1']['relationship'] = 'uid';
  $handler->display->display_options['filters']['name_1']['value'] = 'swensong';
  $handler->display->display_options['filters']['name_1']['group'] = 2;
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'uid';
  $handler->display->display_options['filters']['name']['value'] = 'kajo7205';
  $handler->display->display_options['filters']['name']['group'] = 2;
  /* Filter criterion: Content: Feature image (field_feature_image:fid) */
  $handler->display->display_options['filters']['field_feature_image_fid']['id'] = 'field_feature_image_fid';
  $handler->display->display_options['filters']['field_feature_image_fid']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['filters']['field_feature_image_fid']['field'] = 'field_feature_image_fid';
  $handler->display->display_options['filters']['field_feature_image_fid']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'export/feature-images';
  $export['file_export'] = $view;

  $view = new view();
  $view->name = 'news_release_data';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News Release Data';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News Release Data';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="https://colorado.edu/news/node/[nid] ">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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
  /* Filter criterion: Content: Quotes (field_news_quotes:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_news_quotes';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['operator'] = '>';
  $handler->display->display_options['filters']['delta']['value']['value'] = '0';

  /* Display: Quote > 1 */
  $handler = $view->new_display('page', 'Quote > 1', 'page');
  $handler->display->display_options['path'] = 'admin/news-release-data/multiple-quotes';

  /* Display: Photo > 1 */
  $handler = $view->new_display('page', 'Photo > 1', 'page_1');
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
    'news_release' => 'news_release',
  );
  /* Filter criterion: Content: Photo (field_photo_collection:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_photo_collection';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['operator'] = '>';
  $handler->display->display_options['filters']['delta']['value']['value'] = '0';
  $handler->display->display_options['path'] = 'admin/news-release-data/multiple-photos';

  /* Display: Photo = 1 or 0 */
  $handler = $view->new_display('page', 'Photo = 1 or 0', 'page_2');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_release' => 'news_release',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Photo (field_photo_collection:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_photo_collection';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['operator'] = 'empty';
  $handler->display->display_options['filters']['delta']['value']['value'] = '0';
  $handler->display->display_options['filters']['delta']['group'] = 2;
  /* Filter criterion: Content: Photo (field_photo_collection:delta) */
  $handler->display->display_options['filters']['delta_1']['id'] = 'delta_1';
  $handler->display->display_options['filters']['delta_1']['table'] = 'field_data_field_photo_collection';
  $handler->display->display_options['filters']['delta_1']['field'] = 'delta';
  $handler->display->display_options['filters']['delta_1']['value']['value'] = '0';
  $handler->display->display_options['filters']['delta_1']['group'] = 2;
  $handler->display->display_options['path'] = 'admin/news-release-data/multiple-photos';

  /* Display: Unpublished News Releases */
  $handler = $view->new_display('page', 'Unpublished News Releases', 'page_3');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_release' => 'news_release',
  );
  $handler->display->display_options['path'] = 'admin/news-release-data/unpublished';

  /* Display: Taxonomy Check */
  $handler = $view->new_display('page', 'Taxonomy Check', 'page_4');
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
    'news_release' => 'news_release',
  );
  /* Filter criterion: Field: Topic (field_topic) */
  $handler->display->display_options['filters']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['filters']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['value'] = array(
    559 => '559',
  );
  $handler->display->display_options['filters']['field_topic_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_topic_tid']['expose']['operator_id'] = 'field_topic_tid_op';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['label'] = 'Topic';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['operator'] = 'field_topic_tid_op';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['identifier'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    11 => 0,
    12 => 0,
  );
  $handler->display->display_options['filters']['field_topic_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_topic_tid']['vocabulary'] = 'topic_categories';
  $handler->display->display_options['filters']['field_topic_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'admin/news-release-data/taxonomy-check';

  /* Display: Photo Gallery */
  $handler = $view->new_display('page', 'Photo Gallery', 'page_5');
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
    'news_release' => 'news_release',
  );
  /* Filter criterion: Content: Photo Gallery (field_gallery_reference) */
  $handler->display->display_options['filters']['field_gallery_reference_nid']['id'] = 'field_gallery_reference_nid';
  $handler->display->display_options['filters']['field_gallery_reference_nid']['table'] = 'field_data_field_gallery_reference';
  $handler->display->display_options['filters']['field_gallery_reference_nid']['field'] = 'field_gallery_reference_nid';
  $handler->display->display_options['filters']['field_gallery_reference_nid']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'admin/news-release-data/photo-gallery';
  $export['news_release_data'] = $view;

  return $export;
}
