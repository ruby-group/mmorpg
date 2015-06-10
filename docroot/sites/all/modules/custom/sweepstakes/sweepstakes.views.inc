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
function sweepstakes_views_data() {
  $data['views']['sweepstakes_ip_address'] = array(
    'title' => t('IP Address'),
    'help' => t("Displays IP Address in dotted notation"),
    'field' => array(
      'handler' => 'sweepstakes_handler_field_ip_address',
    ),
  );
  return $data;
}

class sweepstakes_handler_field_ip_address extends views_handler_field_numeric {

  public function render($values) {
    $value = $this->get_value($values);
    return $value > 0 ? long2ip($this->get_value($values)) : '-';
  }
}