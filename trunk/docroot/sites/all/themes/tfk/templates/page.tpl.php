<?php
/**
 * @file
 * Zen theme's implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/garland.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $secondary_menu_heading: The title of the menu used by the secondary links.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 * - $page['bottom']: Items to appear at the bottom of the page below the footer.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see zen_preprocess_page()
 * @see template_process()
 */
?>
<?php
if(drupal_is_front_page()) {
    unset($page['content']['system_main']['default_message']);
    }
?>


<div id="page-wrapper"><div id="page">

	<div id="header">
		<div class="section clearfix">
		<?php if ($logo): ?>
			<a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" /></a>
		<?php endif; ?>
                <?php if (array_key_exists('banner_728x90', $ad)) {echo $ad['banner_728x90'];} ?>
		</div>
	</div>
	
	<div id="navigation" class="clearfix">
	
<div class="section clearfix">
    <?php if ($site_name || $site_slogan): ?>
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

        <?php if ($site_slogan): ?>
          <div id="site-slogan"><?php print $site_slogan; ?></div>
        <?php endif; ?>
      </div><!-- /#name-and-slogan -->
    <?php endif; ?>

    
    <?php
    /***
    print theme('links__system_secondary_menu', array(
      'links' => $secondary_menu,
      'attributes' => array(
        'id' => 'secondary-menu',
        'class' => array('links', 'inline', 'clearfix'),
      ),
      'heading' => array(
        'text' => $secondary_menu_heading,
        'level' => 'h2',
        'class' => array('element-invisible'),
      ),
    ));
    ***/
    ?>
	
    <div id="global-nav-container">
		<?php print render($page['header']['menu_menu-tfk-global-navigation']); ?>
                <?php
                //$form = drupal_get_form('search_form');
                //$form['basic']['keys']['#title'] = 'lolopk';
                //print_r($form);
                  print render(drupal_get_form('search_form'));
                ?>
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

	</div></div><!-- /.section, /#header -->

  <div id="main-wrapper"><div id="main" class="clearfix<?php if ($main_menu || $page['navigation']) { print ' with-navigation'; } ?>">
	<?php print render($page['sidebar_second']); ?>
  
  <?php if(!$is_front):?>
    <h1 class="title" id="section-title">
    	<?php if(isset($section_title)):?>
    		<?php print $section_title; ?>
    	<?php endif; ?>
  	</h1>
  <?php endif;?>

	<?php if(array_key_exists('sidebar_top', $rendered)): ?>
		<?php print $rendered['sidebar_top']; ?>
	<?php endif; ?>
	
	<?php print render($page['sidebar_first']); ?>
  <?php if(array_key_exists('editor_menu', $page)): ?>
  	<?php print render($page['editor_menu']); ?>
  <?php endif; ?>
  <?php if(array_key_exists('before_content', $page)): ?>
  	<?php print render($page['before_content']); ?>
  <?php endif; ?>
  
	<div id="content" class="column"><div class="section">
		
      <?php if(isset($page_suggestion_box)): ?>
      	<?php print $page_suggestion_box; ?>
      <?php endif;?>
    
      <?php print render($page['highlighted']); ?>
      <?php print $breadcrumb; ?>
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if ($title): // Not printing the title in page.tpl because it is getting printed @ node.tpl. ?>
        <!-- <h1 class="title" id="page-title"><?php print $title; ?></h1>-->
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php if ($tabs = render($tabs)): ?>
        <div class="tabs"><?php print $tabs; ?></div>
      <?php endif; ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      
      <?php if(isset($top_suggestion_msg)): ?>
      	<div id='top-suggestion-box' class="suggestion-box">
      		<div class='msg'><?php print $top_suggestion_msg; ?></div>
      		<div class='link'><?php print $top_suggestion_link; ?></div>
      	</div>
      <?php endif; ?>
      
      <?php print render($page['content']); ?>

      <?php print $feed_icons; ?>
    </div></div><!-- /.section, /#content -->

  </div>

  <?php print render($page['footer']); ?>
  </div><!-- /#main, /#main-wrapper -->

</div></div><!-- /#page, /#page-wrapper -->

<?php print render($page['bottom']); ?>
