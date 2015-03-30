/**
 * Created by alan on 23/3/15.
 */
jQuery(document).ready(function () {

    var tracking_js = function (code) {
      return "" +
        "<script type='text/javascript'>var ClickMeter_pixel_url = '" + code + "';</script>" +
        "<script type='text/javascript' src='//s3.amazonaws.com/scripts-clickmeter-com/js/pixelNew.js'></script>" +
        "<noscript><img height='0' width='0' alt='' src='" + code + "' /></noscript>";
    };

    if (Drupal.settings.siteskins == undefined) return;

    var history = JSON.parse(jQuery.cookie('siteskins') || '{}');
    var key = '_' + Drupal.settings.siteskins.id;
    if (history[key] == undefined) history[key] = -1;
    history[key] = (history[key] + 1) % Drupal.settings.siteskins.data.length;
    jQuery.cookie('siteskins', JSON.stringify(history));
    var data = Drupal.settings.siteskins.data[history[key]];
    jQuery('#skin-tracking-area').attr('href', data.link).append(jQuery(tracking_js(data.pixel)));
    jQuery('.main').css({
      "background-color": data.color,
      "background-image": 'url(' + data.image + ')',
      "background-repeat": 'no-repeat',
      "background-attachment": 'scroll',
      "background-position": 'left top'
    });
  }
);
