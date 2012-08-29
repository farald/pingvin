<?php

// Plugin definition
$plugin = array(
  'title' => t('Multi Columns'),
  'category' => t('Twitter Bootstrap'),
  'icon' => 'tbs_multicolspanel.png',
  'theme' => 'panels_tbs_multicolspanel',
  'admin css' => 'tbs_multicolspanel.css',
  'regions' => array(
    'one' => t('First Column'),
    'two' => t('Second Column'),
    'three' => t('Third Column'),
    'four' => t('Fourth Column'),
    'five' => t('Fifth Column'),
    'six' => t('Sixth Column')
  ),
);