<?php
/**
 * @file
 * mmorpg_wysiwyg.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function mmorpg_wysiwyg_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'shortcode' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'poll' => 1,
          'quote' => 0,
          'img' => 0,
          'highlight' => 0,
          'button' => 0,
          'dropcap' => 0,
          'item' => 0,
          'clear' => 0,
          'link' => 0,
          'random' => 0,
          'embed_content' => 0,
        ),
      ),
      'shortcode_text_corrector' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_autop' => array(
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
