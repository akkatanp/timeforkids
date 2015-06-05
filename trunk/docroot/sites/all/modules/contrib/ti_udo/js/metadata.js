/**
 * @file
 * Javascript API to set and get values in the metadata object and UDO.
 *
 * @author Neal Bailly, Harry Hope
 */
(function(window, udo) {
  if (typeof define === 'function' && define.amd) {
      define('TiUdo', [], udo);
  } else if (typeof exports === 'object') {
      module.exports = udo();
  } else {
      window.Ti = window.Ti || {};
      window.Ti.udoMapper = udo();
  }
}(this, function() {

  'use strict';

  var udo = {
    set: function(key, value, overwrite) {
      overwrite = typeof overwrite !== 'undefined' ? overwrite : true;
      if (overwrite || !(key in window.Ti.metadata)) {
        window.Ti.metadata[key] = value;
        for (var udo_key in window.Ti.udo) {
            if (window.Ti.udo[udo_key] === key) {
              window.utag_data[udo_key] = value;
            }
        }
      }
    },
    setMulti: function(keyvals, overwrite) {
      for (var key in keyvals) {
        this.set(key, keyvals[key], overwrite);
      }
    },
    unset: function(key) {
      if (typeof key === 'undefined') {
        this.unsetMulti(window.Ti.metadata);
      } else {
        if (key in window.Ti.metadata) {
          delete window.Ti.metadata[key];
          for (var udo_key in window.Ti.udo) {
              if (window.Ti.udo[udo_key] === key) {
                delete window.utag_data[udo_key];
              }
          }
        }
      }
    },
    unsetMulti: function(keys) {
      for (var key in keys) {
        this.unset(key);
      }
    },
    get: function(key) {
      if (typeof key === 'undefined') {
        return window.Ti.metadata;
      } else {
        return window.Ti.metadata[key];
      }
    },
    triggerPageView: function() {
      window.utag.view();
    }
  }

  return udo;

}));

