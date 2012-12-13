(function($) {

    Drupal.behaviors.pingvin = {
        attach: function(context) {
          //$('.openlayers_map_fullscreen').hide().show();
          $(window).resize();
          // Make the map ready.
          $('.olControlModifyFeatureItemInactive').click();
          $('.olControlDrawFeaturePointItemInactive').click();
        }
    };
  window.onload = function ()  {
    $('.openlayers_behavior_fullscreen_buttonItemInactive').click();
    $('.openlayers_behavior_fullscreen_buttonItemInactive').click();
  };
})(jQuery);
