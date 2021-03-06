<?php

$plugin = array(
  'title' => t('Sweepstakes: Sweepstake has Expired'),
  'description' => t('Controls access by whether the sweepstake has expired'),
  'callback' => 'sweepstake_has_expired_ctools_access_check',
  'summary' => 'sweepstake_has_expired_ctools_summary',
  'required context' => new ctools_context_required(t('Node'), 'node'),
);

/**
 * Provide a summary description.
 */
function sweepstake_has_expired_ctools_summary($conf, $context) {
  return t('This sweepstakes has expired');
}

function sweepstake_has_expired_ctools_access_check($conf, $context) {
  $node = node_load($context->data->nid);
  return $node->field_sweepstakes_expires[LANGUAGE_NONE][0]['value'] < time() ;
}
