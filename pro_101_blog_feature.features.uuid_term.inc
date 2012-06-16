<?php
/**
 * @file
 * pro_101_blog_feature.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function pro_101_blog_feature_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'tag3',
    'description' => '',
    'format' => 'plain_text',
    'weight' => '0',
    'uuid' => '432f5e69-384a-7424-7d97-36f8fdf4db4a',
    'vocabulary_machine_name' => 'tags',
    'path' => array(
      'alias' => 'tags/tag3',
      'pathauto' => FALSE,
    ),
  );
  $terms[] = array(
    'name' => 'tag2',
    'description' => '',
    'format' => 'plain_text',
    'weight' => '0',
    'uuid' => '8e5ddbe1-68a4-eea4-b9eb-5c9bc538816e',
    'vocabulary_machine_name' => 'tags',
    'path' => array(
      'alias' => 'tags/tag2',
      'pathauto' => FALSE,
    ),
  );
  $terms[] = array(
    'name' => 'tag1',
    'description' => '',
    'format' => 'plain_text',
    'weight' => '0',
    'uuid' => 'd16a7811-7ab1-26e4-bde6-3fe2fd5830f4',
    'vocabulary_machine_name' => 'tags',
    'path' => array(
      'alias' => 'tags/tag1',
      'pathauto' => FALSE,
    ),
  );
  return $terms;
}
