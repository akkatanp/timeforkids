<table class="udo-table">
  <tr id="udo-tr-head">
    <td><strong>UDO</strong></td>
    <td><strong>Data Layer</strong></td>
    <td width="75%"><strong>Description</strong></td>
    <td width="100"></td>
    <td width=""></td> 
  </tr>
<?php
  $i = 0;
  foreach($variables['udo_site_map'] as $name => $values) {
    $metadata = isset($values->metadata)?$values->metadata:'';
    $remove = (isset($variables['udo_map']->{$name}))?"":"<a class=\"udo-remove\" id=\"udo-remove-" . $i . "\" data=\"" . $name . "\" href=\"#\">Remove</a>";
  	print "<tr id=\"udo-tr-" . $name . "\"><td id=\"udo-td-" . $i . "\" data=\"" . $name . "\">" . $name . "</td><td class=\"udo-value\" id=\"metadata-td-" . $i . "\">" . $metadata . "</td><td class=\"key-desc-value\">" . $values->description . "</td><td>" . $remove . "</td><td></td></tr>" . PHP_EOL;
    $i++;
  }
?>
  <tr>
    <td NOWRAP><input class="udo-input-pair udo-key" type="text" name="udo-key"></td>
    <td NOWRAP><input class="udo-input-pair metadata-key" type="text" name="metadata-key"></td>
    <td NOWRAP><input class="udo-input-pair key-desc" type="text" name="key-desc" style="width:100%"></td>
    <td NOWRAP><a class="udo-add" href="#">Add</a></td>
    <td></td>
  </tr>
</table>