<?php

/**
 * A handler to provide a field that is completely custom by the administrator.
 *
 * @ingroup views_field_handlers
 */
 class views_handler_average_game_rating extends views_handler_field {
   function query() {
     // do nothing -- to override the parent query.
   }

   function option_definition() {
     $options = parent::option_definition();

     // Override the alter text option to always alter the text.
     $options['alter']['contains']['alter_text'] = array('default' => TRUE);
     return $options;
   }

   function options_form(&$form, &$form_state) {
     parent::options_form($form, $form_state);

     // Remove the checkbox
     unset($form['alter']['alter_text']);
     unset($form['alter']['text']['#dependency']);
     unset($form['alter']['text']['#process']);
   }

   function render($values) {
     // Render your content.
    $game_nid = $values->node_field_data_field_game_nid;
     return _mmorpg_signup_now_game_avg_rating($game_nid);
   }
}