<?php
/**
 * @file
 * features_misc.features.menu_links.inc
 */

/**
 * Implementation of hook_menu_default_menu_links().
 */
function features_misc_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-tfk-footer-primary:around-the-world
  $menu_links['menu-tfk-footer-primary:around-the-world'] = array(
    'menu_name' => 'menu-tfk-footer-primary',
    'link_path' => 'around-the-world',
    'router_path' => 'around-the-world',
    'link_title' => 'Around the World',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'atw',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
  );
  // Exported menu link: menu-tfk-footer-primary:extras
  $menu_links['menu-tfk-footer-primary:extras'] = array(
    'menu_name' => 'menu-tfk-footer-primary',
    'link_path' => 'extras',
    'router_path' => 'extras',
    'link_title' => 'TFK Extras',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'tfk-extras',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '25',
  );
  // Exported menu link: menu-tfk-footer-primary:http://localhost/homework-helper
  $menu_links['menu-tfk-footer-primary:http://localhost/homework-helper'] = array(
    'menu_name' => 'menu-tfk-footer-primary',
    'link_path' => 'http://localhost/homework-helper',
    'router_path' => '',
    'link_title' => 'Homework Helper',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'homework-helper',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '15',
  );
  // Exported menu link: menu-tfk-footer-primary:kid-reporter
  $menu_links['menu-tfk-footer-primary:kid-reporter'] = array(
    'menu_name' => 'menu-tfk-footer-primary',
    'link_path' => 'kid-reporter',
    'router_path' => 'kid-reporter',
    'link_title' => 'Kid Reporter',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'kid_reporter',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
  );
  // Exported menu link: menu-tfk-footer-primary:news
  $menu_links['menu-tfk-footer-primary:news'] = array(
    'menu_name' => 'menu-tfk-footer-primary',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-tfk-footer-primary:photos-video
  $menu_links['menu-tfk-footer-primary:photos-video'] = array(
    'menu_name' => 'menu-tfk-footer-primary',
    'link_path' => 'photos-video',
    'router_path' => 'photos-video',
    'link_title' => 'Photos & Video',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'photos-videos',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '20',
  );
  // Exported menu link: menu-tfk-footer-primary:store
  $menu_links['menu-tfk-footer-primary:store'] = array(
    'menu_name' => 'menu-tfk-footer-primary',
    'link_path' => 'store',
    'router_path' => 'store',
    'link_title' => 'Store',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '30',
  );
  // Exported menu link: menu-tfk-footer-secondary:info
  $menu_links['menu-tfk-footer-secondary:info'] = array(
    'menu_name' => 'menu-tfk-footer-secondary',
    'link_path' => 'info',
    'router_path' => 'info',
    'link_title' => 'About Us',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'about-us',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-tfk-footer-secondary:subscribe-renew
  $menu_links['menu-tfk-footer-secondary:subscribe-renew'] = array(
    'menu_name' => 'menu-tfk-footer-secondary',
    'link_path' => 'subscribe-renew',
    'router_path' => 'subscribe-renew',
    'link_title' => 'Subscribe & Renew',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'subscribe-renew',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
  );
  // Exported menu link: menu-tfk-global-navigation:around-the-world
  $menu_links['menu-tfk-global-navigation:around-the-world'] = array(
    'menu_name' => 'menu-tfk-global-navigation',
    'link_path' => 'around-the-world',
    'router_path' => 'around-the-world',
    'link_title' => 'Around the World',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'atw',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-tfk-global-navigation:extras
  $menu_links['menu-tfk-global-navigation:extras'] = array(
    'menu_name' => 'menu-tfk-global-navigation',
    'link_path' => 'extras',
    'router_path' => 'extras',
    'link_title' => 'TFK Extras',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'tfk-extras',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: menu-tfk-global-navigation:http://localhost/homework-helper
  $menu_links['menu-tfk-global-navigation:http://localhost/homework-helper'] = array(
    'menu_name' => 'menu-tfk-global-navigation',
    'link_path' => 'http://localhost/homework-helper',
    'router_path' => '',
    'link_title' => 'Homework Helper',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'homework-helper',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-tfk-global-navigation:kid-reporter
  $menu_links['menu-tfk-global-navigation:kid-reporter'] = array(
    'menu_name' => 'menu-tfk-global-navigation',
    'link_path' => 'kid-reporter',
    'router_path' => 'kid-reporter',
    'link_title' => 'Kid Reporter',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'kid-reporter',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-tfk-global-navigation:news
  $menu_links['menu-tfk-global-navigation:news'] = array(
    'menu_name' => 'menu-tfk-global-navigation',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'news',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-tfk-global-navigation:photos-video
  $menu_links['menu-tfk-global-navigation:photos-video'] = array(
    'menu_name' => 'menu-tfk-global-navigation',
    'link_path' => 'photos-video',
    'router_path' => 'photos-video',
    'link_title' => 'Photos & Video',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'photos-video',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-tfk-global-navigation:store
  $menu_links['menu-tfk-global-navigation:store'] = array(
    'menu_name' => 'menu-tfk-global-navigation',
    'link_path' => 'store',
    'router_path' => 'store',
    'link_title' => 'Store',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'store',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: menu-tfk-teachers-menu:digital-edition
  $menu_links['menu-tfk-teachers-menu:digital-edition'] = array(
    'menu_name' => 'menu-tfk-teachers-menu',
    'link_path' => 'digital-edition',
    'router_path' => 'digital-edition',
    'link_title' => 'Digital Edition',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'digital_edition',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '15',
  );
  // Exported menu link: menu-tfk-teachers-menu:magazine
  $menu_links['menu-tfk-teachers-menu:magazine'] = array(
    'menu_name' => 'menu-tfk-teachers-menu',
    'link_path' => 'magazine',
    'router_path' => 'magazine',
    'link_title' => 'TFK Magazine',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'tfk-magazine',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-tfk-teachers-menu:subscribe-renew
  $menu_links['menu-tfk-teachers-menu:subscribe-renew'] = array(
    'menu_name' => 'menu-tfk-teachers-menu',
    'link_path' => 'subscribe-renew',
    'router_path' => 'subscribe-renew',
    'link_title' => 'Subscribe & Renew',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'subscribe-renew',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '20',
  );
  // Exported menu link: menu-tfk-teachers-menu:teacher-board-members
  $menu_links['menu-tfk-teachers-menu:teacher-board-members'] = array(
    'menu_name' => 'menu-tfk-teachers-menu',
    'link_path' => 'teacher-board-members',
    'router_path' => 'teacher-board-members',
    'link_title' => 'Teacher Community',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'teacher-community',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
  );
  // Exported menu link: menu-tfk-teachers-menu:worksheets
  $menu_links['menu-tfk-teachers-menu:worksheets'] = array(
    'menu_name' => 'menu-tfk-teachers-menu',
    'link_path' => 'worksheets',
    'router_path' => 'worksheets',
    'link_title' => 'Worksheets',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'worksheets',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('Around the World');
  t('Digital Edition');
  t('Homework Helper');
  t('Kid Reporter');
  t('News');
  t('Photos & Video');
  t('Store');
  t('Subscribe & Renew');
  t('TFK Extras');
  t('TFK Magazine');
  t('Teacher Community');
  t('Worksheets');


  return $menu_links;
}
