<?php
/**
 * @file
 * mmorpg_site.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mmorpg_site_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'administrator_admin_theme';
  $strongarm->value = '1';
  $export['administrator_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'administrator_node_admin_theme';
  $strongarm->value = 1;
  $export['administrator_node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'adminimal';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'anonymous_user_admin_theme';
  $strongarm->value = '0';
  $export['anonymous_user_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'anonymous_user_node_admin_theme';
  $strongarm->value = 0;
  $export['anonymous_user_node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authenticated_user_admin_theme';
  $strongarm->value = '0';
  $export['authenticated_user_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authenticated_user_node_admin_theme';
  $strongarm->value = 0;
  $export['authenticated_user_node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_disable_search';
  $strongarm->value = 1;
  $export['chosen_disable_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_disable_search_threshold';
  $strongarm->value = '0';
  $export['chosen_disable_search_threshold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_jquery_selector';
  $strongarm->value = 'select#edit-created, select#edit-sort-by, select#edit-sort-order, select#edit-uid';
  $export['chosen_jquery_selector'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_minimum_multiple';
  $strongarm->value = '20';
  $export['chosen_minimum_multiple'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_minimum_single';
  $strongarm->value = '0';
  $export['chosen_minimum_single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_minimum_width';
  $strongarm->value = '50';
  $export['chosen_minimum_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_no_results_text';
  $strongarm->value = 'No results match';
  $export['chosen_no_results_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_placeholder_text_multiple';
  $strongarm->value = 'Choose some options';
  $export['chosen_placeholder_text_multiple'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_placeholder_text_single';
  $strongarm->value = 'Choose an option';
  $export['chosen_placeholder_text_single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_search_contains';
  $strongarm->value = 0;
  $export['chosen_search_contains'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_use_theme';
  $strongarm->value = 1;
  $export['chosen_use_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_url';
  $strongarm->value = '1';
  $export['clean_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clickmeter_api_key';
  $strongarm->value = '45ac796e-705a-4d8d-a250-a07d737c7825';
  $export['clickmeter_api_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'country_specific_nodes_def_cn';
  $strongarm->value = 'US';
  $export['country_specific_nodes_def_cn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'country_specific_nodes_include_list';
  $strongarm->value = 'giveaway,signup_now_link,sweepstake,0,0,0,0,0,0,0,0,0,0,0';
  $export['country_specific_nodes_include_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_api_version';
  $strongarm->value = '7.2';
  $export['date_api_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone';
  $strongarm->value = 'America/New_York';
  $export['date_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'improved_multi_select:buttontext_add';
  $strongarm->value = '>';
  $export['improved_multi_select:buttontext_add'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'improved_multi_select:buttontext_addall';
  $strongarm->value = '»';
  $export['improved_multi_select:buttontext_addall'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'improved_multi_select:buttontext_del';
  $strongarm->value = '<';
  $export['improved_multi_select:buttontext_del'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'improved_multi_select:buttontext_delall';
  $strongarm->value = '«';
  $export['improved_multi_select:buttontext_delall'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'improved_multi_select:buttontext_movedown';
  $strongarm->value = 'Move down';
  $export['improved_multi_select:buttontext_movedown'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'improved_multi_select:buttontext_moveup';
  $strongarm->value = 'Move up';
  $export['improved_multi_select:buttontext_moveup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'improved_multi_select:filtertype';
  $strongarm->value = 'partial';
  $export['improved_multi_select:filtertype'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'improved_multi_select:groupresetfilter';
  $strongarm->value = 1;
  $export['improved_multi_select:groupresetfilter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'improved_multi_select:isall';
  $strongarm->value = 0;
  $export['improved_multi_select:isall'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'improved_multi_select:orderable';
  $strongarm->value = 0;
  $export['improved_multi_select:orderable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'improved_multi_select:selectors';
  $strongarm->value = '#edit-field-countries-cce-und';
  $export['improved_multi_select:selectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'improved_multi_select:url';
  $strongarm->value = 'node/*/edit';
  $export['improved_multi_select:url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_profile';
  $strongarm->value = 'mmorpg';
  $export['install_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_task';
  $strongarm->value = 'done';
  $export['install_task'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = 1;
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'om_maximenu';
  $strongarm->value = array(
    1 => array(
      'code' => 'om-u1-233032521',
      'title' => 'User Menu',
      'action' => 'click_fast',
      'skin' => 'bubble',
      'style' => '',
      'output' => 'block',
      'delay' => '1000',
      'menu_visibility' => array(
        'visibility' => 0,
        'pages' => '',
      ),
      'block_options' => array(
        'stacking' => 'row',
        'direction' => 'block-down',
        'region' => '',
        'weight' => '0',
      ),
      'links' => array(
        3 => array(
          'link_title' => 'Games<span class="pill"></span>',
          'link_title_option' => 'title',
          'path_icon' => '',
          'icon_option' => 0,
          'php_option' => 0,
          'path' => '',
          'path_query' => '',
          'path_fragment' => '',
          'weight' => '-50',
          'id' => 'mmorpg_menu_games',
          'class' => '',
          'rel' => '',
          'target' => '_self',
          'description' => '',
          'description_option' => 'hover',
          'roles' => array(
            1 => 0,
            2 => 0,
            3 => 0,
            4 => 0,
          ),
          'content' => array(
            'mmorpg_site___invisible_block' => array(
              'title' => '<none>',
              'title_path' => '',
              'title_path_query' => '',
              'title_path_fragment' => '',
              'module' => 'mmorpg_site',
              'delta' => 'invisible_block',
              'weight' => '0',
              'visibility' => '0',
            ),
          ),
        ),
        4 => array(
          'link_title' => 'Reviews<span class="pill"></span>',
          'link_title_option' => 'title',
          'path_icon' => '',
          'icon_option' => 0,
          'php_option' => 0,
          'path' => '',
          'path_query' => '',
          'path_fragment' => '',
          'weight' => '-49',
          'id' => 'mmorpg_menu_reviews',
          'class' => '',
          'rel' => '',
          'target' => '_self',
          'description' => '',
          'description_option' => 'hover',
          'roles' => array(
            1 => 0,
            2 => 0,
            3 => 0,
            4 => 0,
          ),
          'content' => array(
            'mmorpg_site___invisible_block' => array(
              'title' => '<none>',
              'title_path' => '',
              'title_path_query' => '',
              'title_path_fragment' => '',
              'module' => 'mmorpg_site',
              'delta' => 'invisible_block',
              'weight' => '0',
              'visibility' => '0',
            ),
          ),
        ),
        2 => array(
          'link_title' => 'Updates<span class="pill"></span>',
          'link_title_option' => 'title',
          'path_icon' => '',
          'icon_option' => 0,
          'php_option' => 0,
          'path' => '',
          'path_query' => '',
          'path_fragment' => '',
          'weight' => '-48',
          'id' => 'mmorpg_menu_updates',
          'class' => '',
          'rel' => '',
          'target' => '_self',
          'description' => '',
          'description_option' => 'hover',
          'roles' => array(
            1 => 0,
            2 => 0,
            3 => 0,
            4 => 0,
          ),
          'content' => array(
            'mmorpg_site___invisible_block' => array(
              'title' => '<none>',
              'title_path' => '',
              'title_path_query' => '',
              'title_path_fragment' => '',
              'module' => 'mmorpg_site',
              'delta' => 'invisible_block',
              'weight' => '0',
              'visibility' => '0',
            ),
          ),
        ),
        5 => array(
          'link_title' => 'Videos<span class="pill"></span>',
          'link_title_option' => 'title',
          'path_icon' => '',
          'icon_option' => 0,
          'php_option' => 0,
          'path' => '',
          'path_query' => '',
          'path_fragment' => '',
          'weight' => '-47',
          'id' => 'mmorpg_menu_videos',
          'class' => '',
          'rel' => '',
          'target' => '_self',
          'description' => '',
          'description_option' => 'hover',
          'roles' => array(
            1 => 0,
            2 => 0,
            3 => 0,
            4 => 0,
          ),
          'content' => array(
            'mmorpg_site___invisible_block' => array(
              'title' => '<none>',
              'title_path' => '',
              'title_path_query' => '',
              'title_path_fragment' => '',
              'module' => 'mmorpg_site',
              'delta' => 'invisible_block',
              'weight' => '0',
              'visibility' => '0',
            ),
          ),
        ),
        6 => array(
          'link_title' => 'Community<span class="pill"></span>',
          'link_title_option' => 'title',
          'path_icon' => '',
          'icon_option' => 0,
          'php_option' => 0,
          'path' => '',
          'path_query' => '',
          'path_fragment' => '',
          'weight' => '-46',
          'id' => 'mmorpg_menu_community',
          'class' => '',
          'rel' => '',
          'target' => '_self',
          'description' => '',
          'description_option' => 'hover',
          'roles' => array(
            1 => 0,
            2 => 0,
            3 => 0,
            4 => 0,
          ),
          'content' => array(
            'mmorpg_site___invisible_block' => array(
              'title' => '<none>',
              'title_path' => '',
              'title_path_query' => '',
              'title_path_fragment' => '',
              'module' => 'mmorpg_site',
              'delta' => 'invisible_block',
              'weight' => '0',
              'visibility' => '0',
            ),
          ),
        ),
        7 => array(
          'link_title' => 'Blogs<span class="pill"></span>',
          'link_title_option' => 'title',
          'path_icon' => '',
          'icon_option' => 0,
          'php_option' => 0,
          'path' => '',
          'path_query' => '',
          'path_fragment' => '',
          'weight' => '-45',
          'id' => 'mmorpg_menu_blogs',
          'class' => '',
          'rel' => '',
          'target' => '_self',
          'description' => '',
          'description_option' => 'hover',
          'roles' => array(
            1 => 0,
            2 => 0,
            3 => 0,
            4 => 0,
          ),
          'content' => array(
            'mmorpg_site___invisible_block' => array(
              'title' => '<none>',
              'title_path' => '',
              'title_path_query' => '',
              'title_path_fragment' => '',
              'module' => 'mmorpg_site',
              'delta' => 'invisible_block',
              'weight' => '0',
              'visibility' => '0',
            ),
          ),
        ),
        8 => array(
          'link_title' => 'TGN<span class="pill"></span>',
          'link_title_option' => 'title',
          'path_icon' => '',
          'icon_option' => 0,
          'php_option' => 0,
          'path' => '',
          'path_query' => '',
          'path_fragment' => '',
          'weight' => '-44',
          'id' => 'mmorpg_menu_tgn',
          'class' => '',
          'rel' => '',
          'target' => '_self',
          'description' => '',
          'description_option' => 'hover',
          'roles' => array(
            1 => 0,
            2 => 0,
            3 => 0,
            4 => 0,
          ),
          'content' => array(
            'mmorpg_site___invisible_block' => array(
              'title' => '<none>',
              'title_path' => '',
              'title_path_query' => '',
              'title_path_fragment' => '',
              'module' => 'mmorpg_site',
              'delta' => 'invisible_block',
              'weight' => '0',
              'visibility' => '0',
            ),
          ),
        ),
        9 => array(
          'link_title' => 'Store',
          'link_title_option' => 'title',
          'path_icon' => '',
          'icon_option' => 0,
          'php_option' => 0,
          'path' => '',
          'path_query' => '',
          'path_fragment' => '',
          'weight' => '-43',
          'id' => '',
          'class' => '',
          'rel' => '',
          'target' => '_self',
          'description' => '',
          'description_option' => 'hover',
          'roles' => array(
            1 => 0,
            2 => 0,
            3 => 0,
            4 => 0,
          ),
          'content' => array(
            'mmorpg_site___invisible_block' => array(
              'title' => '<none>',
              'title_path' => '',
              'title_path_query' => '',
              'title_path_fragment' => '',
              'module' => 'mmorpg_site',
              'delta' => 'invisible_block',
              'weight' => '0',
              'visibility' => '0',
            ),
          ),
        ),
        10 => array(
          'link_title' => '$block = module_invoke(\'search\', \'block_view\', \'form\');
return render($block[\'content\']);',
          'link_title_option' => 'title',
          'path_icon' => '',
          'icon_option' => 0,
          'php_option' => 1,
          'path' => '',
          'path_query' => '',
          'path_fragment' => '',
          'weight' => '-42',
          'id' => '',
          'class' => '',
          'rel' => '',
          'target' => '_self',
          'description' => '',
          'description_option' => 'hover',
          'roles' => array(
            1 => 0,
            2 => 0,
            3 => 0,
            4 => 0,
          ),
          'content' => '',
        ),
        1 => array(
          'link_title' => 'User Name',
          'link_title_option' => 'title',
          'path_icon' => '',
          'icon_option' => 0,
          'php_option' => 0,
          'path' => '',
          'path_query' => '',
          'path_fragment' => '',
          'weight' => '-41',
          'id' => 'mmorpg_menu_username',
          'class' => 'float-right',
          'rel' => '',
          'target' => '_self',
          'description' => '',
          'description_option' => 'hover',
          'roles' => array(
            1 => 0,
            2 => 0,
            3 => 0,
            4 => 0,
          ),
          'content' => array(
            'mmorpg_site___invisible_block' => array(
              'title' => '<none>',
              'title_path' => '',
              'title_path_query' => '',
              'title_path_fragment' => '',
              'module' => 'mmorpg_site',
              'delta' => 'invisible_block',
              'weight' => '0',
              'visibility' => '0',
            ),
          ),
        ),
      ),
    ),
  );
  $export['om_maximenu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_override_theme_mmorpg';
  $strongarm->value = 0;
  $export['panels_everywhere_override_theme_mmorpg'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_site_template_enabled';
  $strongarm->value = TRUE;
  $export['panels_everywhere_site_template_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_site_template_per_theme';
  $strongarm->value = 0;
  $export['panels_everywhere_site_template_per_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'radioactivity_checksum_salt';
  $strongarm->value = '6Pqik8ZUKGqqLHRx5936';
  $export['radioactivity_checksum_salt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'radioactivity_flood_protection';
  $strongarm->value = 1;
  $export['radioactivity_flood_protection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'radioactivity_flood_timeout';
  $strongarm->value = '15';
  $export['radioactivity_flood_timeout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_article_news_post_options';
  $strongarm->value = array(
    'full' => 0,
    'teaser' => 0,
    'rss' => 0,
    'search_index' => 0,
    'search_result' => 0,
    'diff_standard' => 0,
    'token' => 0,
  );
  $export['sharethis_article_news_post_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_button_option';
  $strongarm->value = 'stbc_custom';
  $export['sharethis_button_option'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_comments';
  $strongarm->value = 0;
  $export['sharethis_comments'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_customer_options';
  $strongarm->value = array(
    'full' => 0,
    'teaser' => 0,
    'rss' => 0,
    'search_index' => 0,
    'search_result' => 0,
    'diff_standard' => 0,
    'token' => 0,
  );
  $export['sharethis_customer_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_game_link_options';
  $strongarm->value = array(
    'full' => 0,
    'teaser' => 0,
    'rss' => 0,
    'search_index' => 0,
    'search_result' => 0,
    'diff_standard' => 0,
    'token' => 0,
  );
  $export['sharethis_game_link_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_game_options';
  $strongarm->value = array(
    'full' => 0,
    'teaser' => 0,
    'rss' => 0,
    'search_index' => 0,
    'search_result' => 0,
    'diff_standard' => 0,
    'token' => 0,
  );
  $export['sharethis_game_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_late_load';
  $strongarm->value = 0;
  $export['sharethis_late_load'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_location';
  $strongarm->value = 'block';
  $export['sharethis_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_mmorpg_article_options';
  $strongarm->value = array(
    'full' => 0,
    'teaser' => 0,
    'rss' => 0,
    'search_index' => 0,
    'search_result' => 0,
    'diff_standard' => 0,
    'token' => 0,
  );
  $export['sharethis_mmorpg_article_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_node_types';
  $strongarm->value = array(
    'video' => 'video',
    'mmorpg_article' => 0,
    'article_news_post' => 0,
    'customer' => 0,
    'game' => 0,
    'game_link' => 0,
    'panel' => 0,
    'play_now_promoted_game' => 0,
    'promoted_signup_now_link' => 0,
    'screenshot_gallery' => 0,
    'signup_now_link' => 0,
    'siteskin' => 0,
  );
  $export['sharethis_node_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_option_extras';
  $strongarm->value = array(
    'Google Plus One:plusone' => 0,
    'Facebook Like:fblike' => 0,
  );
  $export['sharethis_option_extras'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_option_neworzero';
  $strongarm->value = 0;
  $export['sharethis_option_neworzero'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_option_onhover';
  $strongarm->value = 1;
  $export['sharethis_option_onhover'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_option_shorten';
  $strongarm->value = 1;
  $export['sharethis_option_shorten'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_panel_options';
  $strongarm->value = array(
    'full' => 0,
    'teaser' => 0,
    'rss' => 0,
    'search_index' => 0,
    'search_result' => 0,
    'diff_standard' => 0,
    'token' => 0,
  );
  $export['sharethis_panel_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_promoted_signup_now_link_options';
  $strongarm->value = array(
    'full' => 0,
    'teaser' => 0,
    'rss' => 0,
    'search_index' => 0,
    'search_result' => 0,
    'diff_standard' => 0,
    'token' => 0,
  );
  $export['sharethis_promoted_signup_now_link_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_publisherID';
  $strongarm->value = 'dr-fe21f839-12e2-e6cf-9b5f-6956d458cfb5';
  $export['sharethis_publisherID'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_screenshot_gallery_options';
  $strongarm->value = array(
    'full' => 0,
    'teaser' => 0,
    'rss' => 0,
    'search_index' => 0,
    'search_result' => 0,
    'diff_standard' => 0,
    'token' => 0,
  );
  $export['sharethis_screenshot_gallery_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_service_option';
  $strongarm->value = '"ShareThis:sharethis","Facebook:facebook","Twitter:twitter","Google +:googleplus"';
  $export['sharethis_service_option'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_signup_now_link_options';
  $strongarm->value = array(
    'full' => 0,
    'teaser' => 0,
    'rss' => 0,
    'search_index' => 0,
    'search_result' => 0,
    'diff_standard' => 0,
    'token' => 0,
  );
  $export['sharethis_signup_now_link_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_siteskin_options';
  $strongarm->value = array(
    'full' => 0,
    'teaser' => 0,
    'rss' => 0,
    'search_index' => 0,
    'search_result' => 0,
    'diff_standard' => 0,
    'token' => 0,
  );
  $export['sharethis_siteskin_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_twitter_handle';
  $strongarm->value = '';
  $export['sharethis_twitter_handle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_twitter_recommends';
  $strongarm->value = '';
  $export['sharethis_twitter_recommends'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_twitter_suffix';
  $strongarm->value = '';
  $export['sharethis_twitter_suffix'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_video_options';
  $strongarm->value = array(
    'full' => 0,
    'teaser' => 0,
    'rss' => 0,
    'search_index' => 0,
    'search_result' => 0,
    'diff_standard' => 0,
    'token' => 0,
  );
  $export['sharethis_video_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_weight';
  $strongarm->value = '10';
  $export['sharethis_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_widget_option';
  $strongarm->value = 'st_multi';
  $export['sharethis_widget_option'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_default_country';
  $strongarm->value = 'US';
  $export['site_default_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'home';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'admin@example.com';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'MMORPG';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'mmorpg';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_mmorpg_settings';
  $strongarm->value = array(
    'toggle_logo' => 0,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 0,
    'toggle_secondary_menu' => 0,
    'omega_toggle_front_page_content' => 0,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'omega_enable_warning' => TRUE,
    'omega_toggle_extension_assets' => 1,
    'omega_js_footer' => array(),
    'omega_css_exclude' => array(),
    'omega_js_exclude' => array(),
    'omega_libraries' => array(
      'selectivizr' => array(
        'status' => 0,
      ),
      'respond' => array(
        'status' => 0,
      ),
      'pie' => array(
        'status' => 0,
        'selectors' => array(),
      ),
      'html5shiv' => array(
        'status' => 0,
      ),
    ),
    'omega_toggle_extension_development' => 1,
    'omega_enable_export_reminder' => 0,
    'omega_rebuild_theme_registry' => 0,
    'omega_rebuild_aggregates' => 0,
    'omega_browser_width_indicator' => 0,
    'omega_livereload' => 0,
    'omega_livereload_script' => 'http://localhost:35729/livereload.js',
    'omega_livereload_host' => 'localhost',
    'omega_livereload_port' => '35729',
    'omega_demo_regions' => 0,
    'omega_toggle_extension_compatibility' => 1,
    'omega_conditional_classes_html' => 1,
    'omega_apple_touch' => 1,
    'omega_cleartype' => 1,
    'omega_handheld_friendly' => 1,
    'omega_mobile_optimized' => 1,
    'omega_viewport' => 1,
    'omega_viewport_user_scaleable' => 1,
    'omega_chrome_edge' => 1,
    'omega_toggle_extension_layouts' => 0,
    'omega_layout' => 'mm3col',
  );
  $export['theme_mmorpg_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '3';
  $export['user_admin_role'] = $strongarm;

  return $export;
}
