<?php

class mmorpg_siteskins_plugin_style_siteskin extends views_plugin_style {

  public function render() {
    $nid = current($this->view->result)->nid;
    drupal_add_js(array(
      'siteskins' => array(
        'id' => $nid,
        'data' => self::subskin_data($nid),
      )
    ), 'setting');
    return l("<div class='skin-tracking-link'></div>", '#', array(
      'html' => TRUE,
      'attributes' => array(
        'target' => '_blank',
        'rel' => 'nofollow',
        'id' => 'skin-tracking-area'
      ),
    ));
  }

  public function subskin_data($nid) {
    $details = array();

    $node = node_load($nid);
    foreach ($node->field_siteskin_subskin[LANGUAGE_NONE] as $id => $subskin) {
      $collection = field_collection_item_load($subskin['value']);
      $details[$id] = array(
        'image' => file_create_url($collection->field_siteskin_image[LANGUAGE_NONE][0]['uri']),
        'link' => $collection->field_target_url[LANGUAGE_NONE][0]['clickmeter_link'],
        'color' => $collection->field_siteskin_bg_color[LANGUAGE_NONE][0]['rgb'],
      );
    }
    return $details;
  }
}