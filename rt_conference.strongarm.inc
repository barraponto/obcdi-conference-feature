<?php

/**
 * Implementation of hook_strongarm().
 */
function rt_conference_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_rt_conference';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-2',
    'revision_information' => '0',
    'author' => '-1',
    'options' => '1',
    'menu' => '-3',
    'path' => '3',
    'path_redirect' => '2',
  );

  $export['content_extra_weights_rt_conference'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:rt_conference:full:field_schedule_fromto';
  $strongarm->value = 'both';

  $export['date:rt_conference:full:field_schedule_fromto'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:rt_conference:full:field_schedule_multiple_from';
  $strongarm->value = '';

  $export['date:rt_conference:full:field_schedule_multiple_from'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:rt_conference:full:field_schedule_multiple_number';
  $strongarm->value = '';

  $export['date:rt_conference:full:field_schedule_multiple_number'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:rt_conference:full:field_schedule_multiple_to';
  $strongarm->value = '';

  $export['date:rt_conference:full:field_schedule_multiple_to'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:rt_conference:full:field_schedule_show_repeat_rule';
  $strongarm->value = 'show';

  $export['date:rt_conference:full:field_schedule_show_repeat_rule'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:rt_conference:teaser:field_schedule_fromto';
  $strongarm->value = 'both';

  $export['date:rt_conference:teaser:field_schedule_fromto'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:rt_conference:teaser:field_schedule_multiple_from';
  $strongarm->value = '';

  $export['date:rt_conference:teaser:field_schedule_multiple_from'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:rt_conference:teaser:field_schedule_multiple_number';
  $strongarm->value = '';

  $export['date:rt_conference:teaser:field_schedule_multiple_number'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:rt_conference:teaser:field_schedule_multiple_to';
  $strongarm->value = '';

  $export['date:rt_conference:teaser:field_schedule_multiple_to'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:rt_conference:teaser:field_schedule_show_repeat_rule';
  $strongarm->value = 'show';

  $export['date:rt_conference:teaser:field_schedule_show_repeat_rule'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_rt_conference';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_rt_conference'] = $strongarm;
  return $export;
}
