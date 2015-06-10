<?php

/**
 * @file
 * Views field handler for the nodequeue queue links
 */
class nodequeue_handler_field_queue_tab extends views_handler_field_node_link {
<<<<<<< HEAD
  /**
   * Renders the link.
   */
  function render_link($node, $values) {
    // Ensure user has access to manipulate nodequeues for this node.
    if (!nodequeue_node_tab_access($node)) {
      return;
    }

    $this->options['alter']['make_link'] = TRUE;
    $this->options['alter']['path'] = "node/$node->nid/nodequeue";
    $this->options['alter']['query'] = drupal_get_destination();

    $text = !empty($this->options['text']) ? $this->options['text'] : t('nodequeue');
    return $text;
=======
  function render($values) {
    $text = !empty($this->options['text']) ? $this->options['text'] : t('view');
    $nid = $values->{$this->aliases['nid']};
    return l($text, "node/$nid/nodequeue");
>>>>>>> 1b6c95ba06d0876d7fd67f319e9af63a7de3b0fa
  }
}
