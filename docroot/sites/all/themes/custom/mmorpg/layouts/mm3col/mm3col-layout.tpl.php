<div<?php print $attributes; ?>>
  <header class="header" role="banner">
      <?php print render($page['header']); ?>
  </header>

  <?php if (!empty($page['highlighted'])): ?>
    <div class="l-highlighted-wrapper">
      <?php print render($page['highlighted']); ?>
    </div>
  <?php endif; ?>

  <div class="main">
  <div class="main-inner">
    <a id="main-content"></a>
    <?php print render($tabs); ?>
    <?php print $breadcrumb; ?>
    <?php print $messages; ?>
    <?php print render($page['help']); ?>
    <div class="leftsidebar"><?php print render($page['sidebar_first']); ?></div>
    <div class="center-content" role="main">
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h1><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
      <?php print $feed_icons; ?>
    </div>
    <div class="rightsidebar"><?php print render($page['sidebar_second']); ?></div>
  </div>
  </div>

  <footer class="l-footer-wrapper" role="contentinfo">
    <?php print render($page['footer']); ?>
  </footer>
</div>
