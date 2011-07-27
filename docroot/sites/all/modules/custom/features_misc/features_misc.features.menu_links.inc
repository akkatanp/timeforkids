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
  // Exported menu link: menu-tfk-footer-primary:node/98
  $menu_links['menu-tfk-footer-primary:node/98'] = array(
    'menu_name' => 'menu-tfk-footer-primary',
    'link_path' => 'node/98',
    'router_path' => 'node/%',
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
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '15',
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
  // Exported menu link: menu-tfk-footer-secondary:node/168
  $menu_links['menu-tfk-footer-secondary:node/168'] = array(
    'menu_name' => 'menu-tfk-footer-secondary',
    'link_path' => 'node/168',
    'router_path' => 'node/%',
    'link_title' => 'About Us',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-tfk-footer-secondary:node/169
  $menu_links['menu-tfk-footer-secondary:node/169'] = array(
    'menu_name' => 'menu-tfk-footer-secondary',
    'link_path' => 'node/169',
    'router_path' => 'node/%',
    'link_title' => 'Customer Service',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-tfk-footer-secondary:node/171
  $menu_links['menu-tfk-footer-secondary:node/171'] = array(
    'menu_name' => 'menu-tfk-footer-secondary',
    'link_path' => 'node/171',
    'router_path' => 'node/%',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-tfk-footer-secondary:node/172
  $menu_links['menu-tfk-footer-secondary:node/172'] = array(
    'menu_name' => 'menu-tfk-footer-secondary',
    'link_path' => 'node/172',
    'router_path' => 'node/%',
    'link_title' => 'Advertisement & Sponsorship',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-tfk-footer-secondary:node/173
  $menu_links['menu-tfk-footer-secondary:node/173'] = array(
    'menu_name' => 'menu-tfk-footer-secondary',
    'link_path' => 'node/173',
    'router_path' => 'node/%',
    'link_title' => 'Privacy Policy',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
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
  // Exported menu link: menu-tfk-global-navigation:node/98
  $menu_links['menu-tfk-global-navigation:node/98'] = array(
    'menu_name' => 'menu-tfk-global-navigation',
    'link_path' => 'node/98',
    'router_path' => 'node/%',
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
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
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
  // Exported menu link: menu-tfk-teachers-menu:teacher-community/topic-list
  $menu_links['menu-tfk-teachers-menu:teacher-community/topic-list'] = array(
    'menu_name' => 'menu-tfk-teachers-menu',
    'link_path' => 'teacher-community/topic-list',
    'router_path' => 'teacher-community/topic-list',
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
  // Exported menu link: menu-tfk-teachers-menu:tfk-magazine
  $menu_links['menu-tfk-teachers-menu:tfk-magazine'] = array(
    'menu_name' => 'menu-tfk-teachers-menu',
    'link_path' => 'tfk-magazine',
    'router_path' => 'tfk-magazine',
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
  // Exported menu link: menu-tfk-teachers-menu:worksheets
  $menu_links['menu-tfk-teachers-menu:worksheets'] = array(
    'menu_name' => 'menu-tfk-teachers-menu',
    'link_path' => 'worksheets',
    'router_path' => 'worksheets',
    'link_title' => 'Printables',
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
  t('Advertisement & Sponsorship');
  t('Around the World');
  t('Contact Us');
  t('Customer Service');
  t('Digital Edition');
  t('Homework Helper');
  t('News');
  t('Photos & Video');
  t('Printables');
  t('Privacy Policy');
  t('Store');
  t('Subscribe & Renew');
  t('TFK Extras');
  t('TFK Magazine');
  t('Teacher Community');


  return $menu_links;
}
