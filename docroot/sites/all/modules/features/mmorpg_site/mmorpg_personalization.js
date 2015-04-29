/**
 * Created by alan on 16/4/15.
 */

/**
 * This code has been taken from https://developer.mozilla.org/en-US/docs/Web/Guide/API/DOM/Storage#localStorage
 */
if (!window.localStorage) {
  window.localStorage = {
    getItem: function (sKey) {
      if (!sKey || !this.hasOwnProperty(sKey)) {
        return null;
      }
      return unescape(document.cookie.replace(new RegExp("(?:^|.*;\\s*)" + escape(sKey).replace(/[\-\.\+\*]/g, "\\$&") + "\\s*\\=\\s*((?:[^;](?!;))*[^;]?).*"), "$1"));
    },
    key: function (nKeyId) {
      return unescape(document.cookie.replace(/\s*\=(?:.(?!;))*$/, "").split(/\s*\=(?:[^;](?!;))*[^;]?;\s*/)[nKeyId]);
    },
    setItem: function (sKey, sValue) {
      if (!sKey) {
        return;
      }
      document.cookie = escape(sKey) + "=" + escape(sValue) + "; expires=Tue, 19 Jan 2038 03:14:07 GMT; path=/";
      this.length = document.cookie.match(/\=/g).length;
    },
    length: 0,
    removeItem: function (sKey) {
      if (!sKey || !this.hasOwnProperty(sKey)) {
        return;
      }
      document.cookie = escape(sKey) + "=; expires=Thu, 01 Jan 1970 00:00:00 GMT; path=/";
      this.length--;
    },
    hasOwnProperty: function (sKey) {
      return (new RegExp("(?:^|;\\s*)" + escape(sKey).replace(/[\-\.\+\*]/g, "\\$&") + "\\s*\\=")).test(document.cookie);
    }
  };
  window.localStorage.length = (document.cookie.match(/\=/g) || window.localStorage).length;
}
/**
 * End of localStorage code.
 */

var MMORPG = {
  personalization: function () {
    var url = Drupal.settings.basePath + 'personalization';
    jQuery.get(url, function (data) {
      for (var section in data) {
        if (data.hasOwnProperty(section)) {
          jQuery('#mmorpg-menu-' + section).parent().find('.placeholder').html(data[section]);
        }
      }
    });
  },

  update_counts: function () {
    MMORPG.sync_localstorage_and_update_menus(MMORPG.update_menus)
  },

  update_menus: function () {
    var latest_items = JSON.parse(localStorage.getItem('mmorpg_latest_items'));
    var browsing_history = JSON.parse(localStorage.getItem('mmorpg_browsing_history'));

    for (var section in latest_items.data) {
      var items = latest_items.data[section];
      for (var id in items) {
        if (jQuery.inArray(items[id], browsing_history[section]) >= 0) {
          items.splice(id, 1);
        }
      }
      var output = items.length >= 20 ? '20+' : (items.length == 0 ? '' : items.length);
      jQuery('#mmorpg-menu-' + section).parent().find('.pill').html(output);
    }
  },

  sync_localstorage_and_update_menus: function (update_menus) {
    var latest_items = JSON.parse(localStorage.getItem('mmorpg_latest_items'));

    // if the latest_items cache has not expired proceed to update menus.
    if (latest_items != null && Date.now() / 1000 <= latest_items.expires) {
      update_menus();
    } else {
      // refresh the cache
      var url = Drupal.settings.basePath + 'update_counts';
      jQuery.get(url, function (data) {
          var section;
          //update the localStorage.
          localStorage.setItem('mmorpg_latest_items', JSON.stringify(data));

          //prune stale ids from the browsing history.
          var browsing_history = JSON.parse(localStorage.getItem('mmorpg_browsing_history'));
          if (browsing_history == null) {

            //browsing history has not been created. create an empty structure.
            browsing_history = {};
            for (section in data.data) {
              browsing_history[section] = [];
            }

          } else {

            for (section in browsing_history) {
              var items = [];
              for (var id in browsing_history[section]) {
                if (jQuery.inArray(browsing_history[section][id], data.data[section]) >= 0) {
                  items.push(browsing_history[section][id]);
                }
              }
              browsing_history[section] = items;
            }

          }
          localStorage.setItem('mmorpg_browsing_history', JSON.stringify(browsing_history));

          //finally update the menus.
          update_menus();
        }
      );
    }
  },

  mark_current_page_as_viewed: function () {

    var page = Drupal.settings.MMORPG_page_viewed;
    if (page == undefined) {
      return
    }

    switch (page.type) {
      //update a single item in the browsing history.
      case 'single':
        var browsing_history = JSON.parse(localStorage.getItem('mmorpg_browsing_history'));
        if (jQuery.inArray(page.id, browsing_history[page.section]) < 0) {
          browsing_history[page.section].push(parseInt(page.id));
        }
        localStorage.setItem('mmorpg_browsing_history', JSON.stringify(browsing_history));
    }
  }
};

jQuery(document).ready(MMORPG.personalization);
jQuery(document).ready(MMORPG.mark_current_page_as_viewed);
jQuery(document).ready(MMORPG.update_counts);

