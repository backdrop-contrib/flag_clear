<?php

/**
 * @file
 * Provides support for the Views module.
 */

/**
 * Implements hook_views_data().
 */
function flag_clear_views_data() {
  $data = array();

  // Unflag content links.
  $data['flagging']['clear'] = array(
    'title' => t('Clear flag link'),
    'help' => t('Display flag clearing link.'),
    'field' => array(
      'handler' => 'flag_clear_handler_field_unflag',
    ),
  );

  return $data;
}
