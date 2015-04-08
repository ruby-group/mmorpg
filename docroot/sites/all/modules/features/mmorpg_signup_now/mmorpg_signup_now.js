Drupal.behaviors.mmorpgGameToDisplayBehavior = {
  attach: function (context, settings) {
    var date = new Date();
    var minute = date.getMinutes();

    //hide the promoted Signup now links from tiers
    jQuery(".view-promoted-signup-now-link .view-content .tier").each(function (index, element) {
      var tierLimit = jQuery(element).find("div .views-field-field-tiers-max-links-to-display .field-content").html();
      var rows = jQuery(element).find(".views-row");
      var rowsArray = jQuery.map(rows, function (value, index) {
        return value;
      });
      var rotateCount = Math.floor(minute / 5);
      for (var i = 0; i < rotateCount; i++) {
        var temp = rowsArray.shift();
        rowsArray.push(temp);
      }
      var displayRows = rowsArray.slice(0, tierLimit);
      jQuery(element).html(displayRows);
    });

    //calculate no of promoted links
    var promoCount = jQuery(".view-promoted-signup-now-link .view-content .tier .views-row").length;

    //get the limit set on total mmo block
    var requiredLimit = Drupal.settings.mmorpg_signup_now.mmo_limit;

    //get count of no of signupnow links to display
    signupNowLimit = requiredLimit - promoCount;

    //hide the other signup now links
    if (signupNowLimit > 0) {
      jQuery(".view-promoted-signup-now-link .view-content > .views-row:gt(" + 
        (Number(signupNowLimit) - 1) +")").each(function (index, element) {
          jQuery(this).hide();
      });
    }
  }
};