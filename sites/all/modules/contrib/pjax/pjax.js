(function($) {

/**
 * Handles click events on selected links and loads the corresponding pages 
 * through pjax.
 */
Drupal.behaviors.pjax = {
  attach: function(context) {

    // Set defaults.
    $.pjax.defaults.scrollTo = Drupal.settings.pjax.scrollto !== "" ? parseInt(Drupal.settings.pjax.scrollto) : false;
    $.pjax.defaults.timeout = Drupal.settings.pjax.timeout;

    // Only proceed if a content selector is defined.
    if (Drupal.settings.pjax.contentSelector) {
      // Run the behavior just once on the content selector.
      $(Drupal.settings.pjax.contentSelector, context).once("pjax", function() {
        var $content = $(this);
        var $pjaxLinks;

        // Enable pjax for selected links.
        // pjax() uses live(), so links that are removed and re-added will still work.
        if (Drupal.settings.pjax.linksSelector) {
          $pjaxLinks = $(Drupal.settings.pjax.linksSelector);
          $pjaxLinks.pjax(Drupal.settings.pjax.contentSelector)
            // Add 'loading' class.
            .live('click', function(e) {
              $(this).addClass("pjax-link-loading");
            });
        }

        // Catch pjax start/end events.
        $content
          .bind('pjax:start', function() {
            // Detach JS behaviors when loading new content.
            Drupal.detachBehaviors($content, Drupal.settings);

            // Add 'loading' class.
            $content.addClass("pjax-loading");

            // Remove 'active' class from links.
            if ($pjaxLinks) {
              $pjaxLinks.removeClass("active");            
            }
          })
          .bind('pjax:end', function() {
            // Re-attach JS behaviors when content has loaded.
            Drupal.attachBehaviors($content, Drupal.settings);

            // Remove 'loading' class.
            $content.removeClass("pjax-loading");

            // Update classes on the clicked link.
            if ($pjaxLinks) {
              $pjaxLinks.filter(".pjax-link-loading")
                .removeClass("pjax-link-loading")
                .addClass("active");
            }
          });

      });
    }
  }
}

})(jQuery);
