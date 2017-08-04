<?php
//
// Implements hook_metatag_info().
//
function metatag_hreflang_metatag_info() {
  $info['groups']['metatag_hreflang'] = array(
    'label' => t('HREFLANG'),
    'description' => t("Custom hreflang metatags to all COMPANY websites. Fill the appropriate field only if required."),
  );

  $info['tags']['hreflang:greece'] = array(
    'label' => t('GREECE'),
    'description' => t('Destination url (Complete url : eg . http://greece.company.eu/recipes/cheesecake).'),
    'class' => 'DrupalLinkMetaTag',
    'group' => 'metatag_hreflang',
    'element' => array(
      '#theme' => 'metatag_hreflang',
    ),
  );
  $info['tags']['hreflang:italy'] = array(
    'label' => t('ITALY'),
    'description' => t('Destination url (Complete url : eg . http://italia.company.eu/recipes/cheesecake).'),
    'class' => 'DrupalLinkMetaTag',
    'group' => 'metatag_hreflang',
    'element' => array(
      '#theme' => 'metatag_hreflang',
    ),
  );
$info['tags']['hreflang:germany'] = array(
    'label' => t('GERMANY'),
    'description' => t('Destination url (Complete url : eg . http://deutschland.company.eu/recipes/cheesecake).'),
    'class' => 'DrupalLinkMetaTag',
    'group' => 'metatag_hreflang',
    'element' => array(
      '#theme' => 'metatag_hreflang',
    ),
  );
  $info['tags']['hreflang:uk'] = array(
    'label' => t('UK'),
    'description' => t('Destination url (Complete url : eg . http://uk.company.eu/recipes/cheesecake).'),
    'class' => 'DrupalLinkMetaTag',
    'group' => 'metatag_hreflang',
    'element' => array(
      '#theme' => 'metatag_hreflang',
    ),
  );
  $info['tags']['hreflang:usa'] = array(
    'label' => t('USA'),
    'description' => t('Destination url (Complete url : eg . http://usa.company.eu/recipes/cheesecake).'),
    'class' => 'DrupalLinkMetaTag',
    'group' => 'metatag_hreflang',
    'element' => array(
      '#theme' => 'metatag_hreflang',
    ),
  );
  $info['tags']['hreflang:mexico'] = array(
    'label' => t('MEXICO'),
    'description' => t('Destination url (Complete url : eg . http://mexico.company.eu/recipes/cheesecake).'),
    'class' => 'DrupalLinkMetaTag',
    'group' => 'metatag_hreflang',
    'element' => array(
      '#theme' => 'metatag_hreflang',
    ),
  );
  return $info;
}

//
// Implements hook_metatag_config_default_alter().
//
function metatag_hreflang_metatag_config_default_alter(array &$configs) {
  foreach ($configs as &$config) {
    switch ($config->instance) {
      case 'global':
        $config->config += array();
        break;

      case 'global:frontpage':
        $config->config += array();
        break;

      case 'node':
        $config->config += array(
          'my_custom_metatag' => array('value' => 'This is a default value.'),
        );
        break;

      case 'taxonomy_term':
        $config->config += array();
        break;

      case 'user':
        $config->config += array( );
        break;
    }
  }
}