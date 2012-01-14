// $Id: required_conditional_state.js
// @file: add behavior for required condition

(function ($) {
   $(document).bind('state:required', function(e) {
    $(e.target).closest('.form-item, .form-submit, .form-wrapper').removeClass('form-required');
    var none_input =  $(e.target).find('input[value=_none]');
    var none_option = $(e.target).find('option[value=_none]');
    if (e.trigger) {
      if (e.value) {
        // check for multivalue field - if textfield has more than one value form elements are displayed in table 
        // header of the table (hidden) is also on the top of the page then we need to add required class for all the labels for this field
        if ($(e.target).find("span.form-required").first().length == 0 && $(e.target).find("table").length == 0) {
          $(e.target).find("label").first().append('<span title="This field is required." class="form-required">*</span>');
        } else if ($(e.target).find("span.form-required").length == 0 && $(e.target).find("table").length){
          $(e.target).find("table").find("label").append('<span title="This field is required." class="form-required">*</span>');
        }
        none_option.hide();
        none_input.parent().hide();
      } else {
         none_option.show();
         none_input.parent().show();
      	 $(e.target).find("span.form-required").remove();
      }
    }
  });
})(jQuery);
