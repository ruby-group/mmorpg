(function ($) {
Drupal.behaviors.radioactivity = {

  config: '',
<<<<<<< HEAD
  attached: false,
  activeIncidents: [],

  attach: function (context, settings) {

    // Skip if radioactivity is not set
    if (typeof settings.radioactivity == 'undefined') {
      return;
    }

    var config = settings.radioactivity.config;
    var emitters = settings.radioactivity.emitters;
    
    // Clear used emitters
    settings.radioactivity.emitters = []; 

    this.config = config;

    $.each(emitters, function(callback, incidents) {
=======
  activeIncidents: Array(),

  attach: function (context, settings) {

    // Do an ajax callback to the given callback address {
    var data = settings.radioactivity.emitters;
    var config = settings.radioactivity.config;

    this.config = config;

    $.each(data, function(callback, incidents) {
>>>>>>> 1b6c95ba06d0876d7fd67f319e9af63a7de3b0fa

      // Accuracy and  flood filtering
      $.each(incidents, function(index, incident) {

        var config = Drupal.behaviors.radioactivity.config;
        var key = 'radioactivity_' + incident['checksum'];

        // Flood protection (cookie based)
        if (config.fpEnabled) {  
          if (Drupal.behaviors.radioactivity.fetch(key)) {
            // Filter
            return;
          } else {
            var exp = new Date();
            exp.setTime(exp.getTime() + (config.fpTimeout * 60 * 1000));
            Drupal.behaviors.radioactivity.store(key, true, exp);
          }
        } else {
          // clear the possible cookie
          Drupal.behaviors.radioactivity.store(key, null, new Date());
          //$.cookie(key, null);
        }

        // Accuracy filtering
        var rnd = Math.random() * 100;
        if (rnd >= incident.accuracy) {
          return;
        }

        Drupal.behaviors.radioactivity.activeIncidents.push(incident);
      });

      // Call the emitter callback
      if (Drupal.behaviors.radioactivity.activeIncidents.length > 0) {
        Drupal.behaviors.radioactivity[callback](Drupal.behaviors.radioactivity.activeIncidents);
<<<<<<< HEAD
        // Clear incidents
        Drupal.behaviors.radioactivity.activeIncidents = [];
=======
>>>>>>> 1b6c95ba06d0876d7fd67f319e9af63a7de3b0fa
      }
    });
  },

  hardStore: function (key, value, exp) {
<<<<<<< HEAD
    try {
      if (typeof(Storage) !== "undefined") {
        localStorage.setItem(key, JSON.stringify({
          value: value,
          expire: exp.getTime()
        }));
        sessionStorage.setItem(key, JSON.stringify({
          value: value,
          expire: exp.getTime()
        }));      
      }
    } catch(e){
      $.cookie(key, value, { expires: exp });
=======
    if (typeof(Storage) !== "undefined") {
      localStorage.setItem(key, JSON.stringify({
        value: value,
        expire: exp.getTime()
      }));
      sessionStorage.setItem(key, JSON.stringify({
        value: value,
        expire: exp.getTime()
      }));      
>>>>>>> 1b6c95ba06d0876d7fd67f319e9af63a7de3b0fa
    }
    $.cookie(key, value, { expires: exp });
  },

  hardFetch: function (key) {
    var data = null;
    if (typeof(Storage) !== "undefined") {
<<<<<<< HEAD
      try{
        data = localStorage.getItem(key)
        if (!data) {
          data = sessionStorage.getItem(key);
        }
      } catch(e){
        
=======
      data = localStorage.getItem(key)
      if (!data) {
        data = sessionStorage.getItem(key);
>>>>>>> 1b6c95ba06d0876d7fd67f319e9af63a7de3b0fa
      }
    }
    if (!data) {
      data = $.cookie(key);
    }
    return data;
  },

  store: function (key, value, exp) {
    //return this.hardStore(key, value, exp);
    if (typeof(Storage) !== "undefined") {
<<<<<<< HEAD
      // Fall back to using cookies if this fails
      try {
        localStorage.setItem(key, JSON.stringify({
          value: value,
          expire: exp.getTime()
        }));
      } catch(e) {
        $.cookie(key, value, { expires: exp });
      }
=======
      localStorage.setItem(key, JSON.stringify({
        value: value,
        expire: exp.getTime()
      }));
>>>>>>> 1b6c95ba06d0876d7fd67f319e9af63a7de3b0fa
    } else {
      $.cookie(key, value, { expires: exp });
    }
  },

  fetch: function (key) {
<<<<<<< HEAD
    var now = new Date();
    if (typeof(Storage) !== "undefined") {
      // Fall back to using cookies if this fails
      try {
        var data = localStorage.getItem(key);
        if (data) {
          data = JSON.parse(data);
          if (now.getTime() < data.expire) {
            return data.value;
          }
        }
        return null;
      } catch(e) {
        return $.cookie(key);
      }
=======
    //return this.hardFetch(key);
    var now = new Date();
    if (typeof(Storage) !== "undefined") {
      var data = localStorage.getItem(key);
      if (data) {
        data = JSON.parse(data);
        if (now.getTime() < data.expire) {
          return data.value;
        }
      }
      return null;
>>>>>>> 1b6c95ba06d0876d7fd67f319e9af63a7de3b0fa
    }
    return $.cookie(key);
  },

  emitDefault: function (incidents) {
    $.ajax({
      url: this.config.emitPath,
      data: {'incidents': incidents},
      type: 'POST',
      cache: false,
      dataType: "html"
    });
  }
};
})(jQuery);
