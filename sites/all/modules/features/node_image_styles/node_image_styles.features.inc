<?php
/**
 * @file
 * node_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function node_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: four_x_four.
  $styles['four_x_four'] = array(
    'name' => 'four_x_four',
    'effects' => array(
      7 => array(
        'label' => 'Skaler og beskjær',
        'help' => 'Skaler og beskjær vil beholde størrelsesforhold i det originale bildet og så beskjære den største dimensjonen. Dette er mest nyttig for å lage perfekte kvadratiske miniatyrbilder uten å strekke bildet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '260',
          'height' => '260',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: two_x_two.
  $styles['two_x_two'] = array(
    'name' => 'two_x_two',
    'effects' => array(
      8 => array(
        'label' => 'Skaler og beskjær',
        'help' => 'Skaler og beskjær vil beholde størrelsesforhold i det originale bildet og så beskjære den største dimensjonen. Dette er mest nyttig for å lage perfekte kvadratiske miniatyrbilder uten å strekke bildet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '520',
          'height' => '520',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
