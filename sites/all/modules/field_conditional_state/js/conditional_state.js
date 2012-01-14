// $Id: conditional_state.js
// extend Drupal.states.Dependent.comparisons
// with this extension condition states can be set as array: JQUERY_SELECTOR => array('value' => array('value_1', 'value_2', ....)),

(function ($) {
  if (Drupal.states) {
    var states = Drupal.states.Dependent.comparisons;
  } 
  else {
     var states = {};
  }
  var arrayState = {
    'Array': function (reference, value) {
	  if(value instanceof Array) {
	    var conditionType = Drupal.settings.conditionType;
	    if (conditionType == 'or') {
	      var found = false;
		  $.each(value, function(index, val) {
		    if (reference.indexOf(val) != -1) {
		      found = true;
		      return false;
		    }	
	      });
	      return found;
	    } else {    // conditionType is and
	      var not_found = false;
		  $.each(reference, function(index, val) {
		    if (value.indexOf(val) == -1) {
		      not_found = true;
		      return false;
		    }	
	      });
	      return !not_found;
	    }
	  } 
	  else {
  	    return reference.indexOf(value) != -1;
  	  }
    }
  };
  var extendStates = $.extend(true, states, arrayState);
  Drupal.states.Dependent.comparisons = extendStates;
  
  Drupal.states.Trigger.states.value.change = function () {
    var values = this.val();
    if (values instanceof Array) {
      return values;
    } else {
      if (this.is('input')) {
        return this.filter(':checked').map(function() {
          return $(this).val();
        }).get();
      } 
      else {
        return $(this).val();
      }
    }
  }
})(jQuery);
