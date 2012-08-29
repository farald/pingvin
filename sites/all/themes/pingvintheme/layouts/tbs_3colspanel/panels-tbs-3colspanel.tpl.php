<?php
/**
 * @file
 * Template for a 3 column panel layout.
 *
 * This template provides a 3 column panel display layout.
 */
?>
<div class="panel-tbs-3colspanel panel-display" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['left']): ?>
    <div class="span4"><?php print $content['left']; ?></div>
  <?php endif ?>

  <?php if ($content['center']): ?>
    <div class="span4"><?php print $content['center']; ?></div>
  <?php endif ?>

  <?php if ($content['right']): ?>
    <div class="span4"><?php print $content['right']; ?></div>
  <?php endif ?>
</div>
