<?php
/**
 * @file
 * zigpad_presentations.features.inc
 */

/**
 * Implementation of hook_views_api().
 */
function zigpad_presentations_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}

/**
 * Implementation of hook_image_default_styles().
 */
function zigpad_presentations_image_default_styles() {
  $styles = array();

  // Exported image style: command_image
  $styles['command_image'] = array(
    'name' => 'command_image',
    'effects' => array(
      4 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => '320',
          'height' => '295',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: favorite_icon
  $styles['favorite_icon'] = array(
    'name' => 'favorite_icon',
    'effects' => array(
      6 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '114',
          'height' => '114',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: image_fullscreen
  $styles['image_fullscreen'] = array(
    'name' => 'image_fullscreen',
    'effects' => array(
      5 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => '320',
          'height' => '480',
        ),
        'weight' => '2',
      ),
    ),
  );

  // Exported image style: sequence
  $styles['sequence'] = array(
    'name' => 'sequence',
    'effects' => array(
      2 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '256',
          'height' => '256',
          'upscale' => 1,
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implementation of hook_node_info().
 */
function zigpad_presentations_node_info() {
  $items = array(
    'command_action' => array(
      'name' => t('Command Action'),
      'base' => 'node_content',
      'description' => t('A single command action, consisting of a name, picture and UDP command'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'image_action' => array(
      'name' => t('Image Action'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'presentation' => array(
      'name' => t('Presentation'),
      'base' => 'node_content',
      'description' => t('A presentation, consisting of a name, a comment and any number of scenes'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'sequence' => array(
      'name' => t('Sequence'),
      'base' => 'node_content',
      'description' => t('A scene, consists of a name, a picture and any number of actions.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'video_action' => array(
      'name' => t('Video Action'),
      'base' => 'node_content',
      'description' => t('Is a Action type of Video Streams. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webcam_action' => array(
      'name' => t('WebCam Action'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
