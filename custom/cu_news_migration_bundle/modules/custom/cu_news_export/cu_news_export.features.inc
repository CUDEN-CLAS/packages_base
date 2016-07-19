<?php
/**
 * @file
 * cu_news_export.features.inc
 */

/**
 * Implements hook_views_api().
 */
function cu_news_export_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}
