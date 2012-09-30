<header id="navbar" role="banner" class="navbar navbar-fixed-top">
  <div class="navbar-inner">
    <div class="container">
      <!-- .btn-navbar is used as the toggle for collapsed navbar content -->
      <a class="btn btn-navbar" data-toggle="collapse" data-target=".nav-collapse">
      <span class="icon-bar"></span>
      <span class="icon-bar"></span>
      <span class="icon-bar"></span>
      </a>

      <div class="nav-collapse">
        <nav role="navigation">
          <?php if ($primary_nav): ?>
            <?php print $primary_nav; ?>
          <?php endif; ?>

          <?php if ($secondary_nav): ?>
            <?php print $secondary_nav; ?>
          <?php endif; ?>

          <?php if ($search): ?>
            <?php if ($search): print render($search); endif; ?>
          <?php endif; ?>
        </nav>
      </div>
    </div>
  </div>
</header>

<div class="container">

  <header role="banner" id="page-header">
    <?php if ($logo || $site_name || $social_links): ?>
      <hgroup id="site-name-logo">
        <?php if ($logo && !$site_name): ?>
          <h1>
            <a class="brand" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
              <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
            </a>
          </h1>
        <?php endif; ?>

        <?php if ($site_name): ?>
          <h1>
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" class="brand">
              <?php if ($logo): ?>
                <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
              <?php endif; ?>
              <?php print $site_name; ?>
            </a>
          </h1>
        <?php endif; ?>

        <?php if ($social_links): print $social_links; endif; ?>
      </hgroup>
    <?php endif; ?>

    <?php if ($site_slogan): ?>
      <p class="lead"><?php print $site_slogan; ?></p>
    <?php endif; ?>

    <?php print render($page['header']); ?>
  </header><!-- /#header -->

  <?php if ($breadcrumb): print $breadcrumb; endif; ?>

  <div class="row">

    <?php if ($page['sidebar_first']): ?>
      <aside class="span3" role="complementary">
        <?php print render($page['sidebar_first']); ?>
      </aside>  <!-- /#sidebar-first -->
    <?php endif; ?>

    <section class="<?php print _twitter_bootstrap_content_span($columns); ?>">
      <?php if ($page['highlighted']): ?>
        <div class="highlighted hero-unit"><?php print render($page['highlighted']); ?></div>
      <?php endif; ?>

      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
      <?php dpm($node);?>
        <h1 class="page-header"><?php print $title; ?>
          <?php if(!empty($node)): ?>
          <span class="test" style="font-size: 0.5em;padding-left: 20px; font-weight: normal;"><?php print pingvintheme_custom_theme_mod('node', $node->nid);?></span> 
          <?php endif;?>
        </h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php if ($tabs): ?>
        <?php print render($tabs); ?>
      <?php endif; ?>
      <?php if ($page['help']): ?>
        <div class="well"><?php print render($page['help']); ?></div>
      <?php endif; ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
    </section>

    <?php if ($page['sidebar_second']): ?>
      <aside class="span3" role="complementary">
        <?php print render($page['sidebar_second']); ?>
      </aside>  <!-- /#sidebar-second -->
    <?php endif; ?>

  </div>
  <footer class="footer row">
    <?php print render($page['footer']); ?>
  </footer>
</div>
