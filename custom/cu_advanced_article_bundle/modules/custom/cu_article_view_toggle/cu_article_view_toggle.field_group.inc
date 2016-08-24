<?php
/**
 * @file
 * cu_article_view_toggle.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cu_article_view_toggle_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_article_exclude|bean|article_grid_list|form';
  $field_group->group_name = 'group_article_exclude';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'article_grid_list';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_article_filter';
  $field_group->data = array(
    'label' => 'Exclude',
    'weight' => '7',
    'children' => array(
      0 => 'field_article_exclude_category',
      1 => 'field_article_exclude_tag',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Exclude',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-article-exclude field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_article_exclude|bean|article_grid_list|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_article_expose_filters|bean|article_grid_list|form';
  $field_group->group_name = 'group_article_expose_filters';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'article_grid_list';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Expose Filters',
    'weight' => '3',
    'children' => array(
      0 => 'field_article_page_aud_expose',
      1 => 'field_article_page_cat_expose',
      2 => 'field_article_page_childterms',
      3 => 'field_article_page_media_expose',
      4 => 'field_article_page_tag_expose',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Expose Filters',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-article-expose-filters field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_article_expose_filters|bean|article_grid_list|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_article_filter|bean|article_grid_list|form';
  $field_group->group_name = 'group_article_filter';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'article_grid_list';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Filter',
    'weight' => '2',
    'children' => array(
      0 => 'field_article_page_category',
      1 => 'field_article_page_filter',
      2 => 'field_article_page_audience',
      3 => 'field_article_page_media',
      4 => 'group_article_exclude',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Filter',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-article-filter field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_article_filter|bean|article_grid_list|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Exclude');
  t('Expose Filters');
  t('Filter');

  return $field_groups;
}
