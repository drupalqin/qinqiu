<?php
/**
 * @file
 * alu_features_sam_schedules_management.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function alu_features_sam_schedules_management_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sam_course_schedules_management_page';
  $view->description = 'Course Schedules Management Page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'SAM Course Schedules Management Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'SAM Course Schedules';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    61 => '61',
    66 => '66',
    71 => '71',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Apply Filters';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'name' => 'name',
    'name_1' => 'name_1',
    'name_2' => 'name_2',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_onc_course_target_id']['id'] = 'field_onc_course_target_id';
  $handler->display->display_options['relationships']['field_onc_course_target_id']['table'] = 'field_data_field_onc_course';
  $handler->display->display_options['relationships']['field_onc_course_target_id']['field'] = 'field_onc_course_target_id';
  $handler->display->display_options['relationships']['field_onc_course_target_id']['required'] = TRUE;
  /* Relationship: Content: Country/City (field_country_city) */
  $handler->display->display_options['relationships']['field_country_city_tid']['id'] = 'field_country_city_tid';
  $handler->display->display_options['relationships']['field_country_city_tid']['table'] = 'field_data_field_country_city';
  $handler->display->display_options['relationships']['field_country_city_tid']['field'] = 'field_country_city_tid';
  /* Relationship: Content: Delivery Method (field_delivery_method) */
  $handler->display->display_options['relationships']['field_delivery_method_tid']['id'] = 'field_delivery_method_tid';
  $handler->display->display_options['relationships']['field_delivery_method_tid']['table'] = 'field_data_field_delivery_method';
  $handler->display->display_options['relationships']['field_delivery_method_tid']['field'] = 'field_delivery_method_tid';
  /* Relationship: Content: Provider (field_provider) */
  $handler->display->display_options['relationships']['field_provider_tid']['id'] = 'field_provider_tid';
  $handler->display->display_options['relationships']['field_provider_tid']['table'] = 'field_data_field_provider';
  $handler->display->display_options['relationships']['field_provider_tid']['field'] = 'field_provider_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Course Name';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_country_city_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Location';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'field_delivery_method_tid';
  $handler->display->display_options['fields']['name_1']['label'] = 'DELIVERY';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'field_provider_tid';
  $handler->display->display_options['fields']['name_2']['label'] = 'Provider';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/[nid]/edit?destination=node/[nid]/workflow';
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_country_city_tid';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name_1']['id'] = 'name_1';
  $handler->display->display_options['sorts']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name_1']['field'] = 'name';
  $handler->display->display_options['sorts']['name_1']['relationship'] = 'field_delivery_method_tid';
  /* Filter criterion: Content: Course/Workshop Name (field_onc_course) */
  $handler->display->display_options['filters']['field_onc_course_target_id']['id'] = 'field_onc_course_target_id';
  $handler->display->display_options['filters']['field_onc_course_target_id']['table'] = 'field_data_field_onc_course';
  $handler->display->display_options['filters']['field_onc_course_target_id']['field'] = 'field_onc_course_target_id';
  $handler->display->display_options['filters']['field_onc_course_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_onc_course_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_onc_course_target_id']['expose']['operator_id'] = 'field_onc_course_target_id_op';
  $handler->display->display_options['filters']['field_onc_course_target_id']['expose']['label'] = 'Filter by course';
  $handler->display->display_options['filters']['field_onc_course_target_id']['expose']['operator'] = 'field_onc_course_target_id_op';
  $handler->display->display_options['filters']['field_onc_course_target_id']['expose']['identifier'] = 'exposed_course';
  $handler->display->display_options['filters']['field_onc_course_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    26 => 0,
    61 => 0,
    31 => 0,
    36 => 0,
    66 => 0,
    41 => 0,
    71 => 0,
    46 => 0,
    51 => 0,
    56 => 0,
    81 => 0,
    76 => 0,
    86 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'onc_courses_workshops_schedule' => 'onc_courses_workshops_schedule',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Country/City (field_country_city) */
  $handler->display->display_options['filters']['field_country_city_tid']['id'] = 'field_country_city_tid';
  $handler->display->display_options['filters']['field_country_city_tid']['table'] = 'field_data_field_country_city';
  $handler->display->display_options['filters']['field_country_city_tid']['field'] = 'field_country_city_tid';
  $handler->display->display_options['filters']['field_country_city_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_country_city_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_country_city_tid']['expose']['operator_id'] = 'field_country_city_tid_op';
  $handler->display->display_options['filters']['field_country_city_tid']['expose']['label'] = 'Global Location';
  $handler->display->display_options['filters']['field_country_city_tid']['expose']['operator'] = 'field_country_city_tid_op';
  $handler->display->display_options['filters']['field_country_city_tid']['expose']['identifier'] = 'exposed_location';
  $handler->display->display_options['filters']['field_country_city_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    26 => 0,
    61 => 0,
    31 => 0,
    36 => 0,
    66 => 0,
    41 => 0,
    71 => 0,
    46 => 0,
    51 => 0,
    56 => 0,
    81 => 0,
    76 => 0,
    86 => 0,
  );
  $handler->display->display_options['filters']['field_country_city_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_country_city_tid']['vocabulary'] = 'country_city';
  $handler->display->display_options['filters']['field_country_city_tid']['hierarchy'] = 1;

  /* Display: sam schedules management page */
  $handler = $view->new_display('page', 'sam schedules management page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'SRC Course Schedules';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Country/City (field_country_city) */
  $handler->display->display_options['relationships']['field_country_city_tid']['id'] = 'field_country_city_tid';
  $handler->display->display_options['relationships']['field_country_city_tid']['table'] = 'field_data_field_country_city';
  $handler->display->display_options['relationships']['field_country_city_tid']['field'] = 'field_country_city_tid';
  /* Relationship: Content: Delivery Method (field_delivery_method) */
  $handler->display->display_options['relationships']['field_delivery_method_tid']['id'] = 'field_delivery_method_tid';
  $handler->display->display_options['relationships']['field_delivery_method_tid']['table'] = 'field_data_field_delivery_method';
  $handler->display->display_options['relationships']['field_delivery_method_tid']['field'] = 'field_delivery_method_tid';
  /* Relationship: Content: Provider (field_provider) */
  $handler->display->display_options['relationships']['field_provider_tid']['id'] = 'field_provider_tid';
  $handler->display->display_options['relationships']['field_provider_tid']['table'] = 'field_data_field_provider';
  $handler->display->display_options['relationships']['field_provider_tid']['field'] = 'field_provider_tid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_sam_course_target_id']['id'] = 'field_sam_course_target_id';
  $handler->display->display_options['relationships']['field_sam_course_target_id']['table'] = 'field_data_field_sam_course';
  $handler->display->display_options['relationships']['field_sam_course_target_id']['field'] = 'field_sam_course_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_sam_course_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Course Name';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_country_city_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Location';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'field_delivery_method_tid';
  $handler->display->display_options['fields']['name_1']['label'] = 'DELIVERY';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'field_provider_tid';
  $handler->display->display_options['fields']['name_2']['label'] = 'Provider';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/[nid]/edit?destination=node/[nid]/workflow';
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Course/Workshop Name (field_onc_course) */
  $handler->display->display_options['filters']['field_onc_course_target_id']['id'] = 'field_onc_course_target_id';
  $handler->display->display_options['filters']['field_onc_course_target_id']['table'] = 'field_data_field_onc_course';
  $handler->display->display_options['filters']['field_onc_course_target_id']['field'] = 'field_onc_course_target_id';
  $handler->display->display_options['filters']['field_onc_course_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_onc_course_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_onc_course_target_id']['expose']['operator_id'] = 'field_onc_course_target_id_op';
  $handler->display->display_options['filters']['field_onc_course_target_id']['expose']['label'] = 'Filter by course';
  $handler->display->display_options['filters']['field_onc_course_target_id']['expose']['operator'] = 'field_onc_course_target_id_op';
  $handler->display->display_options['filters']['field_onc_course_target_id']['expose']['identifier'] = 'exposed_course';
  $handler->display->display_options['filters']['field_onc_course_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    26 => 0,
    61 => 0,
    31 => 0,
    36 => 0,
    66 => 0,
    41 => 0,
    71 => 0,
    46 => 0,
    51 => 0,
    56 => 0,
    81 => 0,
    76 => 0,
    86 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sam_courses_schedule' => 'sam_courses_schedule',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Country/City (field_country_city) */
  $handler->display->display_options['filters']['field_country_city_tid']['id'] = 'field_country_city_tid';
  $handler->display->display_options['filters']['field_country_city_tid']['table'] = 'field_data_field_country_city';
  $handler->display->display_options['filters']['field_country_city_tid']['field'] = 'field_country_city_tid';
  $handler->display->display_options['filters']['field_country_city_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_country_city_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_country_city_tid']['expose']['operator_id'] = 'field_country_city_tid_op';
  $handler->display->display_options['filters']['field_country_city_tid']['expose']['label'] = 'Global Location';
  $handler->display->display_options['filters']['field_country_city_tid']['expose']['operator'] = 'field_country_city_tid_op';
  $handler->display->display_options['filters']['field_country_city_tid']['expose']['identifier'] = 'exposed_location';
  $handler->display->display_options['filters']['field_country_city_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    26 => 0,
    61 => 0,
    31 => 0,
    36 => 0,
    66 => 0,
    41 => 0,
    71 => 0,
    46 => 0,
    51 => 0,
    56 => 0,
    81 => 0,
    76 => 0,
    86 => 0,
  );
  $handler->display->display_options['filters']['field_country_city_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_country_city_tid']['vocabulary'] = 'country_city';
  $handler->display->display_options['filters']['field_country_city_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'admin/sam/course-schedules';
  $handler->display->display_options['menu']['title'] = 'SRC Schedules';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'country-sites';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'SRC';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'menu-schedules-management-menu';
  $export['sam_course_schedules_management_page'] = $view;

  return $export;
}
