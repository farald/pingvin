<?php
/**
 * About this file:
 * 
 * This file contains the stats generation function for logstats, not needed
 * exept for when updating the statistics.
 * 
 * Everything in this file boils down to the config array.
 * - Logs gets loaded as a tree
 * - The tree is flattened into a new array
 * - The settings array is merged with flattened data, keeping settings structure
 * - Modification functions, to get desired data, is run.
 * - Theming functions are run.
 * - The data gets saved to cache
 * 
 * TODO performance: The resulting array should be trimmed for unnecessary values.
 * TODO performance: there should be a finished, formatted image link array.
 * maybe as a seperate cache point?
 * TODO There may be duplicated code between this file here and logstats_reset.module.
 * TODO bug: There is an error somewhere here that makes the taxonomy charts look erroneous.
 */

/**
 * Take a node list loaded with node_load
 * Then sort it by the field names, instead of which node it belongs to.
 *
 * @param <type> $data
 * The array of node objects
 *
 * @return <type>
 * A flat list of values, sorted by field_id instead of node_id.
 */
function logstats_sort_rawdata($data) {
    $out = array(); // The formatted data.
    // If array..
    if (is_array($data)) {
        //Each node...
        foreach ($data AS $nid => $node) {
            //Each field...

            foreach ($node AS $field_id => $field_content) {

                // If field..
                if (strpos($field_id, "field_") !== FALSE) {
                    //Then add to array.
                    $fval = is_numeric($field_content['und']['0']['tid']) ?
                    $field_content['und']['0']['tid'] : $field_content['und']['0']['value'];

                    $out[values][$field_id][($node->nid)] = $fval;
                    $out[titles][($node->nid)] = $node->title;
                };
            }
        }
    }
    return $out;
}

/**
 *
 * Further processing of a flat list created with _sort_rawdata.
 * This virtually merges the data with the settings, creating one array
 * with the data sorted under each chart ID.
 *
 * @param <type> $data
 * The data, similar to the returns of _sort_rawdata()
 *
 * @return <type>
 * An array of settings and values ready for caching.
 */
function logstats_sorted_list_to_chart_data($data) {
    //We get the settings..
    $settings = logstats_field_settings();

    //We traverse them..
    foreach ($settings AS $chart_name => &$chart_data) {
        // Now, we add the ready made data..
        $chart_data['data'] = $data['values'][($chart_data['#field'])];
        $chart_data['node_titles'] = $data['titles'];
        if (is_array($chart_data['mods']['more_cols'])) {
            foreach ($chart_data['mods']['more_cols'] AS $col_id => &$col_settings) {
                $col_settings['data'] = $data['values'][($col_settings['#field'])];
            }
        }
    }

    //We traverse the outer and run eventual function calls..
    foreach ($settings AS $chart_id => &$chart_data) {
        //..and determine what function to get the rawdata from.
        if (is_callable('logstats_data_' . $chart_data['#type'])) {
            // Get the chart data.
            call_user_func('logstats_data_' . $chart_data['#type'], &$chart_data);
        }
    }

    // Create a list to print "behind" the charts
    foreach ($settings AS $chart_id => &$chart_data) {
        // We want to find the unique items in data list:

        $unique = array_unique($chart_data['data']);
        foreach ($unique as $uniq_id => $uniq){
            $list_title = $uniq;
            $list = array();
            foreach($chart_data['data'] AS $nid => $nid_item){
                if ($uniq == $nid_item){
                    $list[] = l($chart_data['node_titles'][$nid],'node/' . $nid) . "&nbsp;&nbsp;";
                }
                $chart_data['formatted_list'] .= "";
            }
            $chart_data['formatted_list'] .= theme_item_list(array('items' => $list, 'type' => 'ul', 'title' => $list_title,'attributes' => array()));
            
        }
    }

    //..and return array of settings and values.
    return $settings;
}

/*
 * Function to call custom functions on single config element
 */

/**
 * Recurring code, used by _data_cake og _data_boxes to 
 * call functions defined in the settings array.
 *
 * @param array $chart_data
 */
function logstats_data_modify(&$chart_data) {
    if (is_array($chart_data['func'])) {
        foreach ($chart_data['func'] AS $function) {
            call_user_func($function, &$chart_data);
        }
    }
}

/**
 *
 * Adds cake chart arrays ready for theme().
 *
 * @param array $chart_data
 * Chart_data is a single settings item tree. See the configuration at
 * logstats_settings for further clue.
 */
function logstats_data_cake(&$chart_data) {
    // Try to find custom functions, if
    logstats_data_modify(&$chart_data);

    // We load basic chart array
    $chart = Array(
        '#chart_id' => $chart_data['#id'],
        '#title' => Array
            (
            '#title' => $chart_data['#title'],
            '#color' => '1b4297',
            '#size' => '15',
        ),
        '#type' => 'p3',
        '#size' => Array(
            '#width' => 300,
            '#height' => 100,
        ),
        '#data' => Array(
        ),
        '#labels' => Array(
        ),
        '#data_colors' => array(
            0 => '7895c1',
            1 => '226040',
        ),
    );
    // Then we add the ingredients.
    if (is_array($chart_data['data'])) {
        foreach ($chart_data['data'] AS $nid => $item) {
            $chart['#data'][($item)]++;
            if (!in_array($item, $chart['#labels'])) {
                $chart['#labels'][] = ($item == null) ? $chart_data['mods']['#unknown_title'] : $item;
            }
        }
    }
    // This is added directly to the $chart_data.
    $chart_data['finished'] = $chart;
}

/**
 * Adds boxes chart arrays ready for theme().
 *
 * @param array $chart_data
 * The main chartdata hiearchy
 */

function logstats_data_boxes(&$chart_data) {

    // FInd and execute custom functions from the settings array.
    logstats_data_modify(&$chart_data);

    $mods = $chart_data['mods'];

    $data = array(0 => $chart_data['data']);
    // We add additional rows, if any.
    if (is_array($mods[more_cols])) {
        foreach ($mods[more_cols] AS $more_cid => $more_content) {
            $data[] = $more_content['data'];
        }
    }

    // We create the defaults...
    $chart = array(
        '#chart_id' => $chart_data['#id'],
        '#title' => array(
            '#title' => '', //$chart_data['#title'],
            '#color' => '1b4297',
            '#size' => 2,
        ),
        '#type' => CHART_TYPE_BAR_V_GROUPED,
        '#size' => array(
            '#width' => ($chart_data['#width']) ? $chart_data['#width'] : 850,
            '#height' => ($chart_data['#height']) ? $chart_data['#height'] : 250,
        ),
        '#adjust_resolution' => true,
        '#bar_size' => array(
            '#size' => ($mods['col_width']) ? $mods['col_width'] : 5,
            '#spacing' => ($mods['col_space']) ? $mods['col_space'] : 2,
        ),
        '#grid_lines' => array(
            '#x_step' => 30,
            '#y_step' => 15,
            '#segment_length' => 1,
            '#blank_segment_length' => 3,
        ),
        '#data' => array(
        ),
        '#mixed_axis_labels' => array(
            'x' => array(
                1 => array(
                    0 => array(
                    //					'#label' => 1,
                    //					// Where x labels go
                    //					'#position' => NULL,
                    ),
                ),
                2 => array(
                    0 => array(
                        '#label' => ($settings['x_label']) ? $settings['x_label'] : '', 
                        //// Where x(2) label go
                        '#position' => NULL,
                    ),
                ),
            ),
            'y' => array(
                1 => array(
                    1 => array(
                        '#label' => ($settings['y_label']) ? $settings['y_label'] : 'D',
                        '#position' => 95,
                    ),
                ),
                0 => array(
                    0 => array(
                        '#start' => 0,
                        '#end' => 1,
                    ),
                ),
            ),
        ),
        '#legends' => array(
            0 => ($mods['#legend_title']) ? $mods['#legend_title'] : 'D',
        ),
        '#data_colors' => array(
            0 => '3760a0',
            1 => '3d9a72',
        ),
    );


    // Set range labels and data defaults
    //
    // If column is forced
    if (is_array($mods['forced_titles'])) {
        $v = 0;
        foreach ($mods['forced_titles'] AS $tid => $title) {
            //print $title;
            $chart['#mixed_axis_labels']['x']['1'][$v]['#label'] = $title;
            $chart['#data'][0][$title] = 0;
            $v++;
        }
    }

    // If data is numeric
    if (is_numeric($mods['box_label_range'])) {
        $x = ($mods['add_zero_value']) ? 0 : 1;
        $x = ($mods['box_label_range_start']) ? $mods['box_label_range_start'] : $x;
        while ($x <= $mods['box_label_range']) {
            // The labels
            if ($x % 2) {
                $chart['#mixed_axis_labels']['x']['1'][$x]['#label'] = "-";
            } else {
                $chart['#mixed_axis_labels']['x']['1'][$x]['#label'] = $x;
            }
            // The data
            $chart['#data'][0][$x] = 0;

            // Check if we want more data (settings)
            if (is_array($mods['more_cols'])) {
                foreach ($mods['more_cols'] AS $cid => $cdata) {
                    $chart['#data'][$cid + 1][$x] = 0;
                    $chart['#legends'][$cid + 1] = $cdata['#legend_title'];
                }
            }
            $x++;
        }
    }



    // For each data row
    foreach ($data AS $data_id => $data_ent) {
        // For each value
        foreach ($data_ent AS $nid => $data_item) {

            // If to be ignored..
            if ($mods['ignore_empty_values'] && $data_item === null) {
                //..ignoring..
                // If we have range and its in range
            } elseif (is_numeric($mods['box_label_range'])
                    && $data_item < $mods['box_label_range']) {
                $chart['#data'][$data_id][(round($data_item))]++;

                // If range was invalid (Value over max range)
            } elseif ($mods['box_label_range']) {
                $chart['#mixed_axis_labels']['x']['1'][1000]['#label'] = '+';
                $chart['#data'][0][1000]++;

                // Every
            } else {
                $chart['#data'][$data_id][$data_item]++;
            };
        }
    }

    // At last, set row boundaries.
    if ($chart['#data']) {
        $chart['#mixed_axis_labels']['y']['0']['0']['#end'] =
        (count($chart['#data'][0]) > 0) ? round(max($chart['#data'][0]), 0) : 1;
    }
    // If two cols, test max.
    if (count($chart['#data'][1]) > 0) {
        $chart['#mixed_axis_labels']['y']['0']['0']['#end'] = 
        ($chart['#mixed_axis_labels']['y']['0']['0']['#end'] < round(max($chart['#data'][1]))) ?
        round(max($chart['#data'][1]), 0) : $chart['#mixed_axis_labels']['y']['0']['0']['#end'];
    }

    // Load results..
    $chart_data['finished'] = $chart;

}




