<?php
/**
 * @file
 * Rate widget theme
 */


print '<div class="rate-info"> <div class="user-vote">' . $user_vote . '</div><div class="average-rating"> ' . $rating . '</div></div>';

print '<div class="rate-mmorpg rate-value-' . $value . '">';
print theme('item_list', array('items' => $buttons));
print '</div>';

if ($display_options['description']) {
  print '<div class="rate-description">' . $display_options['description'] . '</div>';
}
