<?php

class mmorpg_siteskins_plugin_style_siteskin extends views_plugin_style {

  public function render() {
    $node = node_load(current($this->view->result)->nid);
    $current = isset($_SESSION['mmorpg_siteskins'][$node->nid]) ? $_SESSION['mmorpg_siteskins'][$node->nid] : -1;
    $_SESSION['mmorpg_siteskins'][$node->nid] = $current = ($current + 1) % count(array_keys($node->field_siteskin_image[LANGUAGE_NONE]));
    $image = file_create_url($node->field_siteskin_image[LANGUAGE_NONE][$current]['uri']);
    bg_image_add_background_image($image);

    $output = "<div class='skin-tracking-link'></div>";
    if (!empty($node->field_target_url['und']['0']['clickmeter_link'])) {
      $output = l($output, $node->field_target_url['und']['0']['clickmeter_link'], array(
        'html' => TRUE,
        'attributes' => array(
          'target' => '_blank',
          'rel' => 'nofollow'
        ),
      ));
    }
    return $output;
  }
}