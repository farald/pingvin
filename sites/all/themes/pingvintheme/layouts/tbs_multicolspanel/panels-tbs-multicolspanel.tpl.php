<?php
/**
 * @file
 * Template for a multi column panel layout.
 *
 * This template provides a multi column panel display layout.
 */
?>
<div class="panel-tbs-multicolspanel panel-display" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['one']): ?>
    <div class="span2 col-one"><?php print $content['one']; ?></div>
  <?php endif ?>

  <?php if ($content['two']): ?>
    <div class="span2 col-two"><?php print $content['two']; ?></div>
  <?php endif ?>

  <?php if ($content['three']): ?>
    <div class="span2 col-three"><?php print $content['three']; ?></div>
  <?php endif ?>

  <?php if ($content['four']): ?>
    <div class="span2 col-four"><?php print $content['four']; ?></div>
  <?php endif ?>

  <?php if ($content['five']): ?>
    <div class="span2 col-five"><?php print $content['five']; ?></div>
  <?php endif ?>

  <?php if ($content['six']): ?>
    <div class="span2 col-six"><?php print $content['six']; ?></div>
  <?php endif ?>
</div>
