<?php
/**
 * @file
 * zigpad_presentations.features.user_role.inc
 */

/**
 * Implementation of hook_user_default_roles().
 */
function zigpad_presentations_user_default_roles() {
  $roles = array();

  // Exported role: Configurator
  $roles['Configurator'] = array(
    'name' => 'Configurator',
    'weight' => '3',
  );

  return $roles;
}
