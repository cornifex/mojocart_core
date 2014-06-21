<?php
/**
 * @file
 * mojocart_core.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function mojocart_core_defaultconfig_features() {
  return array(
    'mojocart_core' => array(
      'user_default_permissions' => 'user_default_permissions',
      'user_default_roles' => 'user_default_roles',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function mojocart_core_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Store Manager' => 'Store Manager',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'Store Manager' => 'Store Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access commerce reports'.
  $permissions['access commerce reports'] = array(
    'name' => 'access commerce reports',
    'roles' => array(
      'Store Manager' => 'Store Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_reports',
  );

  // Exported permission: 'access navbar'.
  $permissions['access navbar'] = array(
    'name' => 'access navbar',
    'roles' => array(
      'Store Manager' => 'Store Manager',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'navbar',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'Store Manager' => 'Store Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer checkout'.
  $permissions['administer checkout'] = array(
    'name' => 'administer checkout',
    'roles' => array(
      'Store Manager' => 'Store Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_checkout',
  );

  // Exported permission: 'administer commerce discounts'.
  $permissions['administer commerce discounts'] = array(
    'name' => 'administer commerce discounts',
    'roles' => array(
      'Store Manager' => 'Store Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_discount',
  );

  // Exported permission: 'administer commerce_coupon entities'.
  $permissions['administer commerce_coupon entities'] = array(
    'name' => 'administer commerce_coupon entities',
    'roles' => array(
      'Store Manager' => 'Store Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'administer commerce_customer_profile entities'.
  $permissions['administer commerce_customer_profile entities'] = array(
    'name' => 'administer commerce_customer_profile entities',
    'roles' => array(
      'Store Manager' => 'Store Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'administer commerce_order entities'.
  $permissions['administer commerce_order entities'] = array(
    'name' => 'administer commerce_order entities',
    'roles' => array(
      'Store Manager' => 'Store Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'administer commerce_product entities'.
  $permissions['administer commerce_product entities'] = array(
    'name' => 'administer commerce_product entities',
    'roles' => array(
      'Store Manager' => 'Store Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'administrator' => 'administrator',
      'Store Manager' => 'Store Manager',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer flat rate services'.
  $permissions['administer flat rate services'] = array(
    'name' => 'administer flat rate services',
    'roles' => array(
      'Store Manager' => 'Store Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_flat_rate',
  );

  // Exported permission: 'administer line items'.
  $permissions['administer line items'] = array(
    'name' => 'administer line items',
    'roles' => array(
      'Store Manager' => 'Store Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_line_item',
  );

  // Exported permission: 'administer product types'.
  $permissions['administer product types'] = array(
    'name' => 'administer product types',
    'roles' => array(
      'Store Manager' => 'Store Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'administer shipping'.
  $permissions['administer shipping'] = array(
    'name' => 'administer shipping',
    'roles' => array(
      'Store Manager' => 'Store Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_shipping',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Store Manager' => 'Store Manager',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Store Manager' => 'Store Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'configure order settings'.
  $permissions['configure order settings'] = array(
    'name' => 'configure order settings',
    'roles' => array(
      'Store Manager' => 'Store Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'create product_display content'.
  $permissions['create product_display content'] = array(
    'name' => 'create product_display content',
    'roles' => array(
      'Store Manager' => 'Store Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any product_display content'.
  $permissions['delete any product_display content'] = array(
    'name' => 'delete any product_display content',
    'roles' => array(
      'Store Manager' => 'Store Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own product_display content'.
  $permissions['delete own product_display content'] = array(
    'name' => 'delete own product_display content',
    'roles' => array(
      'Store Manager' => 'Store Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any product_display content'.
  $permissions['edit any product_display content'] = array(
    'name' => 'edit any product_display content',
    'roles' => array(
      'Store Manager' => 'Store Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own product_display content'.
  $permissions['edit own product_display content'] = array(
    'name' => 'edit own product_display content',
    'roles' => array(
      'Store Manager' => 'Store Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'save draft'.
  $permissions['save draft'] = array(
    'name' => 'save draft',
    'roles' => array(
      'Store Manager' => 'Store Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'save_draft',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'Store Manager' => 'Store Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'Store Manager' => 'Store Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use text format panopoly_html_text'.
  $permissions['use text format panopoly_html_text'] = array(
    'name' => 'use text format panopoly_html_text',
    'roles' => array(
      'Store Manager' => 'Store Manager',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format panopoly_wysiwyg_text'.
  $permissions['use text format panopoly_wysiwyg_text'] = array(
    'name' => 'use text format panopoly_wysiwyg_text',
    'roles' => array(
      'Store Manager' => 'Store Manager',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Store Manager' => 'Store Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}

/**
 * Implements hook_defaultconfig_user_default_roles().
 */
function mojocart_core_defaultconfig_user_default_roles() {
  $roles = array();

  // Exported role: Store Manager.
  $roles['Store Manager'] = array(
    'name' => 'Store Manager',
    'weight' => 4,
  );

  return $roles;
}
