<?php
/**
 * @file
 * node_displays.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function node_displays_taxonomy_default_vocabularies() {
  return array(
    'airtype' => array(
      'name' => 'Lufttype',
      'machine_name' => 'airtype',
      'description' => 'Lufttyper som man kan dykke med',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'countries' => array(
      'name' => 'Land',
      'machine_name' => 'countries',
      'description' => 'Land i verden',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'enrance' => array(
      'name' => 'Dykkestart',
      'machine_name' => 'enrance',
      'description' => 'Hvor man starter dykket fra, altså hvor man går ut i vannet hen.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'ideelt_for' => array(
      'name' => 'Dykkested er ideelt for....',
      'machine_name' => 'ideelt_for',
      'description' => 'Steder som er ideelt for....',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'seabed' => array(
      'name' => 'Bunntyper',
      'machine_name' => 'seabed',
      'description' => 'Bunntype på dykkestedet',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => 'Use tags to group articles on similar topics into categories.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
