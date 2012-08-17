<?php
/**
 * @file
 * features_misc.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function features_misc_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-info-pages-menu:http://www.timeforkids.com/customerservice
  $menu_links['menu-info-pages-menu:http://www.timeforkids.com/customerservice'] = array(
    'menu_name' => 'menu-info-pages-menu',
    'link_path' => 'http://www.timeforkids.com/customerservice',
    'router_path' => '',
    'link_title' => 'Customer Service',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-info-pages-menu:http://www.timeinc.net/subs/privacy/tk/policy.html
  $menu_links['menu-info-pages-menu:http://www.timeinc.net/subs/privacy/tk/policy.html'] = array(
    'menu_name' => 'menu-info-pages-menu',
    'link_path' => 'http://www.timeinc.net/subs/privacy/tk/policy.html',
    'router_path' => '',
    'link_title' => 'Privacy Policy',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: menu-info-pages-menu:https://qa-subscription.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1005015.html
  $menu_links['menu-info-pages-menu:https://qa-subscription.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1005015.html'] = array(
    'menu_name' => 'menu-info-pages-menu',
    'link_path' => 'https://qa-subscription.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1005015.html',
    'router_path' => '',
    'link_title' => 'Subscribe & Renew',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-info-pages-menu:node/168
  $menu_links['menu-info-pages-menu:node/168'] = array(
    'menu_name' => 'menu-info-pages-menu',
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
  // Exported menu link: menu-info-pages-menu:node/171
  $menu_links['menu-info-pages-menu:node/171'] = array(
    'menu_name' => 'menu-info-pages-menu',
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
    'weight' => '-46',
  );
  // Exported menu link: menu-info-pages-menu:node/172
  $menu_links['menu-info-pages-menu:node/172'] = array(
    'menu_name' => 'menu-info-pages-menu',
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
    'weight' => '-45',
  );
  // Exported menu link: menu-info-pages-menu:node/41075
  $menu_links['menu-info-pages-menu:node/41075'] = array(
    'menu_name' => 'menu-info-pages-menu',
    'link_path' => 'node/41075',
    'router_path' => 'node/%',
    'link_title' => 'Subscription Benefits',
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
    'weight' => '-48',
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
    'weight' => '-44',
  );
  // Exported menu link: menu-tfk-footer-primary:https://qa-lucie.timeinc.com/qa-subscription.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1005025.html
  $menu_links['menu-tfk-footer-primary:https://qa-lucie.timeinc.com/qa-subscription.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1005025.html'] = array(
    'menu_name' => 'menu-tfk-footer-primary',
    'link_path' => 'https://qa-lucie.timeinc.com/qa-subscription.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1005025.html',
    'router_path' => '',
    'link_title' => 'Subscribe & Renew',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
  );
  // Exported menu link: menu-tfk-footer-primary:https://qa-subscription.timeforkids.com/qa-subscription.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1005025.html
  $menu_links['menu-tfk-footer-primary:https://qa-subscription.timeforkids.com/qa-subscription.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1005025.html'] = array(
    'menu_name' => 'menu-tfk-footer-primary',
    'link_path' => 'https://qa-subscription.timeforkids.com/qa-subscription.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1005025.html',
    'router_path' => '',
    'link_title' => 'Subscribe & Renew',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
  );
  // Exported menu link: menu-tfk-footer-primary:https://qa-subscription.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1005025.html
  $menu_links['menu-tfk-footer-primary:https://qa-subscription.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1005025.html'] = array(
    'menu_name' => 'menu-tfk-footer-primary',
    'link_path' => 'https://qa-subscription.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1005025.html',
    'router_path' => '',
    'link_title' => 'Subscribe & Renew',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
  );
  // Exported menu link: menu-tfk-footer-primary:https://secure.customersvc.com/wes/servlet/Show?WESPAGE=am/Services/faq/tkfaq.jsp&MSRSMAG=TK#Section_13
  $menu_links['menu-tfk-footer-primary:https://secure.customersvc.com/wes/servlet/Show?WESPAGE=am/Services/faq/tkfaq.jsp&MSRSMAG=TK#Section_13'] = array(
    'menu_name' => 'menu-tfk-footer-primary',
    'link_path' => 'https://secure.customersvc.com/wes/servlet/Show?WESPAGE=am/Services/faq/tkfaq.jsp&MSRSMAG=TK#Section_13',
    'router_path' => '',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
  );
  // Exported menu link: menu-tfk-footer-primary:https://subscription.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1005025.html
  $menu_links['menu-tfk-footer-primary:https://subscription.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1005025.html'] = array(
    'menu_name' => 'menu-tfk-footer-primary',
    'link_path' => 'https://subscription.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1005025.html',
    'router_path' => '',
    'link_title' => 'Subscribe & Renew',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
  );
  // Exported menu link: menu-tfk-footer-primary:kid-reporters
  $menu_links['menu-tfk-footer-primary:kid-reporters'] = array(
    'menu_name' => 'menu-tfk-footer-primary',
    'link_path' => 'kid-reporters',
    'router_path' => 'kid-reporters',
    'link_title' => 'Kid Reporters',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'kid-reporters',
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
  // Exported menu link: menu-tfk-footer-primary:mini-sites
  $menu_links['menu-tfk-footer-primary:mini-sites'] = array(
    'menu_name' => 'menu-tfk-footer-primary',
    'link_path' => 'mini-sites',
    'router_path' => 'mini-sites',
    'link_title' => 'Mini-sites',
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
    'weight' => '-50',
  );
  // Exported menu link: menu-tfk-footer-primary:node/41074
  $menu_links['menu-tfk-footer-primary:node/41074'] = array(
    'menu_name' => 'menu-tfk-footer-primary',
    'link_path' => 'node/41074',
    'router_path' => 'node/%',
    'link_title' => 'Store',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
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
    'weight' => '-47',
  );
  // Exported menu link: menu-tfk-footer-primary:photos-video
  $menu_links['menu-tfk-footer-primary:photos-video'] = array(
    'menu_name' => 'menu-tfk-footer-primary',
    'link_path' => 'photos-video',
    'router_path' => 'photos-video',
    'link_title' => 'Photos & Videos',
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
    'weight' => '-46',
  );
  // Exported menu link: menu-tfk-footer-secondary:http://www.timeforkids.com/customerservice
  $menu_links['menu-tfk-footer-secondary:http://www.timeforkids.com/customerservice'] = array(
    'menu_name' => 'menu-tfk-footer-secondary',
    'link_path' => 'http://www.timeforkids.com/customerservice',
    'router_path' => '',
    'link_title' => 'Customer Service',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-tfk-footer-secondary:http://www.timeinc.net/subs/privacy/tk/policy.html
  $menu_links['menu-tfk-footer-secondary:http://www.timeinc.net/subs/privacy/tk/policy.html'] = array(
    'menu_name' => 'menu-tfk-footer-secondary',
    'link_path' => 'http://www.timeinc.net/subs/privacy/tk/policy.html',
    'router_path' => '',
    'link_title' => 'Privacy Policy',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: menu-tfk-footer-secondary:https://qa-subscription.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1005015.html
  $menu_links['menu-tfk-footer-secondary:https://qa-subscription.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1005015.html'] = array(
    'menu_name' => 'menu-tfk-footer-secondary',
    'link_path' => 'https://qa-subscription.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1005015.html',
    'router_path' => '',
    'link_title' => 'Subscribe & Renew',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-tfk-footer-secondary:https://secure.customersvc.com/wes/servlet/Show?WESPAGE=am/Services/faq/tkfaq.jsp&MSRSMAG=TK#Section_13
  $menu_links['menu-tfk-footer-secondary:https://secure.customersvc.com/wes/servlet/Show?WESPAGE=am/Services/faq/tkfaq.jsp&MSRSMAG=TK#Section_13'] = array(
    'menu_name' => 'menu-tfk-footer-secondary',
    'link_path' => 'https://secure.customersvc.com/wes/servlet/Show?WESPAGE=am/Services/faq/tkfaq.jsp&MSRSMAG=TK#Section_13',
    'router_path' => '',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
  );
  // Exported menu link: menu-tfk-footer-secondary:https://subscription.timeinc.com/storefront/privacy/tfk/privacy_terms_service.html
  $menu_links['menu-tfk-footer-secondary:https://subscription.timeinc.com/storefront/privacy/tfk/privacy_terms_service.html'] = array(
    'menu_name' => 'menu-tfk-footer-secondary',
    'link_path' => 'https://subscription.timeinc.com/storefront/privacy/tfk/privacy_terms_service.html',
    'router_path' => '',
    'link_title' => 'Terms of Service',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
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
    'weight' => '-46',
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
    'weight' => '-45',
  );
  // Exported menu link: menu-tfk-footer-secondary:node/41075
  $menu_links['menu-tfk-footer-secondary:node/41075'] = array(
    'menu_name' => 'menu-tfk-footer-secondary',
    'link_path' => 'node/41075',
    'router_path' => 'node/%',
    'link_title' => 'Subscription Benefits',
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
  // Exported menu link: menu-tfk-footer-tertiary:http://www.timeinc.net/subs/privacy/tk/policy.html
  $menu_links['menu-tfk-footer-tertiary:http://www.timeinc.net/subs/privacy/tk/policy.html'] = array(
    'menu_name' => 'menu-tfk-footer-tertiary',
    'link_path' => 'http://www.timeinc.net/subs/privacy/tk/policy.html',
    'router_path' => '',
    'link_title' => 'Privacy Policy',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-tfk-footer-tertiary:https://subscription.timeinc.com/storefront/privacy/tfk/privacy_terms_service.html
  $menu_links['menu-tfk-footer-tertiary:https://subscription.timeinc.com/storefront/privacy/tfk/privacy_terms_service.html'] = array(
    'menu_name' => 'menu-tfk-footer-tertiary',
    'link_path' => 'https://subscription.timeinc.com/storefront/privacy/tfk/privacy_terms_service.html',
    'router_path' => '',
    'link_title' => 'Terms of Service',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-tfk-footer-tertiary:node/172
  $menu_links['menu-tfk-footer-tertiary:node/172'] = array(
    'menu_name' => 'menu-tfk-footer-tertiary',
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
    'weight' => '-50',
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
    'weight' => '-44',
  );
  // Exported menu link: menu-tfk-global-navigation:kid-reporters
  $menu_links['menu-tfk-global-navigation:kid-reporters'] = array(
    'menu_name' => 'menu-tfk-global-navigation',
    'link_path' => 'kid-reporters',
    'router_path' => 'kid-reporters',
    'link_title' => 'Kid Reporters',
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
  // Exported menu link: menu-tfk-global-navigation:mini-sites
  $menu_links['menu-tfk-global-navigation:mini-sites'] = array(
    'menu_name' => 'menu-tfk-global-navigation',
    'link_path' => 'mini-sites',
    'router_path' => 'mini-sites',
    'link_title' => 'Mini-Sites',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'mini-sites',
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
  // Exported menu link: menu-tfk-global-navigation:node/41074
  $menu_links['menu-tfk-global-navigation:node/41074'] = array(
    'menu_name' => 'menu-tfk-global-navigation',
    'link_path' => 'node/41074',
    'router_path' => 'node/%',
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
    'weight' => '-43',
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
    'link_title' => 'Photos & Videos',
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
  // Exported menu link: menu-tfk-teachers-menu:digital
  $menu_links['menu-tfk-teachers-menu:digital'] = array(
    'menu_name' => 'menu-tfk-teachers-menu',
    'link_path' => 'digital',
    'router_path' => 'digital',
    'link_title' => 'Digital Edition',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'digital_edition',
        ),
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '15',
  );
  // Exported menu link: menu-tfk-teachers-menu:https://qa-subscription.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1005015.html
  $menu_links['menu-tfk-teachers-menu:https://qa-subscription.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1005015.html'] = array(
    'menu_name' => 'menu-tfk-teachers-menu',
    'link_path' => 'https://qa-subscription.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1005015.html',
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
  // Exported menu link: menu-tfk-teachers-menu:https://subscription.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1005021.html
  $menu_links['menu-tfk-teachers-menu:https://subscription.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1005021.html'] = array(
    'menu_name' => 'menu-tfk-teachers-menu',
    'link_path' => 'https://subscription.timeforkids.com/storefront/subscribe-to-time-for-kids/link/1005021.html',
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
    'hidden' => '1',
    'external' => '1',
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
  t('FAQ');
  t('Homework Helper');
  t('Kid Reporters');
  t('Mini-Sites');
  t('Mini-sites');
  t('News');
  t('Photos & Videos');
  t('Printables');
  t('Privacy Policy');
  t('Store');
  t('Subscribe & Renew');
  t('Subscription Benefits');
  t('TFK Extras');
  t('TFK Magazine');
  t('Teacher Community');
  t('Terms of Service');


  return $menu_links;
}
