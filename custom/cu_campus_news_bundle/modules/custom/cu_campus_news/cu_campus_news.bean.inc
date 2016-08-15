<?php
/**
 * @file
 * cu_campus_news.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function cu_campus_news_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'campus_news';
  $bean_type->label = 'Campus News';
  $bean_type->options = '';
  $bean_type->description = 'Display a campus news feed on your site.';
  $export['campus_news'] = $bean_type;

  return $export;
}
