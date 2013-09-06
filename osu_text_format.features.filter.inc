<?php
/**
 * @file
 * osu_text_format.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function osu_text_format_filter_default_formats() {
  $formats = array();

  // Exported format: wysiwyg.
  $formats['osu_text_format_wysiwyg'] = array(
    'format' => 'osu_text_format_wysiwyg',
    'name' => 'wysiwyg',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 255,
        ),
      ),
      'media_filter' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
