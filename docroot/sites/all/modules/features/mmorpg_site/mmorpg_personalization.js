/**
 * Created by alan on 16/4/15.
 */
jQuery(document).ready(function () {
    var url = Drupal.settings.basePath + 'personalization';
    jQuery.get(url, function (data) {
      for (var section in data) {
        jQuery('#mmorpg-menu-' + section).parent().find('.placeholder').html(data[section]);
      }
    });
  }
);