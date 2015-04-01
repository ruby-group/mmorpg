<?php
/**
 * Created by PhpStorm.
 * User: alan
 * Date: 29/3/15
 * Time: 11:22 PM
 */

/**
 * Implements hook_views_data().
 */
function clickmeter_link_views_data() {
  $data['views']['impressions'] = array(
    'title' => t('Clickmeter Impressions'),
    'help' => t("count of link views"),
    'field' => array(
      'handler' => 'ClickmeterLinkHandlerImpressions',
    ),
  );
  $data['views']['clicks'] = array(
    'title' => t('Clickmeter Clicks'),
    'help' => t("count of link clicks"),
    'field' => array(
      'handler' => 'ClickmeterLinkHandlerClicks',
    ),
  );
  $data['views']['date_filter'] = array(
    'title' => t('Date Filter'),
    'help' => t('allows to get clickmeter statistics for a particular date range.'),
    'filter' => array(
      'handler' => 'ClickmeterLinkHandlerDateFilter',
    ),
  );
  return $data;
}

class ClickmeterLinkHandlerImpressions extends views_handler_field {
  public function query() {
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['datapoint_id'] = array('default' => '');
    return $options;
  }

  function options_form(&$form, &$form_state) {
    $form['datapoint_id'] = array(
      '#type' => 'textfield',
      '#title' => t('Datapoint Id (replacement token)'),
      '#default_value' => $this->options['datapoint_id'],
    );
    parent::options_form($form, $form_state);
  }

  public function render($values) {
    $id = $this->tokenize_value($this->options['datapoint_id']);
    $min = date('Ymd', strtotime($this->view->filter['date_filter']->value['min']));
    $max = date('Ymd', strtotime($this->view->filter['date_filter']->value['max']));

    $response = ClickmeterService::get_datapoint_stats($id, $min, $max);
    $output = '--';
    if (property_exists($response, 'totalViews') and property_exists($response, 'uniqueViews')) {
      $output = "$response->totalViews ($response->uniqueViews)";
    }
    return $output;
  }
}

class ClickmeterLinkHandlerClicks extends views_handler_field {
  public function query() {
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['datapoint_id'] = array('default' => '');
    return $options;
  }

  function options_form(&$form, &$form_state) {
    $form['datapoint_id'] = array(
      '#type' => 'textfield',
      '#title' => t('Datapoint Id (replacement token)'),
      '#default_value' => $this->options['datapoint_id'],
    );
    parent::options_form($form, $form_state);
  }

  public function render($values) {
    $id = $this->tokenize_value($this->options['datapoint_id']);
    $min = date('Ymd', strtotime($this->view->filter['date_filter']->value['min']));
    $max = date('Ymd', strtotime($this->view->filter['date_filter']->value['max']));

    $response = ClickmeterService::get_datapoint_stats($id, $min, $max);
    $output = '--';
    if (property_exists($response, 'totalClicks') and property_exists($response, 'uniqueClicks')) {
      $output = "$response->totalClicks ($response->uniqueClicks)";
    }
    return $output;
  }
}

class ClickmeterLinkHandlerDateFilter extends views_handler_filter_date {
  public function op_between($field) {
  }

  public function value_form(&$form, &$form_state) {
    parent::value_form($form, $form_state);

    if (isset($form['value']['min']) and isset($form['value']['max'])) {
      $data = drupal_get_query_parameters();
      if (array_key_exists($this->field, $data)) {
        $data = $data[$this->field];
      }
      else {
        $data['min'] = date('Y-m-d', time() - 7 * 24 * 60 * 60);
        $data['max'] = date('Y-m-d');
      }
      $form['value']['min']['#value'] = $data['min'];
      $form['value']['max']['#value'] = $data['max'];

      $form['value']['min']['#attributes']['class'][] = 'datepicker';
      $form['value']['max']['#attributes']['class'][] = 'datepicker';
      drupal_add_library('system', 'ui.datepicker');
      drupal_add_js("jQuery('.datepicker').datepicker({ dateFormat: 'yy-mm-dd' });", array(
        'type' => 'inline',
        'scope' => 'footer',
      ));
    }
  }
}