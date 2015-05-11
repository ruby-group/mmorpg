(function ($) {
   Drupal.behaviors.mmorpgGameRatings = {
    attach: function (context, settings) {
      var userRatingAverage = function() {
      var container = $('.view-display-id-active_ratings .views-field');
      $.each(container, function(index, el) {
        var userVote = parseInt($(this).find('.user-vote').text());
        var avgVote = parseInt($(this).find('.average-rating').text());
        var totalAvg = (userVote + avgVote) / 8;
        if ($(this).find(".total-average").length == 0) {
          var node = "<span class=total-average>" + totalAvg + "</span>";
          } else {
            $(this).find(".total-average").text(totalAvg);
          }
        $(this).append(node);
        userVote = undefined;
        avgVote = undefined;
        totalAvg = undefined;
      });
    }

    var gameAverage = function() {
      var container = $('.view-display-id-active_ratings .total-average');
      var store = 0;
      $.each(container, function(index, el) {
        store += parseFloat($(el).text());
      });
      var node = "<span class=game-average>" + store + "</span>";
      $(".currentScore").empty().append(node);
      store = 0;
    }
    userRatingAverage();
    gameAverage();
    }
  };
})(jQuery);
