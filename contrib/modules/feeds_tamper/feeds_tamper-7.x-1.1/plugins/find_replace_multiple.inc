<?php

/**
 * @file
 * Feeds tamper plugin to find/replace multiple needle/haystack text pairs.
 */

$plugin = array(
  'form' => 'feeds_tamper_find_replace_multiple_form',
  'callback' => 'feeds_tamper_find_replace_multiple_callback',
  'validate' => 'feeds_tamper_find_replace_multiple_validate',
  'name' => 'Find replace multiple',
  'multi' => 'loop',
  'category' => 'Text',
);

function feeds_tamper_find_replace_multiple_form($importer, $element_key, $settings) {
  $pairs = '';
  if (isset($settings['pairs'])) {
    foreach ($settings['pairs'] as $pair) {
      $pairs .= "\n{$pair['source']}|{$pair['target']}";
    }
  }
  $form = array();
  $form['pairs'] = array(
    '#type' => 'textarea',
    '#title' => t('Replace pairs'),
    '#description' => t('One pair per line, as source|target'),
    '#required' => TRUE,
    '#default_value' => $pairs,
  );
  return $form;
}

function feeds_tamper_find_replace_multiple_validate(&$settings) {
  $raw = $settings['pairs'];
  $pairs = array();
  foreach (explode("\n", $raw) as $pair) {
    list($source, $target) = explode('|', $pair);
    $pairs[] = array('source' => $source, 'target' => trim($target));
  }
  $settings['pairs'] = $pairs;
}

function feeds_tamper_find_replace_multiple_callback($result, $item_key, $element_key, &$field, $settings) {
  foreach ($settings['pairs'] as $replace) {
    $field = preg_replace('#' . $replace['source'] . '#', $replace['target'], $field);
  }
}
