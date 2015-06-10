<?php

/**
 * @file
 * Administrative forms and functions for troll module.
 */

/**
 * Implements hook_form().
 */
function troll_admin_settings() {
  $form['ip_settings'] = array(
    '#type' => 'fieldset',
    '#title' => 'IP Address Banning',
  );
  $form['ip_settings']['troll_enable_ip_ban'] = array(
    '#type' => 'radios',
    '#title' => t('IP Address Banning'),
    '#default_value' => variable_get('troll_enable_ip_ban', 1),
    '#options' => array('1' => t('Enable banning by IP address'), '0' => t('Disable banning by IP address')),
  );
  $form['ip_settings']['troll_ip_ban_redirect'] = array(
    '#type' => 'textfield',
    '#title' => t('IP Ban Relocation Page'),
    '#default_value' => variable_get('troll_ip_ban_redirect', ''),
    '#description' => t("Page for relocating users banned based on their IP address or domain name.  If left blank, users will be redirected to blocked.html in the troll module's directory. Do not use a drupal path here! You will cause a loop since IP banning completely blocks all access to the site! Edit the blocked.html file, or redirect to http://localhost."),
  );

  $select = array(
    0 => t('-Select Role-'),
  );
  $roles = $select + user_roles();

  $form['role_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('User Blocking'),
  );
  $form['role_settings']['troll_block_role'] = array(
    '#type' => 'select',
    '#title' => t('Troll Block Role'),
    '#default_value' => variable_get('troll_block_role', 0),
    '#options' => $roles,
    '#description' => t('Select the role to assign to users when blocking from the troll administration screens.'),
  );

  return system_settings_form($form);
}

/**
 * Admin settings page validate handler.
 *
 * @see troll_admin_settings()
 */
function troll_admin_settings_validate($form, &$form_state) {
  if ($form_state['values']['troll_block_role'] == '0') {
    form_set_error('troll_block_role', t('You must choose a role to assign to users when blocking from the troll settings page.'));
  }
}

/**
 * Menu callback: user IP banning.
 */
function troll_ip_ban() {
  $form['banfieldset'] = array(
    '#type' => 'fieldset',
    '#title' => t('Add IP Ban'),
    '#weight' => -1,
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $form['banfieldset']['banform'] = troll_ip_ban_form(array(), $ip);
  $form['ipdisplay'] = array(
    '#type' => 'fieldset',
    '#title' => t('Banned IPs'),
    '#value' => troll_display_ip(),
    '#weight' => 0,
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $form['#validate'] = array('troll_ip_ban_form_validate');
  return $form;
}

/**
 * Submit handler for IP Ban form.
 *
 * @see troll_ip_ban()
 * @see troll_ip_ban_form()
 */
function troll_ip_ban_submit($form, &$form_state) {
  troll_insert_ip($form_state['values']);
}

/**
 * Summary of how many IP blocks are filtered.
 *
 * @return string
 *   the number of blacklisted IP's found
 */
function troll_blacklist_summary() {
  $count = db_query('SELECT COUNT(net) FROM {troll_blacklist}')->fetchField();
  return t('%d address blocks filtered.', array('%d' => $count));
}

/**
 * Implements hook_form().
 */
function troll_blacklist_punishment_form() {
  $form['stutter'] = array(
    '#type' => 'checkbox',
    '#title' => t('Randomly stutter output'),
    '#default_value' => variable_get('troll_blacklist_stutter', 0),
    '#description' => t('While outputting content, the troll module will cause Drupal to "sleep" for random intervals of 1-5 seconds to delay output.'),
  );
  $form['mod_requests'] = array(
    '#type' => 'radios',
    '#title' => t('Page request modification'),
    '#options' => array(
      'none' => t('none'),
      'silent_post_drop' => 'Silently drop form post submission data',
      'notice_post_drop' => 'Drop form post submission data and give a notice',
    ),
    '#default_value' => variable_get('troll_blacklist_mod_requests', '0'),
    '#description' => t('Modifies data sent by visitors from blacklisted IPs before Drupal even has a chance to process it.'),
  );
  $form['alt_page_output'] = array(
    '#type' => 'fieldset',
    '#title' => 'Alternate page output',
  );
  $form['alt_page_output']['alt_page'] = array(
    '#type' => 'radios',
    '#title' => 'Alternate pages',
    '#options' => array(
      'none' => t('none'),
      'blank' => t('Blank pages'),
      '404' => t('404 every page request'),
      'redirect' => t('Redirect to alternate URL'),
    ),
    '#default_value' => variable_get('troll_blacklist_alt_page', '0'),
    '#description' => t('Sends alternate page output, whether the visitor hits a real URL or not.'),
  );
  $form['alt_page_output']['alt_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Redirection URL'),
    '#default_value' => variable_get('troll_blacklist_alt_url', ''),
    '#description' => t('URL to redirect blacklisted visitors to if "Redirect to alternate URL" is selected. Start with the appropriate prefix (e.g., http://)'),
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Update Blacklist Punishments'),
    '#weight' => 1,
  );
  return $form;
}

/**
 * Submit handler for punishment form.
 *
 * @see troll_blacklist_punishment()
 */
function troll_blacklist_punishment_form_submit($form, $form_state) {
  variable_set('troll_blacklist_mod_requests', $form_state['values']['mod_requests']);
  variable_set('troll_blacklist_stutter', $form_state['values']['stutter']);
  variable_set('troll_blacklist_alt_page', $form_state['values']['alt_page']);
  variable_set('troll_blacklist_alt_url', $form_state['values']['alt_url']);
  drupal_set_message(t('The settings have been updated.'), 'status');
}

/**
 * Implements hook_form().
 */
function troll_blacklist_import_form() {
  $form['truncate_list'] = array(
    '#type' => 'checkbox',
    '#title' => t('Truncate/delete existing blacklist before import'),
  );
  $options = array();
  $options[0] = '';
  if (function_exists('gzopen')) {
    $options['OCgz'] = 'OpenBSD mirror: okean.com China bzip archive';
    $options['OKgz'] = 'OpenBSD mirror: okean.com Korea bzip archive';
  }
  $options['OTtx'] = 'okean.com China and Korea text file';
  $options['OCtx'] = 'okean.com China text file';
  $options['OKtx'] = 'okean.com Korea text file';
  $form['select_list'] = array(
    '#type' => 'select',
    '#title' => t('Download and import'),
    '#options' => $options,
    '#description' => t('Downloads supported blacklist from the internet. Please select a mirror when possible.'),
  );
  $form['custom_list'] = array(
    '#type' => 'textfield',
    '#title' => t('List URL'),
    '#description' => t('URL of a list to import. List files should have one address per line in Classless Internet Domain Routing CIDR format (x.x.x.x/x). Individual IPs should still have /32.'),
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Import List'),
    '#weight' => 1,
  );
  return $form;
}

/**
 * Submit handler for blacklist import.
 *
 * @see troll_blacklist_import()
 */
function troll_blacklist_import_form_submit($form, &$form_state) {
  if (!empty($form_state['values']['truncate_list'])) {
    if (db_query('TRUNCATE TABLE {troll_blacklist}')) {
      drupal_set_message(t('Blacklist table truncated.'), 'status');
    }
  }
  if (!empty($form_state['values']['select_list'])) {
    troll_blacklist_import_list($form_state['values']['select_list']);
  }
  if (!empty($form_state['values']['custom_list'])) {
    troll_blacklist_import_url($form_state['values']['custom_list']);
  }
  $form_state['redirect'] = 'admin/people/troll/ip_blacklist';
}

/**
 * Decyphers the dropdown selection chosen to send for parsing out IP blocks.
 *
 * @see troll_blacklist_import_form()
 * @see troll_blacklist_parse_save()
 *
 * @param array $list
 *   the blacklist import list selection
 */
function troll_blacklist_import_list($list) {
  $files = array(
    'OCgz' => array('gz' => 'http://www.openbsd.org/spamd/chinacidr.txt.gz'),
    'OKgz' => array('gz' => 'http://www.openbsd.org/spamd/koreacidr.txt.gz'),
    'OTtx' => array('txt' => 'http://www.okean.com/sinokoreacidr.txt'),
    'OCtx' => array('txt' => 'http://www.okean.com/chinacidr.txt'),
    'OKtx' => array('txt' => 'http://www.okean.com/koreacidr.txt'));

  if (!isset($files[$list])) {
    drupal_set_message(t('Form input not valid'), 'error');
    return FALSE;
  }

  $file_type = array_keys($files[$list]);
  troll_blacklist_parse_save($files[$list][$file_type[0]], $file_type[0]);
}

/**
 * Parses a URL to send for parsing out IP blocks.
 *
 * @see troll_blacklist_parse_save()
 *
 * @param array $edit
 */
function troll_blacklist_import_url($edit) {
  $url_parts = parse_url($edit['custom_list']);
  $file_parts = pathinfo($url_parts['path']);
  troll_blacklist_parse_save($edit['custom_list'], $file_parts['extension']);
}

/**
 * Search for IP blocks in CIDR format (x.x.x.x/x).
 *
 * Parses input file, line by line, searching for IP blocks. Understands files
 * in text, bzip, and bzip2 format, where the PHP installation supports it.
 * Writes what it finds to the database as long integers.
 *
 * @todo should probably function_exists() the compression file functions
 *
 * @param string $file_name
 *
 * @param string $file_type
 */
function troll_blacklist_parse_save($file_name, $file_type) {
  $netmasks = array(
    0, -2147483648, -1073741824, -536870912, -268435456, -134217728,
    -67108864, -33554432, -16777216, -8388608, -4194304, -2097152, -1048576,
    -524288, -262144, -131072, -65536, -32768, -16384, -8192, -4096, -2048,
    -1024, -512, -256, -128, -64, -32, -16, -8, -4, -2, -1);

  switch ($file_type) {
    case 'gz':
      $fp = gzopen($file_name, 'r');
      break;

    default:
      $fp = fopen($file_name, 'r');
      break;
  }

  if (is_resource($fp)) {
    $i = 0;
    while (!feof($fp)) {
      $buffer = fgets($fp);
      if ($buffer{0} != '#' && ($buffer{0} != '/' && $buffer{1} != '/') && !empty($buffer)) {
        preg_match("/([0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3})\/([0-9]{1,2})/", $buffer, $matches);
        // $matches array
        // 0 = whole string
        // 1 = i.i.i.i
        // 2 = s
        $longip = ip2long($matches[1]);
        unset($buffer, $matches[0], $matches[1]);

        if ($matches[2] == 32) {
          $net = $bcast = $longip;
        }
        else {
          $net = $longip & $netmasks[$matches[2]];
          $bcast = $longip | ($netmasks[$matches[2]] ^ -1);
        }
        db_delete('troll_blacklist')
          ->condition(db_and()->condition('net', $net)->condition('bcast', $bcast))
          ->execute();
        db_insert('troll_blacklist')
          ->fields(array(
            'net' => $net,
            'bcast' => $bcast,
          ))
          ->execute();
        $i++;
      }
    }
    switch ($file_type) {
      case 'gz':
        gzclose($fp);
        break;

      default:
        fclose($fp);
        break;
    }
    drupal_set_message(t('%i IP blocks imported', array('%i' => $i)), 'status');
  }
  else {
    drupal_set_message(t('Import failed! File could not be read.'), 'error');
  }
}

/**
 * Implements hook_form().
 */
function troll_blacklist_search_form($form_state) {
  $form['ip_address'] = array(
    '#type' => 'textfield',
    '#title' => t('IP Address'),
    '#size' => 15,
    '#maxlength' => 15,
    '#description' => t('Address to search for in the database of imported IP blocks.'),
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Search Blacklisted IPs'),
    '#weight' => 1,
  );
  $form['result'] = array(
    '#type' => 'fieldset',
    '#title' => t('Blacklisted IPs'),
    '#value' => !empty($form_state['values']['ip_address']) ? troll_blacklist_search($form_state['values']['ip_address']) : troll_blacklist_search(''),
    '#weight' => 2,
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  return $form;
}

/**
 * Submit handler for blacklist search form.
 *
 * @see troll_blacklist_search_blacklist_form()
 */
function troll_blacklist_search_form_submit($form, &$form_state) {
  $form_state['rebuild'] = TRUE;
}

/**
 * Perform search to see if an IP address matches a blacklisted IP block.
 *
 * @return string
 */
function troll_blacklist_search($ip_address) {
  $headers = array(
    array('data' => t('Network Address'), 'field' => 'net', 'sort' => 'asc'),
    array('data' => t('Broadcast Address'), 'field' => 'bcast'),
    array('data' => t('Actions'), 'field' => 'delete'),
  );

  $query = db_select('troll_blacklist', 'bl')
    ->extend('PagerDefault')
    ->extend('TableSort')
    ->fields('bl', array('net', 'bcast'));
  if (!$ip_address == '') {
    $query
      ->condition('net', _troll_longip($ip_address), '<=')
      ->condition('bcast', _troll_longip($ip_address), '>=');
  }
  $query->orderByHeader($headers);
  $result = $query->execute();

  foreach ($result as $row) {
    $printnet = long2ip($row->net);
    $printbcast = long2ip($row->bcast);
    $action = l(t('remove'), "admin/people/troll/ip_blacklist/deleteblack/{$row->net}/{$row->bcast}");
    $rows[] = array($printnet, $printbcast, $action);
  }

 // Return empty if no rows are present.
  if (!isset($rows)) return NULL;

  $build['blacklist_table'] = array(
    '#theme' => 'table',
    '#header' => $headers,
    '#rows' => $rows,
    '#empty' => t('No IP addresses are whitelisted'),
  );
  $form['blacklist_pager'] = array('#theme' => 'pager');
  return drupal_render($build);
}

/**
 * Form builder function.
 *
 * @param string $net
 *   Not used, here for later Implements whitelist editing
 * @param string $bcast
 *   Not used, here for later Implements whitelist editing
 *
 * @see troll_whitelist_form()
 */
function troll_whitelist($net = NULL, $bcast = NULL) {
  $sql = 'SELECT net, bcast FROM {troll_whitelist}';
  $count_sql = 'SELECT COUNT(*) FROM {troll_whitelist}';

  $headers = array(
    array('data' => t('Start/Network Address'), 'field' => 'net', 'sort' => 'asc'),
    array('data' => t('End/Broadcast Address'), 'field' => 'bcast'),
    array('data' => t('Actions'), 'field' => 'delete'),
  );

  $query = db_select('troll_whitelist', 't')
    ->extend('PagerDefault')
    ->extend('TableSort');
  $result = $query
    ->fields('t', array('net', 'bcast'))
    ->limit(25)
    ->orderByHeader($headers)
    ->execute();
  foreach ($result as $row) {
    $printnet = long2ip($row->net);
    $printbcast = long2ip($row->bcast);
    $action = l(t('remove'), "admin/people/troll/ip_blacklist/deletewhite/{$row->net}/{$row->bcast}");
    $rows[] = array($printnet, $printbcast, $action);
  }

  // Return empty if no rows are present.
  if (!isset($rows)) return NULL;

  $build['whitelist_table'] = array(
    '#theme' => 'table',
    '#header' => $headers,
    '#rows' => $rows,
    '#empty' => t('No IP addresses are whitelisted'),
  );
  $form['whitelist_pager'] = array('#theme' => 'pager');

  return drupal_render($build);
}

/**
 * Implements hook_form().
 */
function troll_whitelist_form($form, $form_state) {
  $form['whitelist_addr1'] = array(
    '#type' => 'textfield',
    '#title' => t('Starting IP Address'),
    '#size' => 15,
    '#maxlength' => 15,
    '#default_value' => isset($net) ? long2ip($net) : '',
    '#description' => t('IP or start to range of IPs to whitelist.'),
    '#required' => TRUE,
  );
  $form['whitelist_addr2'] = array(
    '#type' => 'textfield',
    '#title' => t('Ending IP Address'),
    '#size' => 15,
    '#maxlength' => 15,
    '#default_value' => isset($bcast) ? long2ip($bcast) : '',
    '#description' => t('End of IP range to whitelist. If whitelisting a single IP, leave this blank.'),
    '#required' => FALSE,
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Insert Whitelist IPs'),
    '#weight' => 1,
  );
  $form['whitelist'] = array(
    '#type' => 'fieldset',
    '#title' => t('Whitelisted IPs'),
    '#value' => troll_whitelist(),
    '#weight' => 2,
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  return $form;
}

/**
 * Insert a new IP block into the whitelist.
 *
 * @param array $edit
 */
function troll_whitelist_form_submit($form, &$form_state) {
  $whitelist_addr1 = $form_state['values']['whitelist_addr1'];
  $whitelist_addr2 = $form_state['values']['whitelist_addr2'];
  $longip1 = _troll_longip($whitelist_addr1);
  $longip2 = _troll_longip(empty($whitelist_addr2) ? $whitelist_addr1 : $whitelist_addr2);
  if ($longip1 > $longip2) {
    $temp = $longip1;
    $longip1 = $longip2;
    $longip2 = $temp;
    unset($temp);
  }

  db_delete('troll_whitelist')
    ->condition(db_and()
    ->condition('net', $longip1)
    ->condition('bcast', $longip2))
    ->execute();
  db_insert('troll_whitelist')
    ->fields(array(
      'net' => $longip1,
      'bcast' => $longip2,
    )
  )
    ->execute();
  drupal_set_message(t('IP range %ip1 to %ip2 whitelisted.', array('%ip1' => long2ip($longip1), '%ip2' => long2ip($longip2))), 'status');
}


/*

function troll_insert_ip($edit) {

  db_delete('troll_ip_ban')
    ->condition('ip_address', $edit['ip_address'])
    ->execute();
  $insert = db_insert('troll_ip_ban')
    ->fields(array(
      'ip_address' => $edit['ip_address'],
      'domain_name' => $edit['domain_name'],
      'created' => REQUEST_TIME,
      'expires' => $expires,
      'uid' => $user->uid,
    ))
    ->execute();
  if ($insert) {
    drupal_set_message(t('IP ban added: %ip', array('%ip' => $edit['ip_address'])), 'status');
  }
  else {
    drupal_set_message(t('An error occurred. IP ban not created.'), 'error');
  }
}


*/

/**
 * Menu callback: block an user and redirect to search page.
 *
 * @param int $uid
 *   the users ID to block.
 */
function troll_confirm_block_user_form($form, &$form_state, $uid) {
  $account = user_load($uid);
  if (!$account) {
    drupal_goto('admin/people/troll');
  }
  $form['uid'] = array(
    '#type' => 'value',
    '#value' => $uid,
  );
  return confirm_form($form, t('Block user %username?', array('%username' => $account->name)), 'admin/people/troll', t('Are you sure you want to block this user?'));
}

/**
 * Submit handler for block user form.
 */
function troll_confirm_block_user_form_submit($form, &$form_state) {
  troll_block_user($form_state['values']['uid']);
  $form_state['redirect'] = 'admin/people/troll';
}

/**
 * Menu callback: block user IP address and redirect to search page.
 *
 * @param int $uid
 *   the users ID whith the IP address to block.
 */
function troll_confirm_block_ip_form($form, &$form_state, $uid) {
  $account = user_load($uid);

  // Don't process invalid Users
  if (!$account) {
    drupal_goto('admin/people/troll');
  }

  // user_load() doesn't return an IP with $account->ip so.
  $result = db_select('troll_ip_track', 't')
    ->fields('t', array('uid', 'ip_address'))
    ->condition('t.uid', $uid,'=')
    ->execute()
    ->fetchAssoc();

  // Don't process if IP address doesn't exist.
  if (!$result['ip_address']) {
    drupal_goto('admin/people/troll');
  }

  $form['ip'] = array(
    '#type' => 'value',
    '#value' => $result['ip_address'],
  );

  return confirm_form($form, t('Block IP address %ip?', array('%ip' => $result['ip_address'])), 'admin/people/troll', t('Are you sure you want to block this IP address for all users?'));
}

/**
 * Submit handler for block user IP address form.
 */
function troll_confirm_block_ip_form_submit($form, &$form_state) {
  troll_update_ip($form_state['values']['ip']);
  $form_state['redirect'] = 'admin/people/troll';
}


/**
 * Implements hook_form().
 */
function troll_ip_ban_form($form, &$form_state) {
  if (isset($form_state['build_info']['args'][0]) && $form_state['build_info']['args'][0]) {
    $ip = $form_state['build_info']['args'][0];
  }
  else {
    $ip = '';
  }

  $ip = db_query_range('SELECT * FROM {troll_ip_ban} WHERE ip_address = :ip', 0, 1, array(
      ':ip' => $ip))->fetchObject();

  $default_range = (isset($ip->ip_address_to)) ? 1 : 0;
  $domain_default = !empty($ip->domain_name) ? $ip->domain_name : (!empty($ip->ip_address) ? ( strpos($ip->ip_address,'*') === false ? gethostbyaddr($ip->ip_address) : '') : '');

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => (isset($ip->ip_address)) ? t('Update Banned IP') : t('Ban IP'),
    '#weight' => 1,
  );
  $form['ip_address'] = array(
    '#type' => 'textfield',
    '#title' => t('IP Address'),
    '#default_value' => !empty($ip->ip_address) ? $ip->ip_address : '',
    '#description' => t('The IP address to ban. If "Add a range" is checked, this will be the starting IP address in the range. Use \'*\' as a wild card, e.g 192.205.*.*'),
    '#required' => TRUE,
  );

  $form['range'] = array(
    '#type' => 'checkbox', 
    '#title' => t('Add a range'),
    '#default_value' => $default_range
  );

  $form['ip_address_to'] = array(
    '#type' => 'textfield',
    '#title' => t('To IP Address'),
    '#default_value' => !empty($ip->ip_address_to) ? $ip->ip_address_to : '',
    '#description' => t('The last IP address in the range to be banned.'),
    '#states' => array(
      'visible' => array(':input[name="range"]' => array('checked' => true)),
    ),
  );

  $form['domain_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Domain Name'),
    '#default_value' => $domain_default,
    '#description' => t('The Domain Name of the IP address to ban - for reference only.'),
  );
  $form['iid'] = array(
    '#type' => 'value',
    '#value' => !empty($ip->iid) ? $ip->iid : '',
  );

  troll_ip_ban_expire_form($form, $ip);

  return $form;
}


/**
 * IP ban form validate callback function.
 *
 * @see troll_ip_ban_form()
 */
function troll_ip_ban_form_validate($form, &$form_state) {
  $temp_ip = str_replace('*','0',$form_state['values']['ip_address']);
  if (!filter_var($temp_ip, FILTER_VALIDATE_IP)) {
    form_set_error('ip_address', t('Please include a valid IP address.'));
  }
  if($form_state['values']['range'] == 1) {
    $temp_ip = str_replace('*','0',$form_state['values']['ip_address_to']);
    if (!filter_var($temp_ip, FILTER_VALIDATE_IP)) {
      form_set_error('ip_address_to', t('Please include a valid IP address.'));
    }
  }
}

/**
 * Submit handler for IP ban form.
 *
 * @see troll_ip_ban_form()
 */
function troll_ip_ban_form_submit($form, &$form_state) {
  troll_update_ip($form_state['values']);
  $form_state['redirect'] = 'admin/people/troll/ip_ban';
}

/**
 * Helper function to return the expire form elements.
 */
function troll_ip_ban_expire_form(&$form, $ip) {
  $timestamp = isset($ip->expires) && $ip->expires != 0 ? $ip->expires : REQUEST_TIME;

  $form['timestamp'] = array(
    '#type' => 'fieldset',
    '#title' => t('Expires'),
    '#prefix' => '<div class="container-inline"><div class="day">',
    '#suffix' => '</div></div>',
    '#description' => t('The ban will be removed after this day.'),
  );
  $form['timestamp']['expires'] = array(
    '#type' => 'checkbox',
    '#default_value' => isset($ip->expires) && $ip->expires != 0 ? TRUE : FALSE,
  );
  $format = 'Y-m-d H:i:s';
  $time_zone = date('\U\T\C P',$timestamp);
  $form['timestamp']['date'] = array(
      '#type' => 'date_popup',
      '#title' => t('select a date'),
      '#default_value' => date('Y-m-d H:i:s',$timestamp),
      '#date_format' => $format,
      '#states' => array(
        'visible' => array(':input[name="expires"]' => array('checked' => true)),
      ),
      '#description' => 'Timezone: ' . $time_zone,
    );
  $patht_to_module = drupal_get_path('module','troll');
  drupal_add_css($patht_to_module . '/troll.css');
}

/**
 * IP ban information form.
 */
function troll_display_ip() {
  $build = array();
  $rows = array();

  $sql = 'SELECT iid, ip_address, domain_name, expires, uid FROM {troll_ip_ban}';
  $count_sql = 'SELECT COUNT(*) FROM {troll_ip_ban}';

  $headers = array(
    array('data' => t('IP Address'), 'field' => 'ip_address'),
    array('data' => t('To IP Address'), 'field' => 'ip_address_to'),
    array('data' => t('Domain Name'), 'field' => 'domain_name'),
    array('data' => t('Expires'), 'field' => 'expires', 'sort' => 'desc'),
    array('data' => t('Actions'), 'field' => 'delete'),
  );

  $query = db_select('troll_ip_ban')
    ->extend('PagerDefault')
    ->extend('TableSort');
  $query->fields('troll_ip_ban', array(
    'iid',
    'ip_address',
    'ip_address_to',
    'domain_name',
    'expires',
    'uid',
  ));
  $query->orderByHeader($headers);
  $result = $query->execute();
  foreach ($result as $row) {
    $thisip = l($row->ip_address, 'admin/people/troll/ip_ban/edit/' . $row->ip_address);
    $toip = isset($row->ip_address_to) ? $row->ip_address_to : '-' ;
    $thisdom = l(($row->domain_name ? $row->domain_name : gethostbyname($row->ip_address)), 'admin/people/troll/ip_ban/edit/' . $row->ip_address);
    $expires = ($row->expires ? date('M d, Y H:i:s', $row->expires) : t('never'));
    $action = l(t('remove'), 'admin/people/troll/ip_ban/delete/' . $row->ip_address);
    $rows[] = array($thisip, $toip, $thisdom, $expires, $action);
  }

 // Return empty if no rows are present.
  if (!isset($rows)) return NULL;

  $build['ipdisplay_table'] = array(
    '#theme' => 'table',
    '#header' => $headers,
    '#rows' => $rows,
    '#empty' => t('No IP addresses are Banned'),
  );
  $build['ipdisplay_pager'] = array('#theme' => 'pager');

  return drupal_render($build);
}

/**
 * IP ban delete confirmation form.
 */
function troll_confirm_delete_ip_form($form, &$form_state, $ip) {
  $ip = db_query('SELECT ip_address FROM {troll_ip_ban} WHERE ip_address = :ip',
    array(':ip' => $ip))->fetchField();
  $form['ip_address'] = array(
    '#type' => 'value',
    '#value' => trim($ip),
  );
  return confirm_form($form, t('Remove Ban for IP %ip?', array('%ip' => $ip)), 'admin/people/troll/ip_ban', t('Are you sure you want to remove the ban on this IP?'));
}

/**
 * Submit handler for delete confirmation form.
 *
 * @see troll_confirm_delete_ip_form()
 */
function troll_confirm_delete_ip_form_submit($form, &$form_state) {
  troll_remove_ip($form_state['values']['ip_address']);
  $form_state['redirect'] = 'admin/people/troll/ip_ban';
}

/**
 * IP ban confirmation form.
 */
function troll_confirm_ban_ip_form($form, &$form_state) {
  $ip = db_query_range('SELECT ip_address FROM {troll_ip_track} WHERE uid = :uid ORDER BY accessed DESC', 0, 1, array(':uid' => $uid))->fetchField();
  $form['ip_address'] = array(
    '#type' => 'value',
    '#value' => $ip->ip_address,
  );
  $form['domain_name'] = array(
    '#type' => 'value',
    '#value' => gethostbyaddr($ip->ip_address),
  );
  return confirm_form($form, t('Ban IP %ip?', array('%ip' => $ip)), 'admin/people/troll/ip_ban', t('Are you sure you want to ban this IP?'));
}

/**
 * Submit handler for ban confirmation form.
 *
 * @see troll_confirm_ban_ip_form()
 */
function troll_confirm_ban_ip_form_submit($form, &$form_state) {
  troll_insert_ip($form_state['values']);
  $form_state['redirect'] = 'admin/people/troll';
}

/**
 * Confirmation form for deleting a blacklist IP block.
 *
 * @param int $net
 *   IP network address in long format
 * @param int $bcast
 *   IP broadcast address in long format
 */
function troll_confirm_delete_black_block_form($form, &$form_state, $net, $bcast) {

  $result = db_query('SELECT COUNT(net) FROM {troll_blacklist} WHERE net = :net AND bcast = :bcast', array(':net' => $net, ':bcast' => $bcast))->fetchField();
  if (empty($result)) {
    drupal_set_message(t('No such IP range found in the database.'), 'status');
    drupal_goto('admin/people/troll/ip_blacklist/search');
  }
  $form['net'] = array(
    '#type' => 'value',
    '#value' => $net,
  );
  $form['bcast'] = array(
    '#type' => 'value',
    '#value' => $bcast,
  );
  return confirm_form(
    $form,
    t('Remove listing for IP block %ip1 to %ip2?', array(
      '%ip1' => long2ip($net),
      '%ip2' => long2ip($bcast),
    )),
    'admin/people/troll/ip_blacklist/search',
    t('Are you sure you want to remove this IP block from the blacklist?'),
    t('Confirm Blacklist Removal')
  );
}

/**
 * Submit handler for deletion of IP from blacklist.
 *
 * @see troll_confirm_delete_black_block_form()
 */
function troll_confirm_delete_black_block_form_submit($form, &$form_state) {
  troll_remove_blacklist($form_state['values']['net'], $form_state['values']['bcast']);
  $form_state['redirect'] = 'admin/people/troll/ip_blacklist/search';
}

/**
 * Confirmation form for deleting a whitelist IP block.
 *
 * @param int $net
 *   IP network address in long format
 * @param int $bcast
 *   IP broadcast address in long format
 */
function troll_confirm_delete_white_block_form($form, &$form_state, $net, $bcast) {

  $result = db_query('SELECT tw.* FROM {troll_whitelist} tw WHERE net = :net AND bcast = :bcast', array(
      ':net' => $net,
      ':bcast' => $bcast,
    )
  );
  if (empty($result)) {
    drupal_set_message(t('No such IP range found in the database.'), 'status');
    drupal_goto('admin/people/troll/ip_blacklist/whitelist');
  }

  foreach ($result as $row) {
    $net = $row->net;
    $bcast = $row->bcast;
  }

  $form['net'] = array(
    '#type' => 'value',
    '#value' => $net,
  );
  $form['bcast'] = array(
    '#type' => 'value',
    '#value' => $bcast,
  );

  return confirm_form(
    $form,
    t('Remove listing for IP block %ip1 to %ip2?', array(
      '%ip1' => long2ip($net),
      '%ip2' => long2ip($bcast),
    )),
    'admin/people/troll/ip_blacklist/whitelist',
    t('Are you sure you want to remove this IP block from the whitelist?'),
    t('Confirm Whitelist Removal')
  );
}

/**
 * Submit handler for deletion of IP from whitelist.
 *
 * @see troll_confirm_delete_white_block_form()
 */
function troll_confirm_delete_white_block_form_submit($form, &$form_state) {
  troll_remove_whitelist($form_state['values']['net'], $form_state['values']['bcast']);
  $form_state['redirect'] = 'admin/people/troll/ip_blacklist/whitelist';
}

/**
 * Implements hook_form().
 */
function troll_search_form($form, &$form_state) {
  $form['search'] = array(
    '#type' => 'fieldset',
    '#title' => t('Search Users'),
    '#collapsible' => TRUE,
  );
  $form['search']['username'] = array(
    '#type' => 'textfield',
    '#title' => t('Username'),
  );
  $form['search']['mail'] = array(
    '#type' => 'textfield',
    '#title' => t('Email'),
  );
  $form['search']['ip_address'] = array(
    '#type' => 'textfield',
    '#title' => t('IP Address'),
  );
  $form['search']['date_created'] = array(
    '#type' => 'textfield',
    '#title' => t('Account Date Created'),
    '#description' => t('Enter date in mm/dd/yyyy format. Returns all users created after the date entered.'),
  );
  $form['search']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Search Users'),
  );
  $form['users'] = array(
    '#type' => 'fieldset',
    '#title' => t('Users'),
    '#value' => isset($form_state['values']) ? troll_list_users($form_state['values']) : troll_list_users($edit = NULL),
    '#weight' => 2,
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  return $form;
}

/*
 * Submit handler for for troll_search_form.
 */
function troll_search_form_submit($form, &$form_state) {
  //echo "<pre> ; 886";print_r($form_state);echo "</pre>";
  $form_state['rebuild'] = TRUE;
}

/**
 * User list form.
 *
 * @param array $edit
 */
function troll_list_users($edit) {

  $headers = array(
    array('data' => t('Username'), 'field' => 'u.name'),
    array('data' => t('Email'), 'field' => 'u.mail'),
    array('data' => t('Status'), 'field' => 'u.status'),
    array('data' => t('IP Address'), 'field' => 't.ip_address'),
    array('data' => t('Last Access'), 'field' => 't.created'),
    array('data' => t('Account Created'), 'field' => 'u.created'),
    array('data' => t('Actions'), 'field' => 'actions'),
  );

  $query = db_select('users', 'u')
      ->extend('PagerDefault')
      ->extend('TableSort');
  $query->leftJoin('troll_ip_track', 't', 'u.uid = t.uid');
  $query->condition('u.uid', 0, '<>');

  if (!empty($edit['username'])) {
    $query->condition('u.name', drupal_strtolower($edit['username']), 'LIKE');
  }
  if (!empty($edit['mail'])) {
    $query->condition('u.mail', drupal_strtolower($edit['mail']), 'LIKE');
  }
  if (!empty($edit['ip_address'])) {
    $query->condition('t.ip_address', drupal_strtolower($edit['ip_address']), 'LIKE');
  }
  if (!empty($edit['date_created'])) {
    $query->condition('u.created', drupal_strtolower($edit['date_created']), 'LIKE');
  }

//  $query
//    ->groupBy('u.uid')
//    ->groupBy('u.name')
//    ->groupBy('u.mail')
//    ->groupBy('u.status')
//    ->groupBy('t.ip_address')
//    ->groupBy('u.created');
  $query
    ->fields('u', array('uid', 'name', 'mail', 'status', 'created'))
    ->fields('t', array('ip_address', 'accessed'))

    ->orderByHeader($headers);

  $results = $query->execute();

  $user_count = $query->countQuery()->execute()->fetchField();

  foreach ($results as $user) {
    $name = l($user->name, 'admin/people/troll/search/view/' . $user->uid, array('title' => t('View detailed user information')));
    $email = $user->mail;
    $status = ($user->status ? t('Active') : t('Blocked'));
    $ip = ($user->ip_address ? l($user->ip_address, 'admin/people/troll/search/view/' . $user->uid, array('title' => t('View detailed user information'))) : t('none'));
    $recorded = ($user->accessed ? date('M d, Y', $user->accessed) : t('none recorded'));
    $created = date('M d, Y', $user->created);
    $actions = array();
    if (!$user->status) {
      $actions[] = l(t('Edit User'), "user/{$user->uid}/edit");
    }
    elseif (variable_get('troll_block_role', NULL)) {
      $actions[] = l(t('Block User'), 'admin/people/troll/search/block/' . $user->uid);
    }
    else {
      $actions[] = l(t('Set up Block Role'), 'admin/people/troll/settings');
    }
    if ($user->ip_address) {
      $actions[] = l(t('Ban IP'), 'admin/people/troll/ip_ban/user/' . $user->uid);
    }
    $rows[] = array(
      $name,
      $email,
      $status,
      $ip,
      $recorded,
      $created,
      implode(', ', $actions),
    );
  }

 // Return empty if no rows are present.
  if (!isset($rows)) return NULL;

  $build['list_users_table'] = array(
    '#theme' => 'table',
    '#header' => $headers,
    '#rows' => $rows,
    '#empty' => t('No IP addresses are whitelisted'),
  );

  if ($user_count > 1) {
    $build['list_users_pager'] = array('#theme' => 'pager');
  }

  return drupal_render($build);
}

/**
 * User detail form.
 *
 * This is not an actual form; the form API is being used for easy formatting.
 *
 * @param int $uid
 *   user ID
 *
 * @return array
 *   returns a rendered array
 */
function troll_search_user_detail($uid = NULL) {

  // No UID is provided.
  if (empty($uid)) {
    return array();
  }

  $u = user_load($uid);

  // Redirect if user doesn't exist.
  if (!$u) {
    drupal_goto('admin/people/troll');
  }

  $u->ip = db_query('SELECT t.ip_address FROM {troll_ip_track} t WHERE t.uid = :uid GROUP BY t.uid, t.ip_address', array(':uid' => $u->uid))->fetchField();
  $build = array();

  $form['details'] = array(
    '#type' => 'fieldset',
    '#title' => t('Account Details for %username', array('%username' => $u->name)),
  );

  $form['details'][] = array(
    '#type' => 'item',
    '#title' => t('User Name'),
    '#markup' => t('%username', array('%username' => $u->name)),
  );

  $form['details'][] = array(
    '#type' => 'item',
    '#title' => t('Email'),
    '#markup' => $u->mail,
  );

  $form['details'][] = array(
    '#type' => 'item',
    '#title' => t('User ID'),
    '#markup' => $u->uid,
  );

  $form['details'][] = array(
    '#type' => 'item',
    '#title' => t('Account Created'),
    '#markup' => format_date($u->created, 'large'),
  );

  if (isset($u->access) and ($u->access >= $u->created)) {
    $last_access = format_date($u->access, 'large');
  }
  else {
    $last_access = "Has never logged in";
  }
  $form['details'][] = array(
    '#type' => 'item',
    '#title' => t('Last Access'),
    '#markup' => $last_access,
  );
  $form['details'][] = array(
    '#type' => 'item',
    '#title' => t('Status'),
    '#markup' => ($u->status ? t('Active') : t('Blocked')),
  );
  $form['details'][] = array(
    '#type' => 'item',
    '#title' => t('User Roles'),
    '#markup' => implode(', ', $u->roles),
  );
  if ($u->status) {
    $links[] = array('title' => t('Block User'), 'href' => "admin/people/troll/search/block/$u->uid");
  }
  else {
    $links[] = array('title' => t('Edit User'), 'href' => "user/$u->uid/edit");
  }
  if ($u->ip) {
    $links[] = array('title' => t('Ban IP'), 'href' => "admin/people/troll/ip_ban/user/$u->uid");
  }
  $form['details'][] = array(
    '#type' => 'item',
    '#title' => t('Actions'),
    '#markup' => theme('links', array(
      'links' => $links,
      'attributes' => array('class' => array('links', 'inline')))
    ),
  );

  $build['details'] = ($form['details']);

  // Get IP history.
  $result = db_query('SELECT * FROM {troll_ip_track} WHERE uid = :uid ORDER BY created DESC', array(':uid' => $u->uid));
  $rows = array();
  foreach ($result as $ip) {
    $banned = db_query_range('SELECT iid, ip_address, expires FROM {troll_ip_ban} WHERE ip_address = :ip_address', 0, 1, array(':ip_address' => $ip->ip_address))->fetchObject();
    if (!empty($banned->ip_address)) {
      if (!empty($banned->expires) && $banned->expires < REQUEST_TIME) {
        $status = l(t('expired'), 'admin/people/troll/ip_ban/edit/' . $banned->iid, array('title' => t('Edit IP ban information')));
      }
      else {
        $status = l(t('banned'), 'admin/people/troll/ip_ban/edit/' . $banned->iid,
        array('attributes' => array('title' => t('Edit IP ban information'))));
      }
    }
    else {
      $status = l(t('not banned'),
        'admin/people/troll/ip_ban/people/' . $u->uid,
        array('attributes' => array('title' => t('Ban this IP')))
       );
    }
    $rows[] = array(
      $ip->ip_address,
      $status,
      format_date($ip->accessed, 'large'),
      format_date($ip->created, 'large'),
      gethostbyaddr($ip->ip_address),
    );
  }

  $pheader = array(
    t('IP'),
    t('Status'),
    t('Last Access'),
    t('First Access'),
    t('Host Information'),
  );

  $build['pager_table'] = array(
    '#theme' => 'table',
    '#header' => $pheader,
    '#rows' => $rows,
    '#empty' => t("No IP addresses tracked"),
  );

  // Attach the pager theme.
  $build['pager_pager'] = array('#theme' => 'pager');

  //$content .= theme('box', t('IP History'), ($posts ? $posts : t('No ip history')));
  //$content .= $posts;
  // Get recent posts.
  $posts = NULL;
  $rows = array();
  $result = db_query("SELECT * FROM {node} n WHERE n.uid = :uid ORDER BY n.created DESC", array(':uid' => $u->uid));
  foreach ($result as $node) {
    $rows[] = array(l($node->title, "node/$node->nid") . ' ' . theme('mark',
array()
// PHP Fatal error:  Unsupported operand types.
// node_mark($node->nid, $node->changed)
)

, $node->type, date('M d, Y', $node->created), ($node->status ? t('published') : t('not published')));
  }
  if ($rows) {

    $pheader = array(t('Title'), t('Type'), t('Created'), t('Status'));
    $posts = theme('table', array('header' => $pheader, 'rows' => $rows));
  }

  //$content .= theme('box', t('Recent Posts'), ($posts ? $posts : t('No recent posts')));
  //$content .= $posts;

  if (module_exists('comment')) {
    // Get recent comments.
    $rows = array();
    $posts = NULL;

    $result = db_query('SELECT cid, nid, subject, changed, created, status FROM {comment} c WHERE c.uid = :uid ORDER BY created DESC', array(':uid' => $u->uid));
    foreach ($result as $comment) {
      $rows[] = array(
        l($comment->subject, 'node/' . $comment->nid, array(
          'fragment' => 'comment-' . $comment->cid,
        ))
        . ' '
        . theme('mark',
          node_mark($comment->nid, $comment->changed)),
          date('M d, Y', $comment->timestamp),
          ($comment->status ? t('not published') : t('published')
        )
      );
    }

    $cheader = array(t('Subject'), t('Date Created'), t('Status'));
    //$content .= theme('box', t('Recent Comments'), ($posts ? $posts : t('No recent comments')));
    $build['pager_table1'] = array(
      '#theme' => 'table',
      '#header' => $cheader,
      '#rows' => $rows,
      '#empty' => t("No comments found"),
    );

    // Attach the pager theme.
    $build['pager_pager1'] = array('#theme' => 'pager');
  }
  return $build;
}

/**
 * Implements hook_form().
 */
function troll_dnsbl_settings() {
  $form = array();

  $form['troll_dnsbl_ip_test'] = array(
    '#type' => 'markup',
    '#value' => l(t('IP test'), 'admin/people/troll/dnsbl/test'),
  );
  $form['troll_dnsbl_active'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable Operations'),
    '#default_value' => variable_get('troll_dnsbl_active', 0),
  );
  $dnsbl = _troll_dnsbl_default_servers();
  array_unshift($dnsbl, t('-Select-'));
  $form['troll_dnsbl_list'] = array(
    '#type' => 'select',
    '#title' => t('Servers to query'),
    '#default_value' => variable_get('troll_dnsbl_list', 0),
    '#description' => t('Use the crtl key for multiple server selection.'),
    '#options' => $dnsbl,
    '#multiple' => TRUE,
  );
  $form['troll_dnsbl_threshold'] = array(
    '#type' => 'select',
    '#title' => t('How many servers should the IP be listed in'),
    '#default_value' => variable_get('troll_dnsbl_threshold', 1),
    '#description' => t('How many servers should list the IP before we unpublish its comment ?'),
    '#options' => drupal_map_assoc(range(1, 10)),
  );

  return system_settings_form($form);
}

/**
 * Implements hook_form().
 */
function troll_dnsbl_test_form() {
  $form = array();

  $form['ip'] = array(
    '#type' => 'textfield',
    '#title' => t('IP to test'),
    '#size' => 15,
    '#required' => TRUE,
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Test'),
  );

  $form['#redirect'] = FALSE;

  return $form;
}

/**
 * Submit handler for dnsbl test form.
 */
function troll_dnsbl_test_form_submit($form, &$form_state) {

  if (_troll_dnsbl_blacklisted($form_state['values']['ip'])) {
    $message = t('The IP %ip is blacklisted', array('%ip' => $form_state['values']['ip']));
  }
  else {
    $message = t('The IP %ip is not blacklisted', array('%ip' => $form_state['values']['ip']));
  }
  drupal_set_message($message, 'status');
}
