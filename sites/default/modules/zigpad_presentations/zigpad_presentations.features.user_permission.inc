<?php
/**
 * @file
 * zigpad_presentations.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function zigpad_presentations_user_default_permissions() {
  $permissions = array();

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: configure zigpad servers
  $permissions['configure zigpad servers'] = array(
    'name' => 'configure zigpad servers',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'zigpad_server',
  );

  // Exported permission: create command_action content
  $permissions['create command_action content'] = array(
    'name' => 'create command_action content',
    'roles' => array(
      0 => 'Configurator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create image_action content
  $permissions['create image_action content'] = array(
    'name' => 'create image_action content',
    'roles' => array(
      0 => 'Configurator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create page content
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create presentation content
  $permissions['create presentation content'] = array(
    'name' => 'create presentation content',
    'roles' => array(
      0 => 'Configurator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create sequence content
  $permissions['create sequence content'] = array(
    'name' => 'create sequence content',
    'roles' => array(
      0 => 'Configurator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create video_action content
  $permissions['create video_action content'] = array(
    'name' => 'create video_action content',
    'roles' => array(
      0 => 'Configurator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create webcam_action content
  $permissions['create webcam_action content'] = array(
    'name' => 'create webcam_action content',
    'roles' => array(
      0 => 'Configurator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any command_action content
  $permissions['delete any command_action content'] = array(
    'name' => 'delete any command_action content',
    'roles' => array(
      0 => 'Configurator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any image_action content
  $permissions['delete any image_action content'] = array(
    'name' => 'delete any image_action content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any page content
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any presentation content
  $permissions['delete any presentation content'] = array(
    'name' => 'delete any presentation content',
    'roles' => array(
      0 => 'Configurator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any sequence content
  $permissions['delete any sequence content'] = array(
    'name' => 'delete any sequence content',
    'roles' => array(
      0 => 'Configurator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any video_action content
  $permissions['delete any video_action content'] = array(
    'name' => 'delete any video_action content',
    'roles' => array(
      0 => 'Configurator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any webcam_action content
  $permissions['delete any webcam_action content'] = array(
    'name' => 'delete any webcam_action content',
    'roles' => array(
      0 => 'Configurator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own command_action content
  $permissions['delete own command_action content'] = array(
    'name' => 'delete own command_action content',
    'roles' => array(
      0 => 'Configurator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own image_action content
  $permissions['delete own image_action content'] = array(
    'name' => 'delete own image_action content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own page content
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own presentation content
  $permissions['delete own presentation content'] = array(
    'name' => 'delete own presentation content',
    'roles' => array(
      0 => 'Configurator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own sequence content
  $permissions['delete own sequence content'] = array(
    'name' => 'delete own sequence content',
    'roles' => array(
      0 => 'Configurator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own video_action content
  $permissions['delete own video_action content'] = array(
    'name' => 'delete own video_action content',
    'roles' => array(
      0 => 'Configurator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own webcam_action content
  $permissions['delete own webcam_action content'] = array(
    'name' => 'delete own webcam_action content',
    'roles' => array(
      0 => 'Configurator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any command_action content
  $permissions['edit any command_action content'] = array(
    'name' => 'edit any command_action content',
    'roles' => array(
      0 => 'Configurator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any image_action content
  $permissions['edit any image_action content'] = array(
    'name' => 'edit any image_action content',
    'roles' => array(
      0 => 'Configurator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any page content
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any presentation content
  $permissions['edit any presentation content'] = array(
    'name' => 'edit any presentation content',
    'roles' => array(
      0 => 'Configurator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any sequence content
  $permissions['edit any sequence content'] = array(
    'name' => 'edit any sequence content',
    'roles' => array(
      0 => 'Configurator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any video_action content
  $permissions['edit any video_action content'] = array(
    'name' => 'edit any video_action content',
    'roles' => array(
      0 => 'Configurator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any webcam_action content
  $permissions['edit any webcam_action content'] = array(
    'name' => 'edit any webcam_action content',
    'roles' => array(
      0 => 'Configurator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own command_action content
  $permissions['edit own command_action content'] = array(
    'name' => 'edit own command_action content',
    'roles' => array(
      0 => 'Configurator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own image_action content
  $permissions['edit own image_action content'] = array(
    'name' => 'edit own image_action content',
    'roles' => array(
      0 => 'Configurator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own page content
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own presentation content
  $permissions['edit own presentation content'] = array(
    'name' => 'edit own presentation content',
    'roles' => array(
      0 => 'Configurator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own sequence content
  $permissions['edit own sequence content'] = array(
    'name' => 'edit own sequence content',
    'roles' => array(
      0 => 'Configurator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own video_action content
  $permissions['edit own video_action content'] = array(
    'name' => 'edit own video_action content',
    'roles' => array(
      0 => 'Configurator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own webcam_action content
  $permissions['edit own webcam_action content'] = array(
    'name' => 'edit own webcam_action content',
    'roles' => array(
      0 => 'Configurator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
