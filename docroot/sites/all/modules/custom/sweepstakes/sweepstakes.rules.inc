<?php

/**
 * Implements hook_rules_condition_info().
 */
function sweepstakes_rules_condition_info() {
  $conditions = array();

  $conditions['sweepstakes_verify_entries'] = array(
    'label' => t('The users sweepstakes entries are within limit'),
    'group' => t('Sweepstakes'),
    'parameter' => array(
      'node' => array(
        'type' => 'node',
        'label' => t('Sweepstakes'),
      ),
      'user' => array(
        'type' => 'user',
        'label' => t('User'),
      ),
      'limit' => array(
        'type' => 'integer',
        'label' => t('Max Entries'),
      ),
    ),
    'base' => 'sweepstakes_verify_entries',
  );

  $conditions['sweepstakes_verify_logins'] = array(
    'label' => t('The users login entries exceed requirement'),
    'group' => t('Sweepstakes'),
    'parameter' => array(
      'node' => array(
        'type' => 'node',
        'label' => t('Sweepstakes'),
      ),
      'user' => array(
        'type' => 'user',
        'label' => t('User'),
      ),
      'threshold' => array(
        'type' => 'integer',
        'label' => t('Min Logins'),
      ),
    ),
    'base' => 'sweepstakes_verify_logins',
  );

  return $conditions;
}

/**
 * Implements hook_rules_action_info().
 */
function sweepstakes_rules_action_info() {
  $actions = array();

  $actions['sweepstakes_add_entry'] = array(
    'label' => t('Grant the user and additional sweepstake entry.'),
    'group' => t('Sweepstakes'),
    'parameter' => array(
      'node' => array(
        'type' => 'node',
        'label' => t('Sweepstakes'),
      ),
      'user' => array(
        'type' => 'user',
        'label' => t('User'),
      ),
    ),
    'base' => 'sweepstakes_add_submission',
  );

  return $actions;
}

function sweepstakes_add_submission($node, $user) {
  _sweepstakes_add_entry($node->nid, $user->uid, NULL, NULL, 'rule initiated');
}

function sweepstakes_verify_logins($node, $user, $threshold) {
  $last_entry = db_select('sweepstakes_entries', 'se')
    ->fields('se', array('timestamp'))
    ->condition('uid', $user->uid)
    ->condition('nid', $node->nid)
    ->orderBy('timestamp', 'DESC')
    ->range(0, 1)
    ->execute()
    ->fetchField();

  $count = db_select('login_history', 'lh')
    ->condition('uid', $user->uid)
    ->condition('login', $last_entry, '>')
    ->countQuery()
    ->execute()
    ->fetchField();

  return $count >= $threshold;
}

function sweepstakes_verify_entries($node, $user, $limit) {
  $count = db_select('sweepstakes_entries', 'se')
    ->condition('uid', $user->uid)
    ->condition('nid', $node->nid)
    ->countQuery()
    ->execute()
    ->fetchField();

  return $count < $limit;
}
