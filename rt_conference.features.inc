<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function rt_conference_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function rt_conference_node_info() {
  $items = array(
    'rt_conference' => array(
      'name' => t('Conference'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Brief description'),
      'min_word_count' => '0',
      'help' => t('Set up a scheduled conference, with live video streaming and (optionally) live chat coverage. 
Don\'t forget to promote the content to front page to start the countdown.'),
    ),
  );
  return $items;
}
