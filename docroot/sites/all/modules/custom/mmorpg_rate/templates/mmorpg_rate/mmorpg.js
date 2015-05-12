(function ($) {
  Drupal.behaviors.RateMMORPG = {
    attach: function (context) {
      $('.rate-widget-mmorpg:not(.rate-mmorpg-processed)',context).addClass('rate-mmorpg-processed').each(function() {
        var widget = $(this);
        var ids = widget.attr('id').match(/^rate\-([a-z]+)\-([0-9]+)\-([0-9]+)\-([0-9])\-\-([0-9])$/);
        if(ids == null) {
          ids = widget.attr('id').match(/^rate\-([a-z]+)\-([0-9]+)\-([0-9]+)\-([0-9])$/);
          }
          var data = {
            content_type: ids[1],
            content_id: ids[2],
            widget_id: ids[3],
            widget_mode: ids[4]
          };

          var s = $(".rate-mmorpg", widget);
          var v = $(s).attr("class").match(/rate\-value\-(.*)/)[1];
          v = v * 10;
          widget.prepend(s);

          // Check if this widget is active (disabled widgets have <span>'s instead of <a>'s).'
          if ($("ul a", widget).length > 0) {
            // Add the slider.
            s.slider({
              min: 0,
              max: 100,
              steps: 1,
              startValue: v, // jQuery UI 1.2
              value: v, // jQuery UI 1.3
              slide: function(event,ui) {
                //ui.value;
                var vote = ui.value / 10;
                $(".rate-mmorpg-value", s).width(((ui.value - 10) * (10 / 9)) + '%');
                $(".rate-info", widget).text(Drupal.t("!vote", {"!vote": vote.toFixed(1)}));
              },
              stop: function(event,ui) {
                data.value = ui.value / 10;
                var token = $(this).closest('.rate-widget').attr('class').match(/rate\-([a-zA-Z0-9\-_]{32,64})/)[1];
                // Todo: remove next line, collect all the data and push it to the server once the button is clicked.
                return Drupal.rateVote(widget, data, token);
              }
            });
          }
          else {
            // Widget is disabled. Only add the slider styling.
            $(s).width('200px');
            $(s).addClass('ui-mmorpg');
          }

          // Add the rating bar.
          s.prepend('<div class="rate-mmorpg-value" style="width: ' + ((v - 10) * (10 / 9)) + '%" />');

          // Hide the links for the non-js variant.
          $("ul", widget).hide();
        });
      }
    }
      Drupal.behaviors.mmorpgGameRatings = {
      attach: function (context, settings) {
        var userRatingAverage = function() {
          var container = $('.view-id-game_ratings .views-field');
          $.each(container, function(index, el) {
            var userVote = parseInt($(this).find('.user-vote').text())||0;
            var avgVote = parseInt($(this).find('.average-rating').text())||0;
            var totalAvg = (userVote + avgVote) / 8;
            if ($(this).find(".total-average").length == 0) {
              var node = "<span class=total-average>" + totalAvg + "</span>";
            } else {
              $(this).find(".total-average").text(totalAvg);
            }
            $(this).find(".field-content").before(node);
            userVote = undefined;
            avgVote = undefined;
            totalAvg = undefined;
          });
        }

        var gameAverage = function() {
          var container = $('.view-display-id-active_ratings .total-average');
          var store = 0;
          $.each(container, function(index, el) {
            store += parseFloat($(el).text())||0;
          });
          var node = "<span class=game-average>" + store + "</span>";
          $(".currentScore").empty().append(node);
          store = 0;
        }

        userRatingAverage();
        gameAverage();
      }
    }
  Drupal.behaviors.mmorpgToggleRatings = {
    attach: function (context, settings) {
      $("#rate-view .btn").click(function(event) {
        $("#rate-view").hide();
        $(".cast-view").show();
        event.preventDefault()
      });
      $(".cast-view .btn").click(function(event) {
        $("#rate-view").show();
        $(".cast-view").hide();
        event.preventDefault()
      });
    }
  }
})(jQuery);
