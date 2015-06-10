<?php

/**
 * @file
 * Views field handler for the nodequeue queue links
 */
class nodequeue_handler_field_links extends views_handler_field_node_link {
  function render($values) {
<<<<<<< HEAD
    if ((user_access('manipulate queues') || user_access('manipulate all queues')) && $node = $this->get_value($values)) {
      return theme('links', array('links' => nodequeue_node_links($node)));
=======
    if (user_access('manipulate queues') || user_access('manipulate all queues')) {
      $nid = $values->{$this->aliases['nid']};
      return theme('links', array('links' => nodequeue_node_links(node_load($nid))));
>>>>>>> 1b6c95ba06d0876d7fd67f319e9af63a7de3b0fa
    }
  }
}
