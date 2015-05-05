Zend Debugger installation instructions
---------------------------------------

1. Extract the Zend Debugger package.

2. Locate the ZendDebugger.so (Unix) or ZendDebugger.dll (Windows) file in the directory which
   corresponds to your version of PHP (4.3.x, 4.4.x, 5.0.x, 5.1.x,5.2.x,5.3.x) 
   
   Windows new php versions:
   5.2.x,5.3.x - non thread safe only
   5.2.x - compiled with VC8 ( VC6 compatibale )
   5.3.x - compiled with VC9

3. Add the following line to your php.ini file:
   Linux and Mac OS X:      zend_extension=<full_path_to_ZendDebugger.so>
   Windows:                 zend_extension_ts=<full_path_to_ZendDebugger.dll>
   Windows non-thread safe: zend_extension=<full_path_to_ZendDebugger.dll>
   
4. Add the following lines to your php.ini file:
   zend_debugger.allow_hosts=<host_ip_addresses> 

   (*) hopst_ip_addresses are the IPs of the hosts which will be allowed to initiate debug sessions

5. Copy the dummy.php file to your document root directory.

6. Restart your Web server.

Note: 
Windows: The Debugger is tested with php.net binaries of php 5.2.x and 5.3.x
Linux: The Debugger is tested with linux distro's php
Mac: The debugger is tested with MAMP package ( with php 5.2.x there is a need to disable the Optimizer and Extension Manager)

