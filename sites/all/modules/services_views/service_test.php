<?php

/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

$result = xmlrpc('http://pingvindata.org/server/hente', array(
  'node.retrieve' => array('137'),
));
dpm($result);

$result = xmlrpc('http://pingvindata.org/server/hente', array(
  'views.retrieve' => array('trips_list'),
));
dpm($result);

/*Workin! */

$result = xmlrpc('http://pingvindata.org/server/hente', array(
  'views.retrieve' => array('site_list'),
));
dpm($result);