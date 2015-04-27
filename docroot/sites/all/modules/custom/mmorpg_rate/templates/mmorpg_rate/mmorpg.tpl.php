<?php
/**
 * @file
 * Rate widget theme
 */

if ($info) {
  print '<div class="rate-info">' . $info . '</div>';
} else {
  print '<div class="rate-info"></div>';
}

print '<div class="rate-mmorpg rate-value-' . $value . '">';
print theme('item_list', array('items' => $buttons));
print '</div>';

if ($display_options['description']) {
  print '<div class="rate-description">' . $display_options['description'] . '</div>';
}
