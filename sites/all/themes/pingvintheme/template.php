<?php

/**
 * Implements hook_js_alter().
 */
function pingvintheme_js_alter(&$javascript) {
  // Swap out jQuery to use an updated version of the library.
  $javascript['misc/jquery.js']['data'] = 'https://ajax.googleapis.com/ajax/libs/jquery/1.7.2/jquery.min.js';
}

/**
 * Alter the theme registry information returned from hook_theme().
 */
function pingvintheme_theme_registry_alter(&$theme_registry) {
  foreach ($theme_registry['menu_tree']['preprocess functions'] as $key => $value) {
    if ($value == 'template_preprocess_menu_tree') {
      unset($theme_registry['menu_tree']['preprocess functions'][$key]);
    }
  }
}

/**
 * Implements hook_preprocess().
 */
function pingvintheme_preprocess(&$variables, $hook) {
  static $hooks;
}

/**
 * Implements hook_process().
 */
function pingvintheme_process(&$variables, $hook) {
  static $hooks;
}

function pingvintheme_preprocess_views_exposed_form(&$vars) {
  if (isset($vars['form']['sort_bef_combine'])) {
    $old_str = 'form-radios"';
    $new_str = 'form-radios btn-group" data-toggle="buttons-checkbox"';
    $vars['button'] = str_replace($old_str, $new_str, $vars['button']);

    $old_str = 'form-type-radio ';
    $new_str = 'form-type-radio btn btn-primary ';
    $vars['button'] = str_replace($old_str, $new_str, $vars['button']);
  }
}

// Theme Overrides
function pingvintheme_menu_tree($variables) {
  $attributes = array('class' => array('menu', 'nav'));
  if (isset($variables['attributes'])) {
    $attributes = array_merge_recursive($attributes, $variables['attributes']);
  }

  return '<ul ' . drupal_attributes($attributes). '>' . $variables['tree'] . '</ul>';
}

/**
 * Returns HTML for a breadcrumb trail.
 */
function pingvintheme_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];

  if (!empty($breadcrumb)) {
    // Add the title of the current page to the breadcrumb.
    $breadcrumb[] =  '<span>' . drupal_get_title() . '</span>';

    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';

    $output .= '<div class="breadcrumb">' . implode(' / ', $breadcrumb) . '</div>';
    return $output;
  }
}

/**
 * Formats an element used to toggle the toolbar drawer's visibility.
 */
function pingvintheme_toolbar_toggle($variables) {
  if (!module_exits('shortcut')) {
    return FALSE;
  }
  if ($variables['collapsed']) {
    $toggle_text = t('Show shortcuts');
  }
  else {
    $toggle_text = t('Hide shortcuts');
    $variables['attributes']['class'][] = 'toggle-active';
  }
  return l($toggle_text, 'toolbar/toggle', array('query' => drupal_get_destination(), 'attributes' => array('title' => $toggle_text) + $variables['attributes']));
} 

/**
 * Custom theme mod.
 */
function pingvintheme_custom_theme_mod($content_type, $entity_id = null) {


    // For taxonomy
    if ($content_type == 'taxonomy') {
        $entity_id = (isset($entity_id) ? $entity_id : arg(2));
        $term = taxonomy_term_load($entity_id);
        $parents = taxonomy_get_parents($entity_id);
        switch ($term->vocabulary_machine_name) {
            case 'countries':
                // Do we have a parent?
                if (is_array($parents)) {
                    foreach ($parents AS $parent) {
                        $l_attr = array('attributes' => array('class' => 'grey-link'));
                        return "Et fylke i " . l($parent->name, "taxonomy/term/" . $parent->tid, $l_attr);
                    }
                }

                return "Et land " . l("av  mange", "country");
                break;
            default:
                $vocab_name = taxonomy_vocabulary_get_names();
                return "En kategori i " . $vocab_name[($term->vocabulary_machine_name)]->name;
                break;
        }
        return $term->name;
    }

    // For nodes
    if ($content_type == 'node') {
        $entity_id = (isset($entity_id) ? $entity_id : arg(1));
        $node = node_load($entity_id);
        switch ($node->type) {
            case "log":
                $n_user = user_load($node->uid);
                $uname = $n_user->name;
                $l_attr = array('attributes' => array('class' => 'grey-link'));
                return l($uname, "user/" . $node->uid . "/logger", $l_attr) . t("'s dykkelogg");
                break;
            case "divetrip":
                $node = node_load(arg(1));
                $etids = $node->group_audience[LANGUAGE_NONE];

                foreach ($etids AS $item_id => $item) {
                    if ($item['state'] == 1) {
                        //$group = og_get_entity_groups('node', $user);
                        $group = og_get_group('group', $item['gid']);
                        if (!empty($group->label)) {
                            return ("Arrangert av " . l($group->label, "node/" . $group->etid));
                        } else {
                            return "Arrangert av privatperson";
                        }
                        //print var_export(og_get_group_ids('group', $item['gid']));
                    };
                }
                break;
            case "club":
                return t("Dykkerklubb i " . pingvin_country_get_links(node_load(arg(1))));
                break;
            case "divesite":
                return "Dykkested i " . pingvin_country_get_links(node_load(arg(1)));
                break;
            case "asset":
                $node = node_load(arg(1));
                $etids = $node->group_audience[LANGUAGE_NONE];

                foreach ($etids AS $item_id => $item) {
                    if ($item['state'] == 1) {
                        //$group = og_get_entity_groups('node', $user);
                        $group = og_get_group('group', $item['gid']);
                        if (!empty($group->label)) {
                            return ("Båt / ting som tilhører " . l($group->label, "node/" . $group->etid . "/assets"));
                        } else {
                            return "Løsøre som ingen eier. Slett meg takk.";
                        }
                    };
                }
                break;
            case "help":
                return "Hjelp til selvhjelp";
                break;
            case "request":
                return l('En teknisk forespørsel eller feilmelding', 'developer/requests');
                break;
            case "gallery":
                $gallery_conn = field_get_items('node', $node, 'field_gallery_trip');
                if (is_numeric((int) $gallery_conn[0]['nid'])) {
                    $gallery_node = node_load($gallery_conn[0][nid]);
                    $gallery_text = " fra turen " . l($gallery_node->title, "node/" . $gallery_node->nid);
                }

                return "Et bildegalleri$gallery_text, tatt av " . l($node->name, 'user/' . $node->uid);
                break;
        }
    }
    // For users
    if ($content_type == 'user' && is_numeric(arg(1))) {
        $user = user_load(arg(1));
        $etids = $user->group_audience[LANGUAGE_NONE];
        if (is_array($etids)) {
            foreach ($etids AS $item_id => $item) {
                if ($item['state'] == 1) {
                    //$group = og_get_entity_groups('node', $user);
                    $group = og_get_group('group', $item['gid']);
                    if (!empty($group->label)) {
                        return ("Medlem av " . l($group->label, "node/" . $group->etid));
                    }
                };
            }
        } else {
            return "Ikke medlem av noen klubb, ergo anonym.";
        }
    }
}

function pingvin_country_get_links($nid) {
    $node = node_load(arg(1));
    $field = field_get_items('node', $node, 'field_map_name_browser');
    foreach ($field AS $inst) {
        $tid = $inst['tid'];
        $term = taxonomy_term_load($tid);
        $text = l($term->name, 'taxonomy/term/' . $term->tid) . ", ";
        $terms = taxonomy_get_parents($tid);
        foreach ($terms AS $term) {
            $text .= l($term->name, 'taxonomy/term/' . $term->tid);
        }
    }
    return $text;
}