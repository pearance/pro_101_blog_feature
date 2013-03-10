<?php
/**
 * @file
 * pro_101_blog_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pro_101_blog_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_full';
  $context->description = '';
  $context->tag = 'Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog/*' => 'blog/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-6a599607ca67a5ace7ef0de5f78c06ed' => array(
          'module' => 'views',
          'delta' => '6a599607ca67a5ace7ef0de5f78c06ed',
          'region' => 'content',
          'weight' => 1,
        ),
        'facebook_comments-facebook-comments' => array(
          'module' => 'facebook_comments',
          'delta' => 'facebook-comments',
          'region' => 'content',
          'weight' => 2,
        ),
        'jasm-service_list' => array(
          'module' => 'jasm',
          'delta' => 'service_list',
          'region' => 'main_sidebar_1',
          'weight' => 0,
        ),
        'jasm-fb_like_box' => array(
          'module' => 'jasm',
          'delta' => 'fb_like_box',
          'region' => 'main_sidebar_1',
          'weight' => 1,
        ),
        'jasm-twitter_follow_button' => array(
          'module' => 'jasm',
          'delta' => 'twitter_follow_button',
          'region' => 'main_sidebar_1',
          'weight' => 2,
        ),
        'jasm-feedburner_mail_subscribe' => array(
          'module' => 'jasm',
          'delta' => 'feedburner_mail_subscribe',
          'region' => 'main_sidebar_1',
          'weight' => 3,
        ),
        'views-blog-related_content_block' => array(
          'module' => 'views',
          'delta' => 'blog-related_content_block',
          'region' => 'main_sidebar_1',
          'weight' => 6,
        ),
        'views-specialties-specialties_block' => array(
          'module' => 'views',
          'delta' => 'specialties-specialties_block',
          'region' => 'main_sidebar_1',
          'weight' => 5,
        ),
      ),
    ),
    'menu' => 'blog',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Pages');
  $export['blog_full'] = $context;

  return $export;
}
