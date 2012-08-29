<?php
/**
 * @file views-view--nodequeue-1.tpl.php
 * Main view template for Frontpage featured slider
 */
?>
<div id="nodequeue-1" class="<?php print $classes; ?>">
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <?php print $title; ?>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <?php if ($header): ?>
    <div class="view-header">
      <?php print $header; ?>
    </div>
  <?php endif; ?>

  <?php if ($rows): ?>
    <div class="view-content carousel-inner">
      <?php print $rows; ?>
    </div>

    <a class="left carousel-control" href="#nodequeue-1" data-slide="prev">&lsaquo;</a>
    <a class="right carousel-control" href="#nodequeue-1" data-slide="next">&rsaquo;</a>
  <?php elseif ($empty): ?>
    <div class="view-empty">
      <?php print $empty; ?>
    </div>
  <?php endif; ?>

  <?php if ($more): ?>
    <?php print $more; ?>
  <?php endif; ?>

  <?php if ($footer): ?>
    <div class="view-footer">
      <?php print $footer; ?>
    </div>
  <?php endif; ?>

  <?php if ($feed_icon): ?>
    <div class="feed-icon">
      <?php print $feed_icon; ?>
    </div>
  <?php endif; ?>

</div><?php /* class view */ ?>