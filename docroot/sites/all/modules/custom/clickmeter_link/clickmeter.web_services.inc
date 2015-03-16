<?php

define('CLICKMETER_KEY', variable_get('CLICKMETER_KEY', NULL));

class ClickmeterService {
  private static $CLICKMETER_BASE_URL = 'http://apiv2.clickmeter.com';
  private static $CLICKMETER_API_KEY = CLICKMETER_KEY;

  private static function headers() {
    return array(
      'endpoint' => self::$CLICKMETER_BASE_URL,
      'headers' => array(
        'X-Clickmeter-Authkey' => self::$CLICKMETER_API_KEY,
        'Content-Type' => 'application/json',
      ),
    );
  }

  private static function rest_get($url) {
//    variable_set("restclient_debug", TRUE);

    return json_decode(restclient_get($url, self::headers())->data);
  }

  private static function rest_post($url, $body) {
    variable_set("restclient_debug", FALSE);

    $clickmeter = restclient_post($url, self::headers() + array(
        'body' => json_encode($body),
      ));

    if (!empty($clickmeter->data)) {
      return $clickmeter->data;
    }
    else {
      return 'URL already registered';
    }
  }

  public static function new_group($name) {
    return self::rest_post('groups', array(
      'id' => 1,
      'name' => $name,
    ));
  }

  public static function get_group($groupId) {
    return self::rest_get('groups/' . $groupId);
  }

  public static function get_groups() {
    $response = self::rest_get('groups?status=active');
    $return = array();
    foreach ($response->entities as $entity) {
      $return[$entity->id] = self::get_group($entity->id)->name;
    }
    return $return;
  }

  public static function new_domain($name) {
    return self::rest_post('domains', array(
      'name' => $name,
    ));
  }

  public static function get_domain($domainId) {
    return self::rest_get('domains/' . $domainId);
  }

  public static function get_domains() {
    $response = self::rest_get('domains');
    $return = array();
    foreach ($response->entities as $entity) {
      $return[$entity->id] = self::get_domain($entity->id)->name;
    }
    return $return;
  }

  public static function new_datapoint($name, $url, $groupId, $domainId) {
    return self::rest_post('datapoints', array(
      'groupId' => $groupId,
      'id'  => 1,      
      'name' => $name,
      'title' => $name,
      'type' => 0,
      'typeTL' => array(
        'domainId' => $domainId,
        'url' => $url,
        'redirectType' => '301'
      )
    ));
  }

  public static function get_datapoint($datapointId) {
    return self::rest_get('datapoints/' . $datapointId);
  }

  public static function disable_group($groupId, $name) {
    return self::rest_post('groups', array(
      'id' => $groupId,
      'name' => $name,
      'status' => 'paused',
    ));
  }

  public static function get_datapoint_hit($datapointId) {
    return self::rest_get('datapoints/' . $datapointId . '/aggregated?timeframe=last365');
  }
}