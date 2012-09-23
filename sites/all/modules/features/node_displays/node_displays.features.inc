<?php
/**
 * @file
 * node_displays.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function node_displays_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function node_displays_node_info() {
  $items = array(
    'club' => array(
      'name' => t('Klubb'),
      'base' => 'node_content',
      'description' => t('Dette er basen for en klubbkonto. Her er alle innstillinger for klubben, samt tilgangsrettigheter osv. Kun en klubb-administrator kan ha eierskap til en slik artikkel. Tabbene på artikkelen vil samle sammen relevant informasjon om klubben.'),
      'has_title' => '1',
      'title_label' => t('Tittel'),
      'help' => t('Dette er baseartikkelen for din dykkerklubb. '),
    ),
    'divesite' => array(
      'name' => t('Dykkested'),
      'base' => 'node_content',
      'description' => t('Et  nytt dykkested på kartet. Husk å skrive i revisjonsloggen hvorfor du oppretter dette dykkestedet.'),
      'has_title' => '1',
      'title_label' => t('Tittel'),
      'help' => t('Dykkestedene kan alle bygge på, også du. Når du ser at noe mangler, endre artikkelen, og legg til det du mener bør være der. Vær vennlig å skrive i revisjonsloggen.'),
    ),
    'log' => array(
      'name' => t('Logg'),
      'base' => 'node_content',
      'description' => t('PERSONLIG: Legg til en loggside i din dykkelogg.'),
      'has_title' => '1',
      'title_label' => t('Tittel'),
      'help' => '',
    ),
  );
  return $items;
}
