<?php
/**
 * @file
 * cu_advanced_article.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function cu_advanced_article_taxonomy_default_vocabularies() {
  return array(
    'syndication_audience' => array(
      'name' => 'Syndication Audience',
      'machine_name' => 'syndication_audience',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'syndication_unit' => array(
      'name' => 'Syndication Unit',
      'machine_name' => 'syndication_unit',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
