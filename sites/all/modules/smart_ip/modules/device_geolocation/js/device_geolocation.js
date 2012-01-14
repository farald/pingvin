// $Id: device_geolocation.js,v 1.1.2.4 2010/12/15 23:45:17 arpeggio Exp $
(function ($) {
  Drupal.behaviors.deviceGeolocationAutoDetect = {
    attach: function (context, settings) {
      if (isset(settings.device_geolocation.longitude)) {
        longitude = !isNaN(settings.device_geolocation.longitude) ? settings.device_geolocation.longitude : (!isNaN(settings.device_geolocation.longitude[0]) ? settings.device_geolocation.longitude[0] : 122);
      }
      else {
        longitude = 122;
      }
      if (isset(settings.device_geolocation.latitude)) {
        latitude = !isNaN(settings.device_geolocation.latitude) ? settings.device_geolocation.latitude : (!isNaN(settings.device_geolocation.latitude[0]) ? settings.device_geolocation.latitude[0] : 13);
      }
      else {
        latitude = 13;
      }
      // Try W3C Geolocation (Preferred) to detect user's location
      if (navigator.geolocation && !settings.device_geolocation.debug_mode) {
        navigator.geolocation.getCurrentPosition(function(position) {
          geocoder_send_address(position.coords.latitude, position.coords.longitude);
        }, function() {
          // Smart IP (Maxmind) fallback
          geocoder_send_address(latitude, longitude);
        });
      }
      // Try Google Gears Geolocation
      else if (google.gears && !settings.device_geolocation.debug_mode) {
        var geo = google.gears.factory.create('beta.geolocation');
        geo.getCurrentPosition(function(position) {
          geocoder_send_address(position.latitude, position.longitude);
        }, function() {
          // Smart IP (Maxmind) fallback
          geocoder_send_address(latitude, longitude);
        });     
      }
      // Smart IP (Maxmind) fallback or using debug mode coordinates
      else {
        geocoder_send_address(latitude, longitude);
      }
      /**
       * Possible array items:
       * -street_number;
       * -postal_code;
       * -route;
       * -neighborhood;
       * -locality;
       * -sublocality;
       * -establishment;
       * -administrative_area_level_N;
       * -country;
       */
      function geocoder_send_address(latitude, longitude) {
        if (latitude != null && longitude != null && !isNaN(latitude) && !isNaN(longitude)) {
          var geocoder = new google.maps.Geocoder();
          var latlng   = new google.maps.LatLng(latitude, longitude);
          var address  = new Object;
          geocoder.geocode({'latLng': latlng}, function(results, status) {
            if (status == google.maps.GeocoderStatus.OK) {
              if (results[1]) {
                var number = results.length;
                for (var i = 0; i < number; ++i) {
                  var long_name  = results[i].address_components[0].long_name;
                  var short_name = results[i].address_components[0].short_name;
                  if (long_name != null) {
                    address[results[i].address_components[0].types[0]] = long_name;
                  }
                  if (results[i].address_components[0].types[0] == 'country' && short_name != null) {
                    address['country_code'] = short_name;
                  }
                }
                address['latitude']  = latitude;
                address['longitude'] = longitude;
                $.ajax({
                  url:  '/field-coordinates',
                  type: 'POST',
                  dataType: 'json',
                  data: address
                });
              }
            }
            else {
              $.ajax({
                url:  '/field-coordinates',
                type: 'POST',
                dataType: 'json',
                data: ({
                  latitude:  latitude,
                  longitude: latitude
                })
              });
              console.log('Geocoder failed due to: ' + status);
            }
          });
        }
      }
    }
  };  
})(jQuery);

function isset() {  
  var a = arguments
  var l = a.length, i = 0;
  
  if (l === 0) {
    throw new Error('Empty'); 
  }
  while (i !== l) {
    if (typeof(a[i]) == 'undefined' || a[i] === null) { 
        return false; 
    }
    else { 
      i++; 
    }
  }
  return true;
}