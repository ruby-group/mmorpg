Drupal.behaviors.mmorpgGameToDisplayBehavior = {
  attach: function (context, settings) {
    var date = new Date();
    var minute = date.getMinutes();
    var rotate = function(element, minute) {
      var rows = jQuery(element).find("> .views-row");
      var rowsArray = jQuery.map(rows, function (value, index) {
        return value;
      });
      var rotateCount = Math.floor(minute / 5);
      for (var i = 0; i < rotateCount; i++) {
        var temp = rowsArray.shift();
        rowsArray.push(temp);
      }
      return rowsArray;
    };

    if (jQuery(".view-promoted-signup-now-link").length > 0) {
    //hide the promoted Signup now links from tiers
    jQuery(".view-promoted-signup-now-link .view-content .tier").each(function (index, element) {
      var tierLimit = jQuery(element).find("div .views-field-field-tiers-max-links-to-display .field-content").html();
      var rowsArray = rotate(element,minute);
      var displayRows = rowsArray.slice(0, tierLimit);
      jQuery(element).html(displayRows);
    });

    //get the limit set on total mmo block
    var requiredLimit = Drupal.settings.mmorpg_signup_now.mmo_limit;

    //hide the other signup now links
    jQuery(".view-promoted-signup-now-link .view-content .views-row:gt(" + 
      (requiredLimit - 1) + ")").each(function (index, element) {
      jQuery(this).hide();
    });
    }

    if (jQuery(".view-display-id-panel_pane_1").length > 0) {
    //hide the promoted playnow
    jQuery(".view-display-id-panel_pane_1 .view-content").each(function (index, element) {
      var rowsArray = rotate(element,minute);
      jQuery(element).html(rowsArray);
    });
  }
}
};