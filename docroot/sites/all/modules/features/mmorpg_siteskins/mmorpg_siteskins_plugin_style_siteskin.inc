<?php

class mmorpg_siteskins_plugin_style_siteskin extends views_plugin_style {

  public function render() {
    $node = node_load(current($this->view->result)->nid);
    $current = isset($_SESSION['mmorpg_siteskins'][$node->nid]) ? $_SESSION['mmorpg_siteskins'][$node->nid] : -1;
    $_SESSION['mmorpg_siteskins'][$node->nid] = $current = ($current + 1) % count(array_keys($node->field_siteskin_image[LANGUAGE_NONE]));
    $image = file_create_url($node->field_siteskin_image[LANGUAGE_NONE][$current]['uri']);
    $link = $node->field_siteskin_tracking_link['und']['0']['url'];

    bg_image_add_background_image($image);

    return "<a target='_blank' rel='nofollow' href='$link'>
              <div class='skin-tracking-link'></div>
            </a>";
  }
}