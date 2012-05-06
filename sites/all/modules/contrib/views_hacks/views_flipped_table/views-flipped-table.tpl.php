<?php
/**
 * @file views-flipped-table.tpl.php
 * Template to display a view as a table with rows and columns flipped.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $header: An array of header labels keyed by field id.
 * - $fields: An array of CSS IDs to use for each field id.
 * - $classes: A class or classes to apply to the table, based on settings.
 * - $row_classes: An array of classes to apply to each row, indexed by row
 *   number. This matches the index in $rows.
 * - $rows: The original array of row items. Each row is an array of content.
 *   $rows are keyed by row number, fields within rows are keyed by field ID.
 * - $rows_flipped: An array of row items, with the original data flipped.
 *   $rows_flipped are keyed by field name, each item within a row is keyed
 *   by the original row number.
 * - $row_classes_flipped: An array of classes to apply to each flipped row,
 *   indexed by the field name.
 *   
 * @ingroup views_templates
 */
?>
<?php
  $first = isset($rows_flipped['title']);
?>
<table class="<?php print $classes; ?>">
  <?php if (!empty($title)) : ?>
    <caption><?php print $title; ?></caption>
  <?php endif; ?>

  <?php if ($first) : ?>
    <thead>
      <tr class="<?php print $row_classes_flipped['title']; ?>">
        <th>
        </th>
        <?php foreach ($rows_flipped['title'] as $title) : ?>
          <th>
          <?php print $title; ?>
          </th>
        <?php endforeach; ?>
      </tr>
    </thead>
  <?php  
    endif; //$first
  ?>
  <tbody>
    <?php foreach ($rows_flipped as $field_name => $row) : ?>
      <?php if ($field_name != 'title') : ?>
        <tr class="<?php print $row_classes_flipped[$field_name]; ?>">
          <th>
            <?php echo $header[$field_name]; ?>
          </th>
          <?php foreach ($row as $index => $item): ?>
            <td>
              <?php echo $item; ?>
            </td>
          <?php endforeach; ?>
        </tr>
      <?php endif; // field != title ?>
    <?php endforeach; ?>
  </tbody>
</table>

