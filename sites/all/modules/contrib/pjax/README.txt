pjax for Drupal
===============
Enables client-side partial page loads with jquery.pjax.

More info:
Module project page: http://drupal.org/project/pjax
pjax library page: https://github.com/defunkt/jquery-pjax
Original pjax demo: http://pjax.heroku.com/

Install
-------
* Install this module as well as the Libraries module in the usual way.

* Download pjax from https://github.com/defunkt/jquery-pjax

* Unpack the archive in /sites/all/libraries or another 'libraries' directory.

* Rename the directory to "jquery-pjax", so that the library file becomes 
  available at "x/libraries/jquery-pjax/jquery.pjax.js"

* You can verify that pjax is properly installed at:
  Administration -> Reports -> Status report

Use
---
* Find the unique selector for your main content area, such as "#content-area". 
  You can find this element in your theme's page.tpl.php file – it's the one 
  that surrounds the statement `print render($page['content'])`.

* Go to the settings page at Administration -> Configuration -> User interface 
  -> pjax and define the Content selector.

* Define a selector for all of the links that should trigger a pjax load. Put 
  this in the "pjax links selector" field.

* Choose if you want the page to scroll to the top on pjax loads.

* The Timeout field's default value is a good starting point. You may need to 
  increase this number if your pages respond too slowly.

The content area should now be reloaded separately when clicking the links, 
without doing complete page reloads.

Advanced
--------
pjax for Drupal attempts to update the 'active' classes of your pjax enabled 
links when loading new content, so these should follow the same styling as with
normal page loads. It also adds a 'pjax-loading' class to your content area 
container, as well as a 'pjax-link-loading' class to the clicked link. You can 
use these classes if you want to add some visual indication that the content is
loading.

Rather than using the built in JavaScript behavior to trigger pjax, you can 
bypass it - partly or completely - and implement your own triggers. (If so, you
may want to clear the Content selector setting in order to prevent the behavior
from running.) Examples:

    $(".my-link").pjax(Drupal.settings.pjax.contentSelector);

  or:

    $(".my-link, .and-another").pjax("#my-special-container");

Caveats
-------
* On pages that use pjax to reload/switch content, any side content, such
  as menus, sidebars, footers, even error messages, will not get updated. 

* Pages that have JavaScript and CSS files that are loaded specifically for 
  that page should not be loaded with pjax, or they will be missing their 
  styling and/or functionality.

Credits
-------
jquery.pjax by Chris Wanstrath: https://github.com/defunkt/jquery-pjax
Drupal module developed by Hannes Lilljequist at www.sthlmconnection.se
