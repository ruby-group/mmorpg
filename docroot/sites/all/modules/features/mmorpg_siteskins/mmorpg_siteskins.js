/**
 * Created by alan on 23/3/15.
 */
jQuery(document).ready(function () {
    if (Drupal.settings.siteskins != undefined) {
      var key = '_' + Drupal.settings.siteskins.id;
      var history = JSON.parse(jQuery.cookie('siteskins') || '{}');
      if (history[key] == undefined) history[key] = -1;
      history[key] = (history[key] + 1) % Drupal.settings.siteskins.data.length;
      jQuery.cookie('siteskins', JSON.stringify(history));
      var data = Drupal.settings.siteskins.data[history[key]];
      jQuery('#skin-tracking-area').attr('href', data.link);
      jQuery('.main').css({
        "background-color": data.color,
        "background-image": 'url(' + data.image + ')',
        "background-repeat": 'no-repeat',
        "background-attachment": 'scroll',
        "background-position": 'left top'
      });
    }
  }
);
