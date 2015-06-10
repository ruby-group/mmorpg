<?php

/**
 * @file
 * Field handler for all queues.
 *
 * @ingroup views_field_handlers
 */
class nodequeue_handler_field_all_queues extends views_handler_field_prerender_list {
  /**
   * Provide meaningful defaults.
   */
<<<<<<< HEAD
  function option_definition() {
    $options = parent::option_definition();

    $options['link_to_queue'] = array('default' => TRUE);
    $options['limit'] = array('default' => FALSE);
    $options['qids'] = array('default' => array());

    return $options;
=======
  function options(&$options) {
    parent::options($options);
    $options['link_to_queue'] = TRUE;
    $options['limit'] = FALSE;
    $options['qids'] = array();
>>>>>>> 1b6c95ba06d0876d7fd67f319e9af63a7de3b0fa
  }

  /**
   * Provide "link to term" option.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['link_to_queue'] = array(
      '#title' => t('Link this field to queue arrange page'),
      '#type' => 'checkbox',
<<<<<<< HEAD
      '#default_value' => !empty($this->options['link_to_queue']),
=======
      '#default_value' => !empty($this->options['link_to_taxonomy']),
>>>>>>> 1b6c95ba06d0876d7fd67f319e9af63a7de3b0fa
    );

    $form['limit'] = array(
      '#type' => 'checkbox',
      '#title' => t('Limit to queues'),
      '#default_value' => $this->options['limit'],
    );

    $options = array();
    $queues = nodequeue_load_queues(nodequeue_get_all_qids());
    foreach ($queues as $queue) {
      $options[$queue->qid] = $queue->title;
    }

    $form['qids'] = array(
      '#prefix' => '<div><div id="edit-options-qids">',
      '#suffix' => '</div></div>',
      '#type' => 'checkboxes',
      '#title' => t('Queues'),
      '#options' => $options,
      '#default_value' => $this->options['qids'],
<<<<<<< HEAD
      '#dependency' => array('edit-options-limit' => array(TRUE)),
    );
  }

  function pre_render(&$values) {
=======
      '#states' => array(
        'visible' => array(
          ':input[name="options[limit]"]' => array('checked' => TRUE)
        ),
      ),
    );
  }

  function pre_render($values) {
>>>>>>> 1b6c95ba06d0876d7fd67f319e9af63a7de3b0fa
    $nids = array();
    foreach ($values as $result) {
      $nids[] = $result->{$this->field_alias};
    }

    if ($nids) {
<<<<<<< HEAD
      $query = db_select('nodequeue_nodes', 'nn');
      $query->innerJoin('nodequeue_queue', 'nq', 'nn.qid = nq.qid');
      $query->fields('nn', array('nid', 'qid'));
      $query->fields('nq', array('title'));
      $query->orderby('nq.title');
      $query->condition('nn.nid', $nids);
      $qids = array_filter($this->options['qids']);
      if (!empty($this->options['limit']) && !empty($qids)) {
        $query->condition('nn.qid', $qids);
      }
      $result = $query->execute();

      foreach ($result as $queue) {
        $this->items[$queue->nid][$queue->qid]['title'] = check_plain($queue->title);

        if (!empty($this->options['link_to_queue'])) {
          $this->items[$queue->nid][$queue->qid]['make_link'] = TRUE;
          $this->items[$queue->nid][$queue->qid]['path'] = 'admin/structure/nodequeue/' . $queue->qid;
=======
      $queue = '';
      if (!empty($this->options['limit']) && !empty($this->options['qids'])) {
        $queue = " AND nn.qid IN (" . implode(', ', array_keys(array_filter($this->options['qids']))) . ")";
      }

      $result = db_query("SELECT nn.nid, nn.qid, nq.title FROM {nodequeue_nodes} nn INNER JOIN {nodequeue_queue} nq ON nq.qid = nn.qid WHERE nn.nid IN (" . implode(', ', $nids) . ")$queue ORDER BY nq.title");

      foreach ($result as $queue) {
        if (empty($this->options['link_to_queue'])) {
          $this->items[$queue->nid][$queue->qid] = check_plain($queue->title);
        }
        else {
          $this->items[$queue->nid][$queue->qid] = l($queue->title, "admin/structure/nodequeue/$queue->qid");
>>>>>>> 1b6c95ba06d0876d7fd67f319e9af63a7de3b0fa
        }
      }
    }
  }
<<<<<<< HEAD

  function render_item($count, $item) {
    return $item['title'];
  }
=======
>>>>>>> 1b6c95ba06d0876d7fd67f319e9af63a7de3b0fa
}
