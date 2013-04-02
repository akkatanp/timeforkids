

/**
 * This will run at start up, and attach the jCryption behavior to 
 * all of the forms specified in Drupal.settings.encrypt_submissions.encryptForms
 *
 **/
Drupal.behaviors.encrypt_submissions_startup= {
  attach: function (context, settings) {
    
    // Only do this once...
    jQuery.jCryption.defaultOptions.getKeysURL = settings.encrypt_submissions.baseUrl + "/encrypt-submissions/generate-keypair";
    
    
    // Loop through all the possible forms we should be affecting...
    
    for (var form_id in Drupal.settings.encrypt_submissions.encryptForms) {
      var dom_form_id = Drupal.settings.encrypt_submissions.encryptForms[form_id];

      jQuery("#encrypt_submissions_status_" + dom_form_id).hide();
      
      jQuery("#" + dom_form_id + ":input").removeAttr("disabled");
      
      jQuery("#" + dom_form_id).jCryption();
      
      // Add an "on submit" event for this form, where we will
      // make the Encrypting status message show up.
      jQuery("#" + dom_form_id + " .form-submit").click({"dom_form_id" : dom_form_id}, function (e) {
        var dfid = e.data.dom_form_id;
        jQuery("#encrypt_submissions_status_" + dfid).show();         
      });
      
    }
      
 }
};
      