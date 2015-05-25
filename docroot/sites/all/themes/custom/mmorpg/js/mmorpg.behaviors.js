(function ($) {
  Drupal.behaviors.sideBlockRate = {
    attach: function (context) {
      var value = jQuery(".view-promoted-signup-now-link .views-field-average-game-rating .field-content").text();
      value = parseFloat(value);
      var wrap = jQuery(".view-promoted-signup-now-link .views-field-average-game-rating .field-content");
      jQuery(wrap).width(value+'%');
    }
  }
})(jQuery);
