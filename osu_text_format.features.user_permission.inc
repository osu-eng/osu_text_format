<?php
/**
 * @file
 * osu_text_format.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function osu_text_format_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use text format osu_wysiwyg_text_format'.
  $permissions['use text format osu_wysiwyg_text_format'] = array(
    'name' => 'use text format osu_wysiwyg_text_format',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
