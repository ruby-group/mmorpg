<?php
/**
 * Created by PhpStorm.
 * User: alan
 * Date: 28/4/15
 * Time: 2:28 PM
 */

/**
 * Implements hook_views_data().
 */
function giveaway_views_data() {
  $data['views']['keys_left'] = array(
    'title' => t('Giveaway Keys left'),
    'help' => t("count of available keys"),
    'field' => array(
      'handler' => 'GiveawayKeysLeft',
    ),
  );
  $data['views']['ip_address'] = array(
    'title' => t('IP Address'),
    'help' => t("Displays IP Address in dotted notation"),
    'field' => array(
      'handler' => 'giveaway_handler_field_ip_address',
    ),
  );
  return $data;
}

class GiveawayKeysLeft extends views_handler_field {

  public function query() {
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['gid'] = array('default' => '');
    return $options;
  }

  function options_form(&$form, &$form_state) {
    $form['gid'] = array(
      '#type' => 'textfield',
      '#title' => t('Giveaway Id (replacement token)'),
      '#default_value' => $this->options['gid'],
    );
    parent::options_form($form, $form_state);
  }

  public function render($values) {
    $id = $this->tokenize_value($this->options['gid']);

    $count = db_select('giveaway_keys')
      ->fields(NULL, array('gkid'))
      ->condition('claimed_on', 0)
      ->condition('gid', $id)
      ->execute()
      ->rowCount();

    return $count;
  }
}

class giveaway_handler_field_ip_address extends views_handler_field_numeric {

  public function render($values) {
    $value = $this->get_value($values);
    return $value > 0 ? long2ip($this->get_value($values)) : '-';
  }
}