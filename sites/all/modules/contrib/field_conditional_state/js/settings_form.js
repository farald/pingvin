// $Id: settings_form.js
//@file: hide or show condition type field based on the count of control values

(function ($) {
  $(document).ready(function(){
    var target = $(".form-item-add-field-state-condition-type");
    var selected = $(".values-selection").find("select option:selected");
    show_hide(selected.length);
    $(".values-selection").find("select").change(function() {
      selected = $(".values-selection").find("select option:selected");
      show_hide(selected.length);
    });
    
    function show_hide(count) {
      if (count > 1) 
        target.show('slow');
      else
        target.hide('slow');
    }
    
  });
})(jQuery);

