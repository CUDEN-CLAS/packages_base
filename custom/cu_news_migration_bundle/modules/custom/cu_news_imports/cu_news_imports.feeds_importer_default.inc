<?php
/**
 * @file
 * cu_news_imports.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function cu_news_imports_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'article_import';
  $feeds_importer->config = array(
    'name' => 'Article Import',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'nid',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'summary',
            'target' => 'body:summary',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'quotes',
            'target' => 'field_adv_article_quote',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'username',
            'target' => 'user_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'video_url',
            'target' => 'field_adv_article_video:video_url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'video_title',
            'target' => 'field_adv_article_video:description',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'photo_caption',
            'target' => 'field_adv_article_image:field_adv_article_fc_caption',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'photo_uri',
            'target' => 'field_adv_article_image:field_adv_article_fc_image:uri',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'date',
            'target' => 'created',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'audience',
            'target' => 'field_legacy_audience',
            'unique' => FALSE,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'school',
            'target' => 'field_legacy_college_school',
            'unique' => FALSE,
            'language' => 'und',
          ),
          13 => array(
            'source' => 'topic',
            'target' => 'field_article_categories',
            'unique' => FALSE,
            'language' => 'und',
          ),
          14 => array(
            'source' => 'legacy_topic',
            'target' => 'field_legacy_topic',
            'unique' => FALSE,
            'language' => 'und',
          ),
          15 => array(
            'source' => 'published',
            'target' => 'status',
            'unique' => FALSE,
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'wysiwyg',
        'skip_hash_check' => 0,
        'bundle' => 'article',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['article_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'audio_import';
  $feeds_importer->config = array(
    'name' => 'Audio Import',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'nid',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Script',
            'target' => 'body',
            'unique' => FALSE,
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'wysiwyg',
        'skip_hash_check' => 0,
        'bundle' => 'article',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['audio_import'] = $feeds_importer;

  return $export;
}
