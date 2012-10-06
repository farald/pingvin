(function($) {

    Drupal.behaviors.pingvin = {
        attach: function(context) {
          $(window).resize();
          // Make the map ready.
          $('.olControlModifyFeatureItemInactive').click();
          $('.olControlDrawFeaturePointItemInactive').click();
        }
    };
})(jQuery);
