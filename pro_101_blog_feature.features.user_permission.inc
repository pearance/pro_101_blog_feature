<?php
/**
 * @file
 * pro_101_blog_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pro_101_blog_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: create blog content.
  $permissions['create blog content'] = array(
    'name' => 'create blog content',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any blog content.
  $permissions['delete any blog content'] = array(
    'name' => 'delete any blog content',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own blog content.
  $permissions['delete own blog content'] = array(
    'name' => 'delete own blog content',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any blog content.
  $permissions['edit any blog content'] = array(
    'name' => 'edit any blog content',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own blog content.
  $permissions['edit own blog content'] = array(
    'name' => 'edit own blog content',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: enter blog revision log entry.
  $permissions['enter blog revision log entry'] = array(
    'name' => 'enter blog revision log entry',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override blog authored by option.
  $permissions['override blog authored by option'] = array(
    'name' => 'override blog authored by option',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override blog authored on option.
  $permissions['override blog authored on option'] = array(
    'name' => 'override blog authored on option',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override blog promote to front page option.
  $permissions['override blog promote to front page option'] = array(
    'name' => 'override blog promote to front page option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override blog published option.
  $permissions['override blog published option'] = array(
    'name' => 'override blog published option',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override blog revision option.
  $permissions['override blog revision option'] = array(
    'name' => 'override blog revision option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override blog sticky option.
  $permissions['override blog sticky option'] = array(
    'name' => 'override blog sticky option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  return $permissions;
}
