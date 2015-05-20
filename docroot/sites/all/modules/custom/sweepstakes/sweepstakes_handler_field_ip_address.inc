<?php
/**
 * @file
 * oversight_data_handler_field_numeric_formatted.inc
 */

class sweepstakes_handler_field_ip_address extends views_handler_field_numeric {

  /**
   * If set, the logic to render the short scale formatting.
   *
   * @param object $values
   *   The values to be rendered.
   *
   * @return string
   *   The rendered html.
   */
  public function render($values) {
    return long2ip($this->get_value($values));
  }
}
