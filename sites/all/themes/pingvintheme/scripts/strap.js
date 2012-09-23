(function($) {

    Drupal.behaviors.pingvin = {
        attach: function(context) {
          
          // Make the map ready.
          $('.olControlModifyFeatureItemInactive').click();
          $('.olControlDrawFeaturePointItemInactive').click();
        }
    };
})(jQuery);
