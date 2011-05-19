This is data that has to be displayed here.

COUNTRY TITLE : <?php echo $sightseeing_data['destination_title'];?><br/>
Sightseeing Map : <?php echo file_create_url(file_build_uri(basename($sightseeing_data['sightseeing_map'])));?><br/>
Sightseeing Body(they will insert imagemap here) : <?php echo $sightseeing_data['sightseeing_body'];?><br/>


This is a list of places that is supposed to be on the "imagemap":<br/>

<?php foreach($sightseeing_data['sightseeing_items'] as $item):?>
-- Place Name : <?php echo $item['place_name'];?><br/>
-- Place Description : <?php echo $item['place_description'];?><br/>
-- Place Photo : <?php echo file_create_url(file_build_uri(basename($item['place_photo'])));?><br/>
<?php endforeach;?>