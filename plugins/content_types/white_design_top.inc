<?php
/**
 * @file
 * Panels render to display search results.
 */


$plugin = array(
  'title' => t('White design'),
  'description' => t("Search using simple search api"),
  'single' => TRUE,
  'render callback' => 'ting_simple_search_simple_search_result_content_type_render',
  'category' => t('Ting'),
  'render last' => FALSE,
  'required context' => new ctools_context_required(t('Keywords'), 'string'),
);

/**
 * Render the custom content type.
 */
function white_design_simple_search_result_content_type_render($subtype, $conf, $panel_args, $context) {


  // Build the content type block.
  $block = new stdClass();


 


    $block->title = t('Search results');
    $block->content = '';


  return $block;
}


