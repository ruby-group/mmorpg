(function ($) {
  Drupal.behaviors.sideBlockRate = {
    attach: function (context) {
      var value = $(".view-promoted-signup-now-link .views-field-average-game-rating .field-content").text();
      value = parseFloat(value);
      var wrap = $(".view-promoted-signup-now-link .views-field-average-game-rating .field-content");
      $(wrap).width(value+'%');
    }
  }
  Drupal.behaviors.overviewoverlap = {
    attach: function (context) {
      var afterthis = $(".pane-node-field-hero-image").next("p");
      $(afterthis).addClass("field-overview");
    }
  }
})(jQuery);
