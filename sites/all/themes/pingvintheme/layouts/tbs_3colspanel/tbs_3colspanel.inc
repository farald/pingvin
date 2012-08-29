<?php

// Plugin definition
$plugin = array(
  'title' => t('3 Columns'),
  'category' => t('Twitter Bootstrap'),
  'icon' => 'tbs_3colspanel.png',
  'theme' => 'panels_tbs_3colspanel',
  'admin css' => 'tbs_3colspanel.css',
  'regions' => array(
    'left' => t('Left'),
    'center' => t('Center'),
    'right' => t('Right')
  ),
);