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

  // Exported permission: administer tags vocabulary terms.
  $permissions['administer tags vocabulary terms'] = array(
    'name' => 'administer tags vocabulary terms',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'vppr',
  );

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
      0 => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in tags.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'taxonomy',
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

  // Exported permission: edit terms in tags.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
