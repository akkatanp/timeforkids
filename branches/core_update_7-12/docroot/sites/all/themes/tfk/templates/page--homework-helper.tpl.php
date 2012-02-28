<div id="page-wrapper"><div id="page">

  <div id="header">
    <div class="section clearfix">
      <?php if ($logo): ?>
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" /></a>
      <?php endif; ?>
      <?php if(isset($ad) && array_key_exists('banner_728x90', $ad)): ?>
            <?php print $ad['banner_728x90']; ?>
      <?php endif; ?>
    </div>
  </div>

  <div id="navigation" class="clearfix">
    <div class="section clearfix">
      <?php if (isset($site_name) || isset($site_slogan)): ?>
        <div id="name-and-slogan">
          <?php if ($site_name): ?>
            <?php if ($title): ?>
              <div id="site-name"><strong>
                <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
              </strong></div>
            <?php else: /* Use h1 when the content title is empty */ ?>
              <h1 id="site-name">
                <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
              </h1>
            <?php endif; ?>
          <?php endif; ?>

          <?php if (isset($site_slogan)): ?>
            <div id="site-slogan"><?php print $site_slogan; ?></div>
          <?php endif; ?>
        </div><!-- /#name-and-slogan -->
      <?php endif; ?>

      <div id="global-nav-container">
        <?php print render($page['header']['menu_menu-tfk-global-navigation']); ?>
      </div>

      <div id="teacher-nav-container">
        <div class="inner">
          <?php print render($page['header']['views_homepage_username-block']); ?>
          <?php print render($page['header']['block_3']); ?>
          <?php print render($page['header']['block_11']); ?>
          <?php print render($page['header']['menu_menu-tfk-teachers-menu']); ?>
          <?php print render($page['header']['block_16']); ?>
        </div>
      </div>

    </div>
  </div><!-- /.section, /#navigation -->

  <div id="main-wrapper">
    <div id="main" class="clearfix<?php if ($main_menu || $page['navigation']) { print ' with-navigation'; } ?>">
      <?php print render($page['sidebar_second']); ?>
      <h1 class="title" id="page-title"><?php print $section_title; ?></h1>

      <?php if(isset($page['sidebar_first'])): ?><?php print render($page['sidebar_first']); ?><?php endif; ?>

      <div id="content" class="column"><div class="section">
        <?php if(isset($page['highlighted'])): ?><?php print render($page['highlighted']); ?><?php endif; ?>
        <?php print $breadcrumb; ?>
        <a id="main-content"></a>
        <?php print $messages; ?>
        <?php if ($tabs = render($tabs)): ?>
          <div class="tabs"><?php print $tabs; ?></div>
        <?php endif; ?>
        <?php if (isset($page['help'])): ?>
          <?php print render($page['help']); ?>
        <?php endif; ?>
        <?php if (isset($action_links)): ?>
          <ul class="action-links"><?php print render($action_links); ?></ul>
        <?php endif; ?>

        <div class="homework-helper-content">
          <?php if (isset($tfk_header_tag)): ?>
            <div class="tfk-header-tag"><?php print $tfk_header_tag; ?></div>
          <?php endif; ?>
          <?php if (isset($grammar_practice_header)): ?>
            <div id="grammar_practice_header"><?php print $grammar_practice_header; ?></div>
          <?php endif; ?>
          <?php if (isset($flashcards_return)): ?>
            <div class="flashcards-return"><?php print $flashcards_return; ?></div>
          <?php endif; ?>
          <?php if (isset($node) && isset($title) && (arg(2) != 'edit') && $show_title): ?>
            <div class="homework-helper-title"><?php print $title; ?></div>
          <?php endif; ?>
          <?php print render($page['content']); ?>
        </div>

        <?php if(isset($feed_icons)): ?><?php print $feed_icons; ?><?php endif; ?>
      </div></div><!-- /.section, /#content -->

    </div>

    <?php print render($page['footer']); ?>
  </div><!-- /#main-wrapper -->

</div></div><!-- /#page, /#page-wrapper -->

<?php print render($page['bottom']); ?>
