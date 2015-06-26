# dcms-modules-ti_udo

Time Inc. Universal Data Object

Implements a Time Inc Universal Data Object with an interface to the Tealium UDO.

This module is dependent on the contrib module Tealium (https://www.drupal.org/project/tealium).  
The Time Inc. UDO module provides a wrapper to the Tealium module, along with enhanced functionality.    

The primary enhancement of this module over the Tealium module is that it allows sites to 
keep their own site-specific data object and map elements of that object to the 
Time Inc. Universal Data Object.

Notes:

1)  The Time Inc normalized UDO is defined in the file udo.json.    

2)  Site specific UDO mapping can be performed at /admin/config/services/udo.   

3)  The module and the Tealium module can be installed and enabled on any DCMS 
site without disturbing any existing code or tag management solution in place.  
Installing the module and configuring the Tealium settings to point to the 
site's profile and environment is all that is needed to get the 
Tealium Utag up on every page of the site.

4)  Server-side commands used in the module are:

ti_udo_set ($name, $value, $overwrite);   // set a single name value pair
ti_udo_set_multiple ($array, $overwrite);  // set multiple name value pairs at once
ti_udo_get ($name);  // get value from the data object
ti_udo_bind ($event);  // bind an event

5)  Javascript commands used in the module are

window.Ti.udoMapper.reset();  // reset all name value pairs
window.Ti.udoMapper.set(name, value, overwrite);  // set a single name value pair
window.Ti.udoMapper.set(arr, overwrite); // set multiple name value pairs at once
window.Ti.udoMapper.get(name);  // get value from the data object
window.Ti.udoMapper.refreshPageView(); // refresh page view