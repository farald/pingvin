The Geonames module is a programmatic interface to the web-services provided
by Geonames.org. The configuration for the module is available at
admin/config/search/geonames where you can configure the username used to access
the services (this is required), as well as whether to enable results
caching.

You can find examples of how to use the services in tests/geonames.test for
example:

    // Perform a search for "Melbourne" which should return quite a few results.
    $query = array(
      'query' => 'Melbourne',
      'maxrows' => 5,
      'featureclass' => array('P'),
      // 'featurecode' => array('PPL', 'PPLA', 'PPLG', 'PPLR', 'PPLC', 'PPLS', 'STLM'),
      'style' => 'full',
    );
    $result = geonames_query('search', $query);

This will return a structure that contains information about the results,
how many total results are available, etc.  This result (partially expanded)
looks like this:

... (Object) stdClass
  results (Array, 5 elements)
    0 (Array, 21 elements)
      name (String, 9 characters ) Melbourne
      lat (String, 7 characters ) -37.814
      lng (String, 9 characters ) 144.96332
      geonameid (String, 7 characters ) 2158177
      countrycode (String, 2 characters ) AU
      countryname (String, 9 characters ) Australia
      fcl (String, 1 characters ) P
      fcode (String, 4 characters ) PPLA
      distance (String, 0 characters )
      fcodename (String, 45 characters ) seat of a first-order administrative division
      fclname (String, 17 characters ) city, village,...
      population (String, 7 characters ) 3730206
      elevation (String, 0 characters )
      alternatenames (String, 380 characters ) MEL,Mel'burn,Melbourne,Melbourne City,Melbournu...
      admincode1 (String, 2 characters ) 07
      admincode2 (String, 5 characters ) 24600
      adminname1 (String, 8 characters ) Victoria
      adminname2 (String, 9 characters ) Melbourne
      timezone (String, 19 characters ) Australia/Melbourne
      dstoffset (String, 4 characters ) 10.0
      gmtoffset (String, 4 characters ) 11.0
    1 (Array, 21 elements)
    2 (Array, 21 elements)
    3 (Array, 21 elements)
    4 (Array, 21 elements)
  standalone (String, 2 characters ) no
  total_results_count (String, 2 characters ) 33
  service (String, 6 characters ) search
  request (Array, 3 elements)
  query (Array, 6 elements)
  pager (Array, 5 elements)

You can access the results themselves in the 'results' array within the
result object. For example:

  $result->results[0]['name']

The code at tests/geonames.all.test exercises every one of the currently
supported services.

-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

The "Geonames Tools" support module provides some additional utilities and
helper functions for Geonames module. Currently this includes a URL that may
be used as as an #autocomplete_path in a Drupal Forms API form. When this
module is enabled, an example of the autocomplete is added to the Geonames
configuration screen described above.
