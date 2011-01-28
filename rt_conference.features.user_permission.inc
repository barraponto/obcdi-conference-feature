<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function rt_conference_user_default_permissions() {
  $permissions = array();

  // Exported permission: create rt_conference content
  $permissions['create rt_conference content'] = array(
    'name' => 'create rt_conference content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: delete own rt_conference content
  $permissions['delete own rt_conference content'] = array(
    'name' => 'delete own rt_conference content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit own rt_conference content
  $permissions['edit own rt_conference content'] = array(
    'name' => 'edit own rt_conference content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
