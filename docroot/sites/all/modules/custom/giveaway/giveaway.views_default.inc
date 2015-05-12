<?php
/**
 * @file
 * giveaway.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function giveaway_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'giveaway_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Giveaway Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Sort';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Ascending';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Descending';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'sort' => array(
      'bef_format' => 'default',
      'advanced' => array(
        'collapsible' => 0,
        'collapsible_label' => 'Sort options',
        'combine' => 0,
        'combine_param' => 'sort_bef_combine',
        'combine_rewrite' => '',
        'reset' => 0,
        'reset_label' => '',
        'is_secondary' => 0,
        'secondary_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'uid' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'created' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'All Time',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'giveaways' => 'giveaways',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['sorts']['position']['order'] = 'DESC';
  $handler->display->display_options['sorts']['position']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['position']['expose']['label'] = 'Default';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Date';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Sort criterion: Content: Game (field_game) */
  $handler->display->display_options['sorts']['field_game_target_id']['id'] = 'field_game_target_id';
  $handler->display->display_options['sorts']['field_game_target_id']['table'] = 'field_data_field_game';
  $handler->display->display_options['sorts']['field_game_target_id']['field'] = 'field_game_target_id';
  $handler->display->display_options['sorts']['field_game_target_id']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_game_target_id']['expose']['label'] = 'Game';
  /* Sort criterion: Content: Offer Type (field_offer_type) */
  $handler->display->display_options['sorts']['field_offer_type_tid']['id'] = 'field_offer_type_tid';
  $handler->display->display_options['sorts']['field_offer_type_tid']['table'] = 'field_data_field_offer_type';
  $handler->display->display_options['sorts']['field_offer_type_tid']['field'] = 'field_offer_type_tid';
  $handler->display->display_options['sorts']['field_offer_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_offer_type_tid']['expose']['label'] = 'Type';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'giveaway' => 'giveaway',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Keys to be given away: The user who has claimed it. */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'giveaway_keys';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'gid';
  $handler->display->display_options['filters']['uid']['value']['value'] = '0';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'The user who has claimed it.';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['uid']['group_info']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['uid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Active',
      'operator' => '=',
      'value' => array(
        'value' => '0',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['created']['group'] = 1;
  $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = 'Post date';
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  $handler->display->display_options['filters']['created']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['created']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['created']['group_info']['identifier'] = 'created';
  $handler->display->display_options['filters']['created']['group_info']['group_items'] = array(
    1 => array(
      'title' => '1 Month',
      'operator' => '>=',
      'value' => array(
        'type' => 'offset',
        'value' => '-1 month',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => '3 Months',
      'operator' => '>=',
      'value' => array(
        'type' => 'offset',
        'value' => '-3 months',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => '6 Months',
      'operator' => '>=',
      'value' => array(
        'type' => 'offset',
        'value' => '-6 months',
        'min' => '',
        'max' => '',
      ),
    ),
    4 => array(
      'title' => 'One Year',
      'operator' => '>=',
      'value' => array(
        'type' => 'offset',
        'value' => '-1 year',
        'min' => '',
        'max' => '',
      ),
    ),
  );

  /* Display: Listing pane */
  $handler = $view->new_display('panel_pane', 'Listing pane', 'listing_pane');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Content: Header Image */
  $handler->display->display_options['fields']['field_article_hero_image']['id'] = 'field_article_hero_image';
  $handler->display->display_options['fields']['field_article_hero_image']['table'] = 'field_data_field_article_hero_image';
  $handler->display->display_options['fields']['field_article_hero_image']['field'] = 'field_article_hero_image';
  $handler->display->display_options['fields']['field_article_hero_image']['label'] = '';
  $handler->display->display_options['fields']['field_article_hero_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_hero_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_hero_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_article_hero_image']['settings'] = array(
    'image_style' => 'articles_overview_200x155',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_article_hero_image']['group_column'] = 'entity_id';
  /* Field: Global: Giveaway Keys left */
  $handler->display->display_options['fields']['keys_left']['id'] = 'keys_left';
  $handler->display->display_options['fields']['keys_left']['table'] = 'views';
  $handler->display->display_options['fields']['keys_left']['field'] = 'keys_left';
  $handler->display->display_options['fields']['keys_left']['label'] = '';
  $handler->display->display_options['fields']['keys_left']['exclude'] = TRUE;
  $handler->display->display_options['fields']['keys_left']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['keys_left']['gid'] = '[nid]';
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'keys_left';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '3';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = '0';
  $handler->display->display_options['fields']['views_conditional']['then'] = '[keys_left] Keys Remaining';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 1;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="giveaway_details giveaway_details_top">
<div class="giveaway_image">[field_article_hero_image]</div>
<div class="giveaway_type">Giveaway</div>
</div>
<div class="giveaway_details giveaway_details_bottom">
<div class="giveaway_title">[title]</div>
<div class="giveaway_body">[body]</div>
<div class="giveaway_remaining">[views_conditional]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: Promoted pane */
  $handler = $view->new_display('panel_pane', 'Promoted pane', 'promoted_pane');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'promoted-giveaway';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'giveaways' => 'giveaways',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Keep Reading';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = 'node/[nid]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Content: Header Image */
  $handler->display->display_options['fields']['field_article_hero_image']['id'] = 'field_article_hero_image';
  $handler->display->display_options['fields']['field_article_hero_image']['table'] = 'field_data_field_article_hero_image';
  $handler->display->display_options['fields']['field_article_hero_image']['field'] = 'field_article_hero_image';
  $handler->display->display_options['fields']['field_article_hero_image']['label'] = '';
  $handler->display->display_options['fields']['field_article_hero_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_hero_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_hero_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_article_hero_image']['settings'] = array(
    'image_style' => 'giveaway_promoted_700x400',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_article_hero_image']['group_column'] = 'entity_id';
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'keys_left';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = '0';
  $handler->display->display_options['fields']['views_conditional']['or'] = '[keys_left] Keys Remaining';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 1;
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['alter']['text'] = '<span class="comment_icon"></span><strong>[comment_count]</strong> comments';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'F j';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: ShareThis Link */
  $handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['table'] = 'node';
  $handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['label'] = '';
  $handler->display->display_options['fields']['sharethis']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sharethis']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="promoted_giveaway_details promoted_giveaway_details_top">
<div class="promoted_giveaway_image">[field_article_hero_image]</div>
<div class="promoted_giveaway_type">Giveaway</div>
</div>
<div class="promoted_giveaway_details promoted_giveaway_details_bottom">
<div class="promoted_giveaway_title">[title]</div>
<div class="promoted_giveaway_body">[body]<span class="comments">[comment_count]</span>[sharethis]</div>
<div class="promoted_giveaway_author">Posted by [name] on [created]th</div>

</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'giveaways/rss.xml';
  $translatables['giveaway_listing'] = array(
    t('Master'),
    t('more'),
    t('Sort'),
    t('Reset'),
    t('Sort by'),
    t('Ascending'),
    t('Descending'),
    t('Advanced options'),
    t('Sort options'),
    t('All'),
    t('All Time'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('queue'),
    t('Nid'),
    t('Default'),
    t('Date'),
    t('Title'),
    t('Game'),
    t('Type'),
    t('The user who has claimed it.'),
    t('Post date'),
    t('Listing pane'),
    t('<div class="giveaway_details giveaway_details_top">
<div class="giveaway_image">[field_article_hero_image]</div>
<div class="giveaway_type">Giveaway</div>
</div>
<div class="giveaway_details giveaway_details_bottom">
<div class="giveaway_title">[title]</div>
<div class="giveaway_body">[body]</div>
<div class="giveaway_remaining">[views_conditional]</div>
</div>'),
    t('View panes'),
    t('Promoted pane'),
    t('author'),
    t('Keep Reading'),
    t('<span class="comment_icon"></span><strong>[comment_count]</strong> comments'),
    t('.'),
    t(','),
    t('<div class="promoted_giveaway_details promoted_giveaway_details_top">
<div class="promoted_giveaway_image">[field_article_hero_image]</div>
<div class="promoted_giveaway_type">Giveaway</div>
</div>
<div class="promoted_giveaway_details promoted_giveaway_details_bottom">
<div class="promoted_giveaway_title">[title]</div>
<div class="promoted_giveaway_body">[body]<span class="comments">[comment_count]</span>[sharethis]</div>
<div class="promoted_giveaway_author">Posted by [name] on [created]th</div>

</div>'),
    t('Feed'),
  );
  $export['giveaway_listing'] = $view;

  return $export;
}
