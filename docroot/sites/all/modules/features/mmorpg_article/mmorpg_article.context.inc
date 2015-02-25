<?php
/**
 * @file
 * mmorpg_article.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mmorpg_article_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mmorpg_global_blocks';
  $context->description = '';
  $context->tag = 'mmorpg';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-trending-block' => array(
          'module' => 'views',
          'delta' => 'trending-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('mmorpg');
  $export['mmorpg_global_blocks'] = $context;

  return $export;
}
