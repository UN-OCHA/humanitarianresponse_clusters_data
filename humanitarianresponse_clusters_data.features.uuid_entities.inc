<?php
/**
 * @file
 * humanitarianresponse_clusters_data.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function humanitarianresponse_clusters_data_uuid_default_entities() {
  $entities = array();

  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/74199c79-70ed-f884-d555-8254d27bea01',
      'cause' => FALSE,
    ),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'CM',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Camp Coordination / Management',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Camp Coordination / Management',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Camp Coordination / Management',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Coordination / Gestion de Camp',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'clusters/camp-coordination-management',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '74199c79-70ed-f884-d555-8254d27bea01',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/3587f445-38c0-7c94-e54b-ce7cf1a80dab',
      'cause' => FALSE,
    ),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'ER',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Early Recovery',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Early Recovery',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Early Recovery',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Récupération rapide',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'clusters/early-recovery',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '3587f445-38c0-7c94-e54b-ce7cf1a80dab',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/f4f4d082-55b1-6d44-f1a3-180c06f9ebe4',
      'cause' => FALSE,
    ),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'E',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Education',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Education',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Education',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Education',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'clusters/education',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'f4f4d082-55b1-6d44-f1a3-180c06f9ebe4',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/b3fe12df-d846-e024-2586-72690c26c607',
      'cause' => FALSE,
    ),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'ES',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Emergency Shelter and NFI',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Emergency Shelter and NFI',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Emergency Shelter and NFI',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Abris d\'Urgence',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'clusters/emergency-shelter-and-nfi',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'b3fe12df-d846-e024-2586-72690c26c607',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/d1673192-586b-6a24-056d-1779c4857d25',
      'cause' => FALSE,
    ),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'ET',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Emergency Telecommunications',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Emergency Telecommunications',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Emergency Telecommunications',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Télécommunications d\'Urgence',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'clusters/emergency-telecommunications',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'd1673192-586b-6a24-056d-1779c4857d25',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/dcf0529f-f7d7-f0d4-d10c-0d110debe8c3',
      'cause' => FALSE,
    ),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'FS',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Food Security',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Food Security',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Food Security',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Sécurité Alimentaire',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'clusters/food-security',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'dcf0529f-f7d7-f0d4-d10c-0d110debe8c3',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/33da548d-8d27-22c4-6954-a3c2a233e7de',
      'cause' => FALSE,
    ),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'H',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Health',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Health',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Health',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Santé',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'clusters/health',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '33da548d-8d27-22c4-6954-a3c2a233e7de',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/56c227fe-47a4-3a44-195e-f3ae10fbc2eb',
      'cause' => FALSE,
    ),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'IM',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Information Management',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Information Management',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Information Management',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Gestion de l\'Information',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'clusters/information-management',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '56c227fe-47a4-3a44-195e-f3ae10fbc2eb',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/7563ee82-d03a-4f84-6d2e-5c083be5c0a4',
      'cause' => FALSE,
    ),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'L',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Logistics',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Logistics',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Logistics',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Logistique',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'clusters/logistics',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '7563ee82-d03a-4f84-6d2e-5c083be5c0a4',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/13ce935d-af1f-b464-2165-f485bdee0851',
      'cause' => FALSE,
    ),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'N',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Nutrition',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Nutrition',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Nutrition',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Nutrition',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'clusters/nutrition',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '13ce935d-af1f-b464-2165-f485bdee0851',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/2cbc351b-b3d1-6724-6d02-c1419d6594b1',
      'cause' => FALSE,
    ),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'P',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Protection',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Protection',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Protection',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Protection',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'clusters/protection',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '2cbc351b-b3d1-6724-6d02-c1419d6594b1',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );
  $entities['clusters'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/d5195e8c-e724-af64-35a4-413a412e04f7',
      'cause' => FALSE,
    ),
    'field_cluster_prefix' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'W',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Water Sanitation Hygiene',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Water Sanitation Hygiene',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Water Sanitation Hygiene',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Eau, Assainissement et Hygiène',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'clusters/water-sanitation-hygiene',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'd5195e8c-e724-af64-35a4-413a412e04f7',
    'vocabulary_machine_name' => 'clusters',
    'weight' => '0',
  );

  return $entities;
}
