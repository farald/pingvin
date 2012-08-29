<?php

// Plugin definition
$plugin = array(
  'title' => t('Homepage 2x2'),
  'category' => t('Twitter Bootstrap'),
  'icon' => 'tbs_homepanel.png',
  'theme' => 'panels_tbs_homepanel',
  'admin css' => 'tbs_homepanel.css',
  'regions' => array(
    'top_left' => t('Top left'),
    'top_right' => t('Top right'),
    'bottom_left' => t('Bottom left'),
    'bottom_right' => t('Bottom right')
  ),
);