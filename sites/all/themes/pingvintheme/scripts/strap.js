/*
 * AllerShop scripts.
 */

(function($) {

    Drupal.behaviors.allershopTheme = {
        attach: function(context) {
            // Add bootstrap tabs on .tab-content field groups.
            $('.field-group-format.tab-content', context).each(function(i) {
                $(this).once('tab-content-' + i, function() {
                    var $group = $(this);
                        $tabs = $('>div.field', $group);

                    if ($tabs.length) {
                        $group.prepend('<ul class="nav nav-tabs"></ul>');
                        $tabs.each(function(t) {
                            var tabId = 'tab-pane-' + i + '-' + t,
                                tabLabel = $('.label-above', this).text(),
                                tabItem = '<li><a href="#' + tabId + '" data-toggle="tab">' + tabLabel + '</a></li>';

                            $('.nav', $group).append(tabItem);
                            $(this).addClass('tab-pane').attr({ id: tabId});
                        });
                        $('.nav a:first', $group).tab('show');
                    }
                });
            });

            // Remove buggy class.
            if ($('div.toolbar-drawer').length && !$('div.toolbar-drawer a').length) {
                $('body').removeClass('toolbar-drawer');
            };
        }
    };

    if (typeof Drupal.views != 'undefined') {
        Drupal.views.ajaxView.prototype.attachExposedFormAjax = function() {
            var button = $('input[type=submit], input[type=image], [type=submit]', this.$exposed_form);
            button = button[0];

            this.exposedFormAjax = new Drupal.ajax($(button).attr('id'), button, this.element_settings);
        }
    };

})(jQuery);
