<?php

/**
 * @file
 * Field handler for all subqueues
 *
 * @ingroup views_field_handlers
 */
class nodequeue_handler_field_all_subqueues extends nodequeue_handler_field_all_queues {
<<<<<<< HEAD
  function pre_render(&$values) {
=======
  function pre_render($values) {
>>>>>>> 1b6c95ba06d0876d7fd67f319e9af63a7de3b0fa
    if (user_access('manipulate queues') || user_access('manipulate all queues')) {
      $nids = array();
      foreach ($values as $result) {
        $nids[] = $result->{$this->field_alias};
      }

      if ($nids) {
<<<<<<< HEAD
        $query = db_select('nodequeue_nodes', 'nn');
        $query->innerJoin('nodequeue_queue', 'nq', 'nn.qid = nq.qid');
        $query->innerJoin('nodequeue_subqueue', 'ns', 'nn.sqid = ns.sqid');
        $query->fields('nn', array('nid', 'sqid', 'qid'));
        $query->fields('nq', array('subqueue_title'));
        $query->fields('ns', array('title'));
        $query->orderby('ns.title');
        $query->orderby('nq.subqueue_title');
        $query->condition('nn.nid', $nids);
        $qids = array_filter($this->options['qids']);
        if (!empty($this->options['limit']) && !empty($qids)) {
          $query->condition('nn.qid', $qids);
        }
        $result = $query->execute();

        foreach ($result as $queue) {
          $title = empty($queue->subqueue_title) ? $queue->title : str_replace('%subqueue', $queue->title, $queue->subqueue_title);
          $this->items[$queue->nid][$queue->sqid]['title'] = check_plain($title);

          if (!empty($this->options['link_to_queue'])) {
            $this->items[$queue->nid][$queue->sqid]['make_link'] = TRUE;
            $this->items[$queue->nid][$queue->sqid]['path'] = 'admin/structure/nodequeue/' . $queue->qid . '/view/' . $queue->sqid;
=======
        $queue = '';
        if (!empty($this->options['limit']) && !empty($this->options['qids'])) {
          $queue = " AND nn.qid IN (" . implode(', ', array_keys(array_filter($this->options['qids']))) . ")";
        }

        $result = db_query("SELECT nn.nid, nn.sqid, nn.qid, nq.subqueue_title, ns.title FROM {nodequeue_nodes} nn INNER JOIN {nodequeue_queue} nq ON nq.qid = nn.qid INNER JOIN {nodequeue_subqueue} ns on nn.sqid = ns.sqid WHERE nn.nid IN (" . implode(', ', $nids) . ")$queue ORDER BY ns.title, nq.subqueue_title");

        foreach ($result as $queue) {
          $title = empty($queue->subqueue_title) ? $queue->title : str_replace('%subqueue', $queue->title, $queue->subqueue_title);
          if (empty($this->options['link_to_queue'])) {
            $this->items[$queue->nid][$queue->sqid] = check_plain($title);
          }
          else {
            $this->items[$queue->nid][$queue->sqid] = l($title, "admin/structure/nodequeue/$queue->qid/view/$queue->sqid");
>>>>>>> 1b6c95ba06d0876d7fd67f319e9af63a7de3b0fa
          }
        }
      }
    }
  }
}
