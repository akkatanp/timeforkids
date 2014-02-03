<?php
/**
 * @file
 * homework_helper.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function homework_helper_taxonomy_default_vocabularies() {
  return array(
    'tips' => array(
      'name' => 'Expert Writing Tips',
      'machine_name' => 'tips',
      'description' => 'Expert Writing Tips Categories',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
