<?php

function recoverpassword_views_data() {
  $data = array();
  $data['users']['recover_password'] = array(
    'field' => array(
      'title' => t('Recover Password'),
      'help' => t('Provide a link to send user password recovery email..'),
      'handler' => 'views_handler_field_user_link_recover_password',
    ),
  );

  return $data;
}

function recoverpassword_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'recoverpassword'),
    ),
    'handlers' => array(
      'views_handler_field_user_link_recover_password' => array(
        'parent' => 'views_handler_field_user_link',
      ),
    ),
  );
}
