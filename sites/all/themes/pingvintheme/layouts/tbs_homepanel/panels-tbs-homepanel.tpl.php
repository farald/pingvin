<?php
/**
 * @file
 * Template for a 2 column X2 panel layout.
 *
 * This template provides a two column stacked panel display layout.
 */
?>
<div class="panel-tbs-homepanel container panel-display" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-panel row">
    <?php if ($content['top_left']): ?>
      <div class="span8"><?php print $content['top_left']; ?></div>
    <?php endif ?>

    <?php if ($content['top_right']): ?>
      <div class="span4"><?php print $content['top_right']; ?></div>
    <?php endif ?>
  </div>

  <div class="panel-panel row">
    <?php if ($content['top_left']): ?>
      <div class="span6"><?php print $content['bottom_left']; ?></div>
    <?php endif ?>

    <?php if ($content['top_right']): ?>
      <div class="span6"><?php print $content['bottom_right']; ?></div>
    <?php endif ?>
  </div>
</div>
