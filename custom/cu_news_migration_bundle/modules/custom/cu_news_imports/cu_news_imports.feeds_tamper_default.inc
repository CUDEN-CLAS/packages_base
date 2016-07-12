<?php
/**
 * @file
 * cu_news_imports.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function cu_news_imports_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'audio_import-script-rewrite';
  $feeds_tamper->importer = 'audio_import';
  $feeds_tamper->source = 'Script';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '[body]

[script]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['audio_import-script-rewrite'] = $feeds_tamper;

  return $export;
}
