(function ($) {
Drupal.behaviors.radioactivity_history = {

  attach: function (context, settings) {

    if ($.fn.sparkline) {
      $('.radioactivity-history').each(function (match) {
        var dataset = $.parseJSON($(this).text());
<<<<<<< HEAD
        if (dataset) {
          $(this).sparkline(dataset.values, {
            type:'bar',
            height:'100%',
            width:'100%',
            chartRangeMin: dataset.cutoff,
            tooltipFormat: dataset.tooltipFormat,
            tooltipValueLookups: {
              tooltips: dataset.tooltips
            } 
          });
        }
=======
        $(this).sparkline(dataset.values, {
          type:'bar',
          height:'100%',
          width:'100%',
          chartRangeMin: dataset.cutoff,
          tooltipFormat: dataset.tooltipFormat,
          tooltipValueLookups: {
            tooltips: dataset.tooltips
          } 
        });
>>>>>>> 1b6c95ba06d0876d7fd67f319e9af63a7de3b0fa
      });
    }
  }
};
})(jQuery);
