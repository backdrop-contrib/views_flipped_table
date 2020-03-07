Views Flipped Table
===================

This module provides a views table style with the rows and columns flipped.

This is useful for views showing a few entities with many fields, such as a
product comparison.

More information about the project can be found on the project page at
https://github.com/backdrop-contrib/views_flipped_table


Installation
------------

This module requires the Views module to be enabled.

Install this module using the official Backdrop CMS instructions at
https://backdropcms.org/guide/modules.

Add a new view using the "Flipped table" style and edit the view as you would
normally do for a Table style view.


Customization
-------------

The CSS can be customized in the same manner as a normal views table.

To add alternating striping to the columns, add styling to these CSS elements:
- td.views-column-first
- td.views-column-last
- td.views-column-odd
- td.views-column-even

See the css/views_flipped_table.css file for an example.


Issues
------

Bugs and Feature requests should be reported in the Issue Queue:
https://github.com/backdrop-contrib/views_flipped_table/issues


Current Maintainers
-------------------

- [Jason Flatt](https://github.com/oadaeh)
- You?


Credits
-------

- Ported to Backdrop CMS by [Jason Flatt](https://github.com/oadaeh)
- Originally written for Drupal as part of
  [Views Hacks](https://www.drupal.org/project/views_hacks) by:
  - [nadam](https://www.drupal.org/user/113494) and
  - [infojunkie](https://www.drupal.org/user/48424)
- Currently maintained for Drupal by [naught101](https://www.drupal.org/user/44216)
- Drupal work sponsored by [Relinc](http://www.relinc.it)


License
-------

This project is GPL v2 software.
See the LICENSE.txt file in this directory for complete text.
