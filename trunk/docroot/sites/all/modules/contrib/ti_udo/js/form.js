/**
 * @file
 * Javascript related to the udo admin form.
 * Used for editorial workflow.
 *
 * @author Neal Bailly
 *
 */

jQuery(document).ready(function($) {

  $('.udo-key').change(function() {
    var map = JSON.parse($('.udo-map').val());
    var key = $(this).val().trim();
    if(map.hasOwnProperty(key)){
      var desc = $('#udo-tr-'+key+' .key-desc-value').html();
      $('.key-desc').val(desc);
      $('.udo-add').html('Update');
    } else {
      $('.udo-add').html('Add');
    }
  })

  $('.udo-add').click(function() {
  	addKey();
  })

  $('.udo-remove').click(function() {
  	removeKey($(this));	
  })

  function addKey() {

  	var udo_key = $('.udo-key').val().trim();
  	var metadata_key = $('.metadata-key').val().trim();
  	var key_desc = $('.key-desc').val().trim();
    var map = JSON.parse($('.udo-map').val());

    if (udo_key=='' || metadata_key=='') {
        alert('Please enter both keys first.');
        return;
    }

    if (map.hasOwnProperty(udo_key)) {
        if(confirm('Update key "'+udo_key+'"?')) {
          map[udo_key]['metadata'] = metadata_key;
          map[udo_key]['description'] = key_desc;
          var metadata_value = $('#udo-tr-'+udo_key+' .udo-value');
          metadata_value.html(metadata_key);
          var key_desc_value = $('#udo-tr-'+udo_key+' .key-desc-value');
          key_desc_value.html(key_desc);
          $('.udo-map').val(JSON.stringify(map));
          $('.udo-key').val('');
          $('.key-desc').val('');
          $('.metadata-key').val('');
          $('.udo-add').html('Add');
        }
        return;
    }
    
    var count = 0;
    var insert_after = '';

    for (var key in map) {
    	if (udo_key > key) {
        insert_after = key;
      }
      count++;
    }

    var row='<tr id="udo-tr-' + udo_key + '"><td id="udo-td-' + count + '" data="' + udo_key + '">' + udo_key + '</td><td class="udo-value" id="metadata-td-' + count + '">' + metadata_key + '</td><td class="key-desc-value">' + key_desc + '</td><td><a class="udo-remove" id="udo-remove-' + count + '" data="' + udo_key + '" href="#">Remove</a></td><td></td></tr>';

    if (insert_after=='') insert_after = 'head';

    $(row).insertAfter("#udo-tr-" + insert_after);

    var remove = '#udo-remove-' + count;
    $(remove).click(function() {
      removeKey($(remove));
    })

    map[udo_key] = new Object();
    map[udo_key]['metadata'] = metadata_key;
    map[udo_key]['description'] = key_desc;

    map = sortObjectByKey(map);

    $('.udo-map').val(JSON.stringify(map));
    $('.udo-key').val('');
    $('.metadata-key').val('');
    $('.key-desc').val('');
    $('.udo-add').html('Add');

  }

  function removeKey(obj) {

  	if (confirm('Really Remove UDO Key?')) {

      var tr = '#udo-tr-' + (obj.attr('data'));
      var td = '#' + (obj.attr('id')).replace('-remove','-td');
      $(tr).css('display', 'none');
      var udo_key = $(td).attr('data');
      var map = JSON.parse($('.udo-map').val());
      delete map[udo_key];
      $('.udo-map').val(JSON.stringify(map));

    }

  }

/**
 * Return an Object sorted by it's Key
 */
  var sortObjectByKey = function(obj) {
    
    var keys = [];
    var sorted_obj = {};
  
    for(var key in obj){
        if(obj.hasOwnProperty(key)){
            keys.push(key);
        }
    }
  
    // sort keys
    keys.sort();
  
    // create new array based on Sorted Keys
    jQuery.each(keys, function(i, key){
        sorted_obj[key] = obj[key];
    });
  
    return sorted_obj;
  };

});