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

  // Exported menu link: menu-tfk-footer-primary:http://localhost:8082/atw
  $menu_links['menu-tfk-footer-primary:http://localhost:8082/atw'] = array(
    'menu_name' => 'menu-tfk-footer-primary',
    'link_path' => 'http://localhost:8082/atw',
    'router_path' => '',
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
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
  );
  // Exported menu link: menu-tfk-footer-primary:http://localhost:8082/hh
  $menu_links['menu-tfk-footer-primary:http://localhost:8082/hh'] = array(
    'menu_name' => 'menu-tfk-footer-primary',
    'link_path' => 'http://localhost:8082/hh',
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
  // Exported menu link: menu-tfk-footer-primary:http://localhost:8082/kid_reporter
  $menu_links['menu-tfk-footer-primary:http://localhost:8082/kid_reporter'] = array(
    'menu_name' => 'menu-tfk-footer-primary',
    'link_path' => 'http://localhost:8082/kid_reporter',
    'router_path' => '',
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
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
  );
  // Exported menu link: menu-tfk-footer-primary:http://localhost:8082/news
  $menu_links['menu-tfk-footer-primary:http://localhost:8082/news'] = array(
    'menu_name' => 'menu-tfk-footer-primary',
    'link_path' => 'http://localhost:8082/news',
    'router_path' => '',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-tfk-footer-primary:http://localhost:8082/photos-videos
  $menu_links['menu-tfk-footer-primary:http://localhost:8082/photos-videos'] = array(
    'menu_name' => 'menu-tfk-footer-primary',
    'link_path' => 'http://localhost:8082/photos-videos',
    'router_path' => '',
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
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '20',
  );
  // Exported menu link: menu-tfk-footer-primary:http://localhost:8082/store
  $menu_links['menu-tfk-footer-primary:http://localhost:8082/store'] = array(
    'menu_name' => 'menu-tfk-footer-primary',
    'link_path' => 'http://localhost:8082/store',
    'router_path' => '',
    'link_title' => 'Store',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '30',
  );
  // Exported menu link: menu-tfk-footer-primary:http://localhost:8082/tfk-extras
  $menu_links['menu-tfk-footer-primary:http://localhost:8082/tfk-extras'] = array(
    'menu_name' => 'menu-tfk-footer-primary',
    'link_path' => 'http://localhost:8082/tfk-extras',
    'router_path' => '',
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
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '25',
  );
  // Exported menu link: menu-tfk-footer-secondary:http://localhost:8082/about-us
  $menu_links['menu-tfk-footer-secondary:http://localhost:8082/about-us'] = array(
    'menu_name' => 'menu-tfk-footer-secondary',
    'link_path' => 'http://localhost:8082/about-us',
    'router_path' => '',
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
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-tfk-footer-secondary:http://localhost:8082/ad-sponspor
  $menu_links['menu-tfk-footer-secondary:http://localhost:8082/ad-sponspor'] = array(
    'menu_name' => 'menu-tfk-footer-secondary',
    'link_path' => 'http://localhost:8082/ad-sponspor',
    'router_path' => '',
    'link_title' => 'Advertisement & Sponsorship',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'ad-sponspor',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '20',
  );
  // Exported menu link: menu-tfk-footer-secondary:http://localhost:8082/contact
  $menu_links['menu-tfk-footer-secondary:http://localhost:8082/contact'] = array(
    'menu_name' => 'menu-tfk-footer-secondary',
    'link_path' => 'http://localhost:8082/contact',
    'router_path' => '',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'contact-us',
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
  // Exported menu link: menu-tfk-footer-secondary:http://localhost:8082/customer-service
  $menu_links['menu-tfk-footer-secondary:http://localhost:8082/customer-service'] = array(
    'menu_name' => 'menu-tfk-footer-secondary',
    'link_path' => 'http://localhost:8082/customer-service',
    'router_path' => '',
    'link_title' => 'Customer Service',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'customer-service',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
  );
  // Exported menu link: menu-tfk-footer-secondary:http://localhost:8082/privacy-policy
  $menu_links['menu-tfk-footer-secondary:http://localhost:8082/privacy-policy'] = array(
    'menu_name' => 'menu-tfk-footer-secondary',
    'link_path' => 'http://localhost:8082/privacy-policy',
    'router_path' => '',
    'link_title' => 'Privacy Policy',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'privacy-policy',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '25',
  );
  // Exported menu link: menu-tfk-footer-secondary:http://localhost:8082/subscribe-renew
  $menu_links['menu-tfk-footer-secondary:http://localhost:8082/subscribe-renew'] = array(
    'menu_name' => 'menu-tfk-footer-secondary',
    'link_path' => 'http://localhost:8082/subscribe-renew',
    'router_path' => '',
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
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
  );
  // Exported menu link: menu-tfk-global-navigation:http://localhost:8082/atw
  $menu_links['menu-tfk-global-navigation:http://localhost:8082/atw'] = array(
    'menu_name' => 'menu-tfk-global-navigation',
    'link_path' => 'http://localhost:8082/atw',
    'router_path' => '',
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
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
  );
  // Exported menu link: menu-tfk-global-navigation:http://localhost:8082/hh
  $menu_links['menu-tfk-global-navigation:http://localhost:8082/hh'] = array(
    'menu_name' => 'menu-tfk-global-navigation',
    'link_path' => 'http://localhost:8082/hh',
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
  // Exported menu link: menu-tfk-global-navigation:http://localhost:8082/kid_reporter
  $menu_links['menu-tfk-global-navigation:http://localhost:8082/kid_reporter'] = array(
    'menu_name' => 'menu-tfk-global-navigation',
    'link_path' => 'http://localhost:8082/kid_reporter',
    'router_path' => '',
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
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
  );
  // Exported menu link: menu-tfk-global-navigation:http://localhost:8082/news
  $menu_links['menu-tfk-global-navigation:http://localhost:8082/news'] = array(
    'menu_name' => 'menu-tfk-global-navigation',
    'link_path' => 'http://localhost:8082/news',
    'router_path' => '',
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
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-tfk-global-navigation:http://localhost:8082/photos-videos
  $menu_links['menu-tfk-global-navigation:http://localhost:8082/photos-videos'] = array(
    'menu_name' => 'menu-tfk-global-navigation',
    'link_path' => 'http://localhost:8082/photos-videos',
    'router_path' => '',
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
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '20',
  );
  // Exported menu link: menu-tfk-global-navigation:http://localhost:8082/store
  $menu_links['menu-tfk-global-navigation:http://localhost:8082/store'] = array(
    'menu_name' => 'menu-tfk-global-navigation',
    'link_path' => 'http://localhost:8082/store',
    'router_path' => '',
    'link_title' => 'Store',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '30',
  );
  // Exported menu link: menu-tfk-global-navigation:http://localhost:8082/tfk-extras
  $menu_links['menu-tfk-global-navigation:http://localhost:8082/tfk-extras'] = array(
    'menu_name' => 'menu-tfk-global-navigation',
    'link_path' => 'http://localhost:8082/tfk-extras',
    'router_path' => '',
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
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '25',
  );
  // Exported menu link: menu-tfk-teachers-menu:http://localhost:8082/digital_edition
  $menu_links['menu-tfk-teachers-menu:http://localhost:8082/digital_edition'] = array(
    'menu_name' => 'menu-tfk-teachers-menu',
    'link_path' => 'http://localhost:8082/digital_edition',
    'router_path' => '',
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
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '15',
  );
  // Exported menu link: menu-tfk-teachers-menu:http://localhost:8082/subscribe-renew
  $menu_links['menu-tfk-teachers-menu:http://localhost:8082/subscribe-renew'] = array(
    'menu_name' => 'menu-tfk-teachers-menu',
    'link_path' => 'http://localhost:8082/subscribe-renew',
    'router_path' => '',
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
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '20',
  );
  // Exported menu link: menu-tfk-teachers-menu:http://localhost:8082/teacher-community
  $menu_links['menu-tfk-teachers-menu:http://localhost:8082/teacher-community'] = array(
    'menu_name' => 'menu-tfk-teachers-menu',
    'link_path' => 'http://localhost:8082/teacher-community',
    'router_path' => '',
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
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
  );
  // Exported menu link: menu-tfk-teachers-menu:http://localhost:8082/tfk-magazine
  $menu_links['menu-tfk-teachers-menu:http://localhost:8082/tfk-magazine'] = array(
    'menu_name' => 'menu-tfk-teachers-menu',
    'link_path' => 'http://localhost:8082/tfk-magazine',
    'router_path' => '',
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
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-tfk-teachers-menu:http://localhost:8082/worksheets
  $menu_links['menu-tfk-teachers-menu:http://localhost:8082/worksheets'] = array(
    'menu_name' => 'menu-tfk-teachers-menu',
    'link_path' => 'http://localhost:8082/worksheets',
    'router_path' => '',
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
    'external' => '1',
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
  t('Kid Reporter');
  t('News');
  t('Photos & Video');
  t('Privacy Policy');
  t('Store');
  t('Subscribe & Renew');
  t('TFK Extras');
  t('TFK Magazine');
  t('Teacher Community');
  t('Worksheets');


  return $menu_links;
}
